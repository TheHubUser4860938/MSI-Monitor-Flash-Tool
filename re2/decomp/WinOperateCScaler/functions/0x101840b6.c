// rea decompile_all
// name: ___acrt_is_packaged_app
// address: 0x101840b6
// body: available
// range: 0x101840b6-0x1018413c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_is_packaged_app
   
   Library: Visual Studio 2015 Release */

void ___acrt_is_packaged_app(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_c = in_ECX;
  if (DAT_1020d924 == 0) {
    pcVar1 = try_get_function(8,"GetCurrentPackageId",(module_id *)&DAT_101d9970,
                              (module_id *)&DAT_101d9978);
    if (pcVar1 != (code *)0x0) {
      local_c = 0;
      guard_check_icall(&local_c,0);
      iVar2 = (*pcVar1)();
      if (iVar2 == 0x7a) {
        LOCK();
        DAT_1020d924 = 1;
        UNLOCK();
        goto LAB_1018412f;
      }
    }
    LOCK();
    DAT_1020d924 = 2;
    UNLOCK();
  }
LAB_1018412f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

