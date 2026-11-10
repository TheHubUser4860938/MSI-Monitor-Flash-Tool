// rea decompile_all
// name: tzset_nolock
// address: 0x101b532d
// body: available
// range: 0x101b532d-0x101b540c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl tzset_nolock(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl tzset_nolock(void)

{
  int iVar1;
  char *_Memory;
  undefined1 local_110 [4];
  undefined4 local_10c;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  DAT_1023e34c = 0xffffffff;
  DAT_1023e340 = 0xffffffff;
  DAT_10249bd0 = 0;
  iVar1 = FUN_101be32a(&local_10c,local_108,0x100,&DAT_102067e8);
  if (iVar1 == 0) {
    _Memory = local_108;
  }
  else {
    _Memory = (char *)0x0;
    if (iVar1 == 0x22) {
      _Memory = (char *)__malloc_base(local_10c);
      if (_Memory == (char *)0x0) {
        _Memory = (char *)0x0;
      }
      else {
        iVar1 = FUN_101be32a(local_110,_Memory,local_10c,&DAT_102067e8);
        if (iVar1 == 0) {
          FID_conflict__free((void *)0x0);
          goto LAB_101b53ce;
        }
      }
      FID_conflict__free(_Memory);
      _Memory = (char *)0x0;
    }
  }
LAB_101b53ce:
  if ((_Memory == (char *)0x0) || (*_Memory == '\0')) {
    FUN_101b51d2();
  }
  else {
    FUN_101b4ffd(_Memory);
  }
  FID_conflict__free((void *)(-(uint)(_Memory != local_108) & (uint)_Memory));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

