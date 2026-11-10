// rea decompile_all
// name: CSmartDockingManager::ShowTabbedPlaceAt
// address: 0x100fee11
// body: available
// range: 0x100fee11-0x100feea2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingManager::ShowTabbedPlaceAt(class CRect,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingManager::ShowTabbedPlaceAt
          (CSmartDockingManager *this,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
          int param_6,int param_7,int param_8)

{
  int yTop;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 4) != 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    if (DAT_102478d4 == 0) {
      yTop = param_5 - param_3;
      param_8 = param_8 + yTop;
    }
    else {
      yTop = param_3 - param_8;
      param_8 = param_3;
    }
    SetRect(&local_18,param_6,yTop,param_7 + param_6,param_8);
    CSmartDockingHighlighterWnd::ShowTabbedAt
              ((CSmartDockingHighlighterWnd *)(this + 0x30),param_2,param_3,param_4,param_5,
               local_18.left,local_18.top,local_18.right,local_18.bottom);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

