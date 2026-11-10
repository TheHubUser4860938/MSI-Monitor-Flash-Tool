// rea decompile_all
// name: FUN_1003e9c0
// address: 0x1003e9c0
// body: available
// range: 0x1003e9c0-0x1003ed96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1003e9c0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  char local_5;
  
  iVar1 = param_2;
  local_5 = '\0';
  if (*(int *)(param_2 + 0x58) != 0) {
    param_2 = *(int *)(param_2 + 0x50);
    iVar1 = FUN_1003cb60(&param_2,iVar1);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (DAT_1024a360 == 0) {
    if (DAT_1024a3bc == 0) {
      if ((DAT_1024e45c == 1) &&
         (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(1,param_1 >> 8), iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(100,param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x65,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x66,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (DAT_1024e45c == 1) {
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0xa0);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      else {
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0xb8);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x61,0xd8);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (DAT_1024e45c == 1) {
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0xa1);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      else {
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0xb9);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      iVar1 = FUN_1001c4c0(0,20000);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    else {
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x87,param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x88,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x89,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x83,0xb8);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x84,0xd8);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x83,0xb9);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_1001c4c0(0,20000);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
  }
  else {
    if ((DAT_1024e45c == 1) &&
       (iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x845,param_1 >> 8), iVar1 != 0)) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x846,param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x847,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x848,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (DAT_1024e45c == 1) {
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x841,0xa0);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    else {
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x841,0xb8);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x842,0xd8);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (DAT_1024e45c == 1) {
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x841,0xa1);
      uVar3 = extraout_ECX;
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    else {
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc4))(0x841,0xb9);
      uVar3 = extraout_ECX_00;
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = FUN_1001c450(0,uVar3);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  iVar2 = 0;
  iVar1 = (**(code **)(*DAT_10249d10 + 0x14))();
  if (((iVar1 != 8) && (iVar2 = FUN_1001c530(&local_5), iVar2 == 0)) && (local_5 != -0x22)) {
    return 0xd05;
  }
  return iVar2;
}

