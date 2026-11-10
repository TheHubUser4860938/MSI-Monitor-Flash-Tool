// rea decompile_all
// name: CMFCMenuBar::LoadState
// address: 0x101254f0
// body: available
// range: 0x101254f0-0x101257e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10125508 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCMenuBar::LoadState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCMenuBar::LoadState(CMFCMenuBar *this,wchar_t *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  UINT UVar4;
  AFX_MODULE_STATE *pAVar5;
  int iVar6;
  int iVar7;
  CWnd *pCVar8;
  WPARAM wParam;
  CFrameWnd *pCVar9;
  uint uVar10;
  int local_1c;
  WPARAM local_18;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x101254fc;
  if (*(int *)(this + 0xd50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  AFXGetRegPath((wchar_t *)local_14,L"MenuBar");
  iVar1 = *(int *)(this + 0xd70);
  local_8 = 0;
  SetMaximizeMode(this,0,(CWnd *)0x0,0);
  pAVar5 = AfxGetModuleState();
  piVar2 = *(int **)(*(int *)(pAVar5 + 4) + 0x5c);
  if ((*(int *)(this + 0xd40) != 0) && (piVar2 != (int *)0x0)) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    guard_check_icall();
    local_1c = (*pcVar3)();
    while (local_1c != 0) {
      pcVar3 = *(code **)(*piVar2 + 0x14);
      guard_check_icall(&local_1c);
      iVar6 = (*pcVar3)();
      iVar7 = FUN_10051e53(&PTR_s_CMultiDocTemplate_101f5074);
      if ((iVar7 != 0) && (*(int *)(iVar6 + 0x88) != 0)) {
        local_18 = *(WPARAM *)(iVar6 + 0x54);
        pcVar3 = *(code **)(*(int *)this + 0x438);
        guard_check_icall(local_18);
        (*pcVar3)();
        iVar7 = FUN_100973c9(local_14[0],param_2,local_18);
        if ((iVar7 == 0) || (*(int *)(this + 0xb90) != 0)) {
          pCVar8 = CWnd::GetOwner((CWnd *)this);
          if ((pCVar8 != (CWnd *)0x0) && (*(int *)(pCVar8 + 0x20) != 0)) {
            *(undefined4 *)(this + 0xd4c) = 0;
            pcVar3 = *(code **)(*(int *)this + 0x434);
            guard_check_icall(*(undefined4 *)(iVar6 + 0x88),0,0);
            (*pcVar3)();
            UVar4 = DAT_10245cf4;
            pCVar8 = CWnd::GetOwner((CWnd *)this);
            SendMessageW(*(HWND *)(pCVar8 + 0x20),UVar4,local_18,0);
            FUN_100c8753(*(undefined4 *)(iVar6 + 0x88),this);
            *(undefined4 *)(this + 0xd4c) = *(undefined4 *)(iVar6 + 0x88);
          }
        }
        else {
          FUN_100c8753(*(undefined4 *)(iVar6 + 0x88),this);
        }
      }
    }
  }
  pcVar3 = *(code **)(*(int *)this + 0x438);
  guard_check_icall(*(undefined4 *)(this + 0xd5c));
  (*pcVar3)();
  iVar6 = FUN_100973c9(local_14[0],param_2,0);
  if ((iVar6 == 0) || (*(int *)(this + 0xb90) != 0)) {
    pCVar8 = CWnd::GetOwner((CWnd *)this);
    if ((pCVar8 != (CWnd *)0x0) && (*(int *)(pCVar8 + 0x20) != 0)) {
      *(undefined4 *)(this + 0xd4c) = 0;
      pcVar3 = *(code **)(*(int *)this + 0x434);
      guard_check_icall(*(undefined4 *)(this + 0xd50),1,0);
      (*pcVar3)();
      wParam = *(WPARAM *)(this + 0xd5c);
      if (wParam == 0) {
        pCVar8 = CWnd::GetOwner((CWnd *)this);
        wParam = SendMessageW(*(HWND *)(pCVar8 + 0x20),0x366,0,0);
      }
      UVar4 = DAT_10245cf4;
      pCVar8 = CWnd::GetOwner((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar8 + 0x20),UVar4,wParam,0);
      FUN_100c8753(*(undefined4 *)(this + 0xd50),this);
      *(undefined4 *)(this + 0xd4c) = *(undefined4 *)(this + 0xd50);
    }
  }
  else {
    FUN_100c8753(*(undefined4 *)(this + 0xd50),this);
  }
  if ((*(HMENU__ **)(this + 0xd4c) == (HMENU__ *)0x0) ||
     (iVar6 = CMenuHash::LoadMenuBar
                        ((CMenuHash *)&DAT_10247340,*(HMENU__ **)(this + 0xd4c),(CMFCToolBar *)this)
     , iVar6 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  if (iVar1 != 0) {
    RestoreMaximizeMode(this,uVar10 ^ 1);
  }
  if (uVar10 != 0) {
    pCVar9 = CWnd::GetParentFrame((CWnd *)this);
    pcVar3 = *(code **)(*(int *)pCVar9 + 0x178);
    guard_check_icall(1);
    (*pcVar3)();
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  pcVar3 = *(code **)(*(int *)this + 0x20c);
  guard_check_icall();
  (*pcVar3)();
  CMFCToolBar::RebuildAccelerationKeys((CMFCToolBar *)this);
  FUN_100476d0();
  return 1;
}

