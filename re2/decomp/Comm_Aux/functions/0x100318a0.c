// rea decompile_all
// name: FUN_100318a0
// address: 0x100318a0
// body: available
// range: 0x100318a0-0x100319ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HLOCAL FUN_100318a0(undefined4 param_1,wchar_t *param_2)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t local_21c [264];
  int local_c;
  HLOCAL local_8;
  
  local_8 = (HLOCAL)0x0;
  if (param_2 != (wchar_t *)0x0) {
    pwVar4 = local_21c;
    for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
      pwVar4[0] = L'\0';
      pwVar4[1] = L'\0';
      pwVar4 = pwVar4 + 2;
    }
    *pwVar4 = L'\0';
    if ((DAT_1020bc18 == (HMODULE)0x0) &&
       (DAT_1020bc18 = (HMODULE)FUN_10030a40(u_Shell32_dll_10205070,0), DAT_1020bc18 != (HMODULE)0x0
       )) {
      DAT_1020bc1c = GetProcAddress(DAT_1020bc18,s_SHGetFolderPathW_10205088);
    }
    if (DAT_1020bc1c == (FARPROC)0x0) {
      local_8 = (HLOCAL)0x0;
    }
    else {
      local_c = (*DAT_1020bc1c)(0,param_1,0,0,local_21c);
      if (local_c == 0) {
        sVar1 = _wcslen(local_21c);
        sVar2 = _wcslen(param_2);
        iVar3 = sVar1 + 2 + sVar2;
        local_8 = LocalAlloc(0x40,iVar3 * 2);
        if (local_8 == (HLOCAL)0x0) {
          local_8 = (HLOCAL)0x0;
        }
        else {
          FUN_100329b0(local_8,iVar3,local_21c);
          FUN_10032830(local_8,iVar3,&DAT_1020509c);
          FUN_10032830(local_8,iVar3,param_2);
        }
      }
    }
  }
  return local_8;
}

