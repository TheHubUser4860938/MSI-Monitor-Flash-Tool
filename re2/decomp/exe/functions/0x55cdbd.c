// rea decompile_all
// name: __Wcrtomb
// address: 0x55cdbd
// body: available
// range: 0x55cdbd-0x55ce1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Wcrtomb
   
   Library: Visual Studio 2015 Release */

int __cdecl __Wcrtomb(char *param_1,wchar_t param_2,mbstate_t *param_3,_Cvtvec *param_4)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  BOOL local_8;
  
  if (param_4->_Isclocale == 0) {
    local_8 = 0;
    iVar1 = WideCharToMultiByte(param_4->_Page,0,&param_2,1,param_1,param_4->_Mbcurmax,(LPCSTR)0x0,
                                &local_8);
    if ((iVar1 != 0) && (local_8 == 0)) {
      return iVar1;
    }
  }
  else {
    local_8 = in_ECX;
    if ((ushort)param_2 < 0x100) {
      *param_1 = (char)param_2;
      return 1;
    }
  }
  piVar2 = __errno();
  *piVar2 = 0x2a;
  return -1;
}

