// rea decompile_all
// name: FUN_004f843e
// address: 0x4f843e
// body: available
// range: 0x4f843e-0x4f84e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4f84e3 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f843e(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CObject *pCVar4;
  CDockingManager *pCVar5;
  int in_ECX;
  CWnd *pCVar6;
  
  pCVar6 = (CWnd *)0x0;
  *(undefined4 *)(in_ECX + 0x44) = param_1;
  iVar2 = FUN_0043970d(&PTR_s_CPaneFrameWnd_0060c5e0);
  if (iVar2 == 0) {
    iVar2 = FUN_0043970d(&PTR_s_CPane_005b83cc);
    if (iVar2 == 0) goto LAB_004f84c1;
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_005b83cc,*(CObject **)(in_ECX + 0x44))
    ;
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x228);
    guard_check_icall(0);
    pCVar3 = (CObject *)(*pcVar1)();
    if (pCVar3 == (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x19c);
      guard_check_icall();
      pCVar6 = (CWnd *)(*pcVar1)();
      goto LAB_004f84c1;
    }
  }
  else {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_0060c5e0,
                                *(CObject **)(in_ECX + 0x44));
  }
  pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar3 + 200));
LAB_004f84c1:
  pCVar5 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_0060c45c,pCVar6);
  *(CDockingManager **)(in_ECX + 0x48) = pCVar5;
  if ((DAT_0060c460 == 0) && (pCVar5 == (CDockingManager *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  return;
}

