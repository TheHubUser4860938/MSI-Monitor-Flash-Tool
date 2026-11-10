// rea decompile_all
// name: CMFCToolBarImages::MirrorVert
// address: 0x100878fb
// body: available
// range: 0x100878fb-0x1008793f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::MirrorVert(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarImages::MirrorVert(CMFCToolBarImages *this)

{
  int iVar1;
  
  iVar1 = FUN_10087664(this + 0x8c,*(undefined4 *)(this + 0x58));
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x90) != 0) {
    FUN_10087664(this + 0x90,*(undefined4 *)(this + 0x58));
  }
  if (*(int *)(this + 0x94) != 0) {
    FUN_10087664(this + 0x94,*(undefined4 *)(this + 0x58));
  }
  return 1;
}

