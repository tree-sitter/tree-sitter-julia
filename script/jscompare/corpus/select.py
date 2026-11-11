# select.py: the 1000 most-requested General packages (unique client addresses, successful requests, all
# client types), excluding JLL binary wrappers (generated code) -> top1000.tsv: rank name uuid version tree
import csv, gzip, re, tomllib, collections, os
reg = tomllib.load(open('General/Registry.toml', 'rb'))['packages']
addrs = collections.Counter()
for r in csv.DictReader(gzip.open('package_requests.csv.gz', 'rt')):
    if r['status'] == '200' and r['package_uuid'] in reg:
        addrs[r['package_uuid']] += int(r['request_addrs'] or 0)
def ver(v): return tuple(int(x) if x.isdigit() else x for x in re.split(r'[.+-]', v))
out = []
for uuid, n in addrs.most_common():
    p = reg[uuid]
    if p['name'].endswith('_jll'): continue
    vs = tomllib.load(open(os.path.join('General', p['path'], 'Versions.toml'), 'rb'))
    ok = [(v, d) for v, d in vs.items() if not d.get('yanked')]
    if not ok: continue
    v, d = max(ok, key=lambda x: ver(x[0]))
    out.append((p['name'], uuid, v, d['git-tree-sha1'], n))
    if len(out) == 1000: break
with open('top1000.tsv', 'w') as f:
    for i, (name, uuid, v, h, n) in enumerate(out, 1): f.write(f'{i}\t{name}\t{uuid}\t{v}\t{h}\t{n}\n')
print(len(out), 'packages; first', out[:5], 'last', out[-1])
