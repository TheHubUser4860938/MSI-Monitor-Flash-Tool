// rea decompile_all
// name: CMFCVisualManagerWindows::OnUpdateSystemColors
// address: 0x423d73
// body: available
// range: 0x423d73-0x423ed5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnUpdateSystemColors(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManagerWindows::OnUpdateSystemColors(CMFCVisualManagerWindows *this)

{
  AFX_GLOBAL_DATA *pAVar1;
  
  FUN_004a18cc();
  *(undefined4 *)(this + 0x54) = 1;
  CMFCBaseVisualManager::UpdateSystemColors((CMFCBaseVisualManager *)this);
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 0x54) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 8),1,0,0xedb,(COLORREF *)(pAVar1 + 0x68));
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 8),1,0,0xeda,(COLORREF *)(pAVar1 + 0x54));
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 8),1,0,0xedc,(COLORREF *)(pAVar1 + 100));
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 8),1,0,0xedd,(COLORREF *)(pAVar1 + 0x5c));
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 8),1,0,0xede,(COLORREF *)(pAVar1 + 0x58));
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 8),1,0,0xedf,(COLORREF *)(pAVar1 + 0x60));
  }
  if (*(int *)(this + 0x10) != 0) {
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 0x10),1,0,0xedb,(COLORREF *)(pAVar1 + 0x28));
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 0x10),1,0,0xeda,(COLORREF *)(pAVar1 + 0x1c));
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 0x10),1,0,0xedc,(COLORREF *)(pAVar1 + 0x34));
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 0x10),1,0,0xedd,(COLORREF *)(pAVar1 + 0x24));
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 0x10),1,0,0xede,(COLORREF *)(pAVar1 + 0x20));
    pAVar1 = GetGlobalData();
    GetThemeColor(*(HTHEME *)(this + 0x10),1,0,0xedf,(COLORREF *)(pAVar1 + 0x30));
  }
  return;
}

