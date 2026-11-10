// rea decompile_all
// name: dllmain_dispatch
// address: 0x10148f9a
// body: available
// range: 0x10148f9a-0x1014905f inclusive
// range: 0x10149084-0x10149095 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) && (DAT_101de294 < 1)) {
    return 0;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    iVar1 = dllmain_raw(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = _DllMain_12(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVar1 == 0)) {
    _DllMain_12(param_1,0,param_3);
    dllmain_crt_dispatch(param_1,0,param_3);
    dllmain_raw(param_1,0,param_3);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = dllmain_crt_dispatch(param_1,param_2,param_3);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = dllmain_raw(param_1,param_2,param_3);
    }
  }
  return iVar1;
}

