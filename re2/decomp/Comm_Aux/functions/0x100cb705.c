// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawButtonBorder
// address: 0x100cb705
// body: available
// range: 0x100cb705-0x100cb85e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawButtonBorder(class CDC
   *,class CMFCToolBarButton *,class CRect,enum CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawButtonBorder
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CObject *param_2,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  CWnd *this_00;
  int iVar2;
  CObject *pCVar3;
  BOOL BVar4;
  ulong uVar5;
  CDrawingManager local_20 [8];
  CObject *local_18;
  CDC *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100cb711;
  local_14 = param_1;
  local_18 = param_2;
  iVar2 = CanDrawImage(this);
  if (iVar2 == 0) {
    CMFCVisualManagerOffice2003::OnDrawButtonBorder
              ((CMFCVisualManagerOffice2003 *)this,local_14,local_18,param_4,param_5,param_6,param_7
               ,param_8);
  }
  else if ((((param_8 == 1) || (param_8 == 2)) && (*(int *)(this + 0x150) != 0)) &&
          (((DAT_10205f44 != 0 && (DAT_1020e500 == 0)) &&
           (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10205e6c,
                                        param_2), pCVar3 != (CObject *)0x0)))) {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x70);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      if ((*(int *)(pCVar3 + 0x6c) != 0) &&
         (iVar2 = FUN_1004e58b(&PTR_s_CMFCPopupMenuBar_10205d98), iVar2 != 0)) {
        return;
      }
      this_00 = *(CWnd **)(pCVar3 + 0x8c);
      if (((this_00 != (CWnd *)0x0) &&
          (((BVar4 = IsWindowVisible(*(HWND *)(this_00 + 0x20)), BVar4 != 0 ||
            (*(int *)(this_00 + 0xf48) != 0)) && (*(int *)(this_00 + 0xf44) == 0)))) &&
         (uVar5 = CWnd::GetExStyle(this_00), (uVar5 & 0x400000) == 0)) {
        pcVar1 = *(code **)(*(int *)this + 0x30c);
        guard_check_icall(pCVar3,&param_4);
        (*pcVar1)();
        CDrawingManager::CDrawingManager(local_20,local_14);
        local_8 = 0;
        CDrawingManager::DrawShadow
                  (local_20,param_4,param_5,param_6,param_7,*(undefined4 *)(this + 0x7c),100,0x4b,0,
                   0,*(undefined4 *)(this + 0xa8),1);
        FUN_100afd36();
      }
    }
  }
  return;
}

