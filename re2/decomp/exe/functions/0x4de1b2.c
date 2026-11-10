// rea decompile_all
// name: CBasePane::GetDockSiteFrameWnd
// address: 0x4de1b2
// body: available
// range: 0x4de1b2-0x4de21b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CWnd * __thiscall CBasePane::GetDockSiteFrameWnd(void)const 
   
   Library: Visual Studio 2015 Release */

CWnd * __thiscall CBasePane::GetDockSiteFrameWnd(CBasePane *this)

{
  HWND pHVar1;
  int iVar2;
  CWnd *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(this + 0xa4) == 0) {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
    CWnd::FromHandle(pHVar1);
    iVar2 = FUN_0043970d(&PTR_s_CDialog_005aede0);
    if (iVar2 != 0) {
      pHVar1 = GetParent(*(HWND *)(this + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar1);
      iVar2 = 0;
      if (pCVar3 != (CWnd *)0x0) {
        iVar2 = *(int *)(pCVar3 + 0x20);
      }
      pCVar3 = AfxGetMainWnd();
      if (pCVar3 != (CWnd *)0x0) {
        iVar4 = *(int *)(pCVar3 + 0x20);
      }
      if (iVar2 == iVar4) {
        DAT_0060c460 = 1;
      }
    }
  }
  return *(CWnd **)(this + 0xa4);
}

