// rea decompile_all
// name: initialize_environment_by_cloning_nolock<char>
// address: 0x588bc0
// body: available
// range: 0x588bc0-0x588c3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl initialize_environment_by_cloning_nolock<char>(void)
   
   Library: Visual Studio 2015 Release */

int __cdecl initialize_environment_by_cloning_nolock<char>(void)

{
  int iVar1;
  LPSTR lpMultiByteStr;
  int *piVar2;
  
  piVar2 = DAT_00618f10;
  if (DAT_00618f10 == (int *)0x0) {
    return -1;
  }
  while( true ) {
    if (*piVar2 == 0) {
      return 0;
    }
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*piVar2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    lpMultiByteStr = (LPSTR)__calloc_base(iVar1,1);
    if ((lpMultiByteStr == (LPSTR)0x0) ||
       (iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*piVar2,-1,lpMultiByteStr,iVar1,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) {
      FID_conflict__free(lpMultiByteStr);
      return -1;
    }
    FUN_00594002(lpMultiByteStr,0);
    FID_conflict__free((void *)0x0);
    piVar2 = piVar2 + 1;
  }
  return -1;
}

