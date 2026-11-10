// rea decompile_all
// name: ReadMcuRegs
// address: 0x100051c0
// body: available
// range: 0x100051c0-0x1000538a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int ReadMcuRegs(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
                    /* 0x51c0  100  ReadMcuRegs */
  iVar3 = 0;
  if ((DAT_101def10 != (code *)0x0) && (iVar1 = (*DAT_101def10)(), iVar1 == 8)) {
    if (DAT_101dee8c != (code *)0x0) {
      iVar3 = (*DAT_101dee8c)(2,param_1 | 0xff00,param_4 == 1,param_2,param_3);
      return iVar3;
    }
    return 6;
  }
  if (DAT_101d49a4 == 5) {
    uVar5 = 0;
    uVar4 = (param_2 & 0xffff) / 0x18;
    if (uVar4 != 0) {
      uVar2 = 0;
      do {
        iVar3 = FUN_100082e0(param_3 + uVar2 * 0x18,param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar5 = uVar5 + 1;
        uVar2 = uVar5 & 0xffff;
      } while (uVar2 < uVar4);
    }
    iVar3 = 0;
    if ((param_2 & 0xffff) % 0x18 != 0) {
      iVar3 = FUN_100082e0(param_3 + (uVar5 & 0xffff) * 0x18,param_4);
    }
  }
  else {
    if (DAT_101d49a4 == 6) {
      if (DAT_101dee1c != (code *)0x0) {
        iVar3 = (*DAT_101dee1c)(param_1 & 0xffff | 0xff00,param_2,param_3,param_4 == 1);
        return iVar3;
      }
      return 6;
    }
    uVar4 = 0;
    if (param_4 == 1) {
      if ((ushort)param_2 != 0) {
        while (iVar3 = ReadMcuReg(uVar4 + param_1,(uVar4 & 0xffff) + param_3), iVar3 == 0) {
          uVar4 = uVar4 + 1;
          if ((ushort)param_2 <= (ushort)uVar4) {
            return 0;
          }
        }
      }
    }
    else if ((ushort)param_2 != 0) {
      while (iVar3 = ReadMcuReg(param_1,(uVar4 & 0xffff) + param_3), iVar3 == 0) {
        uVar4 = uVar4 + 1;
        if ((ushort)param_2 <= (ushort)uVar4) {
          return 0;
        }
      }
    }
  }
  return iVar3;
}

