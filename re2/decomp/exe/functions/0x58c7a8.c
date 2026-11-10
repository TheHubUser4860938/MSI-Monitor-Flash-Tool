// rea decompile_all
// name: __mbtowc_l
// address: 0x58c7a8
// body: available
// range: 0x58c7a8-0x58c8a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int local_14;
  localeinfo_struct local_10;
  char local_8;
  
  if ((_SrcCh == (char *)0x0) || (_SrcSizeInBytes == 0)) {
    return 0;
  }
  if (*_SrcCh == '\0') {
    if (_DstCh == (wchar_t *)0x0) {
      return 0;
    }
    *_DstCh = L'\0';
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
  if ((local_10.locinfo)->locale_name[2] == (wchar_t *)0x0) {
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = (ushort)(byte)*_SrcCh;
    }
    uVar3 = 1;
    goto LAB_0058c88a;
  }
  iVar1 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_10);
  if (iVar1 == 0) {
    uVar3 = 1;
    iVar1 = MultiByteToWideChar((local_10.locinfo)->lc_collate_cp,9,_SrcCh,1,_DstCh,
                                (uint)(_DstCh != (wchar_t *)0x0));
    if (iVar1 != 0) goto LAB_0058c88a;
LAB_0058c87c:
    piVar2 = __errno();
    uVar3 = 0xffffffff;
    *piVar2 = 0x2a;
  }
  else {
    if ((int)(local_10.locinfo)->lc_codepage < 2) {
LAB_0058c849:
      uVar3 = (local_10.locinfo)->lc_codepage;
LAB_0058c84c:
      if ((_SrcSizeInBytes < uVar3) || (_SrcCh[1] == '\0')) goto LAB_0058c87c;
    }
    else {
      uVar3 = (local_10.locinfo)->lc_codepage;
      if ((int)_SrcSizeInBytes < (int)uVar3) goto LAB_0058c84c;
      iVar1 = MultiByteToWideChar((local_10.locinfo)->lc_collate_cp,9,_SrcCh,
                                  (local_10.locinfo)->lc_codepage,_DstCh,
                                  (uint)(_DstCh != (wchar_t *)0x0));
      if (iVar1 == 0) goto LAB_0058c849;
    }
    uVar3 = (local_10.locinfo)->lc_codepage;
  }
LAB_0058c88a:
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
    return uVar3;
  }
  return uVar3;
}

