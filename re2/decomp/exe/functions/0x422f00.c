// rea decompile_all
// name: CMFCVisualManagerWindows::OnDrawTasksGroupAreaBorder
// address: 0x422f00
// body: available
// range: 0x422f00-0x422f9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnDrawTasksGroupAreaBorder(class CDC
   *,class CRect,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnDrawTasksGroupAreaBorder
          (CMFCVisualManagerWindows *this,int param_1,LONG param_3,int param_4,LONG param_5,
          undefined4 param_6,int param_7,int param_8)

{
  HDC hdc;
  int iPartId;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (*(HTHEME *)(this + 0x28) == (HTHEME)0x0) {
    FUN_004a026f(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else if (param_8 != 0) {
    local_18.bottom = param_4 + 1;
    local_18.left = param_3;
    local_18.top = param_4;
    local_18.right = param_5;
    if (param_7 == 0) {
      if (param_1 == 0) {
        hdc = (HDC)0x0;
      }
      else {
        hdc = *(HDC *)(param_1 + 4);
      }
      iPartId = 8;
    }
    else {
      if (param_1 == 0) {
        hdc = (HDC)0x0;
      }
      else {
        hdc = *(HDC *)(param_1 + 4);
      }
      iPartId = 0xc;
    }
    DrawThemeBackground(*(HTHEME *)(this + 0x28),hdc,iPartId,0,&local_18,(LPCRECT)0x0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

