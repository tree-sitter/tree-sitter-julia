# fetch2.py: packages without a usable tag: bare-clone the repository and export the registered tree
# (git-tree-sha1 from the registry) with git archive
import concurrent.futures as cf, os, subprocess, tarfile, io, tomllib
reg = tomllib.load(open('General/Registry.toml', 'rb'))['packages']
rows = {l.split('\t')[1]: l.rstrip('\n').split('\t') for l in open('top1000.tsv')}
failed = [l.split('\t')[0] for l in open('fetch-failed.txt')]
os.makedirs('clones', exist_ok=True)
def get(name):
    rank, name, uuid, v, h, n = rows[name]
    dest = os.path.join('pkgs', name)
    if os.path.isdir(dest): return name, 'cached', 0
    meta = tomllib.load(open(os.path.join('General', reg[uuid]['path'], 'Package.toml'), 'rb'))
    repo = meta['repo']
    bare = os.path.join('clones', name + '.git')
    if not os.path.isdir(bare):
        r = subprocess.run(['git', 'clone', '-q', '--bare', repo, bare], capture_output=True, text=True, timeout=600,
                           env={**os.environ, 'GIT_TERMINAL_PROMPT': '0'})
        if r.returncode: return name, 'clone failed: ' + r.stderr.strip()[-100:], 0
    r = subprocess.run(['git', '-C', bare, 'archive', '--format=tar', h], capture_output=True, timeout=600)
    if r.returncode: return name, 'tree not found: ' + r.stderr.decode()[-100:], 0
    nfiles = 0; tmp = dest + '.tmp'
    with tarfile.open(fileobj=io.BytesIO(r.stdout)) as t:
        for m in t.getmembers():
            if m.isfile() and m.name.endswith('.jl') and '..' not in m.name:
                p = os.path.join(tmp, m.name)
                os.makedirs(os.path.dirname(p), exist_ok=True)
                with open(p, 'wb') as f: f.write(t.extractfile(m).read())
                nfiles += 1
    os.makedirs(tmp, exist_ok=True); os.rename(tmp, dest)
    return name, 'ok', nfiles
with cf.ThreadPoolExecutor(8) as ex:
    res = list(ex.map(get, failed))
bad = [r for r in res if r[1] not in ('ok', 'cached')]
print('ok', sum(r[1] == 'ok' for r in res), 'failed', len(bad), 'files', sum(r[2] for r in res))
open('fetch-failed2.txt', 'w').write(''.join(f'{a}\t{b}\n' for a, b, _ in bad))
for b in bad: print('  ', b)
