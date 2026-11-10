// rea decompile_all
// name: FUN_100c5067
// address: 0x100c5067
// body: available
// range: 0x100c5067-0x100c5110 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c510c to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c5067(undefined4 param_1)

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
  iVar2 = FUN_10019d4f(&PTR_s_CPaneFrameWnd_101d38dc);
  if (iVar2 == 0) {
    iVar2 = FUN_10019d4f(&PTR_s_CPane_101878f4);
    if (iVar2 == 0) goto LAB_100c50ea;
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101878f4,*(CObject **)(in_ECX + 0x44))
    ;
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x228);
    guard_check_icall(0);
    pCVar3 = (CObject *)(*pcVar1)();
    if (pCVar3 == (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x19c);
      guard_check_icall();
      pCVar6 = (CWnd *)(*pcVar1)();
      goto LAB_100c50ea;
    }
  }
  else {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101d38dc,
                                *(CObject **)(in_ECX + 0x44));
  }
  pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar3 + 200));
LAB_100c50ea:
  pCVar5 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_101d3944,pCVar6);
  *(CDockingManager **)(in_ECX + 0x48) = pCVar5;
  if ((DAT_101d3948 == 0) && (pCVar5 == (CDockingManager *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  return;
}

