// rea decompile_all
// name: CList<HWND__*,HWND__*&>::Find
// address: 0x46899c
// body: available
// range: 0x46899c-0x4689cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CList<struct HWND__ *,struct HWND__ * &>::Find(struct
   HWND__ * &,struct __POSITION *)const 
   
   Library: Visual Studio 2015 Release */

__POSITION * __thiscall
CList<HWND__*,HWND__*&>::Find(CList<HWND__*,HWND__*&> *this,HWND__ **param_1,__POSITION *param_2)

{
  int iVar1;
  
  if (param_2 != (__POSITION *)0x0) goto LAB_004689bc;
  param_2 = *(__POSITION **)(this + 4);
  while( true ) {
    if (param_2 == (__POSITION *)0x0) {
      return (__POSITION *)0x0;
    }
    iVar1 = FUN_00483fe9(param_2 + 8,param_1);
    if (iVar1 != 0) break;
LAB_004689bc:
    param_2 = *(__POSITION **)param_2;
  }
  return param_2;
}

