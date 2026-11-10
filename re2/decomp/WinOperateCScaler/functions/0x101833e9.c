// rea decompile_all
// name: construct_ptd
// address: 0x101833e9
// body: available
// range: 0x101833e9-0x10183461 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl construct_ptd(struct __acrt_ptd * const,struct __crt_locale_data * * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl construct_ptd(__acrt_ptd *param_1,__crt_locale_data **param_2)

{
  __acrt_ptd **local_c;
  __acrt_ptd **local_8;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined **)param_1 = &DAT_101d8b00;
  *(undefined4 *)(param_1 + 0x350) = 1;
  *(undefined4 **)(param_1 + 0x48) = &DAT_10202760;
  *(undefined2 *)(param_1 + 0x6c) = 0x43;
  *(undefined2 *)(param_1 + 0x172) = 0x43;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  local_8 = &param_1;
  __acrt_lock_and_call<<lambda_e69574bed617af4e071282c136b37893>_>
            (5,(<lambda_e69574bed617af4e071282c136b37893> *)&local_8);
  local_c = &param_1;
  local_8 = (__acrt_ptd **)&param_2;
  __acrt_lock_and_call<<lambda_b2ea41f6bbb362cd97d94c6828d90b61>_>
            (4,(<lambda_b2ea41f6bbb362cd97d94c6828d90b61> *)&local_c);
  return;
}

