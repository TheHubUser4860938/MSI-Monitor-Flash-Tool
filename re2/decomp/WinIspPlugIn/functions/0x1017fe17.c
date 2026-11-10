// rea decompile_all
// name: dllmain_crt_dispatch
// address: 0x1017fe17
// body: available
// range: 0x1017fe17-0x1017fe69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall dllmain_crt_dispatch(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2015 Release */

int dllmain_crt_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = dllmain_crt_process_detach(param_3 != (void *)0x0);
  }
  else if (param_2 == 1) {
    uVar1 = dllmain_crt_process_attach(param_1,param_3);
  }
  else {
    if (param_2 == 2) {
      uVar1 = ___scrt_dllmain_crt_thread_attach();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      uVar1 = ___scrt_dllmain_crt_thread_detach();
    }
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}

