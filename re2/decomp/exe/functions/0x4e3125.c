// rea decompile_all
// name: CMultiPaneFrameWnd::StoreRecentDockSiteInfo
// address: 0x4e3125
// body: available
// range: 0x4e3125-0x4e318b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMultiPaneFrameWnd::StoreRecentDockSiteInfo(class CPane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMultiPaneFrameWnd::StoreRecentDockSiteInfo(CMultiPaneFrameWnd *this,CPane *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  undefined4 uVar3;
  CMultiPaneFrameWnd *local_8;
  
  local_8 = this;
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,(CObject *)param_1);
  if (pCVar2 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)(this + 400) + 0x8c);
    local_8 = (CMultiPaneFrameWnd *)0x1;
    guard_check_icall(pCVar2,&local_8);
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)(pCVar2 + 0x1e4) + 0xc);
    guard_check_icall(uVar3,0);
    (*pcVar1)();
  }
  return;
}

