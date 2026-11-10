// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawRibbonButtonBorder
// address: 0x101454a3
// body: available
// range: 0x101454a3-0x1014576a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014571e to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawRibbonButtonBorder(class CDC
   *,class CMFCRibbonButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawRibbonButtonBorder
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  code *pcVar1;
  CMFCVisualManagerOfficeXP *pCVar2;
  CDC *this_00;
  int iVar3;
  int iVar4;
  ulong uVar5;
  BOOL BVar6;
  CPen *pCVar7;
  LONG LVar8;
  LONG LVar9;
  undefined1 local_4c [4];
  int local_48;
  CMFCVisualManagerOfficeXP *local_44;
  int local_40;
  CDrawingManager local_3c [4];
  CDC *local_38;
  tagRECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x101454af;
  local_38 = param_1;
  pcVar1 = *(code **)(*(int *)param_2 + 0x24c);
  local_44 = this;
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (((iVar3 != 0) && (*(int *)(param_2 + 0xc4) == 0)) ||
     (iVar3 = FUN_10051e53(&PTR_s_CMFCRibbonEdit_101eee58), iVar3 != 0)) goto LAB_10145763;
  local_40 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)param_2);
  pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) goto LAB_1014552b;
LAB_10145547:
    iVar3 = 0;
  }
  else {
LAB_1014552b:
    pcVar1 = *(code **)(*(int *)param_2 + 0xdc);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) goto LAB_10145547;
    iVar3 = 1;
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0xe0);
  local_48 = iVar3;
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (((iVar4 != 0) && (local_40 != 0)) && (iVar3 == 0)) goto LAB_10145763;
  local_34.left = *(LONG *)(param_2 + 0x74);
  local_34.top = *(LONG *)(param_2 + 0x78);
  local_34.right = *(LONG *)(param_2 + 0x7c);
  local_34.bottom = *(LONG *)(param_2 + 0x80);
  local_24.left = *(LONG *)(param_2 + 0x124);
  local_24.top = *(LONG *)(param_2 + 0x128);
  local_24.right = *(LONG *)(param_2 + 300);
  local_24.bottom = *(LONG *)(param_2 + 0x130);
  if (*(int *)(param_2 + 0x98) != 0) {
    InflateRect(&local_34,-1,-1);
  }
  if (local_48 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xe0);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) goto LAB_10145763;
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0xdc);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xd4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0xe0);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) goto LAB_10145763;
    }
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0xd8);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) goto LAB_10145637;
LAB_10145648:
    uVar5 = *(ulong *)(local_44 + 0xe8);
  }
  else {
LAB_10145637:
    if (local_40 != 0) goto LAB_10145648;
    uVar5 = *(ulong *)(local_44 + 0xd4);
  }
  this_00 = local_38;
  pCVar2 = local_44;
  if (DAT_10245bb4 == 0) {
    CDC::Draw3dRect(local_38,&local_34,uVar5,uVar5);
  }
  else {
    CDrawingManager::CDrawingManager(local_3c,local_38);
    local_8 = 0;
    CDrawingManager::DrawRect(local_3c,(CRect *)&local_34,0xffffffff,*(ulong *)(pCVar2 + 0xe8));
    local_8 = 0xffffffff;
    FUN_100b0b83();
  }
  BVar6 = IsRectEmpty(&local_24);
  if (BVar6 == 0) {
    if (*(int *)(param_2 + 0x98) != 0) {
      local_24.top = local_24.top + 1;
      local_24.right = local_24.right + -1;
      local_24.bottom = local_24.bottom + -1;
    }
    if (DAT_10245bb4 == 0) {
      pCVar7 = CDC::SelectObject(this_00,(CPen *)(pCVar2 + 0x144));
      if (pCVar7 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      if (*(int *)(param_2 + 0x170) == 0) {
        CDC::MoveTo(this_00,(int)local_4c,local_24.left);
        LVar8 = local_24.left;
        LVar9 = local_24.bottom;
      }
      else {
        CDC::MoveTo(this_00,(int)local_3c,local_24.left);
        LVar8 = local_24.right;
        LVar9 = local_24.top;
      }
      CDC::LineTo(this_00,LVar8,LVar9);
      CDC::SelectObject(this_00,pCVar7);
    }
    else {
      CDrawingManager::CDrawingManager(local_3c,this_00);
      local_8 = 1;
      LVar8 = local_24.left;
      LVar9 = local_24.bottom;
      if (*(int *)(param_2 + 0x170) != 0) {
        LVar8 = local_24.right;
        LVar9 = local_24.top;
      }
      CDrawingManager::DrawLine
                (local_3c,local_24.left,local_24.top,LVar8,LVar9,*(ulong *)(pCVar2 + 0xe8));
      FUN_100b0b83();
    }
  }
LAB_10145763:
  FUN_1018015d();
  return;
}

