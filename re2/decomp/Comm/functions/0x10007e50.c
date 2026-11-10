// rea decompile_all
// name: ReadFlashData
// address: 0x10007e50
// body: available
// range: 0x10007e50-0x10007fa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int ReadFlashData(int param_1,ushort param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
                    /* 0x7e50  98  ReadFlashData */
  if (DAT_101def08 == (code *)0x0) {
    return 7;
  }
  uVar1 = (*DAT_101def08)();
  uVar5 = (uint)uVar1;
  if (uVar1 == 0) {
    return 7;
  }
  if ((DAT_101def10 == (code *)0x0) || (iVar2 = (*DAT_101def10)(), iVar2 != 8)) {
    if (DAT_101dee50 == (code *)0x0) {
      return 6;
    }
    uVar6 = 0;
    if (param_2 / uVar5 != 0) {
      uVar3 = 0;
      do {
        iVar2 = (*DAT_101dee50)(param_1 + uVar3 * uVar5,uVar5,param_3 + uVar3 * uVar5);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar6 = uVar6 + 1;
        uVar3 = uVar6 & 0xffff;
      } while (uVar3 < param_2 / uVar5);
    }
    if ((uint)param_2 % uVar5 == 0) {
      return 0;
    }
    iVar2 = (uVar6 & 0xffff) * uVar5;
    iVar2 = (*DAT_101dee50)(param_1 + iVar2,(uint)param_2 % uVar5,param_3 + iVar2);
  }
  else {
    uVar6 = 0;
    if (param_2 / uVar5 != 0) {
      uVar3 = 0;
      do {
        uVar4 = param_1 + uVar3 * uVar5;
        if (DAT_101dee8c == (code *)0x0) {
          return 6;
        }
        iVar2 = (*DAT_101dee8c)(0x41,uVar4 >> 0x10,uVar4,uVar5,param_3 + uVar3 * uVar5);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar6 = uVar6 + 1;
        uVar3 = uVar6 & 0xffff;
      } while (uVar3 < param_2 / uVar5);
    }
    if ((uint)param_2 % uVar5 == 0) {
      return 0;
    }
    iVar2 = (uVar6 & 0xffff) * uVar5;
    uVar6 = param_1 + iVar2;
    if (DAT_101dee8c == (code *)0x0) {
      return 6;
    }
    iVar2 = (*DAT_101dee8c)(0x41,uVar6 >> 0x10,uVar6,(uint)param_2 % uVar5,iVar2 + param_3);
  }
  if (iVar2 == 0) {
    return 0;
  }
  return iVar2;
}

