// rea decompile_all
// name: FUN_004536d1
// address: 0x4536d1
// body: available
// range: 0x4536d1-0x453788 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x453784 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004536d1(CObject *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  __POSITION *p_Var3;
  int in_ECX;
  
  if (param_1 == (CObject *)0x0) goto LAB_00453784;
  iVar2 = CMFCToolBar::IsCommandPermitted(*(uint *)(param_1 + 0x20));
  if (iVar2 == 0) {
    return -1;
  }
  if (param_2 == -1) {
LAB_00453710:
    if (*(int *)(in_ECX + 0xd14) == 0) {
      CObList::AddTail((CObList *)(in_ECX + 0xc3c),param_1);
      pcVar1 = *(code **)(*(int *)param_1 + 0x28);
      guard_check_icall();
      (*pcVar1)();
      return *(int *)(in_ECX + 0xc48) + -1;
    }
    param_2 = *(int *)(in_ECX + 0xc48) + -1;
  }
  else {
    if ((param_2 < 0) || (*(int *)(in_ECX + 0xc48) < param_2)) {
      return -1;
    }
    if (param_2 == *(int *)(in_ECX + 0xc48)) goto LAB_00453710;
  }
  p_Var3 = CObList::FindIndex((CObList *)(in_ECX + 0xc3c),param_2);
  if (p_Var3 != (__POSITION *)0x0) {
    CObList::InsertBefore((CObList *)(in_ECX + 0xc3c),p_Var3,param_1);
    pcVar1 = *(code **)(*(int *)param_1 + 0x28);
    guard_check_icall();
    (*pcVar1)();
    return param_2;
  }
LAB_00453784:
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

