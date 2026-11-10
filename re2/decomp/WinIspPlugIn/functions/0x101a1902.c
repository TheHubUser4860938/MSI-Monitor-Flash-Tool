// rea decompile_all
// name: common_find_first_narrow<>
// address: 0x101a1902
// body: available
// range: 0x101a1902-0x101a19a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_find_first_narrow<struct _wfinddata64_t,struct __finddata64_t>(char const *
   const,struct __finddata64_t * const)
    int __cdecl common_find_first_narrow<struct _wfinddata64i32_t,struct _finddata64i32_t>(char
   const * const,struct _finddata64i32_t * const)
   
   Library: Visual Studio 2015 Release */

void common_find_first_narrow<>(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *local_23c;
  undefined1 local_238 [560];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1019ab61();
  }
  else {
    local_23c = (void *)0x0;
    iVar2 = ___acrt_copy_path_to_wide_string(param_1,&local_23c);
    if ((iVar2 != 0) && (iVar2 = FUN_101a19a1(local_23c,local_238), iVar2 != -1)) {
      FUN_101a1c67(local_238,param_2);
    }
    FID_conflict__free(local_23c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

