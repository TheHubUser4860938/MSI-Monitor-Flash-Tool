// rea decompile_all
// name: __fread_nolock_s
// address: 0x1018a288
// body: available
// range: 0x1018a288-0x1018a453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __fread_nolock_s
   
   Library: Visual Studio 2015 Release */

size_t __cdecl
__fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  int *piVar1;
  char *_MaxCount;
  int iVar2;
  char *_DstSize_00;
  char *pcVar3;
  undefined1 *_DstBuf_00;
  uint uVar4;
  char *local_18;
  char *local_10;
  undefined1 *local_8;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_DstBuf != (void *)0x0) {
      if ((_File != (FILE *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize))) {
LAB_1018a2fa:
        piVar1 = &_File->_flag;
        if ((*piVar1 & 0x4c0U) == 0) {
          local_10 = (char *)0x1000;
        }
        else {
          local_10 = (char *)_File->_bufsiz;
        }
        local_8 = _DstBuf;
        _DstSize_00 = (char *)_DstSize;
        pcVar3 = (char *)(_ElementSize * _Count);
        do {
          while( true ) {
            if (pcVar3 == (char *)0x0) {
              return _Count;
            }
            if ((_File->_flag & 0x4c0U) != 0) break;
LAB_1018a37e:
            if (pcVar3 < local_10) {
              iVar2 = FUN_10198a5b(_File);
              if (iVar2 == -1) goto LAB_1018a442;
              if (_DstSize_00 == (char *)0x0) goto LAB_1018a416;
              *local_8 = (char)iVar2;
              local_8 = local_8 + 1;
              pcVar3 = pcVar3 + -1;
              _DstSize_00 = _DstSize_00 + -1;
              local_10 = (char *)_File->_bufsiz;
            }
            else {
              local_18 = pcVar3;
              if ((char *)0x7fffffff < pcVar3) {
                local_18 = (char *)0x7fffffff;
              }
              if (local_10 != (char *)0x0) {
                local_18 = local_18 + -((uint)local_18 % (uint)local_10);
              }
              if (_DstSize_00 < local_18) goto LAB_1018a416;
              _DstBuf_00 = local_8;
              iVar2 = __fileno(_File);
              iVar2 = __read_nolock(iVar2,_DstBuf_00,(uint)local_18);
              if (iVar2 == 0) {
                uVar4 = 8;
                goto LAB_1018a43b;
              }
              if (iVar2 < 0) goto LAB_1018a439;
              pcVar3 = pcVar3 + -iVar2;
              local_8 = local_8 + iVar2;
              _DstSize_00 = _DstSize_00 + -iVar2;
            }
          }
          _MaxCount = _File->_base;
          if (_MaxCount == (char *)0x0) goto LAB_1018a37e;
          if ((int)_MaxCount < 0) {
LAB_1018a439:
            uVar4 = 0x10;
LAB_1018a43b:
            LOCK();
            *piVar1 = *piVar1 | uVar4;
            UNLOCK();
LAB_1018a442:
            return (uint)((int)(_ElementSize * _Count) - (int)pcVar3) / _ElementSize;
          }
          if (pcVar3 < _MaxCount) {
            _MaxCount = pcVar3;
          }
          if (_DstSize_00 < _MaxCount) {
LAB_1018a416:
            if (_DstSize != 0xffffffff) {
              _memset(_DstBuf,0,_DstSize);
            }
            piVar1 = __errno();
            *piVar1 = 0x22;
            goto LAB_1018a2b2;
          }
          _memcpy_s(local_8,(rsize_t)_DstSize_00,_File->_ptr,(rsize_t)_MaxCount);
          pcVar3 = pcVar3 + -(int)_MaxCount;
          local_8 = local_8 + (int)_MaxCount;
          _File->_base = _File->_base + -(int)_MaxCount;
          _File->_ptr = _MaxCount + (int)_File->_ptr;
          _DstSize_00 = _DstSize_00 + -(int)_MaxCount;
        } while( true );
      }
      if (_DstSize != 0xffffffff) {
        _memset(_DstBuf,0,_DstSize);
      }
      if ((_File != (FILE *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize)))
      goto LAB_1018a2fa;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
LAB_1018a2b2:
    FUN_10184721();
  }
  return 0;
}

