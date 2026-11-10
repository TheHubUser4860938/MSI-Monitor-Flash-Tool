// rea decompile_all
// name: FUN_0040f9e0
// address: 0x40f9e0
// body: available
// range: 0x40f9e0-0x40fbae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40fa1d to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040f9e0(uint param_1,uint param_2,WPARAM param_3)

{
  int *piVar1;
  int iVar2;
  CWnd *pCVar3;
  LRESULT LVar4;
  CWnd *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int iVar5;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059cc88;
  local_10 = ExceptionList;
  local_14 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)FUN_004295fe(local_14);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  iVar2 = iVar2 + 0x10;
  local_8 = 0;
  local_18 = iVar2;
  if (param_1 == 0x590) {
    LVar4 = SendMessageW(*(HWND *)(in_ECX + 0xf8),0x408,0,0);
    if ((LVar4 < (int)param_3) && ((int)param_3 < 0x65)) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)&local_18,L"%d%%",param_3);
      FUN_00415f50(&local_18);
      SendMessageW(*(HWND *)(in_ECX + 0xf8),0x402,param_3,0);
      FUN_00432070(0);
      iVar2 = local_18;
    }
  }
  else if (param_1 == 0x591) {
    iVar5 = 1;
    pCVar3 = CWnd::GetDlgItem(in_ECX,0x3ee);
    CWnd::EnableWindow(pCVar3,iVar5);
    iVar5 = 1;
    pCVar3 = CWnd::GetDlgItem(in_ECX,0x3ea);
    CWnd::EnableWindow(pCVar3,iVar5);
    FUN_00415f50(&DAT_00619614);
    CWnd::EnableWindow(in_ECX + 0x1a8,1);
    FUN_00432070(0);
    if (param_3 == 0) {
      iVar5 = 5;
      pCVar3 = CWnd::GetDlgItem(in_ECX,0x3f1);
      CWnd::ShowWindow(pCVar3,iVar5);
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      pCVar3 = CWnd::GetDlgItem(in_ECX,0x3f1);
      CWnd::ShowWindow(pCVar3,iVar5);
      iVar5 = 5;
    }
    pCVar3 = CWnd::GetDlgItem(in_ECX,0x3f2);
    CWnd::ShowWindow(pCVar3,iVar5);
    MessageBoxExW((HWND)0x0,*(LPCWSTR *)(in_ECX + 0x15c),L"MSI Firmware Update Utility",0x2030,0x409
                 );
  }
  CWnd::WindowProc(in_ECX,param_1,param_2,param_3);
  local_8 = 0xffffffff;
  LOCK();
  piVar1 = (int *)(iVar2 + -4);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(iVar2 + -0x10) + 4))((undefined4 *)(iVar2 + -0x10));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

