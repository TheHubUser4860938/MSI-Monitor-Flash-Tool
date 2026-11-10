// rea decompile_all
// name: ___acrt_copy_path_to_wide_string
// address: 0x58fad0
// body: available
// range: 0x58fad0-0x58fb96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_copy_path_to_wide_string
   
   Library: Visual Studio 2015 Release */

undefined4 ___acrt_copy_path_to_wide_string(LPCSTR param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int cchWideChar;
  DWORD DVar4;
  LPWSTR lpWideCharStr;
  LPWSTR _Memory;
  
  if (param_1 == (LPCSTR)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_0057662d();
    uVar2 = 0;
  }
  else if (param_2 == (undefined4 *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_0057662d();
    uVar2 = 0;
  }
  else {
    iVar3 = ___acrt_AreFileApisANSI_0();
    uVar2 = 0;
    *param_2 = 0;
    cchWideChar = MultiByteToWideChar((uint)(iVar3 == 0),0,param_1,-1,(LPWSTR)0x0,0);
    if (cchWideChar == 0) {
      DVar4 = GetLastError();
      ___acrt_errno_map_os_error(DVar4);
      uVar2 = 0;
    }
    else {
      lpWideCharStr = (LPWSTR)__malloc_base(cchWideChar * 2);
      _Memory = lpWideCharStr;
      if (lpWideCharStr != (LPWSTR)0x0) {
        iVar3 = MultiByteToWideChar((uint)(iVar3 == 0),0,param_1,-1,lpWideCharStr,cchWideChar);
        if (iVar3 == 0) {
          DVar4 = GetLastError();
          ___acrt_errno_map_os_error(DVar4);
        }
        else {
          _Memory = (LPWSTR)0x0;
          uVar2 = 1;
          *param_2 = lpWideCharStr;
        }
      }
      FID_conflict__free(_Memory);
    }
  }
  return uVar2;
}

