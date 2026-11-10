// rea decompile_all
// name: _fgetc
// address: 0x101722d3
// body: available
// range: 0x101722d3-0x101723c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fgetc
   
   Library: Visual Studio 2015 Release */

int __cdecl _fgetc(FILE *_File)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_101fcf98;
  uStack_c = 0x101722df;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1016ec41();
  }
  else {
    __lock_file(_File);
    local_8 = (undefined *)0x0;
    if (((uint)_File->_flag >> 0xc & 1) != 0) {
LAB_101723a8:
      iVar4 = __fgetc_nolock(_File);
      local_8 = (undefined *)0xfffffffe;
      FUN_101723cb();
      return iVar4;
    }
    uVar2 = __fileno(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &DAT_102021b8;
    }
    else {
      puVar3 = (undefined *)((uVar2 & 0x3f) * 0x30 + (&DAT_1020d928)[(int)uVar2 >> 6]);
    }
    puVar5 = &DAT_102021b8;
    if (puVar3[0x29] == '\0') {
      if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
        puVar5 = (undefined *)((uVar2 & 0x3f) * 0x30 + (&DAT_1020d928)[(int)uVar2 >> 6]);
      }
      if ((puVar5[0x2d] & 1) == 0) goto LAB_101723a8;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1016ec41();
    __local_unwind4(&DAT_10201fec,local_14,0xfffffffe);
  }
  return -1;
}

