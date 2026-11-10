// rea decompile_all
// name: ___dcrt_get_narrow_environment_from_os
// address: 0x10166648
// body: available
// range: 0x10166648-0x101666ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___dcrt_get_narrow_environment_from_os
   
   Library: Visual Studio 2015 Release */

LPSTR ___dcrt_get_narrow_environment_from_os(void)

{
  LPWCH lpWideCharStr;
  wchar_t *pwVar1;
  int iVar2;
  LPSTR lpMultiByteStr;
  int cchWideChar;
  LPSTR pCVar3;
  
  lpWideCharStr = GetEnvironmentStringsW();
  if (lpWideCharStr != (LPWCH)0x0) {
    pwVar1 = find_end_of_double_null_terminated_sequence(lpWideCharStr);
    cchWideChar = (int)pwVar1 - (int)lpWideCharStr >> 1;
    iVar2 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar2 != 0) {
      lpMultiByteStr = (LPSTR)__malloc_base(iVar2);
      if (lpMultiByteStr == (LPSTR)0x0) {
LAB_101666aa:
        pCVar3 = (LPSTR)0x0;
      }
      else {
        iVar2 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,lpMultiByteStr,iVar2,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar2 == 0) goto LAB_101666aa;
        pCVar3 = lpMultiByteStr;
        lpMultiByteStr = (LPSTR)0x0;
      }
      FID_conflict__free(lpMultiByteStr);
      goto LAB_101666b7;
    }
  }
  pCVar3 = (LPSTR)0x0;
LAB_101666b7:
  if (lpWideCharStr != (LPWCH)0x0) {
    FreeEnvironmentStringsW(lpWideCharStr);
  }
  return pCVar3;
}

