// rea decompile_all
// name: CMFCCaptionButton::GetIconID
// address: 0x1014d4d5
// body: available
// range: 0x1014d4d5-0x1014d547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual enum CMenuImages::IMAGES_IDS __thiscall
   CMFCCaptionButton::GetIconID(int,int)const 
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release */

IMAGES_IDS __thiscall CMFCCaptionButton::GetIconID(CMFCCaptionButton *this,int param_1,int param_2)

{
  uint uVar1;
  IMAGES_IDS IVar2;
  
  uVar1 = *(uint *)(this + 0x1c);
  if (uVar1 == 8) {
    if (param_1 == 0) {
      IVar2 = (-(uint)(param_2 != 0) & 6) + 7;
    }
    else {
      IVar2 = (uint)(param_2 != 0) * 8 + 1;
    }
  }
  else if (uVar1 == 9) {
    IVar2 = 0x10 - (param_2 != 0);
  }
  else {
    if (0x12 < uVar1) {
      if (uVar1 < 0x15) {
        return 5;
      }
      if (uVar1 == 0x17) {
        return 0x1b;
      }
      if (uVar1 == 0x18) {
        return 0x1c;
      }
      if (uVar1 == 0x19) {
        return 0xd;
      }
    }
    IVar2 = 0xffffffff;
  }
  return IVar2;
}

