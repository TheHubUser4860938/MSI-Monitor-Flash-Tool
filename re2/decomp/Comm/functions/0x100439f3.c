// rea decompile_all
// name: CVSListBoxBase::GetButtonNum
// address: 0x100439f3
// body: available
// range: 0x100439f3-0x10043a48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CVSListBoxBase::GetButtonNum(unsigned int)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CVSListBoxBase::GetButtonNum(CVSListBoxBase *this,uint param_1)

{
  int local_10;
  int local_c;
  uint local_8;
  
  local_c = -(uint)(*(int *)(this + 0xc4) != 0);
  do {
    if (local_c == 0) {
      return -1;
    }
    local_10 = -1;
    local_8 = 0;
    FUN_10043b12(&local_c,&local_10,&local_8);
  } while (local_8 != param_1);
  return local_10;
}

