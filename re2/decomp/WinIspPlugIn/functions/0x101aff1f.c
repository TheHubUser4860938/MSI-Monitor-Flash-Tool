// rea decompile_all
// name: common_flush_and_write_nolock<char>
// address: 0x101aff1f
// body: available
// range: 0x101aff1f-0x101b002f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_flush_and_write_nolock<char>(int,class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_flush_and_write_nolock<char>(uint param_1,FILE *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  FILE *pFVar4;
  
  iVar2 = __fileno(param_2);
  if ((param_2->_flag & 6U) == 0) {
    piVar3 = __errno();
    *piVar3 = 9;
  }
  else {
    if (((uint)param_2->_flag >> 0xc & 1) == 0) {
      if ((param_2->_flag & 1U) != 0) {
        param_2->_base = (char *)0x0;
        if (((uint)param_2->_flag >> 3 & 1) == 0) goto LAB_101aff49;
        param_2->_ptr = (char *)param_2->_cnt;
        LOCK();
        param_2->_flag = param_2->_flag & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      param_2->_flag = param_2->_flag | 2;
      UNLOCK();
      LOCK();
      param_2->_flag = param_2->_flag & 0xfffffff7;
      UNLOCK();
      param_2->_base = (char *)0x0;
      if (((param_2->_flag & 0x4c0U) == 0) &&
         (((pFVar4 = (FILE *)___acrt_iob_func(1), param_2 != pFVar4 &&
           (pFVar4 = (FILE *)___acrt_iob_func(2), param_2 != pFVar4)) ||
          (iVar2 = __isatty(iVar2), iVar2 == 0)))) {
        ___acrt_stdio_allocate_buffer_nolock(param_2);
      }
      bVar1 = write_buffer_nolock<char>(param_1,param_2);
      if (!bVar1) {
        LOCK();
        param_2->_flag = param_2->_flag | 0x10;
        UNLOCK();
        return -1;
      }
      return param_1 & 0xff;
    }
    piVar3 = __errno();
    *piVar3 = 0x22;
  }
LAB_101aff49:
  LOCK();
  param_2->_flag = param_2->_flag | 0x10;
  UNLOCK();
  return -1;
}

