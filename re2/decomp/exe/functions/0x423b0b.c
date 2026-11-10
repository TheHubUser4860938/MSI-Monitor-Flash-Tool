// rea decompile_all
// name: CMFCVisualManagerWindows::OnFillOutlookPageButton
// address: 0x423b0b
// body: available
// range: 0x423b0b-0x423ba4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnFillOutlookPageButton(class CDC
   *,class CRect const &,int,int,unsigned long &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnFillOutlookPageButton
          (CMFCVisualManagerWindows *this,CDC *param_1,CRect *param_2,int param_3,int param_4,
          ulong *param_5)

{
  HDC hdc;
  int iStateId;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x10) == 0) {
    CMFCVisualManager::OnFillOutlookPageButton
              ((CMFCVisualManager *)this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    iStateId = 1;
    if (param_3 == 0) {
      if (param_4 != 0) {
        iStateId = 2;
      }
    }
    else {
      iStateId = 3;
    }
    local_18.left = *(LONG *)param_2;
    local_18.top = *(LONG *)(param_2 + 4);
    local_18.right = *(LONG *)(param_2 + 8);
    local_18.bottom = *(LONG *)(param_2 + 0xc);
    InflateRect(&local_18,1,1);
    hdc = (HDC)0x0;
    if (param_1 != (CDC *)0x0) {
      hdc = *(HDC *)(param_1 + 4);
    }
    DrawThemeBackground(*(HTHEME *)(this + 0x10),hdc,1,iStateId,&local_18,(LPCRECT)0x0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

