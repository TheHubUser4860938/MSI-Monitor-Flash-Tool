// rea decompile_all
// name: _clearerr_s
// address: 0x10189a5c
// body: available
// range: 0x10189a5c-0x10189afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _clearerr_s
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl _clearerr_s(FILE *_File)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (_File != (FILE *)0x0) {
    __lock_file(_File);
    LOCK();
    _File->_flag = _File->_flag & 0xffffffe7;
    UNLOCK();
    iVar2 = __fileno(_File);
    if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
      puVar4 = &DAT_10206628;
    }
    else {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar4 = (undefined *)((uVar3 & 0x3f) * 0x30 + (&DAT_10211ab0)[iVar2 >> 6]);
    }
    puVar4[0x28] = puVar4[0x28] & 0xfd;
    FUN_10189aff();
    return 0;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_10184721();
  return 0x16;
}

