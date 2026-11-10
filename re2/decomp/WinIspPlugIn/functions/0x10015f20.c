// rea decompile_all
// name: FUN_10015f20
// address: 0x10015f20
// body: available
// range: 0x10015f20-0x100161ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10015f20(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint local_d;
  undefined4 local_9;
  byte local_5;
  
  uVar3 = param_4 & 0xffffff07;
  uVar1 = param_4 >> 3;
  uVar5 = 0;
  param_4 = uVar3;
  if (uVar1 != 0) {
    do {
      uVar3 = param_3;
      iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,8);
      if (iVar2 != 0) {
        return iVar2;
      }
      local_5 = (char)uVar5 << 3;
      local_9 = CONCAT31(local_9._1_3_,local_5);
      iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa0);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,local_9);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa1);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,0xce);
      if (iVar2 != 0) {
        return iVar2;
      }
      Sleep(5);
      iVar2 = FUN_10015a60();
      if (iVar2 != 0) {
        return iVar2;
      }
      local_d = local_d & 0xffffff00;
      iVar2 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&local_d);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,local_d);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar6 = local_5 + uVar3;
      iVar2 = 8;
      do {
        (**(code **)(*DAT_10249d10 + 0xf8))(0x44,iVar6);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,0);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  uVar1 = param_3;
  if ((char)param_4 != '\0') {
    bVar4 = (char)uVar5 << 3;
    local_9 = CONCAT31(local_9._1_3_,bVar4);
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,8);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa0);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,local_9);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa1);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,((char)param_4 - 1U | 0xe0) * '\x02');
    if (iVar2 != 0) {
      return iVar2;
    }
    Sleep(5);
    iVar2 = FUN_10015a60();
    if (iVar2 != 0) {
      return iVar2;
    }
    param_3 = param_3 & 0xffffff00;
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((char)param_4 != '\0') {
      iVar2 = bVar4 + uVar1;
      uVar1 = param_4 & 0xff;
      do {
        (**(code **)(*DAT_10249d10 + 0xf8))(0x44,iVar2);
        iVar2 = iVar2 + 1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,0);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return 0;
}

