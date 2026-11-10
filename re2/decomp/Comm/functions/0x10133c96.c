// rea decompile_all
// name: COleStreamFile::Seek
// address: 0x10133c96
// body: available
// range: 0x10133c96-0x10133cd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned __int64 __thiscall COleStreamFile::Seek(__int64,unsigned int)
   
   Library: Visual Studio 2015 Release */

__uint64 __thiscall COleStreamFile::Seek(COleStreamFile *this,__int64 param_1,uint param_2)

{
  int iVar1;
  COleStreamFile *local_c;
  COleStreamFile *local_8;
  
  iVar1 = **(int **)(this + 0x14);
  local_c = this;
  local_8 = this;
  guard_check_icall(*(int **)(this + 0x14),param_1,param_2,&local_c);
  iVar1 = (**(code **)(iVar1 + 0x14))();
  if (iVar1 != 0) {
    _AfxThrowOleFileException(iVar1);
  }
  return CONCAT44(local_8,local_c);
}

