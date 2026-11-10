// rea decompile_all
// name: FUN_0040f460
// address: 0x40f460
// body: available
// range: 0x40f460-0x40f81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f4c1 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040f460(void)

{
  LPCWSTR pWVar1;
  int *piVar2;
  short sVar3;
  short *psVar4;
  uint uVar5;
  HMENU pHVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  CWnd *pCVar10;
  CDialog *in_ECX;
  undefined4 extraout_ECX;
  short *psVar11;
  LPCWSTR pWVar12;
  wchar_t local_68 [12];
  CMenu *local_50;
  undefined **local_4c;
  uint local_48;
  int local_38;
  uint local_34;
  undefined1 local_30;
  undefined4 local_20;
  undefined4 local_1c;
  LPCWSTR local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059cc10;
  local_10 = ExceptionList;
  uVar5 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  CDialog::OnInitDialog(in_ECX);
  pHVar6 = GetSystemMenu(*(HWND *)(in_ECX + 0x20),0);
  local_50 = CMenu::FromHandle(pHVar6);
  if (local_50 != (CMenu *)0x0) {
    piVar7 = (int *)FUN_004295fe(uVar5);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ed80(0x80004005);
    }
    iVar8 = (**(code **)(*piVar7 + 0xc))();
    local_8 = 0;
    local_18 = (LPCWSTR)(iVar8 + 0x10);
    iVar9 = FUN_00435fce(0x65);
    pWVar12 = (LPCWSTR)(iVar8 + 0x10);
    if (iVar9 != 0) {
      FUN_004160f0(iVar9,0x65);
      pWVar12 = local_18;
    }
    if (*(int *)(pWVar12 + -6) != 0) {
      AppendMenuW(*(HMENU *)(local_50 + 4),0x800,0,(LPCWSTR)0x0);
      AppendMenuW(*(HMENU *)(local_50 + 4),0,0x10,pWVar12);
    }
    local_8 = 0xffffffff;
    LOCK();
    pWVar1 = pWVar12 + -2;
    iVar8 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar8 == 1 || iVar8 + -1 < 0) {
      (**(code **)(**(int **)(pWVar12 + -8) + 4))(pWVar12 + -8);
    }
  }
  SendMessageW(*(HWND *)(in_ECX + 0x20),0x80,1,*(LPARAM *)(in_ECX + 0xd0));
  SendMessageW(*(HWND *)(in_ECX + 0x20),0x80,0,*(LPARAM *)(in_ECX + 0xd0));
  FUN_004349b3(L"MSI Firmware Update Utility v1.0.6");
  builtin_wcsncpy(local_68,L"IspLog.txt",0xb);
  piVar7 = (int *)FUN_004100d0(&local_18,extraout_ECX);
  local_8 = 1;
  iVar8 = *piVar7;
  iVar9 = *(int *)(in_ECX + 0x168);
  piVar7 = (int *)(iVar9 + -0x10);
  local_50 = (CMenu *)(iVar8 + -0x10);
  if (local_50 != (CMenu *)piVar7) {
    if ((*(int *)(iVar9 + -4) < 0) || (*(int *)(iVar8 + -0x10) != *piVar7)) {
      FUN_00415e30(iVar8,*(undefined4 *)(iVar8 + -0xc));
    }
    else {
      local_50 = (CMenu *)FUN_00415ee0(local_50);
      piVar2 = (int *)(iVar9 + -4);
      LOCK();
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1 || iVar8 + -1 < 0) {
        (**(code **)(*(int *)*piVar7 + 4))(piVar7);
      }
      *(int **)(in_ECX + 0x168) = (int *)((int)local_50 + 0x10);
    }
  }
  local_8 = 0xffffffff;
  LOCK();
  pWVar12 = local_18 + -2;
  iVar8 = *(int *)pWVar12;
  *(int *)pWVar12 = *(int *)pWVar12 + -1;
  UNLOCK();
  if (iVar8 == 1 || iVar8 + -1 < 0) {
    (**(code **)(**(int **)(local_18 + -8) + 4))(local_18 + -8);
  }
  piVar7 = (int *)FUN_00415c80(&local_18,in_ECX + 0x168,local_68);
  local_8 = 2;
  iVar8 = *piVar7;
  iVar9 = *(int *)(in_ECX + 0x16c);
  piVar7 = (int *)(iVar9 + -0x10);
  local_50 = (CMenu *)(iVar8 + -0x10);
  if (local_50 != (CMenu *)piVar7) {
    if ((*(int *)(iVar9 + -4) < 0) || (*(int *)local_50 != *piVar7)) {
      FUN_00415e30(iVar8,*(undefined4 *)(iVar8 + -0xc));
    }
    else {
      local_50 = (CMenu *)FUN_00415ee0(local_50);
      piVar2 = (int *)(iVar9 + -4);
      LOCK();
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 + -1 < 1) {
        (**(code **)(*(int *)*piVar7 + 4))(piVar7);
      }
      *(int **)(in_ECX + 0x16c) = (int *)((int)local_50 + 0x10);
    }
  }
  local_8 = 0xffffffff;
  LOCK();
  pWVar12 = local_18 + -2;
  iVar8 = *(int *)pWVar12;
  *(int *)pWVar12 = *(int *)pWVar12 + -1;
  UNLOCK();
  if (iVar8 == 1 || iVar8 + -1 < 0) {
    (**(code **)(**(int **)(local_18 + -8) + 4))(local_18 + -8);
  }
  psVar4 = *(short **)(in_ECX + 0x16c);
  if (*psVar4 == 0) {
    iVar8 = 0;
  }
  else {
    psVar11 = psVar4;
    do {
      sVar3 = *psVar11;
      psVar11 = psVar11 + 1;
    } while (sVar3 != 0);
    iVar8 = (int)psVar11 - (int)(psVar4 + 1) >> 1;
  }
  FUN_00403fc0(psVar4,iVar8);
  iVar8 = 0;
  pCVar10 = CWnd::GetDlgItem((CWnd *)in_ECX,0x3f1);
  CWnd::ShowWindow(pCVar10,iVar8);
  iVar8 = 0;
  pCVar10 = CWnd::GetDlgItem((CWnd *)in_ECX,0x3f2);
  CWnd::ShowWindow(pCVar10,iVar8);
  iVar8 = 0;
  pCVar10 = CWnd::GetDlgItem((CWnd *)in_ECX,0x3ed);
  CWnd::ShowWindow(pCVar10,iVar8);
  CWnd::ShowWindow((CWnd *)(in_ECX + 0xd8),0);
  DAT_006194e4 = *(undefined4 *)(in_ECX + 0x20);
  iVar8 = FUN_00412260(in_ECX + 0x160,in_ECX + 0x164);
  if (iVar8 == 0) {
    local_34 = 7;
    local_48 = local_48 & 0xffff0000;
    local_38 = iVar8;
    FUN_00403fc0(L"Create Temp folder Write Setting File Fail!",0x2b);
    local_4c = CCpRsString::vftable;
    local_1c = 0xf;
    local_20 = 0;
    local_30 = 0;
    local_8 = 3;
    FUN_00408420();
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x1a0) = 0;
    local_4c = CCpRsString::vftable;
    FUN_004033e0();
    if (7 < local_34) {
      FUN_004053c0(local_48,local_34 + 1);
    }
    local_34 = 7;
    local_38 = 0;
    local_48 = local_48 & 0xffff0000;
  }
  FUN_00411870(in_ECX + 0x164);
  FUN_00432070(0);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

