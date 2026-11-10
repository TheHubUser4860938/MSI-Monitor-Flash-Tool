// rea decompile_all
// name: ___acrt_free_locale
// address: 0x594d02
// body: available
// range: 0x594d02-0x594e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_free_locale
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void ___acrt_free_locale(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;
  
  if ((((*(undefined ***)((int)param_1 + 0x88) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0x88) != &PTR_DAT_0060d0a8)) &&
      (*(int **)((int)param_1 + 0x7c) != (int *)0x0)) && (**(int **)((int)param_1 + 0x7c) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x84);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
      ___acrt_locale_free_monetary(*(undefined4 *)((int)param_1 + 0x88));
    }
    piVar1 = *(int **)((int)param_1 + 0x80);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
      ___acrt_locale_free_numeric(*(undefined4 *)((int)param_1 + 0x88));
    }
    FID_conflict__free(*(void **)((int)param_1 + 0x7c));
    FID_conflict__free(*(void **)((int)param_1 + 0x88));
  }
  if ((*(int **)((int)param_1 + 0x8c) != (int *)0x0) && (**(int **)((int)param_1 + 0x8c) == 0)) {
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x90) + -0xfe));
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x94) + -0x80));
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x98) + -0x80));
    FID_conflict__free(*(void **)((int)param_1 + 0x8c));
  }
  ___acrt_locale_free_lc_time_if_unreferenced(*(undefined4 *)((int)param_1 + 0x9c));
  puVar2 = (undefined4 *)((int)param_1 + 0xa0);
  local_8 = 6;
  puVar3 = (undefined4 *)((int)param_1 + 0x28);
  do {
    if ((((undefined2 *)puVar3[-2] != &DAT_0060d290) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
      FID_conflict__free((void *)*puVar2);
    }
    if (((puVar3[-3] != 0) && (piVar1 = (int *)puVar3[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FID_conflict__free(piVar1);
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FID_conflict__free(param_1);
  return;
}

