// rea decompile_all
// name: __wcstombs_s_l
// address: 0x101881c9
// body: available
// range: 0x101881c9-0x10188295 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wcstombs_s_l
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl
__wcstombs_s_l(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,wchar_t *_Src,
              size_t _MaxCountInBytes,_locale_t _Locale)

{
  int *piVar1;
  uint uVar2;
  size_t sVar3;
  errno_t eVar4;
  
  if (_Dst == (char *)0x0) {
    if (_DstSizeInBytes != 0) goto LAB_10188212;
  }
  else if (_DstSizeInBytes == 0) {
LAB_10188212:
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1016ec41();
    return 0x16;
  }
  if (_Dst != (char *)0x0) {
    *_Dst = '\0';
  }
  if (_PtNumOfCharConverted != (size_t *)0x0) {
    *_PtNumOfCharConverted = 0;
  }
  sVar3 = _DstSizeInBytes;
  if (_MaxCountInBytes <= _DstSizeInBytes) {
    sVar3 = _MaxCountInBytes;
  }
  if (sVar3 < 0x80000000) {
    uVar2 = _wcstombs_l_helper(_Dst,_Src,sVar3,(__crt_locale_pointers *)_Locale);
    if (uVar2 == 0xffffffff) {
      if (_Dst != (char *)0x0) {
        *_Dst = '\0';
      }
      piVar1 = __errno();
      return *piVar1;
    }
    sVar3 = uVar2 + 1;
    if (_Dst == (char *)0x0) {
      eVar4 = 0;
    }
    else {
      if (_DstSizeInBytes < sVar3) {
        if ((_MaxCountInBytes != 0xffffffff) && (*_Dst = '\0', _DstSizeInBytes <= sVar3)) {
          piVar1 = __errno();
          eVar4 = 0x22;
          goto LAB_10188267;
        }
        eVar4 = 0x50;
        sVar3 = _DstSizeInBytes;
      }
      else {
        eVar4 = 0;
      }
      _Dst[sVar3 - 1] = '\0';
    }
    if (_PtNumOfCharConverted != (size_t *)0x0) {
      *_PtNumOfCharConverted = sVar3;
    }
  }
  else {
    piVar1 = __errno();
    eVar4 = 0x16;
LAB_10188267:
    *piVar1 = eVar4;
    FUN_1016ec41();
  }
  return eVar4;
}

