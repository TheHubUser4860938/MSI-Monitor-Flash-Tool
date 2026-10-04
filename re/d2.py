import sys, pexray
path = sys.argv[1]
mode = sys.argv[2]
pe = pexray.load(path)
if mode == 'rva':
    rva = int(sys.argv[3], 16); n = int(sys.argv[4]) if len(sys.argv)>4 else 100
    print(f"==== {path.split('/')[-1]} RVA {rva:#x} ====")
    pexray.code_at(pe, rva, n)
