// rea decompile_all
// name: CMFCVisualManager::OnFillButtonInterior
// address: 0x10090453
// body: available
// range: 0x10090453-0x1009053f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnFillButtonInterior(class CDC *,class
   CMFCToolBarButton *,class CRect,enum CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnFillButtonInterior
          (CMFCVisualManager *this,CDC *param_1,CObject *param_2,LONG param_4,LONG param_5,
          LONG param_6,LONG param_7,int param_8)

{
  int iVar1;
  CObject *pCVar2;
  CDrawingManager local_2c [8];
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1009045f;
  iVar1 = FUN_1004e58b(&PTR_s_CMFCShowAllButton_101ca7c0);
  if (iVar1 != 0) {
    if (param_8 == 2) {
      CDrawingManager::CDrawingManager(local_2c,param_1);
      local_8 = 0;
      FUN_100b2b1f(param_4,param_5,param_6,param_7,0xffffffff,0xffffffff,0,0xffffffff);
      FUN_100afd36();
    }
    goto LAB_10090538;
  }
  if (*(int *)(this + 0x60) == 0) {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10205e6c,param_2);
    if ((pCVar2 == (CObject *)0x0) || (*(int *)(pCVar2 + 0x6c) == 0)) goto LAB_10090538;
    iVar1 = FUN_1004e58b(&PTR_s_CMFCPopupMenuBar_10205d98);
    if (iVar1 == 0) goto LAB_10090538;
  }
  iVar1 = FUN_1004e58b(&PTR_s_CMFCOutlookBarPaneButton_10205e50);
  if ((((iVar1 == 0) && (DAT_1020e500 == 0)) && (param_8 != 2)) &&
     ((*(uint *)(param_2 + 0x24) & 0x110000) != 0)) {
    local_24.left = param_4;
    local_24.top = param_5;
    local_24.right = param_6;
    local_24.bottom = param_7;
    InflateRect(&local_24,-DAT_1020db30,-DAT_1020db34);
    CMFCToolBarImages::FillDitheredRect(param_1,(CRect *)&local_24);
  }
LAB_10090538:
  FUN_1017f5f4();
  return;
}

