// rea decompile_all
// name: CDataBoundProperty::GetCursor
// address: 0x4437a6
// body: available
// range: 0x4437a6-0x443801 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct IUnknown * __thiscall CDataBoundProperty::GetCursor(void)
   
   Library: Visual Studio 2015 Release */

IUnknown * __thiscall CDataBoundProperty::GetCursor(CDataBoundProperty *this)

{
  code *pcVar1;
  IUnknown *pIVar2;
  
  if (*(int **)(this + 0xc) == (int *)0x0) {
    pIVar2 = (IUnknown *)0x0;
  }
  else {
    pcVar1 = *(code **)(**(int **)(this + 0xc) + 0xb4);
    guard_check_icall();
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(*(int *)(this + 0xc) + 0x90) + 8);
    guard_check_icall(this,1);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(*(int *)(this + 0xc) + 0x90) + 4);
    guard_check_icall();
    pIVar2 = (IUnknown *)(*pcVar1)();
  }
  return pIVar2;
}

