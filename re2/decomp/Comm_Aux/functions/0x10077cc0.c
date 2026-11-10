// rea decompile_all
// name: CList<HWND__*,HWND__*>::AddTail
// address: 0x10077cc0
// body: available
// range: 0x10077cc0-0x10077ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CList<struct HWND__ *,struct HWND__ *>::AddTail(struct
   HWND__ *)
   
   Library: Visual Studio 2015 Release */

__POSITION * __thiscall
CList<HWND__*,HWND__*>::AddTail(CList<HWND__*,HWND__*> *this,HWND__ *param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = (__POSITION *)FUN_100e3bc3(*(undefined4 *)(this + 8),0);
  *(HWND__ **)(p_Var1 + 8) = param_1;
  if (*(undefined4 **)(this + 8) == (undefined4 *)0x0) {
    *(__POSITION **)(this + 4) = p_Var1;
  }
  else {
    **(undefined4 **)(this + 8) = p_Var1;
  }
  *(__POSITION **)(this + 8) = p_Var1;
  return p_Var1;
}

