// rea decompile_all
// name: __fwrite_nolock
// address: 0x57beae
// body: available
// range: 0x57beae-0x57c026 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
LAB_0057bf62:
          if (local_8 <= pcVar5) {
            if (((_File->_flag & 0xc0U) != 0) &&
               (iVar3 = ___acrt_stdio_flush_nolock(_File), iVar3 != 0)) goto LAB_0057c019;
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
              if (local_c <= pcVar4) goto LAB_0057bfd2;
            }
            goto LAB_0057c010;
          }
          iVar3 = FUN_0058e514((int)*(char *)_DstBuf,_File);
          if (iVar3 == -1) goto LAB_0057c019;
          local_8 = (char *)_File->_bufsiz;
          _DstBuf = (void *)((int)_DstBuf + 1);
          pcVar5 = pcVar5 + -1;
          if ((int)local_8 < 1) {
            local_8 = (char *)0x1;
          }
        }
        pcVar2 = _File->_base;
        if (pcVar2 == (char *)0x0) goto LAB_0057bf62;
        if ((int)pcVar2 < 0) {
LAB_0057c010:
          LOCK();
          *piVar1 = *piVar1 | 0x10;
          UNLOCK();
LAB_0057c019:
          return (uint)((int)(_Size * _Count) - (int)pcVar5) / _Size;
        }
        if (pcVar5 < pcVar2) {
          pcVar2 = pcVar5;
        }
        FUN_005734b0(_File->_ptr,_DstBuf,pcVar2);
        _File->_base = _File->_base + -(int)pcVar2;
        pcVar5 = pcVar5 + -(int)pcVar2;
        _File->_ptr = pcVar2 + (int)_File->_ptr;
LAB_0057bfd2:
        _DstBuf = (void *)((int)_DstBuf + (int)pcVar2);
      } while( true );
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_0057662d();
  }
  return 0;
}

