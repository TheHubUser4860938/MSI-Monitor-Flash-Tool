// rea decompile_all
// name: Read32BitRegsEx
// address: 0x10008850
// body: available
// range: 0x10008850-0x10008a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Read32BitRegsEx(int param_1,ushort param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *local_c;
  undefined1 local_8;
  undefined2 local_7;
  undefined1 local_5;
  
                    /* 0x8850  91  Read32BitRegsEx */
  local_8 = 0;
  local_7 = 0;
  iVar3 = 0;
  local_5 = 0;
  if ((DAT_101def10 == (code *)0x0) || (iVar1 = (*DAT_101def10)(), iVar1 != 0x11)) {
    switch(DAT_101d49a4) {
    case 1:
    case 2:
    case 4:
      uVar4 = 0;
      if (param_2 / 6 != 0) {
        uVar2 = 0;
        do {
          iVar3 = FUN_10008e30(param_3 + uVar2 * 6,param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar4 = uVar4 + 1;
          uVar2 = uVar4 & 0xffff;
        } while (uVar2 < param_2 / 6);
      }
      iVar3 = 0;
      if ((uint)param_2 % 6 != 0) {
        iVar3 = FUN_10008e30(param_3 + (uVar4 & 0xffff) * 6,param_4);
        return iVar3;
      }
      break;
    case 3:
    case 5:
      uVar4 = 0;
      if (param_2 / 6 != 0) {
        uVar2 = 0;
        do {
          iVar3 = FUN_10009240(param_3 + uVar2 * 6,param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar4 = uVar4 + 1;
          uVar2 = uVar4 & 0xffff;
        } while (uVar2 < param_2 / 6);
      }
      iVar3 = 0;
      if ((uint)param_2 % 6 != 0) {
        iVar3 = FUN_10009240(param_3 + (uVar4 & 0xffff) * 6,param_4);
        return iVar3;
      }
      break;
    case 6:
      iVar3 = FUN_1000cbf0(param_3,param_4 == 1);
    }
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      param_1 = param_1 - (int)param_3;
      local_c = DAT_101dee00;
      while( true ) {
        if (local_c == (code *)0x0) {
          iVar3 = 6;
        }
        else {
          iVar3 = (*local_c)(param_1 + (int)param_3,4,&local_8);
          local_c = DAT_101dee00;
        }
        *param_3 = CONCAT31(CONCAT21(CONCAT11(local_8,(undefined1)local_7),local_7._1_1_),local_5);
        if (iVar3 != 0) break;
        iVar1 = iVar1 + 1;
        param_3 = param_3 + 1;
        if ((int)(uint)param_2 <= iVar1) {
          return 0;
        }
      }
    }
  }
  return iVar3;
}

