// rea decompile_all
// name: ___acrt_stdio_begin_temporary_buffering_nolock
// address: 0x10160e13
// body: available
// range: 0x10160e13-0x10160ec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
    piVar5 = &DAT_101debcc;
  }
  else {
    pFVar3 = (FILE *)___acrt_iob_func(2);
    if (param_1 != pFVar3) goto LAB_10160ec1;
    piVar5 = &DAT_101debd0;
  }
  _DAT_101de708 = _DAT_101de708 + 1;
  piVar1 = &param_1->_flag;
  pFVar3 = (FILE *)*piVar1;
  if (((uint)pFVar3 & 0x4c0) != 0) {
LAB_10160ec1:
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
      goto LAB_10160ebd;
    }
  }
  param_1->_cnt = iVar2;
  pcVar4 = (char *)*piVar5;
  param_1->_ptr = pcVar4;
  param_1->_base = (char *)0x1000;
  param_1->_bufsiz = 0x1000;
LAB_10160ebd:
  return CONCAT31((int3)((uint)pcVar4 >> 8),1);
}

