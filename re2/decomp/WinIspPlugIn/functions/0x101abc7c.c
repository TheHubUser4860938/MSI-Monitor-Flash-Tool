// rea decompile_all
// name: common_configure_argv<char>
// address: 0x101abc7c
// body: available
// range: 0x101abc7c-0x101abd9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __cdecl common_configure_argv<char>(enum _crt_argv_mode)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_configure_argv<char>(_crt_argv_mode param_1)

{
  int *piVar1;
  char **ppcVar2;
  char *pcVar3;
  char **ppcVar4;
  int iVar5;
  uint local_10;
  char **local_c;
  uint local_8;
  
  if ((param_1 == 2) || (param_1 == 1)) {
    ___acrt_initialize_multibyte();
    iVar5 = 0;
    GetModuleFileNameA((HMODULE)0x0,&DAT_10249658,0x104);
    _DAT_10249630 = &DAT_10249658;
    if ((DAT_10249628 == (char *)0x0) || (pcVar3 = DAT_10249628, *DAT_10249628 == '\0')) {
      pcVar3 = &DAT_10249658;
    }
    local_8 = 0;
    local_10 = 0;
    parse_command_line<char>(pcVar3,(char **)0x0,(char *)0x0,&local_8,&local_10);
    ppcVar2 = (char **)___acrt_allocate_buffer_for_argv(local_8,local_10,1);
    ppcVar4 = ppcVar2;
    if (ppcVar2 == (char **)0x0) {
      piVar1 = __errno();
      iVar5 = 0xc;
      *piVar1 = 0xc;
    }
    else {
      parse_command_line<char>(pcVar3,ppcVar2,(char *)(ppcVar2 + local_8),&local_8,&local_10);
      if (param_1 == 1) {
        _DAT_1024961c = local_8 - 1;
        ppcVar4 = (char **)0x0;
        DAT_10249620 = ppcVar2;
      }
      else {
        local_c = (char **)0x0;
        iVar5 = FUN_101b865b(ppcVar2,&local_c);
        ppcVar2 = local_c;
        if (iVar5 == 0) {
          _DAT_1024961c = 0;
          pcVar3 = *local_c;
          while (pcVar3 != (char *)0x0) {
            local_c = local_c + 1;
            _DAT_1024961c = _DAT_1024961c + 1;
            pcVar3 = *local_c;
          }
          local_c = (char **)0x0;
          iVar5 = 0;
          DAT_10249620 = ppcVar2;
        }
        FID_conflict__free(local_c);
        local_c = (char **)0x0;
      }
    }
    FID_conflict__free(ppcVar4);
  }
  else {
    piVar1 = __errno();
    iVar5 = 0x16;
    *piVar1 = 0x16;
    FUN_1019ab61();
  }
  return iVar5;
}

