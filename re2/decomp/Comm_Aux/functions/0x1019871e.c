// rea decompile_all
// name: common_refill_and_read_nolock<char>
// address: 0x1019871e
// body: available
// range: 0x1019871e-0x1019889e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_refill_and_read_nolock<char>(class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_refill_and_read_nolock<char>(FILE *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined *puVar6;
  void *_DstBuf;
  
  if (param_1 == (FILE *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_10184721();
  }
  else if ((((uint)param_1->_flag >> 0xd & 1) != 0) && (((uint)param_1->_flag >> 0xc & 1) == 0)) {
    if (((uint)param_1->_flag >> 1 & 1) == 0) {
      LOCK();
      param_1->_flag = param_1->_flag | 1;
      UNLOCK();
      if ((param_1->_flag & 0x4c0U) == 0) {
        ___acrt_stdio_allocate_buffer_nolock(param_1);
      }
      param_1->_ptr = (char *)param_1->_cnt;
      uVar5 = param_1->_bufsiz;
      _DstBuf = (void *)param_1->_cnt;
      iVar3 = __fileno(param_1);
      pcVar4 = (char *)__read(iVar3,_DstBuf,uVar5);
      param_1->_base = pcVar4;
      pcVar4 = param_1->_base;
      if ((pcVar4 != (char *)0x0) && (pcVar4 != (char *)0xffffffff)) {
        if ((param_1->_flag & 6U) == 0) {
          iVar3 = __fileno(param_1);
          if ((iVar3 == -1) || (iVar3 = __fileno(param_1), iVar3 == -2)) {
            puVar6 = &DAT_10206628;
          }
          else {
            iVar3 = __fileno(param_1);
            uVar5 = __fileno(param_1);
            puVar6 = (undefined *)((uVar5 & 0x3f) * 0x30 + (&DAT_10211ab0)[iVar3 >> 6]);
          }
          if ((puVar6[0x28] & 0x82) == 0x82) {
            LOCK();
            param_1->_flag = param_1->_flag | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_bufsiz == 0x200) && (((uint)param_1->_flag >> 6 & 1) != 0)) &&
           ((param_1->_flag & 0x100U) == 0)) {
          param_1->_bufsiz = 0x1000;
        }
        param_1->_base = param_1->_base + -1;
        bVar1 = *param_1->_ptr;
        param_1->_ptr = param_1->_ptr + 1;
        return (uint)bVar1;
      }
      LOCK();
      param_1->_flag = param_1->_flag | (uint)(pcVar4 != (char *)0x0) * 8 + 8;
      UNLOCK();
      param_1->_base = (char *)0x0;
    }
    else {
      LOCK();
      param_1->_flag = param_1->_flag | 0x10;
      UNLOCK();
    }
  }
  return -1;
}

