import sys, pexray
D="/home/eugene/Downloads/ABDM/Compressed/FW-MAG-271QPX-QD-OLED-E2_MAG-321UP-QD-OLED_v1.0.6/PlugIn/WinIspPlugIn.dll"
pe = pexray.load(D)
fns = pexray.exports(pe)
name = sys.argv[1]; n = int(sys.argv[2]) if len(sys.argv)>2 else 120
print(f"==== {name}  RVA {fns[name]:#x} ====")
pexray.code_at(pe, fns[name], n)
