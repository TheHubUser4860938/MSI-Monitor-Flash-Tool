// rea decompile_all
// name: __fgetwc_nolock
// address: 0x101732cd
// body: available
// range: 0x101732cd-0x1017343e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __fgetwc_nolock
   
   Library: Visual Studio 2015 Release */

wint_t __cdecl __fgetwc_nolock(FILE *_File)

{
  wint_t wVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ushort *puVar5;
  int *piVar6;
  undefined *puVar7;
  wchar_t *pwVar8;
  size_t _SrcSizeInBytes;
  byte local_10;
  undefined1 local_f;
  wchar_t local_c [2];
  wchar_t local_8;
  wchar_t local_6;
  
  puVar7 = &DAT_102021b8;
  if (((uint)_File->_flag >> 0xc & 1) == 0) {
    iVar2 = __fileno(_File);
    if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
      puVar4 = &DAT_102021b8;
    }
    else {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar4 = (undefined *)((uVar3 & 0x3f) * 0x30 + (&DAT_1020d928)[iVar2 >> 6]);
    }
    if (puVar4[0x29] != '\0') {
      pwVar8 = &local_8;
      do {
        iVar2 = FUN_101722c8(_File);
        if (iVar2 == -1) {
          return 0xffff;
        }
        *(char *)pwVar8 = (char)iVar2;
        pwVar8 = (wchar_t *)((int)pwVar8 + 1);
      } while (pwVar8 != &local_6);
      return local_8;
    }
  }
  if (((uint)_File->_flag >> 0xc & 1) == 0) {
    iVar2 = __fileno(_File);
    if ((iVar2 != -1) && (iVar2 = __fileno(_File), iVar2 != -2)) {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar7 = (undefined *)((uVar3 & 0x3f) * 0x30 + (&DAT_1020d928)[iVar2 >> 6]);
    }
    if ((puVar7[0x28] & 0x80) != 0) {
      _SrcSizeInBytes = 1;
      iVar2 = FUN_101722c8(_File);
      if (iVar2 != -1) {
        local_10 = (byte)iVar2;
        puVar5 = ___pctype_func();
        if ((puVar5[local_10] & 0x8000) != 0) {
          iVar2 = FUN_101722c8(_File);
          if (iVar2 == -1) {
            _ungetc((int)(char)local_10,_File);
            return 0xffff;
          }
          local_f = (undefined1)iVar2;
          _SrcSizeInBytes = 2;
        }
        iVar2 = _mbtowc(local_c,(char *)&local_10,_SrcSizeInBytes);
        if (iVar2 != -1) {
          return local_c[0];
        }
        piVar6 = __errno();
        *piVar6 = 0x2a;
      }
      return 0xffff;
    }
  }
  if ((int)_File->_base < 2) {
    wVar1 = FUN_10187336(_File);
  }
  else {
    _File->_base = _File->_base + -2;
    wVar1 = *(wint_t *)_File->_ptr;
    _File->_ptr = (char *)((int)_File->_ptr + 2);
  }
  return wVar1;
}

