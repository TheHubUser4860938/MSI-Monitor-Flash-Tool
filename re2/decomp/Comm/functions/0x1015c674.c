// rea decompile_all
// name: common_initialize_environment_nolock<char>
// address: 0x1015c674
// body: available
// range: 0x1015c674-0x1015c6cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_initialize_environment_nolock<char>(void)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_initialize_environment_nolock<char>(void)

{
  void *_Memory;
  char **ppcVar1;
  int iVar2;
  
  if (DAT_101de858 != 0) {
    return 0;
  }
  ___acrt_initialize_multibyte();
  _Memory = (void *)___dcrt_get_narrow_environment_from_os();
  if (_Memory == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    ppcVar1 = (char **)FUN_1015c6cd(_Memory);
    if (ppcVar1 == (char **)0x0) {
      iVar2 = -1;
    }
    else {
      DAT_101de864 = ppcVar1;
      __crt_state_management::dual_state_global<char**>::initialize
                ((dual_state_global<char**> *)&DAT_101de858,ppcVar1);
      iVar2 = 0;
    }
    FID_conflict__free((void *)0x0);
  }
  FID_conflict__free(_Memory);
  return iVar2;
}

