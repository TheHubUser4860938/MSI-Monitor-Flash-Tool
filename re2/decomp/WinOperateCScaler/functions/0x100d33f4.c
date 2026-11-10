// rea decompile_all
// name: FUN_100d33f4
// address: 0x100d33f4
// body: available
// range: 0x100d33f4-0x100d3571 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d356d to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d33f4(int param_1)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CMFCVisualManager *pCVar4;
  undefined4 uVar5;
  CWnd *in_ECX;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  iVar2 = OnCreate(param_1);
  if (iVar2 != -1) {
    local_18.right = *(LONG *)(param_1 + 0x14);
    local_18.bottom = *(LONG *)(param_1 + 0x10);
    local_18.left = 0;
    local_18.top = 0;
    if ((*(int *)(in_ECX + 0x370) != 0) || (PTR_PTR_10201994 == (undefined *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    pCVar3 = (CObject *)FUN_1002505f();
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101b54cc,pCVar3);
    *(CObject **)(in_ECX + 0x370) = pCVar3;
    if (pCVar3 != (CObject *)0x0) {
      iVar2 = CMFCTabCtrl::Create((CMFCTabCtrl *)pCVar3,DAT_1020b918,&local_18,in_ECX,0x65,
                                  (uint)(DAT_1020b91c != 0),0);
      if (iVar2 == 0) {
        if (*(int **)(in_ECX + 0x370) != (int *)0x0) {
          pcVar1 = *(code **)(**(int **)(in_ECX + 0x370) + 4);
          guard_check_icall(1);
          (*pcVar1)();
        }
        *(undefined4 *)(in_ECX + 0x370) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(in_ECX + 0x370) + 0x8c) = 1;
        if (DAT_1020b920 != 0) {
          CMFCBaseTabCtrl::EnableAutoColor((CMFCBaseTabCtrl *)pCVar3,1);
          CMFCBaseTabCtrl::SetAutoColors
                    ((CMFCBaseTabCtrl *)pCVar3,
                     (CArray<unsigned_long,unsigned_long> *)&PTR_vftable_10201998);
        }
        *(undefined4 *)(pCVar3 + 0x11c) = 0;
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x2a4);
        guard_check_icall(1);
        (*pcVar1)();
        pCVar4 = CMFCVisualManager::GetInstance();
        iVar2 = *(int *)pCVar3;
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x130);
        guard_check_icall(1);
        uVar5 = (*pcVar1)();
        pcVar1 = *(code **)(iVar2 + 0x244);
        guard_check_icall(uVar5);
        (*pcVar1)();
        *(undefined4 *)(pCVar3 + 0x80) = 1;
        CList<HWND__*,HWND__*>::AddTail
                  ((CList<HWND__*,HWND__*> *)&PTR_vftable_102019ac,*(HWND__ **)(in_ECX + 0x20));
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

