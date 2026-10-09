import re
import sys

import pefile

p = sys.argv[1]
pe = pefile.PE(p)          # full parse so section bytes are mapped
pat = re.compile(rb'[ -~]{5,}')
for s in pe.sections:
    nm = s.Name.decode(errors='replace').strip('\x00')
    d = s.get_data()
    for m in pat.finditer(d):
        print(f"{nm:<7} {s.VirtualAddress + m.start():#09x}  {m.group().decode(errors='replace')}")
