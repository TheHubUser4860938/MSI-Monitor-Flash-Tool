// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonButtonBorder
// address: 0x1008c0c0
// body: available
// range: 0x1008c0c0-0x1008c31e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008c2d2 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonButtonBorder(class CDC *,class
   CMFCRibbonButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonButtonBorder
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  code *pcVar1;
  CDC *this_00;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  BOOL BVar4;
  CPen *pCVar5;
  LONG LVar6;
  ulong uVar7;
  LONG LVar8;
  ulong uVar9;
  undefined1 local_4c [8];
  CDrawingManager local_44 [8];
  CDrawingManager local_3c [4];
  CDC *local_38;
  tagRECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x1008c0cc;
  local_38 = param_1;
  iVar2 = FUN_1004e58b(&PTR_s_CMFCRibbonEdit_101caee0);
  if (iVar2 != 0) goto LAB_1008c317;
  local_34.left = *(LONG *)(param_2 + 0x74);
  local_34.top = *(LONG *)(param_2 + 0x78);
  local_34.right = *(LONG *)(param_2 + 0x7c);
  local_34.bottom = *(LONG *)(param_2 + 0x80);
  iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)param_2);
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xe0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) goto LAB_1008c317;
    }
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xe0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*(int *)param_2 + 0xd4);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) goto LAB_1008c317;
      }
    }
  }
  if (DAT_1020e40c == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xd8);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0xe0);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) goto LAB_1008c223;
      pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) goto LAB_1008c223;
      pAVar3 = GetGlobalData();
      uVar9 = *(ulong *)(pAVar3 + 0x58);
      pAVar3 = GetGlobalData();
      uVar7 = *(ulong *)(pAVar3 + 0x5c);
    }
    else {
LAB_1008c223:
      pAVar3 = GetGlobalData();
      uVar9 = *(ulong *)(pAVar3 + 0x5c);
      pAVar3 = GetGlobalData();
      uVar7 = *(ulong *)(pAVar3 + 0x58);
    }
    CDC::Draw3dRect(local_38,&local_34,uVar7,uVar9);
  }
  else {
    CDrawingManager::CDrawingManager(local_44,local_38);
    local_8 = 0;
    pAVar3 = GetGlobalData();
    CDrawingManager::DrawRect(local_44,(CRect *)&local_34,0xffffffff,*(ulong *)(pAVar3 + 0x58));
    local_8 = 0xffffffff;
    FUN_100afd36();
  }
  local_24.left = *(LONG *)(param_2 + 0x124);
  local_24.top = *(LONG *)(param_2 + 0x128);
  local_24.right = *(LONG *)(param_2 + 300);
  local_24.bottom = *(LONG *)(param_2 + 0x130);
  BVar4 = IsRectEmpty(&local_24);
  if (BVar4 == 0) {
    if (DAT_1020e40c == 0) {
      pAVar3 = GetGlobalData();
      this_00 = local_38;
      pCVar5 = CDC::SelectObject(local_38,(CPen *)(pAVar3 + 0xe8));
      if (pCVar5 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
      if (*(int *)(param_2 + 0x170) == 0) {
        CDC::MoveTo(this_00,(int)local_4c,local_24.left);
        LVar6 = local_24.left;
        LVar8 = local_24.bottom;
      }
      else {
        CDC::MoveTo(this_00,(int)local_44,local_24.left);
        LVar6 = local_24.right;
        LVar8 = local_24.top;
      }
      CDC::LineTo(this_00,LVar6,LVar8);
      CDC::SelectObject(this_00,pCVar5);
    }
    else {
      CDrawingManager::CDrawingManager(local_3c,local_38);
      local_8 = 1;
      if (*(int *)(param_2 + 0x170) == 0) {
        pAVar3 = GetGlobalData();
        uVar9 = *(ulong *)(pAVar3 + 0x58);
        LVar6 = local_24.left;
        LVar8 = local_24.bottom;
      }
      else {
        pAVar3 = GetGlobalData();
        uVar9 = *(ulong *)(pAVar3 + 0x58);
        LVar6 = local_24.right;
        LVar8 = local_24.top;
      }
      CDrawingManager::DrawLine(local_3c,local_24.left,local_24.top,LVar6,LVar8,uVar9);
      FUN_100afd36();
    }
  }
LAB_1008c317:
  FUN_1017f5f4();
  return;
}

