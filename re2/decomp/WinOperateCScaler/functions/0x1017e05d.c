// rea decompile_all
// name: __crt_strtox::parse_floating_point_possible_infinity<char,__crt_strtox::c_string_character_source<char>,char_const*>
// address: 0x1017e05d
// body: available
// range: 0x1017e05d-0x1017e109 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_infinity<char,class
   __crt_strtox::c_string_character_source<char>,char const *>(char &,class
   __crt_strtox::c_string_character_source<char> &,char const *)
   
   Library: Visual Studio 2015 Release */

floating_point_parse_result __cdecl
__crt_strtox::
parse_floating_point_possible_infinity<char,__crt_strtox::c_string_character_source<char>,char_const*>
          (char *param_1,c_string_character_source<char> *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  c_string_character_source<char> *local_10;
  char *local_c;
  char **local_8;
  
  local_8 = &param_3;
  iVar4 = 0;
  local_10 = param_2;
  local_c = param_1;
  iVar3 = 0;
  while ((*param_1 == (&DAT_101d8a78)[iVar3] || (*param_1 == (&DAT_101d8a7c)[iVar3]))) {
    cVar1 = **(char **)param_2;
    iVar3 = iVar3 + 1;
    *(char **)param_2 = *(char **)param_2 + 1;
    *param_1 = cVar1;
    if (iVar3 == 3) {
      c_string_character_source<char>::unget(param_2,cVar1);
      param_3 = *(char **)param_2;
      cVar1 = *param_3;
      *(char **)param_2 = param_3 + 1;
      *param_1 = cVar1;
      while ((*param_1 == "INITY"[iVar4] || (*param_1 == "inity"[iVar4]))) {
        cVar1 = **(char **)param_2;
        iVar4 = iVar4 + 1;
        *(char **)param_2 = *(char **)param_2 + 1;
        *param_1 = cVar1;
        if (iVar4 == 5) {
          c_string_character_source<char>::unget(param_2,cVar1);
          return 3;
        }
      }
      bVar2 = <lambda_3a2f1c4b88a94fdfdc7bccff06592946>::operator()
                        ((<lambda_3a2f1c4b88a94fdfdc7bccff06592946> *)&local_10);
      return (uint)!bVar2 * 4 + 3;
    }
  }
  <lambda_3a2f1c4b88a94fdfdc7bccff06592946>::operator()
            ((<lambda_3a2f1c4b88a94fdfdc7bccff06592946> *)&local_10);
  return 7;
}

