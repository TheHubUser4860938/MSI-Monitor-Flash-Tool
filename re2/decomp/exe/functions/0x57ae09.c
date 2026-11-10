// rea decompile_all
// name: ___acrt_stdio_flush_nolock
// address: 0x57ae09
// body: available
// range: 0x57ae09-0x57ae6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_stdio_flush_nolock
   
   Library: Visual Studio 2015 Release */

undefined4 ___acrt_stdio_flush_nolock(FILE *param_1)

{
  int *piVar1;
  int _FileHandle;
  uint uVar2;
  uint uVar3;
  char *_Buf;
  
  piVar1 = &param_1->_flag;
  if ((((byte)*piVar1 & 3) == 2) && ((*piVar1 & 0xc0U) != 0)) {
    _Buf = (char *)param_1->_cnt;
    uVar3 = (int)param_1->_ptr - (int)_Buf;
    param_1->_ptr = _Buf;
    param_1->_base = (char *)0x0;
    if (0 < (int)uVar3) {
      uVar2 = uVar3;
      _FileHandle = __fileno(param_1);
      uVar2 = __write(_FileHandle,_Buf,uVar2);
      if (uVar3 != uVar2) {
        LOCK();
        *piVar1 = *piVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)*piVar1 >> 2 & 1) != 0) {
        LOCK();
        *piVar1 = *piVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}

