// rea decompile_all
// name: common_flush_all
// address: 0x10151296
// body: available
// range: 0x10151296-0x10151334 inclusive
// range: 0x10151345-0x10151361 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _common_flush_all
   
   Library: Visual Studio 2015 Release */

int __cdecl common_flush_all(int param_1)

{
  undefined4 *puVar1;
  FILE *_File;
  int iVar2;
  undefined4 *puVar3;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  ___acrt_lock(8);
  puVar1 = DAT_101de704 + DAT_101de700;
  for (puVar3 = DAT_101de704; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    _File = (FILE *)*puVar3;
    if (_File != (FILE *)0x0) {
      __lock_file(_File);
      if (((uint)_File->_flag >> 0xd & 1) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_nolock(_File);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && (((uint)_File->_flag >> 1 & 1) != 0)) {
          iVar2 = __fflush_nolock(_File);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_1015133b();
    }
  }
  FUN_10151365();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}

