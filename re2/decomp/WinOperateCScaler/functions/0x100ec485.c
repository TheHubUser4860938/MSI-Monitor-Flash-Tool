// rea decompile_all
// name: CFrameImpl::OnNcActivate
// address: 0x100ec485
// body: available
// range: 0x100ec485-0x100ec5ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::OnNcActivate(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFrameImpl::OnNcActivate(CFrameImpl *this,int param_1)

{
  code *pcVar1;
  BOOL BVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  AFX_GLOBAL_DATA *this_00;
  int iVar5;
  bool bVar6;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x2c) == 0) {
    if (((param_1 == 0) && (*(int *)(this + 0xfc) != 0)) &&
       (BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar2 != 0)) {
      CMFCRibbonBar::HideKeyTips(*(CMFCRibbonBar **)(this + 0xfc));
      CMFCRibbonBar::DeactivateKeyboardFocus(*(CMFCRibbonBar **)(this + 0xfc),0);
    }
    BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
    if (BVar2 != 0) {
      pCVar3 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x204);
      guard_check_icall(*(undefined4 *)(this + 0xb0),param_1);
      iVar5 = (*pcVar1)();
      bVar6 = false;
      if (((iVar5 != 0) && (*(int *)(this + 0xfc) != 0)) &&
         ((BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar2 != 0 &&
          (*(int *)(*(int *)(this + 0xfc) + 0x328) != 0)))) {
        RedrawWindow(*(HWND *)(*(int *)(this + 0xfc) + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
        RedrawWindow(*(HWND *)(*(int *)(this + 0xb0) + 0x20),(RECT *)0x0,(HRGN)0x0,0x501);
        bVar6 = true;
      }
      iVar4 = *(int *)(this + 0x100);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
        RedrawWindow(*(HWND *)(iVar4 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      }
      if ((!bVar6) && (iVar4 = IsOwnerDrawCaption(this), iVar4 != 0)) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        RedrawWindow(*(HWND *)(*(int *)(this + 0xb0) + 0x20),&local_18,(HRGN)0x0,0x541);
      }
      if (iVar5 != 0) {
        this_00 = GetGlobalData();
        AFX_GLOBAL_DATA::IsDwmCompositionEnabled(this_00);
      }
    }
  }
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

