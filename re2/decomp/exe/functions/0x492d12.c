// rea decompile_all
// name: CFrameImpl::OnActivateApp
// address: 0x492d12
// body: available
// range: 0x492d12-0x492dac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::OnActivateApp(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameImpl::OnActivateApp(CFrameImpl *this,int param_1)

{
  code *pcVar1;
  CMFCVisualManager *pCVar2;
  BOOL BVar3;
  AFX_GLOBAL_DATA *pAVar4;
  
  if (*(int *)(this + 0x2c) == 0) {
    pCVar2 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x1fc);
    guard_check_icall(*(undefined4 *)(this + 0xb0),param_1);
    (*pcVar1)();
    if (param_1 == 0) {
      if ((*(int *)(this + 0xfc) != 0) &&
         (BVar3 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar3 != 0)) {
        CMFCRibbonBar::HideKeyTips(*(CMFCRibbonBar **)(this + 0xfc));
        CMFCRibbonBar::OnCancelMode(*(CMFCRibbonBar **)(this + 0xfc));
      }
      pAVar4 = GetGlobalData();
      if ((*(int *)(pAVar4 + 0x1a4) == 0) &&
         (pAVar4 = GetGlobalData(), *(int *)(pAVar4 + 0x1a0) != 0)) {
        pAVar4 = GetGlobalData();
        *(undefined4 *)(pAVar4 + 0x1a0) = 0;
        FUN_004586ac();
      }
    }
  }
  return;
}

