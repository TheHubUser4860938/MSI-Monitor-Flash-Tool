// rea decompile_all
// name: ___acrt_copy_to_char
// address: 0x1018835d
// body: available
// range: 0x1018835d-0x10188418 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_copy_to_char
   
   Library: Visual Studio 2015 Release */

undefined4 ___acrt_copy_to_char(wchar_t *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  char *pcVar5;
  char *_Memory;
  undefined4 uVar6;
  
  if (param_1 == (wchar_t *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1016ec41();
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1016ec41();
    return 0;
  }
  iVar2 = ___acrt_AreFileApisANSI_0();
  *param_2 = 0;
  uVar3 = __crt_compute_required_transform_buffer_count((uint)(iVar2 == 0),param_1);
  if (uVar3 == 0) {
    DVar4 = GetLastError();
    ___acrt_errno_map_os_error(DVar4);
    return 0;
  }
  pcVar5 = (char *)__malloc_base(uVar3);
  if (pcVar5 != (char *)0x0) {
    uVar3 = __crt_transform_string((uint)(iVar2 == 0),param_1,pcVar5,uVar3);
    if (uVar3 != 0) {
      _Memory = (char *)0x0;
      uVar6 = 1;
      *param_2 = pcVar5;
      goto LAB_101883fc;
    }
    DVar4 = GetLastError();
    ___acrt_errno_map_os_error(DVar4);
  }
  uVar6 = 0;
  _Memory = pcVar5;
LAB_101883fc:
  FID_conflict__free(_Memory);
  return uVar6;
}

