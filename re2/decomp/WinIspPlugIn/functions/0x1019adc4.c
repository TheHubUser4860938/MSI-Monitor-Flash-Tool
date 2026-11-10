// rea decompile_all
// name: _fputc
// address: 0x1019adc4
// body: available
// range: 0x1019adc4-0x1019aeb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fputc
   
   Library: Visual Studio 2015 Release */

int __cdecl _fputc(int _Ch,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_102382e0;
  uStack_c = 0x1019add0;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1019ab61();
  }
  else {
    __lock_file(_File);
    local_8 = (undefined *)0x0;
    if (((uint)_File->_flag >> 0xc & 1) != 0) {
LAB_1019ae96:
      iVar4 = __fputc_nolock(_Ch,_File);
      local_8 = (undefined *)0xfffffffe;
      FUN_1019aec0();
      return iVar4;
    }
    uVar2 = __fileno(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &DAT_1023e1b8;
    }
    else {
      puVar3 = (undefined *)((uVar2 & 0x3f) * 0x30 + (&DAT_102498c8)[(int)uVar2 >> 6]);
    }
    puVar5 = &DAT_1023e1b8;
    if (puVar3[0x29] == '\0') {
      if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
        puVar5 = (undefined *)((uVar2 & 0x3f) * 0x30 + (&DAT_102498c8)[(int)uVar2 >> 6]);
      }
      if ((puVar5[0x2d] & 1) == 0) goto LAB_1019ae96;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1019ab61();
    __local_unwind4(&DAT_1023dfec,local_14,0xfffffffe);
  }
  return -1;
}

