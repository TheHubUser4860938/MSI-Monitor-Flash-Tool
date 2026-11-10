// rea decompile_all
// name: __ungetc_nolock
// address: 0x1019aec8
// body: available
// range: 0x1019aec8-0x1019afb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __ungetc_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __ungetc_nolock(int _Ch,FILE *_File)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined *puVar5;
  
  if (((uint)_File->_flag >> 0xc & 1) == 0) {
    uVar2 = __fileno(_File);
    puVar5 = &DAT_1023e1b8;
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &DAT_1023e1b8;
    }
    else {
      puVar3 = (undefined *)((uVar2 & 0x3f) * 0x30 + (&DAT_102498c8)[(int)uVar2 >> 6]);
    }
    if (puVar3[0x29] != '\0') {
LAB_1019af34:
      piVar4 = __errno();
      *piVar4 = 0x16;
      FUN_1019ab61();
      return -1;
    }
    if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
      puVar5 = (undefined *)((uVar2 & 0x3f) * 0x30 + (&DAT_102498c8)[(int)uVar2 >> 6]);
    }
    if ((puVar5[0x2d] & 1) != 0) goto LAB_1019af34;
  }
  if ((_Ch == -1) || (((_File->_flag & 1U) == 0 && (((byte)_File->_flag & 6) != 6)))) {
LAB_1019af99:
    uVar2 = 0xffffffff;
  }
  else {
    if (_File->_cnt == 0) {
      ___acrt_stdio_allocate_buffer_nolock(_File);
    }
    piVar4 = &_File->_flag;
    if (_File->_ptr == (char *)_File->_cnt) {
      if (_File->_base == (char *)0x0) goto LAB_1019af99;
      _File->_ptr = _File->_ptr + 1;
    }
    _File->_ptr = _File->_ptr + -1;
    pcVar1 = _File->_ptr;
    if (((uint)*piVar4 >> 0xc & 1) == 0) {
      *pcVar1 = (char)_Ch;
    }
    else if (*pcVar1 != (char)_Ch) {
      _File->_ptr = pcVar1 + 1;
      goto LAB_1019af99;
    }
    _File->_base = _File->_base + 1;
    LOCK();
    *piVar4 = *piVar4 & 0xfffffff7;
    UNLOCK();
    LOCK();
    *piVar4 = *piVar4 | 1;
    UNLOCK();
    uVar2 = _Ch & 0xff;
  }
  return uVar2;
}

