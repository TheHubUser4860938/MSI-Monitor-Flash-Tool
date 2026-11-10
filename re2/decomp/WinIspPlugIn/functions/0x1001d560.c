// rea decompile_all
// name: FUN_1001d560
// address: 0x1001d560
// body: available
// range: 0x1001d560-0x1001da1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d560(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined ***pppuVar4;
  int *in_ECX;
  undefined4 in_EDX;
  undefined1 *puVar5;
  int iVar6;
  int local_f8;
  undefined4 local_f4;
  undefined **local_f0;
  undefined4 local_ec;
  uint local_d8;
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  undefined **local_bc;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  undefined **local_88;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  undefined **local_54;
  undefined **local_50 [4];
  int local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1cdf;
  local_10 = ExceptionList;
  local_18 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0;
  local_1f = 0;
  local_1b = 0;
  local_19 = 0;
  iVar6 = 0;
  local_3c = 7;
  local_40 = 0;
  local_50[0] = (undefined **)((uint)local_50[0] & 0xffff0000);
  local_54 = CCpRsString::vftable;
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  local_70 = 7;
  local_74 = 0;
  local_84 = local_84 & 0xffff0000;
  local_88 = CCpRsString::vftable;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  local_a4 = 7;
  local_a8 = 0;
  local_b8[0] = local_b8[0] & 0xffff0000;
  local_bc = CCpRsString::vftable;
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  local_8 = 3;
  local_f4 = in_EDX;
  iVar1 = FUN_1001da20(local_18);
  if (iVar1 == 0) {
    iVar1 = 0;
    local_f8 = 0;
    do {
      iVar2 = FUN_1001caf0();
      if ((iVar2 != 3) && (iVar6 = FUN_1000ea20(&local_20,in_ECX,local_f4), iVar6 != 0)) break;
      iVar1 = iVar1 + 1;
    } while ((ushort)iVar1 < 2);
    local_f8 = iVar1;
    FUN_10048350(&local_88,L"Flash IDCode: ");
    puVar5 = &local_20;
    iVar1 = 8;
    do {
      FUN_10048350(&local_bc,L"0x%x,",*puVar5);
      FUN_1002c980(local_b8,0,0xffffffff);
      puVar5 = puVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_10016860();
    if (DAT_1024a3f4 == 0) {
      pppuVar4 = (undefined ***)FUN_10016650(&local_f0);
      if (&local_54 != pppuVar4) {
        if (pppuVar4 == (undefined ***)0x0) {
          pppuVar4 = (undefined ***)0x0;
        }
        else {
          pppuVar4 = pppuVar4 + 1;
        }
        if (local_50 != pppuVar4) {
          if (7 < local_3c) {
            FUN_1000b5d0(local_50[0],local_3c + 1);
          }
          local_3c = 7;
          local_40 = 0;
          local_50[0] = (undefined **)((uint)local_50[0] & 0xffff0000);
          FUN_10045640(pppuVar4);
        }
        local_8 = CONCAT31(local_8._1_3_,3);
      }
      local_f0 = CCpRsString::vftable;
      if (0xf < local_c0) {
        FUN_1000b630(local_d4,local_c0 + 1);
      }
      local_c0 = 0xf;
      local_c4 = 0;
      local_d4 = local_d4 & 0xffffff00;
      if (7 < local_d8) {
        FUN_1000b5d0(local_ec,local_d8 + 1);
      }
      if (local_40 != 0) {
        if (iVar6 != 0) {
          iVar1 = FUN_1000da90(&local_f0);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = iVar1 + 4;
          }
          iVar1 = FUN_10009010(iVar1);
          FUN_10048130();
          if (iVar1 == 0) goto LAB_1001d8e3;
        }
        if (DAT_1024a42c == 0) {
          piVar3 = (int *)FUN_1000f3d0(&local_f8,&local_54);
          if (*piVar3 != *in_ECX) {
            FUN_1000e8c0(*piVar3 + 0x44);
          }
        }
      }
    }
    else if ((iVar6 == 0) && ((short)local_f8 == 2)) {
      FUN_10045540(L"Default",7);
      piVar3 = (int *)FUN_1000f3d0(&local_f8,&local_54);
      if (*piVar3 != *in_ECX) {
        FUN_1000e8c0(*piVar3 + 0x44);
        FUN_10048350(&local_88,L"Flash MisMatch Use Default Value");
        FUN_1003fc00();
        FUN_10016860();
      }
    }
  }
LAB_1001d8e3:
  local_bc = CCpRsString::vftable;
  if (0xf < local_8c) {
    FUN_1000b630(local_a0,local_8c + 1);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (7 < local_a4) {
    FUN_1000b5d0(local_b8[0],local_a4 + 1);
  }
  local_a4 = 7;
  local_b8[0] = local_b8[0] & 0xffff0000;
  local_a8 = 0;
  local_88 = CCpRsString::vftable;
  if (0xf < local_58) {
    FUN_1000b630(local_6c,local_58 + 1);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  if (7 < local_70) {
    FUN_1000b5d0(local_84,local_70 + 1);
  }
  local_70 = 7;
  local_84 = local_84 & 0xffff0000;
  local_74 = 0;
  local_54 = CCpRsString::vftable;
  if (0xf < local_24) {
    FUN_1000b630(local_38,local_24 + 1);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  if (7 < local_3c) {
    FUN_1000b5d0(local_50[0],local_3c + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

