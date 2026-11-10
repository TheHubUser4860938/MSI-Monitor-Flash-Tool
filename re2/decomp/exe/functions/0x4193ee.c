// rea decompile_all
// name: CMFCBaseVisualManager::DrawCheckBox
// address: 0x4193ee
// body: available
// range: 0x4193ee-0x4194ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseVisualManager::DrawCheckBox(class CDC *,class
   CRect,int,int,int,int)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

int __thiscall CMFCBaseVisualManager::DrawCheckBox(CMFCBaseVisualManager *this,int param_1)

{
  int iVar1;
  int iVar2;
  HDC hdc;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int iStateId;
  
  if (*(HTHEME *)(this + 0x10) == (HTHEME)0x0) {
    iVar1 = 0;
  }
  else {
    iVar2 = in_stack_0000001c;
    if (in_stack_0000001c < 0) {
      iVar2 = 0;
    }
    if (2 < iVar2) {
      iVar2 = 2;
    }
    iVar1 = 1;
    if (iVar2 == 1) {
      iStateId = 5;
    }
    else {
      iStateId = (uint)(iVar2 == 2) * 8 + 1;
    }
    if (in_stack_00000020 == 0) {
      if (iVar2 == 1) {
        iStateId = 8;
      }
      else {
        iStateId = (uint)(iVar2 == 2) * 8 + 4;
      }
    }
    else if (in_stack_00000024 == 0) {
      if (in_stack_00000018 != 0) {
        if (iVar2 == 1) {
          iStateId = 6;
        }
        else {
          iStateId = (uint)(iVar2 == 2) * 8 + 2;
        }
      }
    }
    else if (iVar2 == 1) {
      iStateId = 7;
    }
    else {
      iStateId = (uint)(iVar2 == 2) * 8 + 3;
    }
    if (param_1 == 0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(param_1 + 4);
    }
    DrawThemeBackground(*(HTHEME *)(this + 0x10),hdc,3,iStateId,(LPCRECT)&stack0x00000008,
                        (LPCRECT)0x0);
  }
  return iVar1;
}

