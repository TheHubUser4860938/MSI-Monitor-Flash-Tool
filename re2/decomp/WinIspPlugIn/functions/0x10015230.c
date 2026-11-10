// rea decompile_all
// name: FUN_10015230
// address: 0x10015230
// body: available
// range: 0x10015230-0x10015507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10015230(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_8;
  
  uVar6 = param_4 & 0xffffff0f;
  uVar4 = param_4 >> 4;
  iVar2 = 0x1f00;
  if (*(int *)(in_ECX + 0x434) != 1) {
    iVar2 = 0;
  }
  uVar5 = 0;
  param_4 = uVar6;
  if (uVar4 != 0) {
    do {
      iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,8);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar7 = (uVar5 & 0xfff) * 0x10;
      uVar6 = iVar2 + iVar7 & 0xffff;
      iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa8);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,uVar6 >> 8);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,uVar6);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa9);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,0xde);
      if (iVar3 != 0) {
        return iVar3;
      }
      Sleep(5);
      iVar3 = FUN_10015a60();
      if (iVar3 != 0) {
        return iVar3;
      }
      local_8 = local_8 & 0xffffff00;
      iVar3 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&local_8);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,local_8);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = 0x10;
      iVar7 = iVar7 + param_3;
      do {
        (**(code **)(*DAT_10249d10 + 0xf8))(0x44,iVar7);
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,0);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if ((char)param_4 != '\0') {
    iVar7 = (uVar5 & 0xfff) * 0x10;
    iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,8);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar6 = iVar2 + iVar7 & 0xffff;
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa8);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,uVar6 >> 8);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,uVar6);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa9);
    uVar6 = param_4;
    if (iVar2 != 0) {
      return iVar2;
    }
    cVar1 = (char)param_4;
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,(cVar1 - 1U | 0xe0) * '\x02');
    if (iVar2 != 0) {
      return iVar2;
    }
    Sleep(5);
    iVar2 = FUN_10015a60();
    if (iVar2 != 0) {
      return iVar2;
    }
    param_4 = param_4 & 0xffffff00;
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (cVar1 != '\0') {
      uVar6 = uVar6 & 0xff;
      iVar7 = iVar7 + param_3;
      do {
        (**(code **)(*DAT_10249d10 + 0xf8))(0x44,iVar7);
        iVar7 = iVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,0);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return 0;
}

