// rea decompile_all
// name: __acrt_fp_classify
// address: 0x101846eb
// body: available
// range: 0x101846eb-0x10184756 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum __acrt_fp_class __cdecl __acrt_fp_classify(double const &)
   
   Library: Visual Studio 2015 Release */

__acrt_fp_class __cdecl __acrt_fp_classify(double *param_1)

{
  uint uVar1;
  undefined4 uStack_14;
  
  uVar1 = *(uint *)((int)param_1 + 4);
  if ((uVar1 >> 0x14 & 0x7ff) == 0x7ff) {
    if (*(int *)param_1 == 0 && (uVar1 & 0xfffff) == 0) {
      uStack_14 = 1;
    }
    else if ((((uVar1 & 0x80000000) == 0) || (*(int *)param_1 != 0)) ||
            ((uVar1 & 0xfffff) != 0x80000)) {
      if ((uVar1 & 0x80000) == 0) {
        uStack_14 = 3;
      }
      else {
        uStack_14 = 2;
      }
    }
    else {
      uStack_14 = 4;
    }
  }
  else {
    uStack_14 = 0;
  }
  return uStack_14;
}

