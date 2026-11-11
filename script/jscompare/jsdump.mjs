// node --stack-size=60000 jsdump.mjs WASM FILES OUT: JuliaSyntax (Julia 1.13's parser compiled to Wasm GC,
// juliasyntax.wasm: see README.md) on every file of FILES (one path per line).
// OUT, per file: u32 index, u8 hasErrors, u32 count, then count × {u16 kind, u8 leaf, u8 trivia, u32 start,
// u32 end}: every node of the green tree except whitespace/comment tokens, with its span trimmed to
// its first and last non-whitespace, non-comment token (byte offsets in the file's raw bytes).
// OUT.kinds: kind names, one per line, by kind code.
import fs from 'node:fs';

const [WASM, FILES, OUT] = process.argv.slice(2);
const e = new WebAssembly.Instance(new WebAssembly.Module(fs.readFileSync(WASM)), {}).exports;
const CL_INTERIOR = 1, CL_TRIVIA = 2;
const names = [];
function kindName(k) {
  if (names[k] === undefined) {
    const n = e.kind_name_len(k), b = new Uint8Array(n);
    for (let j = 0; j < n; j++) b[j] = e.kind_name_byte(k, j + 1);
    names[k] = new TextDecoder().decode(b);
  }
  return names[k];
}
const files = fs.readFileSync(FILES, 'utf8').split('\n').filter(Boolean);
const out = fs.openSync(OUT, 'w');
let buf = Buffer.alloc(1 << 24), nodesTotal = 0, errFiles = 0, bytes = 0;
const failures = [];
const t0 = performance.now();
for (let fi = 0; fi < files.length; fi++) {
  const src = fs.readFileSync(files[fi]);
  bytes += src.length;
  e.src_resize(src.length);
  for (let i = 0; i < src.length; i += 4) {
    const w = src[i] | ((src[i + 1] ?? 0) << 8) | ((src[i + 2] ?? 0) << 16) | ((src[i + 3] ?? 0) << 24);
    e.src_set4(i + 1, w | 0);
  }
  let n, failed = false;
  try { n = e.parse_src(1); } catch (err) { failed = true; failures.push(`${files[fi]}: ${err.message}`); }
  if (failed) { // recorded as hasErrors = 2, no nodes: excluded from the comparison
    buf.writeUInt32LE(fi, 0); buf.writeUInt8(2, 4); buf.writeUInt32LE(0, 5); fs.writeSync(out, buf, 0, 9); continue;
  }
  let hasErr = 0;
  for (let k = 1; k <= e.ndiag(); k++) if (e.diag_level(k) === 1) hasErr = 1;
  // postorder: stack of [index, realStart, realEnd]; interior nodes take their children's real extent
  const stack = [];
  const recs = [];
  let pos = 0;
  for (let k = 1; k <= n; k++) {
    const cls = e.out_class(k), span = e.out_span(k), kind = e.out_kind(k);
    const i = k - 1;
    let rs = -1, re = -1, leaf = 0;
    if (cls & CL_INTERIOR) {
      const first = i - e.out_nodespan(k);
      while (stack.length && stack[stack.length - 1][0] >= first) {
        const c = stack.pop();
        if (c[1] >= 0) { if (rs < 0 || c[1] < rs) rs = c[1]; if (c[2] > re) re = c[2]; }
      }
    } else {
      leaf = 1;
      const s = pos; pos += span;
      const nm = kindName(kind);
      if (span > 0 && nm !== 'Whitespace' && nm !== 'NewlineWs' && nm !== 'Comment') { rs = s; re = pos; }
    }
    stack.push([i, rs, re]);
    if (rs >= 0) recs.push(kind, leaf, cls & CL_TRIVIA ? 1 : 0, rs, re);
  }
  const cnt = recs.length / 5, need = 9 + cnt * 12;
  if (buf.length < need) buf = Buffer.alloc(need * 2);
  buf.writeUInt32LE(fi, 0); buf.writeUInt8(hasErr, 4); buf.writeUInt32LE(cnt, 5);
  let o = 9;
  for (let r = 0; r < recs.length; r += 5) {
    buf.writeUInt16LE(recs[r], o); buf.writeUInt8(recs[r + 1], o + 2); buf.writeUInt8(recs[r + 2], o + 3);
    buf.writeUInt32LE(recs[r + 3], o + 4); buf.writeUInt32LE(recs[r + 4], o + 8); o += 12;
  }
  fs.writeSync(out, buf, 0, o);
  nodesTotal += cnt; errFiles += hasErr;
  kindName(0);
}
fs.closeSync(out);
const maxKind = 1200;
const kn = [];
for (let k = 0; k < maxKind; k++) { try { kn.push(kindName(k)); } catch { kn.push(''); } }
fs.writeFileSync(OUT + '.kinds', kn.join('\n') + '\n');
const s = (performance.now() - t0) / 1000;
for (const f of failures) console.error('FAILED ' + f);
console.error(`${files.length} files, ${(bytes / 1e6).toFixed(1)} MB, ${nodesTotal} nodes, ${errFiles} with errors, ${s.toFixed(1)} s (${(s / (bytes / 1e6)).toFixed(3)} s/MB)`);
