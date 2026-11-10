// rea decompile_all
// name: common_fdopen<char>
// address: 0x10189e2f
// body: available
// range: 0x10189e2f-0x10189f04 inclusive
// range: 0x10189f0f-0x10189f26 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    struct _iobuf * __cdecl common_fdopen<char>(int,char const * const)
   
   Library: Visual Studio 2015 Release */

_iobuf * __cdecl common_fdopen<char>(int param_1,char *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char local_38 [12];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  _iobuf *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10200498;
  uStack_c = 0x10189e3b;
  if (param_2 == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
  }
  else {
    if (param_1 == -2) {
      piVar1 = __errno();
      *piVar1 = 9;
      return (_iobuf *)0x0;
    }
    if (((-1 < param_1) && ((uint)param_1 < DAT_10211cb0)) &&
       ((*(byte *)((&DAT_10211ab0)[param_1 >> 6] + 0x28 + (param_1 & 0x3fU) * 0x30) & 1) != 0)) {
      puVar2 = (undefined4 *)__acrt_stdio_parse_mode<char>(local_38);
      local_2c = *puVar2;
      local_28 = puVar2[1];
      local_24 = puVar2[2];
      if ((char)local_24 == '\0') {
        return (_iobuf *)0x0;
      }
      __acrt_stdio_allocate_stream();
      if (local_20 == (_iobuf *)0x0) {
        piVar1 = __errno();
        *piVar1 = 0x18;
        return (_iobuf *)0x0;
      }
      _DAT_10211a98 = _DAT_10211a98 + 1;
      LOCK();
      local_20->_flag = local_20->_flag | local_28;
      UNLOCK();
      local_20->_file = param_1;
      local_8 = (undefined *)0xfffffffe;
      FUN_10189f05();
      return local_20;
    }
    piVar1 = __errno();
    *piVar1 = 9;
  }
  FUN_10184721();
  return (_iobuf *)0x0;
}

