// rea decompile_all
// name: ReadDDRRegsEx
// address: 0x100095e0
// body: available
// range: 0x100095e0-0x10009726 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int ReadDDRRegsEx(undefined4 param_1,ushort param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  
                    /* 0x95e0  97  ReadDDRRegsEx */
  iVar2 = 0;
  switch(DAT_101d49a4) {
  case 1:
  case 2:
  case 4:
    uVar3 = 0;
    if (param_2 / 6 != 0) {
      uVar1 = 0;
      do {
        iVar2 = FUN_10009a60(param_3 + uVar1 * 0x18,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar3 = uVar3 + 1;
        uVar1 = (uint)uVar3;
      } while (uVar1 < param_2 / 6);
    }
    iVar2 = 0;
    if ((uint)param_2 % 6 != 0) {
      iVar2 = FUN_10009a60(param_3 + (uint)uVar3 * 0x18,param_4);
      return iVar2;
    }
    break;
  case 3:
  case 5:
    uVar3 = 0;
    if (param_2 / 6 != 0) {
      uVar1 = 0;
      do {
        iVar2 = FUN_10009ee0(0,param_3 + uVar1 * 0x18,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar3 = uVar3 + 1;
        uVar1 = (uint)uVar3;
      } while (uVar1 < param_2 / 6);
    }
    iVar2 = 0;
    if ((uint)param_2 % 6 != 0) {
      iVar2 = FUN_10009ee0(0,param_3 + (uint)uVar3 * 0x18,param_4);
    }
  }
  return iVar2;
}

