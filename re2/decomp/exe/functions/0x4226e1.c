// rea decompile_all
// name: CMFCVisualManagerWindows::OnDrawSpinButtons
// address: 0x4226e1
// body: available
// range: 0x4226e1-0x422838 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnDrawSpinButtons(class CDC *,class
   CRect,int,int,class CMFCSpinButtonCtrl *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnDrawSpinButtons
          (CMFCVisualManagerWindows *this,int param_1,int param_3,int param_4,int param_5,
          int param_6,uint param_7,int param_8,undefined4 param_9)

{
  int iStateId;
  HDC pHVar1;
  int iStateId_00;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (*(HTHEME *)(this + 0x3c) == (HTHEME)0x0) {
    CMFCVisualManagerOfficeXP::OnDrawSpinButtons
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9);
  }
  else {
    local_18.left = param_3;
    local_18.top = param_4;
    local_18.right = param_5;
    local_18.bottom = param_6;
    if (param_8 == 0) {
      local_18.bottom = (param_4 + param_6) / 2;
    }
    else {
      local_18.left = (param_5 + param_3) / 2;
    }
    iStateId_00 = 1;
    iStateId = 1;
    if ((param_7 & 0x10) == 0) {
      if ((param_7 & 1) == 0) {
        if ((param_7 & 4) != 0) {
          iStateId = 2;
        }
      }
      else {
        iStateId = 3;
      }
    }
    else {
      iStateId = 4;
    }
    if (param_1 == 0) {
      pHVar1 = (HDC)0x0;
    }
    else {
      pHVar1 = *(HDC *)(param_1 + 4);
    }
    DrawThemeBackground(*(HTHEME *)(this + 0x3c),pHVar1,(uint)(param_8 != 0) * 2 + 1,iStateId,
                        &local_18,(LPCRECT)0x0);
    local_28.left = param_3;
    local_28.top = param_4;
    local_28.right = param_5;
    local_28.bottom = param_6;
    if (param_8 == 0) {
      local_28.top = (param_4 + param_6) / 2;
    }
    else {
      local_28.right = (param_5 + param_3) / 2;
    }
    if ((param_7 & 0x10) == 0) {
      if ((param_7 & 2) == 0) {
        if ((param_7 & 8) != 0) {
          iStateId_00 = 2;
        }
      }
      else {
        iStateId_00 = 3;
      }
    }
    else {
      iStateId_00 = 4;
    }
    if (param_1 == 0) {
      pHVar1 = (HDC)0x0;
    }
    else {
      pHVar1 = *(HDC *)(param_1 + 4);
    }
    DrawThemeBackground(*(HTHEME *)(this + 0x3c),pHVar1,(uint)(param_8 != 0) * 2 + 2,iStateId_00,
                        &local_28,(LPCRECT)0x0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

