import os, sys, pexray
D = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
                 "vendor/PlugIn/WinIspPlugIn.dll")
pe = pexray.load(D)
fns = pexray.exports(pe)
name = sys.argv[1]; n = int(sys.argv[2]) if len(sys.argv)>2 else 120
print(f"==== {name}  RVA {fns[name]:#x} ====")
pexray.code_at(pe, fns[name], n)
