// rea decompile_all
// name: Write32BitRegsEx
// address: 0x10008aa0
// body: available
// range: 0x10008aa0-0x10008cb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Write32BitRegsEx(int param_1,uint param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 local_8;
  undefined2 local_7;
  undefined1 local_5;
  
                    /* 0x8aa0  147  Write32BitRegsEx */
  local_8 = 0;
  local_7 = 0;
  local_5 = 0;
  if ((DAT_101def10 == (code *)0x0) || (iVar1 = (*DAT_101def10)(), iVar1 != 0x11)) {
    switch(DAT_101d49a4) {
    case 1:
    case 2:
    case 4:
      uVar3 = (param_2 & 0xffff) / 6;
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          iVar1 = FUN_10008cd0(param_3 + uVar4 * 0x18,param_4);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar5 = uVar5 + 1;
          uVar4 = uVar5 & 0xffff;
        } while (uVar4 < uVar3);
      }
      if (((param_2 & 0xffff) % 6 != 0) &&
         (iVar1 = FUN_10008cd0(param_3 + (uVar5 & 0xffff) * 0x18,param_4), iVar1 != 0)) {
        return iVar1;
      }
      break;
    case 3:
    case 5:
      uVar3 = (param_2 & 0xffff) / 6;
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          iVar1 = FUN_10008fd0(param_3 + uVar4 * 0x18,param_4);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar5 = uVar5 + 1;
          uVar4 = uVar5 & 0xffff;
        } while (uVar4 < uVar3);
      }
      if (((param_2 & 0xffff) % 6 != 0) &&
         (iVar1 = FUN_10008fd0(param_3 + (uVar5 & 0xffff) * 0x18,param_4), iVar1 != 0)) {
        return iVar1;
      }
      break;
    case 6:
      if (param_4 == 1) {
        if (DAT_101dee10 == (code *)0x0) {
          return 0;
        }
        uVar6 = 1;
      }
      else {
        if (DAT_101dee10 == (code *)0x0) {
          return 0;
        }
        uVar6 = 0;
      }
      (*DAT_101dee10)(param_1,param_2,param_3,uVar6);
    }
  }
  else {
    iVar1 = 0;
    if ((param_2 & 0xffff) != 0) {
      param_1 = param_1 - (int)param_3;
      do {
        local_8 = param_3[3];
        local_7 = CONCAT11(param_3[1],param_3[2]);
        local_5 = *param_3;
        if (DAT_101dee04 == (code *)0x0) {
          return 6;
        }
        iVar2 = (*DAT_101dee04)(param_3 + param_1,4,&local_8);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar1 = iVar1 + 1;
        param_3 = param_3 + 4;
      } while (iVar1 < (int)(param_2 & 0xffff));
    }
  }
  return 0;
}

