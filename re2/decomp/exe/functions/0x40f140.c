// rea decompile_all
// name: FUN_0040f140
// address: 0x40f140
// body: available
// range: 0x40f140-0x40f396 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f1ac to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f1d3 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f1fa to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f221 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f248 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f26f to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f296 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f2bd to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040f140(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  AFX_MODULE_STATE *pAVar4;
  HICON pHVar5;
  CDialogEx *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059cbd4;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  CDialogEx::CDialogEx(in_ECX,0x66,(CWnd *)0x0);
  local_8 = 0;
  *(undefined ***)in_ECX = CISPToolForMsiDlg::vftable;
  CWnd::CWnd((CWnd *)(in_ECX + 0xd8));
  *(undefined ***)(in_ECX + 0xd8) = CProgressCtrl::vftable;
  local_8._0_1_ = 1;
  piVar2 = (int *)FUN_004295fe(uVar1);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)(in_ECX + 0x158) = iVar3 + 0x10;
  local_8._0_1_ = 2;
  piVar2 = (int *)FUN_004295fe(uVar1);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)(in_ECX + 0x15c) = iVar3 + 0x10;
  local_8._0_1_ = 3;
  piVar2 = (int *)FUN_004295fe();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)(in_ECX + 0x160) = iVar3 + 0x10;
  local_8._0_1_ = 4;
  piVar2 = (int *)FUN_004295fe();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)(in_ECX + 0x164) = iVar3 + 0x10;
  local_8._0_1_ = 5;
  piVar2 = (int *)FUN_004295fe();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)(in_ECX + 0x168) = iVar3 + 0x10;
  local_8._0_1_ = 6;
  piVar2 = (int *)FUN_004295fe();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)(in_ECX + 0x16c) = iVar3 + 0x10;
  local_8._0_1_ = 7;
  piVar2 = (int *)FUN_004295fe();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)(in_ECX + 0x170) = iVar3 + 0x10;
  local_8._0_1_ = 8;
  piVar2 = (int *)FUN_004295fe();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)(in_ECX + 0x174) = iVar3 + 0x10;
  local_8._0_1_ = 9;
  in_ECX[0x178] = (CDialogEx)0x2;
  *(undefined4 *)(in_ECX + 0x17c) = 0;
  *(undefined4 *)(in_ECX + 0x180) = 0;
  *(undefined4 *)(in_ECX + 0x184) = 0x7000700;
  *(undefined4 *)(in_ECX + 0x188) = 1;
  *(undefined4 *)(in_ECX + 0x18c) = 1;
  *(undefined4 *)(in_ECX + 400) = 1;
  *(undefined4 *)(in_ECX + 0x194) = 0;
  *(undefined4 *)(in_ECX + 0x198) = 0xf80c;
  CWnd::CWnd((CWnd *)(in_ECX + 0x1a8));
  *(undefined ***)(in_ECX + 0x1a8) = CComboBox::vftable;
  local_8 = CONCAT31(local_8._1_3_,10);
  AfxGetModuleState();
  pAVar4 = AfxGetModuleState();
  pHVar5 = LoadIconW(*(HINSTANCE *)(pAVar4 + 0xc),(LPCWSTR)0x80);
  *(HICON *)(in_ECX + 0xd0) = pHVar5;
  *(undefined4 *)(in_ECX + 0x19c) = 1;
  *(undefined4 *)(in_ECX + 0x1a0) = 1;
  *(undefined4 *)(in_ECX + 0x1a4) = 0;
  ExceptionList = local_10;
  return;
}

