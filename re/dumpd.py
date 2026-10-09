"""dumpd.py <dll> <export_name> [n_insns] -- generic 32-bit export dumper."""
import sys

import pexray

pe = pexray.load(sys.argv[1])
fns = pexray.exports(pe)
name = sys.argv[2]; n = int(sys.argv[3]) if len(sys.argv) > 3 else 150
matches = [k for k in fns if name.lower() in k.lower()]
if not matches:
    print("no match. exports sample:", sorted(fns)[:40]); sys.exit(1)
for m in matches:
    print(f"==== {m}  RVA {fns[m]:#x} ====")
    pexray.code_at(pe, fns[m], n)
