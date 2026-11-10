// rea decompile_all
// name: COleException::GetErrorMessage
// address: 0x10038bd9
// body: available
// range: 0x10038bd9-0x10038c31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall COleException::GetErrorMessage(wchar_t *,unsigned int,unsigned
   int *)const 
   
   Library: Visual Studio 2008 Release */

int __thiscall
COleException::GetErrorMessage(COleException *this,wchar_t *param_1,uint param_2,uint *param_3)

{
  DWORD DVar1;
  
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  DVar1 = FormatMessageW(0x1100,(LPCVOID)0x0,*(DWORD *)(this + 8),0x800,(LPWSTR)&param_3,0,
                         (va_list *)0x0);
  if (DVar1 != 0) {
    ATL::Checked::tcsncpy_s(param_1,param_2,(wchar_t *)param_3,0xffffffff);
    LocalFree(param_3);
  }
  else {
    *param_1 = L'\0';
  }
  return (uint)(DVar1 != 0);
}

