// rea decompile_all
// name: _com_error::_com_error
// address: 0x1017ff20
// body: available
// range: 0x1017ff20-0x1017ff60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall _com_error::_com_error(long,struct IErrorInfo *,bool)
   
   Library: Visual Studio 2015 Release */

_com_error * __thiscall
_com_error::_com_error(_com_error *this,long param_1,IErrorInfo *param_2,bool param_3)

{
  code *pcVar1;
  
  *(undefined ***)this = &PTR__scalar_deleting_destructor__101dcc74;
  *(long *)(this + 4) = param_1;
  *(IErrorInfo **)(this + 8) = param_2;
  *(undefined4 *)(this + 0xc) = 0;
  if ((param_2 != (IErrorInfo *)0x0) && (param_3)) {
    pcVar1 = *(code **)(*(int *)param_2 + 4);
    guard_check_icall(param_2);
    (*pcVar1)();
  }
  return this;
}

