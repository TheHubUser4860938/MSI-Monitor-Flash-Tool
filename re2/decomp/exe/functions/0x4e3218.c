// rea decompile_all
// name: FUN_004e3218
// address: 0x4e3218
// body: available
// range: 0x4e3218-0x4e3370 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4e336c to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e3218(void)

{
  code *pcVar1;
  HWND hWnd;
  uint uVar2;
  undefined4 *puVar3;
  CObject *pCVar4;
  HWND__ *pHVar5;
  CWnd *pCVar6;
  BOOL BVar7;
  HWND pHVar8;
  int iVar9;
  int *piVar10;
  undefined4 *in_ECX;
  undefined **local_38;
  undefined4 *local_34;
  undefined4 *local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005a585d;
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = in_ECX[0x7d];
  *in_ECX = COleCntrFrameWndEx::vftable;
  while (local_14 != 0) {
    local_1c = in_ECX;
    puVar3 = (undefined4 *)FUN_004ead48(&local_14);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_0060c5e0,(CObject *)*puVar3);
    in_ECX = local_1c;
    if (pCVar4 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x60);
      guard_check_icall(uVar2);
      (*pcVar1)();
      in_ECX = local_1c;
    }
  }
  CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>((CList<HWND__*,HWND__*> *)&local_38,10);
  pHVar5 = GetTopWindow((HWND)in_ECX[8]);
  while (pCVar6 = CWnd::FromHandle(pHVar5), pCVar6 != (CWnd *)0x0) {
    CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)&local_38,*(HWND__ **)(pCVar6 + 0x20))
    ;
    pHVar5 = GetWindow(*(HWND *)(pCVar6 + 0x20),2);
  }
  while (local_34 != (undefined4 *)0x0) {
    hWnd = (HWND)local_34[2];
    puVar3 = (undefined4 *)*local_34;
    BVar7 = IsWindow(hWnd);
    local_34 = puVar3;
    if ((BVar7 != 0) && (pHVar8 = GetParent(hWnd), pHVar8 == (HWND)in_ECX[8])) {
      DestroyWindow(hWnd);
    }
  }
  iVar9 = FUN_00452f50();
  local_14 = *(int *)(iVar9 + 4);
  while( true ) {
    iVar9 = local_14;
    if (local_14 == 0) {
      local_8 = 0;
      local_38 = CList<HWND__*,HWND__*>::vftable;
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_38);
      CDockingManager::~CDockingManager((CDockingManager *)(in_ECX + 0x4a));
      FUN_00530010();
      ExceptionList = local_10;
      return;
    }
    piVar10 = (int *)FUN_004ead48(&local_14);
    if (*piVar10 == 0) break;
    pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(*piVar10 + 0x20));
    if (pCVar6 == (CWnd *)0x0) {
      FUN_004d2617(iVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

