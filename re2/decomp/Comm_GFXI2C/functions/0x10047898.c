// rea decompile_all
// name: ___DllMainCRTStartup
// address: 0x10047898
// body: available
// range: 0x10047898-0x1004796a inclusive
// range: 0x1004797f-0x1004798d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1004792a) */
/* WARNING: Removing unreachable block (ram,0x100478d7) */
/* WARNING: Removing unreachable block (ram,0x10047957) */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,HINSTANCE__ *param_3)

{
  int iVar1;
  int local_20;
  
  if (((param_2 == 0) && (DAT_10068bf4 == 0)) ||
     (((param_2 == 1 || (param_2 == 2)) &&
      (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0)))) {
    local_20 = 0;
  }
  else {
    local_20 = _DllMain_12(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      _DllMain_12(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0)) {
      local_20 = 0;
    }
  }
  return local_20;
}

