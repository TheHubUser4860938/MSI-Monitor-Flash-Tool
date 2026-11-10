// rea decompile_all
// name: FUN_1001f750
// address: 0x1001f750
// body: available
// range: 0x1001f750-0x1001fa8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f750(void)

{
  short sVar1;
  undefined ***pppuVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined **ppuVar6;
  undefined4 *puVar7;
  undefined4 extraout_EDX;
  int iVar8;
  undefined **local_7c;
  undefined2 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined4 local_44;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar8 = DAT_10249d24;
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1f76;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = DAT_10249d24;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_1024ecf8) &&
     (FUN_1017fb14(&DAT_1024ecf8,local_14), DAT_1024ecf8 == -1)) {
    FUN_10003640();
    _atexit((_func_4879 *)&LAB_101d23f0);
    FUN_1017fad5(&DAT_1024ecf8);
  }
  local_30 = 7;
  local_34 = 0;
  local_44 = (undefined **)((uint)local_44._2_2_ << 0x10);
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_64 = 7;
  local_68 = 0;
  local_78 = 0;
  local_7c = CCpRsString::vftable;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = 0;
  local_8 = 1;
  pppuVar2 = (undefined ***)FUN_10047dc0(L"Comm.dll");
  if (&local_48 != pppuVar2) {
    if (pppuVar2 == (undefined ***)0x0) {
      pppuVar2 = (undefined ***)0x0;
    }
    else {
      pppuVar2 = pppuVar2 + 1;
    }
    iVar8 = iVar3;
    if ((undefined ***)&local_44 != pppuVar2) {
      if (7 < local_30) {
        FUN_1000b5d0(local_44,local_30 + 1);
        iVar8 = iVar3;
      }
      local_30 = 7;
      local_34 = 0;
      local_44 = (undefined **)((uint)local_44 & 0xffff0000);
      FUN_10045640(pppuVar2);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar3 = iVar8;
  }
  FUN_10048130();
  if (DAT_10249d10 == (int *)0x0) {
    FUN_10048350(&local_7c,L"Set Comm Start");
    FUN_10016860();
    iVar3 = FUN_100491ae(700);
    if (iVar3 == 0) {
      DAT_10249d10 = (int *)0x0;
    }
    else {
      DAT_10249d10 = (int *)FUN_10003640();
    }
    if (DAT_10249d10 == (int *)0x0) goto LAB_1001fa60;
    ppuVar6 = (undefined **)&local_44;
    if (7 < local_30) {
      ppuVar6 = local_44;
    }
    iVar4 = (**(code **)(*DAT_10249d10 + 4))(ppuVar6);
    if (iVar4 == 0) {
      if (DAT_10249d10 != (int *)0x0) {
        (**(code **)*DAT_10249d10)(1);
        DAT_10249d10 = (int *)0x0;
      }
      FUN_10048350(&local_7c,L"Load Comm Dll Fail!");
      FUN_10016860();
      goto LAB_1001fa60;
    }
    (**(code **)(*DAT_10249d10 + 0xc))();
    sVar1 = (**(code **)(*DAT_10249d10 + 0x10))();
    if (sVar1 == 0) {
      if (DAT_10249d10 != (int *)0x0) {
        (**(code **)*DAT_10249d10)(1);
        DAT_10249d10 = (int *)0x0;
      }
      FUN_10048350(&local_7c,L"No available communication type!");
      FUN_10016860();
      goto LAB_1001fa60;
    }
    DAT_10249d14 = 1;
  }
  iVar4 = (**(code **)(*DAT_10249d10 + 0x14))();
  if (in_ECX == 0) {
    if (iVar4 == 0) {
LAB_1001f9cd:
      (**(code **)(*DAT_10249d10 + 0x28))();
    }
  }
  else if (iVar4 != in_ECX) goto LAB_1001f9cd;
  if (DAT_1024e6dc == 0) {
    uVar5 = FUN_10047dc0(L"IspSetting.ini");
    FUN_100481b0(uVar5);
    FUN_10048130();
  }
  puVar7 = &DAT_1024e6cc;
  if (7 < DAT_1024e6e0) {
    puVar7 = DAT_1024e6cc;
  }
  (**(code **)(*DAT_10249d10 + 0x118))(puVar7);
  if (in_ECX == 6) {
    (**(code **)(*DAT_10249d10 + 0x218))(iVar8);
  }
  FUN_10048350(&local_7c,L"Set Comm end");
  FUN_10016860();
LAB_1001fa60:
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX,iVar3);
  return;
}

