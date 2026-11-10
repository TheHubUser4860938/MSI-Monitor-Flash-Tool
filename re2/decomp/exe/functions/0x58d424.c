// rea decompile_all
// name: ___acrt_stdio_begin_temporary_buffering_nolock
// address: 0x58d424
// body: available
// range: 0x58d424-0x58d4d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_stdio_begin_temporary_buffering_nolock
   
   Library: Visual Studio 2015 Release */

uint ___acrt_stdio_begin_temporary_buffering_nolock(FILE *param_1)

{
  int *piVar1;
  int iVar2;
  FILE *pFVar3;
  char *pcVar4;
  int *piVar5;
  
  iVar2 = __fileno(param_1);
  iVar2 = __isatty(iVar2);
  if (iVar2 == 0) {
    return 0;
  }
  pFVar3 = (FILE *)___acrt_iob_func(1);
  if (param_1 == pFVar3) {
    piVar5 = &DAT_00619090;
  }
  else {
    pFVar3 = (FILE *)___acrt_iob_func(2);
    if (param_1 != pFVar3) goto LAB_0058d4d2;
    piVar5 = &DAT_00619094;
  }
  _DAT_00618cc8 = _DAT_00618cc8 + 1;
  piVar1 = &param_1->_flag;
  pFVar3 = (FILE *)*piVar1;
  if (((uint)pFVar3 & 0x4c0) != 0) {
LAB_0058d4d2:
    return (uint)pFVar3 & 0xffffff00;
  }
  LOCK();
  *piVar1 = *piVar1 | 0x282;
  UNLOCK();
  iVar2 = *piVar5;
  if (iVar2 == 0) {
    iVar2 = __malloc_base(0x1000);
    *piVar5 = iVar2;
    FID_conflict__free((void *)0x0);
    iVar2 = *piVar5;
    if (iVar2 == 0) {
      param_1->_base = (char *)0x2;
      param_1->_cnt = (int)&param_1->_charbuf;
      param_1->_ptr = (char *)&param_1->_charbuf;
      param_1->_bufsiz = 2;
      pcVar4 = (char *)0x0;
      goto LAB_0058d4ce;
    }
  }
  param_1->_cnt = iVar2;
  pcVar4 = (char *)*piVar5;
  param_1->_ptr = pcVar4;
  param_1->_base = (char *)0x1000;
  param_1->_bufsiz = 0x1000;
LAB_0058d4ce:
  return CONCAT31((int3)((uint)pcVar4 >> 8),1);
}

