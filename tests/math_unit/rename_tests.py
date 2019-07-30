import glob
import re
import shutil
import tempfile

root = "D:/projects/stan-monorepo/tests/math_unit"

from collections import defaultdict

collisions = defaultdict(list)

re1 = re.compile(r"^TEST(?:_F)?\((\w+),\s*([\s\w]+)*\).*")

source_files = glob.glob('**/*.cpp', recursive=True)

suf = 0

for src in source_files:
    with open(src) as f:
        for i, line in enumerate(f):
            res = re1.match(line)
            if res:
                tup = res.group(1, 2)
                collisions[tup].append((src, i))

# filter out keys with value of length < 2

dupes = dict(filter(lambda e: len(e[1]) > 1, collisions.items()))

import ntpath

for (tg, tn), ll in dupes.items():
    print(f"{tg}, {tn}")
    for (src, lineno) in ll:
        print(f"\t{src}:{lineno}")

for (tg, tn), ll in dupes.items():
    print(f"{tg}, {tn}")
    i = 0
    for (src, lineno) in ll:
        with open(src) as f:
            with tempfile.NamedTemporaryFile(mode='w', delete=False) as tmp:
                for j, line in enumerate(f):
                    if j == lineno:
                        new_name = f"{tn}_{i}"
                        i += 1
                        new_line = re.sub(tn, new_name, line)
                        print(f"\t{ntpath.basename(src)}:{new_line}")
                        tmp.write(new_line)
                    else:
                        tmp.write(line)
        shutil.move(tmp.name, src)
