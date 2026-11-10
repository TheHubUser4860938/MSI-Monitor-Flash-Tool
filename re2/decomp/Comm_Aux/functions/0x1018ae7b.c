// rea decompile_all
// name: __fwrite_nolock
// address: 0x1018ae7b
// body: available
// range: 0x1018ae7b-0x1018aff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __fwrite_nolock
   
   Library: Visual Studio 2015 Release */

size_t __cdecl __fwrite_nolock(void *_DstBuf,size_t _Size,size_t _Count,FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_c;
  char *local_8;
  
  if ((_Size != 0) && (_Count != 0)) {
    if ((_File != (FILE *)0x0) &&
       ((_DstBuf != (void *)0x0 && (_Count <= (uint)(0xffffffff / (ulonglong)_Size))))) {
      piVar1 = &_File->_flag;
      if ((*piVar1 & 0x4c0U) == 0) {
        local_8 = (char *)0x1000;
      }
      else {
        local_8 = (char *)_File->_bufsiz;
      }
      pcVar5 = (char *)(_Size * _Count);
      do {
        while( true ) {
          if (pcVar5 == (char *)0x0) {
            return _Count;
          }
          if ((_File->_flag & 0xc0U) != 0) break;
LAB_1018af2f:
          if (local_8 <= pcVar5) {
            if (((_File->_flag & 0xc0U) != 0) &&
               (iVar3 = ___acrt_stdio_flush_nolock(_File), iVar3 != 0)) goto LAB_1018afe6;
            local_c = pcVar5;
            if (local_8 != (char *)0x0) {
              local_c = pcVar5 + -((uint)pcVar5 % (uint)local_8);
            }
            if (local_c == (char *)0xffffffff) {
              local_c = (char *)0xffffffff;
            }
            pcVar2 = _DstBuf;
            pcVar4 = local_c;
            iVar3 = __fileno(_File);
            pcVar4 = (char *)__write(iVar3,pcVar2,(uint)pcVar4);
            if (pcVar4 != (char *)0xffffffff) {
              pcVar2 = local_c;
              if (pcVar4 <= local_c) {
                pcVar2 = pcVar4;
              }
              pcVar5 = pcVar5 + -(int)pcVar2;
              if (local_c <= pcVar4) goto LAB_1018af9f;
            }
            goto LAB_1018afdd;
          }
          iVar3 = FUN_10198ff0((int)*(char *)_DstBuf,_File);
          if (iVar3 == -1) goto LAB_1018afe6;
          local_8 = (char *)_File->_bufsiz;
          _DstBuf = (void *)((int)_DstBuf + 1);
          pcVar5 = pcVar5 + -1;
          if ((int)local_8 < 1) {
            local_8 = (char *)0x1;
          }
        }
        pcVar2 = _File->_base;
        if (pcVar2 == (char *)0x0) goto LAB_1018af2f;
        if ((int)pcVar2 < 0) {
LAB_1018afdd:
          LOCK();
          *piVar1 = *piVar1 | 0x10;
          UNLOCK();
LAB_1018afe6:
          return (uint)((int)(_Size * _Count) - (int)pcVar5) / _Size;
        }
        if (pcVar5 < pcVar2) {
          pcVar2 = pcVar5;
        }
        FUN_10181570(_File->_ptr,_DstBuf,pcVar2);
        _File->_base = _File->_base + -(int)pcVar2;
        pcVar5 = pcVar5 + -(int)pcVar2;
        _File->_ptr = pcVar2 + (int)_File->_ptr;
LAB_1018af9f:
        _DstBuf = (void *)((int)_DstBuf + (int)pcVar2);
      } while( true );
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_10184721();
  }
  return 0;
}

