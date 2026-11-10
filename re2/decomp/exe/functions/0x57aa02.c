// rea decompile_all
// name: __ungetc_nolock
// address: 0x57aa02
// body: available
// range: 0x57aa02-0x57aaf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
    puVar5 = &DAT_0060d298;
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &DAT_0060d298;
    }
    else {
      puVar3 = (undefined *)((uVar2 & 0x3f) * 0x30 + (&DAT_006190a0)[(int)uVar2 >> 6]);
    }
    if (puVar3[0x29] != '\0') {
LAB_0057aa6e:
      piVar4 = __errno();
      *piVar4 = 0x16;
      FUN_0057662d();
      return -1;
    }
    if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
      puVar5 = (undefined *)((uVar2 & 0x3f) * 0x30 + (&DAT_006190a0)[(int)uVar2 >> 6]);
    }
    if ((puVar5[0x2d] & 1) != 0) goto LAB_0057aa6e;
  }
  if ((_Ch == -1) || (((_File->_flag & 1U) == 0 && (((byte)_File->_flag & 6) != 6)))) {
LAB_0057aad3:
    uVar2 = 0xffffffff;
  }
  else {
    if (_File->_cnt == 0) {
      ___acrt_stdio_allocate_buffer_nolock(_File);
    }
    piVar4 = &_File->_flag;
    if (_File->_ptr == (char *)_File->_cnt) {
      if (_File->_base == (char *)0x0) goto LAB_0057aad3;
      _File->_ptr = _File->_ptr + 1;
    }
    _File->_ptr = _File->_ptr + -1;
    pcVar1 = _File->_ptr;
    if (((uint)*piVar4 >> 0xc & 1) == 0) {
      *pcVar1 = (char)_Ch;
    }
    else if (*pcVar1 != (char)_Ch) {
      _File->_ptr = pcVar1 + 1;
      goto LAB_0057aad3;
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

