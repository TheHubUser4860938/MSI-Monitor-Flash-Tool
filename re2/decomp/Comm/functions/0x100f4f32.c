// rea decompile_all
// name: FUN_100f4f32
// address: 0x100f4f32
// body: available
// range: 0x100f4f32-0x100f4fe2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f4fde to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f4f32(undefined4 param_1,int param_2)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  CObject *pCVar5;
  undefined4 uVar6;
  int *in_ECX;
  tagPOINT local_10;
  CDockingManager *local_8;
  
  if (param_2 != 0) {
    local_10.x = 0;
    local_10.y = 0;
    GetCursorPos(&local_10);
    pHVar2 = GetParent((HWND)in_ECX[8]);
    pCVar3 = CWnd::FromHandle(pHVar2);
    iVar4 = FUN_10019d4f(&PTR_s_CPaneFrameWnd_101d38dc);
    if (iVar4 != 0) {
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101d38dc,(CObject *)pCVar3);
      pCVar3 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar5 + 200));
    }
    local_8 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_101d3944,pCVar3);
    if (local_8 != (CDockingManager *)0x0) {
      iVar4 = *(int *)local_8;
      pcVar1 = *(code **)(*in_ECX + 0x198);
      guard_check_icall(param_2);
      uVar6 = (*pcVar1)();
      guard_check_icall(local_10.x,local_10.y,param_1,uVar6);
      (**(code **)(iVar4 + 0x18))();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

