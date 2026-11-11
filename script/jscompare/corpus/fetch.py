# fetch.py: each package's registered version from its repository's release tag (GitHub codeload tarball;
# tags v<version>, <Name>-v<version>, <version>), keeping the .jl files of the package's subdir
import concurrent.futures as cf, io, os, tarfile, urllib.request, tomllib, re
rows = [l.rstrip('\n').split('\t') for l in open('top1000.tsv')]
reg = tomllib.load(open('General/Registry.toml', 'rb'))['packages']
os.makedirs('pkgs', exist_ok=True)
def get(r):
    rank, name, uuid, v, h, n = r
    dest = os.path.join('pkgs', name)
    if os.path.isdir(dest): return name, 'cached', 0
    meta = tomllib.load(open(os.path.join('General', reg[uuid]['path'], 'Package.toml'), 'rb'))
    repo, sub = meta['repo'], meta.get('subdir', '')
    m = re.match(r'https?://github\.com/([^/]+)/([^/]+?)(\.git)?/?$', repo) or re.match(r'git@github\.com:([^/]+)/([^/]+?)(\.git)?$', repo)
    if not m: return name, f'non-github {repo}', 0
    owner, rp = m.group(1), m.group(2)
    data = None
    for tag in (f'v{v}', f'{name}-v{v}', v):
        try:
            data = urllib.request.urlopen(f'https://codeload.github.com/{owner}/{rp}/tar.gz/refs/tags/{tag}', timeout=180).read()
            break
        except Exception as e:
            err = str(e)
    if data is None: return name, f'no tag ({err})', 0
    nfiles = 0; tmp = dest + '.tmp'
    with tarfile.open(fileobj=io.BytesIO(data), mode='r:*') as t:
        for mm in t.getmembers():
            parts = mm.name.split('/', 1)  # strip the archive's top directory
            if len(parts) < 2 or not mm.isfile() or not mm.name.endswith('.jl') or '..' in mm.name: continue
            rel = parts[1]
            if sub and not rel.startswith(sub.rstrip('/') + '/'): continue
            if sub: rel = rel[len(sub.rstrip('/')) + 1:]
            p = os.path.join(tmp, rel)
            os.makedirs(os.path.dirname(p), exist_ok=True)
            with open(p, 'wb') as f: f.write(t.extractfile(mm).read())
            nfiles += 1
    os.makedirs(tmp, exist_ok=True); os.rename(tmp, dest)
    return name, 'ok', nfiles
with cf.ThreadPoolExecutor(8) as ex:
    res = list(ex.map(get, rows))
bad = [r for r in res if r[1] not in ('ok', 'cached')]
print('ok', sum(r[1] == 'ok' for r in res), 'cached', sum(r[1] == 'cached' for r in res), 'failed', len(bad), 'files', sum(r[2] for r in res))
open('fetch-failed.txt', 'w').write(''.join(f'{a}\t{b}\n' for a, b, _ in bad))
for b in bad[:12]: print('  ', b)
