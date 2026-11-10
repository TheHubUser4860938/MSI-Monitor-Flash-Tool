// rea decompile_all
// name: FUN_10038070
// address: 0x10038070
// body: available
// range: 0x10038070-0x10038237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003814c to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038070(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  CDialog *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a096c;
  local_10 = ExceptionList;
  uVar1 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  CDialog::CDialog(in_ECX,3000,(CWnd *)0x0);
  local_8 = 0;
  *(undefined ***)in_ECX = CAUXAdjustOption::vftable;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  CWnd::CWnd((CWnd *)(in_ECX + 0xb0));
  *(undefined ***)(in_ECX + 0xb0) = CComboBox::vftable;
  local_8._0_1_ = 1;
  CWnd::CWnd((CWnd *)(in_ECX + 0x130));
  *(undefined ***)(in_ECX + 0x130) = CComboBox::vftable;
  local_8._0_1_ = 2;
  CWnd::CWnd((CWnd *)(in_ECX + 0x1b0));
  *(undefined ***)(in_ECX + 0x1b0) = CComboBox::vftable;
  local_8._0_1_ = 3;
  *(undefined4 *)(in_ECX + 0x230) = 0;
  *(undefined4 *)(in_ECX + 0x234) = 0;
  in_ECX[0x238] = (CDialog)0x20;
  *(undefined4 *)(in_ECX + 0x23c) = 0;
  *(undefined4 *)(in_ECX + 0x240) = 0;
  piVar2 = (int *)FUN_10048e90(uVar1);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)(in_ECX + 0x244) = iVar3 + 0x10;
  local_8._0_1_ = 4;
  *(undefined4 *)(in_ECX + 0x248) = 0;
  *(undefined4 *)(in_ECX + 0x24c) = 0;
  *(undefined4 *)(in_ECX + 0x250) = 0;
  CWnd::CWnd((CWnd *)(in_ECX + 600));
  *(undefined ***)(in_ECX + 600) = CComboBox::vftable;
  local_8._0_1_ = 5;
  *(undefined4 *)(in_ECX + 0x2d8) = 0;
  FUN_100352e0(&DAT_101e24d0);
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_100352e0(&DAT_101e24d0);
  *(undefined4 *)(in_ECX + 0x2e4) = 0;
  *(undefined4 *)(in_ECX + 0x2e8) = 0;
  *(undefined4 *)(in_ECX + 0x2ec) = 0;
  *(undefined4 *)(in_ECX + 0x2f0) = 0;
  *(undefined4 *)(in_ECX + 0x2f4) = 0;
  *(undefined4 *)(in_ECX + 0x2f8) = 0;
  *(undefined4 *)(in_ECX + 0x2fc) = 1;
  *(undefined4 *)(in_ECX + 0x300) = 0;
  *(undefined4 *)(in_ECX + 0x304) = 0;
  ExceptionList = local_10;
  return;
}

