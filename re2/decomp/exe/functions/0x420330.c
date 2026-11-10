// rea decompile_all
// name: CMFCVisualManager::OnFillRibbonButton
// address: 0x420330
// body: available
// range: 0x420330-0x42055e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnFillRibbonButton(class CDC *,class
   CMFCRibbonButton *)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManager::OnFillRibbonButton
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  HBRUSH pHVar4;
  ulong uVar5;
  CDC *this_00;
  CDrawingManager local_54 [4];
  ulong local_50;
  CDrawingManager local_4c [4];
  CDC *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  RECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x42033c;
  local_48 = param_1;
  iVar2 = FUN_0043970d(&PTR_s_CMFCRibbonEdit_005bb328);
  if (iVar2 == 0) {
    iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)param_2);
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0x204);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 != 0) {
          local_24.left = *(LONG *)(param_2 + 0x74);
          local_24.top = *(LONG *)(param_2 + 0x78);
          local_24.right = *(LONG *)(param_2 + 0x7c);
          local_24.bottom = *(LONG *)(param_2 + 0x80);
          pAVar3 = GetGlobalData();
          pHVar4 = (HBRUSH)0x0;
          if (pAVar3 != (AFX_GLOBAL_DATA *)0xffffff60) {
            pHVar4 = *(HBRUSH *)(pAVar3 + 0xa4);
          }
          FillRect(*(HDC *)(local_48 + 4),&local_24,pHVar4);
          GetGlobalData();
        }
        goto LAB_00420557;
      }
    }
    pcVar1 = *(code **)(*(int *)param_2 + 0xe0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) goto LAB_00420557;
    pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) goto LAB_00420557;
    if (DAT_00614e28 == 0) {
      local_44 = *(undefined4 *)(param_2 + 0x74);
      uStack_40 = *(undefined4 *)(param_2 + 0x78);
      uStack_3c = *(undefined4 *)(param_2 + 0x7c);
      uStack_38 = *(undefined4 *)(param_2 + 0x80);
      CMFCToolBarImages::FillDitheredRect(local_48,(CRect *)&local_44);
      goto LAB_00420557;
    }
    CDrawingManager::CDrawingManager(local_54,param_1);
    local_8 = 2;
    local_24.left = *(LONG *)(param_2 + 0x74);
    uVar5 = 0xffffffff;
    local_24.top = *(LONG *)(param_2 + 0x78);
    local_24.right = *(LONG *)(param_2 + 0x7c);
    local_24.bottom = *(LONG *)(param_2 + 0x80);
    pAVar3 = GetGlobalData();
    CDrawingManager::DrawRect(local_54,(CRect *)&local_24,*(ulong *)(pAVar3 + 0x6c),uVar5);
  }
  else {
    pAVar3 = GetGlobalData();
    local_50 = *(ulong *)(pAVar3 + 0x58);
    local_34.left = *(LONG *)(param_2 + 0x134);
    local_34.top = *(LONG *)(param_2 + 0x138);
    local_34.right = *(LONG *)(param_2 + 0x13c);
    local_34.bottom = *(LONG *)(param_2 + 0x140);
    local_24.top = *(LONG *)(param_2 + 0x78);
    local_24.right = *(LONG *)(param_2 + 0x7c);
    local_24.bottom = *(LONG *)(param_2 + 0x80);
    local_24.left = local_34.left;
    if (DAT_00614e28 == 0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        this_00 = local_48;
        if (iVar2 != 0) goto LAB_00420424;
        CDrawingManager::CDrawingManager(local_4c,local_48);
        local_8 = 1;
        FUN_00464ce2(local_34.left,local_34.top,local_34.right,local_34.bottom,0xffffffff,0xffffffff
                     ,0,0xffffffff);
        local_8 = 0xffffffff;
        FUN_00461ef9();
      }
      else {
LAB_00420424:
        pAVar3 = GetGlobalData();
        this_00 = local_48;
        pHVar4 = (HBRUSH)0x0;
        if (pAVar3 != (AFX_GLOBAL_DATA *)0xffffff38) {
          pHVar4 = *(HBRUSH *)(pAVar3 + 0xcc);
        }
        FillRect(*(HDC *)(local_48 + 4),&local_34,pHVar4);
      }
      CDC::Draw3dRect(this_00,&local_24,local_50,local_50);
      goto LAB_00420557;
    }
    CDrawingManager::CDrawingManager(local_4c,local_48);
    local_8 = 0;
    uVar5 = local_50;
    pAVar3 = GetGlobalData();
    CDrawingManager::DrawRect(local_4c,(CRect *)&local_24,*(ulong *)(pAVar3 + 0x6c),uVar5);
  }
  FUN_00461ef9();
LAB_00420557:
  uVar5 = FUN_0055bae6();
  return uVar5;
}

