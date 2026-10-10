#!/usr/bin/env python3
"""Regenerate the Comm_Aux NVAPI-surface evidence (session 15a).

Answers "which NVAPI functions does this DLL REALLY execute?" -- the naive
interface-ID immediate scan drowns in the 276-function lazy-resolution facade
every Realtek Comm module statically links. The honest method:
  1. resolve IDs via nvapi_interface.h  { "name", 0xID } table;
  2. recover function entries from the stripped .text via prologues
     (`push ebp` / `mov ebp,esp` -- note: no space after the comma);
  3. wrapper body = function whose first id-push lands inside it;
  4. a wrapper is LIVE iff some other function calls its entry.
Also lists the private (not-in-public-header) QueryInterface ids requested,
and the export table (aliasing is itself a finding: flash ops = one stub).

Usage: python3 scratch/nvapi_surface.py <dll> [nvapi_interface.h]
"""
import os
import re
import subprocess
import sys

sys.path.insert(0, ".")

HDR = "/tmp/opencode/nvapi/nvapi_interface.h"


def load_ids(path):
    ids = {}
    for m in re.finditer(r'\{\s*"([^"]+)"\s*,\s*(0x[0-9A-Fa-f]+)\s*\}',
                         open(path).read()):
        ids[int(m.group(2), 16)] = m.group(1)
    return ids


def disasm(dll):
    out = subprocess.run(["objdump", "-d", "--no-show-raw-insn", "-M", "intel",
                          dll], capture_output=True, text=True).stdout
    recs = []
    for ln in out.splitlines():
        m = re.match(r"^\s*([0-9a-f]+):\t(.*)$", ln)
        if m:
            recs.append((int(m.group(1), 16), m.group(2).strip()))
    return recs


def exports(dll):
    out = subprocess.run(["llvm-readobj", "--coff-exports", dll],
                         capture_output=True, text=True).stdout
    return [(m.group(1), int(m.group(2), 16)) for m in re.finditer(
        r"Export \{.*?Name:\s*(\S+).*?RVA:\s*(0x[0-9a-fA-F]+)", out, re.S)]


def main(dll, hdr=HDR):
    ids = load_ids(hdr)
    recs = disasm(dll)
    addrs = [a for a, _ in recs]
    bodies = [t for _, t in recs]
    import bisect
    entries = [addrs[i] for i in range(len(bodies) - 1)
               if bodies[i].startswith("push   ebp")
               and re.match(r"mov\s+ebp,esp", bodies[i + 1])]
    entries.sort()

    def owner(a):
        i = bisect.bisect_right(entries, a) - 1
        return entries[i] if i >= 0 else None

    push_re = re.compile(r"push\s+0x([0-9a-f]{1,8})\s*$")
    name2ent = {}
    for a, t in zip(addrs, bodies):
        m = push_re.match(t)
        if m:
            v = int(m.group(1), 16)
            if v in ids:
                e = owner(a)
                if e is not None:
                    name2ent.setdefault(ids[v], e)
    e2n = {v: k for k, v in name2ent.items()}
    call_re = re.compile(r"call\s+\*?(?:0x)?([0-9a-f]{6,})\s*$")
    live = {}
    for a, t in zip(addrs, bodies):
        m = call_re.match(t)
        if m and int(m.group(1), 16) in e2n:
            live.setdefault(e2n[int(m.group(1), 16)], []).append(a)

    qi_re = re.compile(r"push\s+0x([0-9a-f]{1,8})\s*$")
    private = {}
    for i, (a, t) in enumerate(recs):
        m = qi_re.match(t)
        if not m or i + 1 >= len(recs):
            continue
        if not bodies[i + 1].startswith("call   DWORD PTR ds:"):
            continue
        v = int(m.group(1), 16)
        if v not in ids and v >= 0x01000000:
            private.setdefault(v, []).append(a)

    print(f"# {dll}")
    print(f"# functions recovered: {len(entries)} | facade wrappers: "
          f"{len(name2ent)} | LIVE NVAPI calls: {len(live)}")
    for n in sorted(live):
        print(f"LIVE  {n:48} <- {', '.join(hex(x) for x in live[n])}")
    print(f"# private QueryInterface ids (not in {os.path.basename(hdr)}): "
          f"{len(private)} -- the ones near LIVE sites matter")
    for v in sorted(private):
        print(f"PRIV  {v:#010x} <- {', '.join(hex(x) for x in private[v][:4])}")
    print("# exports (RVA; shared RVA = aliased stub):")
    by_rva = {}
    for name, rva in exports(dll):
        by_rva.setdefault(rva, []).append(name)
    for rva in sorted(by_rva):
        names = by_rva[rva]
        print(f"EXP  {rva:#x}  {names[0]}" +
              (f"  [+{len(names) - 1} aliases: "
               + ", ".join(names[1:]) + "]" if len(names) > 1 else ""))


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2] if len(sys.argv) > 2 else HDR)
