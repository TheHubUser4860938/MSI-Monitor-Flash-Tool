// rea decompile_all
// name: ___acrt_EnumSystemLocalesEx@16
// address: 0x101839f6
// body: available
// range: 0x101839f6-0x10183a62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_EnumSystemLocalesEx@16
   
   Library: Visual Studio 2015 Release */

void ___acrt_EnumSystemLocalesEx_16
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pcVar1 = try_get_function(2,"EnumSystemLocalesEx",(module_id *)&DAT_101d9934,
                            (module_id *)"EnumSystemLocalesEx");
  if (pcVar1 == (code *)0x0) {
    local_c = &param_1;
    __acrt_lock_and_call<<lambda_a463b7b0560cfcaf9b17f27c6ef46564>_>
              (4,(<lambda_a463b7b0560cfcaf9b17f27c6ef46564> *)&local_c);
  }
  else {
    guard_check_icall(param_1,param_2,param_3,param_4);
    (*pcVar1)();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

