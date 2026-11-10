// rea decompile_all
// name: CMDIClientAreaWnd::ApplyParams
// address: 0x50fb42
// body: available
// range: 0x50fb42-0x50fc3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall CMDIClientAreaWnd::ApplyParams(class CMFCTabCtrl *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIClientAreaWnd::ApplyParams(CMDIClientAreaWnd *this,CMFCTabCtrl *param_1)

{
  code *pcVar1;
  
  CMFCTabCtrl::ModifyTabStyle(param_1,*(Style *)(this + 0x2acc));
  pcVar1 = *(code **)(*(int *)param_1 + 0x278);
  guard_check_icall(*(undefined4 *)(this + 0x2ac8));
  (*pcVar1)();
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(this + 0x2ad4);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(this + 0x2aec);
  FUN_004f1f47(*(undefined4 *)(this + 0x2ae0));
  CMFCBaseTabCtrl::EnableAutoColor((CMFCBaseTabCtrl *)param_1,*(int *)(this + 0x2adc));
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(this + 0x2ae4);
  pcVar1 = *(code **)(*(int *)param_1 + 0x244);
  guard_check_icall(*(undefined4 *)(this + 0x2af0),1);
  (*pcVar1)();
  CMFCBaseTabCtrl::EnableCustomToolTips((CMFCBaseTabCtrl *)param_1,*(int *)(this + 0x2ad8));
  *(undefined4 *)(param_1 + 0x120) = 0;
  CMFCTabCtrl::HideNoTabs(param_1,1);
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  CMFCTabCtrl::SetFlatFrame(param_1,*(int *)(this + 0x2ae8),1);
  *(undefined4 *)(param_1 + 0x278) = 1;
  *(undefined4 *)(param_1 + 0x27c) = 1;
  CMFCBaseTabCtrl::SetDrawNoPrefix((CMFCBaseTabCtrl *)param_1,1,0);
  CMFCTabCtrl::SetActiveTabBoldFont(param_1,1);
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0x138) = 1;
  return;
}

