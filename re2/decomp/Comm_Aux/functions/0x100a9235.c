// rea decompile_all
// name: CMFCTabCtrl::SetScrollButtons
// address: 0x100a9235
// body: available
// range: 0x100a9235-0x100a931d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTabCtrl::SetScrollButtons(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTabCtrl::SetScrollButtons(CMFCTabCtrl *this)

{
  IMAGE_STATE IVar1;
  int iVar2;
  IMAGE_STATE IVar3;
  IMAGES_IDS IVar4;
  IMAGES_IDS IVar5;
  
  if ((*(int *)(this + 0x254) == 0) && (*(int *)(this + 0x290) == 0)) {
    iVar2 = 0x32;
  }
  else {
    iVar2 = 0;
  }
  CMFCButton::SetAutorepeatMode((CMFCButton *)(this + 0x3b0),iVar2);
  CMFCButton::SetAutorepeatMode((CMFCButton *)(this + 0xb58),iVar2);
  IVar1 = 0;
  IVar3 = 4;
  if (((*(int *)(this + 0x254) == 0) && (*(int *)(this + 600) == 0)) &&
     (*(int *)(this + 0x25c) == 0)) {
    IVar1 = IVar3;
  }
  CMFCButton::SetStdImage((CMFCButton *)(this + 0x3b0),0x15,IVar1,0x17);
  IVar1 = IVar3;
  if (*(int *)(this + 0x290) == 0) {
    if (((*(int *)(this + 0x254) != 0) || (*(int *)(this + 600) != 0)) ||
       (*(int *)(this + 0x25c) != 0)) {
      IVar1 = 0;
    }
    IVar5 = 0x16;
    IVar4 = 0x14;
  }
  else {
    if (((*(int *)(this + 0x254) != 0) || (*(int *)(this + 600) != 0)) ||
       (*(int *)(this + 0x25c) != 0)) {
      IVar1 = 0;
    }
    IVar5 = 0xd;
    IVar4 = 0xd;
  }
  CMFCButton::SetStdImage((CMFCButton *)(this + 0xb58),IVar4,IVar1,IVar5);
  if (((*(int *)(this + 0x254) != 0) || (*(int *)(this + 600) != 0)) ||
     (*(int *)(this + 0x25c) != 0)) {
    IVar3 = 0;
  }
  CMFCButton::SetStdImage((CMFCButton *)(this + 0x2250),5,IVar3,0);
  return;
}

