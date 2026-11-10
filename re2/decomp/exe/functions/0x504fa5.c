// rea decompile_all
// name: CMFCRibbonBar::SetMaximizeMode
// address: 0x504fa5
// body: available
// range: 0x504fa5-0x505219 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCRibbonBar::SetMaximizeMode(int,class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonBar::SetMaximizeMode(CMFCRibbonBar *this,int param_1,CWnd *param_2)

{
  code *pcVar1;
  CMFCRibbonCaptionButton *hmenu;
  int *piVar2;
  CObject *pCVar3;
  HMENU pHVar4;
  CMenu *pCVar5;
  BOOL BVar6;
  ulong uVar7;
  CMFCRibbonBaseElement *pCVar8;
  int iVar9;
  tagMENUITEMINFOW local_48;
  CMFCRibbonCaptionButton *local_18;
  CMFCRibbonCaptionButton *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x504fb1;
  if (*(int *)(this + 0x2fc) != param_1) {
    iVar9 = 0;
    if (0 < *(int *)(this + 0x2d0)) {
      do {
        local_14 = (CMFCRibbonCaptionButton *)(*(int *)(this + 0x454) + -1);
        piVar2 = (int *)FUN_004ab4cd(local_14);
        local_18 = (CMFCRibbonCaptionButton *)*piVar2;
        if (local_18 != (CMFCRibbonCaptionButton *)0x0) {
          pcVar1 = *(code **)(*(int *)local_18 + 4);
          guard_check_icall(1);
          (*pcVar1)();
        }
        FUN_00558084(local_14,0xffffffff);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(this + 0x2d0));
    }
    *(undefined4 *)(this + 0x2d0) = 0;
    if (param_1 != 0) {
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_005c363c,(CObject *)param_2);
      if ((pCVar3 == (CObject *)0x0) ||
         (local_18 = (CMFCRibbonCaptionButton *)0x1, *(int *)(pCVar3 + 0xac) == 0)) {
        local_18 = (CMFCRibbonCaptionButton *)0x0;
      }
      local_14 = (CMFCRibbonCaptionButton *)0x0;
      pHVar4 = GetSystemMenu(*(HWND *)(param_2 + 0x20),0);
      pCVar5 = CMenu::FromHandle(pHVar4);
      if ((pCVar5 != (CMenu *)0x0) && (BVar6 = IsMenu(*(HMENU *)(pCVar5 + 4)), BVar6 != 0)) {
        local_14 = *(CMFCRibbonCaptionButton **)(pCVar5 + 4);
        BVar6 = IsMenu((HMENU)local_14);
        if ((BVar6 == 0) ||
           ((uVar7 = CWnd::GetExStyle(param_2), (uVar7 & 0x80000) == 0 &&
            (local_18 == (CMFCRibbonCaptionButton *)0x0)))) {
          local_14 = (CMFCRibbonCaptionButton *)0x0;
        }
      }
      local_18 = (CMFCRibbonCaptionButton *)GetWindowLongW(*(HWND *)(param_2 + 0x20),-0x10);
      hmenu = local_14;
      if (local_14 != (CMFCRibbonCaptionButton *)0x0) {
        if (((uint)local_18 & 0x20000) != 0) {
          local_14 = (CMFCRibbonCaptionButton *)FUN_00416408(0x1c8);
          local_8 = 0;
          if (local_14 == (CMFCRibbonCaptionButton *)0x0) {
            pCVar8 = (CMFCRibbonBaseElement *)0x0;
          }
          else {
            pCVar8 = (CMFCRibbonBaseElement *)
                     CMFCRibbonCaptionButton::CMFCRibbonCaptionButton
                               (local_14,0xf020,*(HWND__ **)(param_2 + 0x20));
          }
          local_8 = 0xffffffff;
          CMFCRibbonButtonsGroup::AddButton((CMFCRibbonButtonsGroup *)(this + 0x340),pCVar8);
          *(int *)(this + 0x2d0) = *(int *)(this + 0x2d0) + 1;
        }
        if (((uint)local_18 & 0x10000) != 0) {
          local_18 = (CMFCRibbonCaptionButton *)FUN_00416408(0x1c8);
          local_8 = 1;
          if (local_18 == (CMFCRibbonCaptionButton *)0x0) {
            pCVar8 = (CMFCRibbonBaseElement *)0x0;
          }
          else {
            pCVar8 = (CMFCRibbonBaseElement *)
                     CMFCRibbonCaptionButton::CMFCRibbonCaptionButton
                               (local_18,0xf120,*(HWND__ **)(param_2 + 0x20));
          }
          local_8 = 0xffffffff;
          CMFCRibbonButtonsGroup::AddButton((CMFCRibbonButtonsGroup *)(this + 0x340),pCVar8);
          *(int *)(this + 0x2d0) = *(int *)(this + 0x2d0) + 1;
        }
        local_18 = (CMFCRibbonCaptionButton *)FUN_00416408(0x1c8);
        local_8 = 2;
        if (local_18 == (CMFCRibbonCaptionButton *)0x0) {
          pCVar8 = (CMFCRibbonBaseElement *)0x0;
        }
        else {
          pCVar8 = (CMFCRibbonBaseElement *)
                   CMFCRibbonCaptionButton::CMFCRibbonCaptionButton
                             (local_18,0xf060,*(HWND__ **)(param_2 + 0x20));
        }
        local_8 = 0xffffffff;
        _memset(&local_48,0,0x30);
        local_48.cbSize = 0x30;
        local_48.fMask = 1;
        BVar6 = GetMenuItemInfoW((HMENU)hmenu,0xf060,0,&local_48);
        if ((BVar6 == 0) || (((byte)local_48.fState & 3) != 0)) {
          *(undefined4 *)(pCVar8 + 0xd4) = 1;
        }
        CMFCRibbonButtonsGroup::AddButton((CMFCRibbonButtonsGroup *)(this + 0x340),pCVar8);
        *(int *)(this + 0x2d0) = *(int *)(this + 0x2d0) + 1;
      }
    }
    *(int *)(this + 0x2fc) = param_1;
    *(undefined4 *)(this + 0x338) = 0;
    *(undefined4 *)(this + 0x33c) = 0;
    pcVar1 = *(code **)(*(int *)this + 0x210);
    guard_check_icall();
    (*pcVar1)();
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  return;
}

