// rea decompile_all
// name: ___acrt_locale_initialize_time
// address: 0x594ae9
// body: available
// range: 0x594ae9-0x594b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_locale_initialize_time
   
   Library: Visual Studio 2015 Release */

undefined4 ___acrt_locale_initialize_time(__crt_locale_data *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined **_Memory;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    _Memory = &PTR_DAT_005e1138;
LAB_00594b50:
    ___acrt_locale_release_lc_time_reference(*(undefined4 *)(param_1 + 0x9c));
    *(undefined ***)(param_1 + 0x9c) = _Memory;
    uVar2 = 0;
  }
  else {
    _Memory = (undefined **)__calloc_base(1,0x164);
    if ((__crt_lc_time_data *)_Memory == (__crt_lc_time_data *)0x0) {
      FID_conflict__free((void *)0x0);
    }
    else {
      bVar1 = initialize_lc_time((__crt_lc_time_data *)_Memory,param_1);
      if (bVar1) {
        *(undefined4 *)((int)_Memory + 0xb0) = 1;
        FID_conflict__free((void *)0x0);
        goto LAB_00594b50;
      }
      ___acrt_locale_free_time(_Memory);
      FID_conflict__free(_Memory);
    }
    uVar2 = 1;
  }
  return uVar2;
}

