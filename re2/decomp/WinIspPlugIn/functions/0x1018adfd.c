// rea decompile_all
// name: std::_Locinfo::_Getmonths
// address: 0x1018adfd
// body: available
// range: 0x1018adfd-0x1018ae35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: char const * __thiscall std::_Locinfo::_Getmonths(void)const 
   
   Library: Visual Studio 2015 Release */

char * __thiscall std::_Locinfo::_Getmonths(_Locinfo *this)

{
  void *_Memory;
  char *pcVar1;
  
  _Memory = (void *)FUN_1019f70a();
  if (_Memory != (void *)0x0) {
    FUN_10043960(_Memory);
    FID_conflict__free(_Memory);
  }
  if (*(int *)(this + 0xc) == 0) {
    pcVar1 = 
    ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov:November:Dec:December"
    ;
  }
  else {
    pcVar1 = *(char **)(this + 0xc);
    if ((_Locinfo *)pcVar1 == (_Locinfo *)0x0) {
      pcVar1 = (char *)(this + 0x10);
    }
  }
  return pcVar1;
}

