#!/usr/bin/env python3
"""Query the Ghidra pseudocode corpus in re2/decomp.

  q.py name <substr>      list functions whose PDB/imported name matches
  q.py grep <regex>       find functions whose pseudocode matches, with counts
  q.py show <name|addr>   print one function's pseudocode
  q.py calls <name|addr>  list the callees a function makes
  q.py callers <name>     list functions that call a given function
"""
import json
import os
import re
import sys

BASE = os.path.join(os.path.dirname(os.path.abspath(__file__)), "decomp")
MODULES = {
    "isp": "WinIspPlugIn",
    "aux": "Comm_Aux",
    "comm": "Comm",
    "exe": "exe",
    "scaler": "WinOperateCScaler",
}


def index(mod):
    d = os.path.join(BASE, MODULES[mod])
    j = json.load(open(os.path.join(d, "decompile-index.json")))
    return d, {f["name"]: f for f in j["functions"]}, j["functions"]


def pick(mod, target):
    d, byname, funcs = index(mod)
    if target in byname:
        return d, byname[target]
    hit = [f for f in funcs if f["address"] == target]
    if hit:
        return d, hit[0]
    raise SystemExit(f"{mod}: no function {target!r}")


def body(mod, target):
    d, f = pick(mod, target)
    p = os.path.join(d, f["relative_path"])
    return f["name"], f["address"], open(p, encoding="utf-8", errors="replace").read()


def main():
    args = sys.argv[1:]
    if not args:
        raise SystemExit(__doc__)
    cmd = args[0]
    mod = args[1] if args[1] in MODULES else "isp"
    rest = args[2:] if args[1] in MODULES else args[1:]
    d, byname, funcs = index(mod)

    if cmd == "name":
        pat = re.compile(rest[0], re.I)
        for f in funcs:
            if pat.search(f["name"]) and not f["name"].startswith("FUN_"):
                print(f"{f['address']}  {f['name']}")
    elif cmd == "grep":
        pat = re.compile(rest[0])
        limit = int(rest[1]) if len(rest) > 1 else 40
        n = 0
        for f in funcs:
            if f["status"] != "written":
                continue
            txt = open(os.path.join(d, f["relative_path"]), encoding="utf-8", errors="replace").read()
            hits = pat.findall(txt)
            if hits:
                print(f"{f['address']}  {f['name']}  x{len(hits)}")
                n += 1
                if n >= limit:
                    print("  (truncated)")
                    break
    elif cmd == "show":
        name, addr, txt = body(mod, rest[0])
        print(f"/* {mod}:{name} @ {addr} */")
        print(txt)
    elif cmd == "calls":
        name, addr, txt = body(mod, rest[0])
        callees = sorted(set(re.findall(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(", txt)))
        print(f"/* {mod}:{name} @ {addr} calls {len(callees)} */")
        for c in callees:
            tgt = c
            if re.fullmatch(r"FUN_[0-9a-f]+", c):
                tgt = byname.get("0x" + c[4:], {}).get("name", c)
            print("   ", c, "->", tgt if tgt != c else "")
    elif cmd == "callers":
        target = rest[0]
        if target in byname:
            addr = byname[target]["address"]
        else:
            addr = target
        sym = "FUN_" + addr[2:]
        pat = re.compile(r"\b(" + re.escape(target) + "|" + re.escape(sym) + r")\s*\(")
        for f in funcs:
            if f["status"] != "written":
                continue
            txt = open(os.path.join(d, f["relative_path"]), encoding="utf-8", errors="replace").read()
            if pat.search(txt):
                print(f"{f['address']}  {f['name']}")
    else:
        raise SystemExit(__doc__)


main()
