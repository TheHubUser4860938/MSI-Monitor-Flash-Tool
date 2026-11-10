// rea decompile_all
// name: __wctomb_s_l
// address: 0x58c8bc
// body: available
// range: 0x58c8bc-0x58c9dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  errno_t eVar4;
  int local_18;
  int local_14;
  char local_c;
  BOOL local_8;
  
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
    return 0;
  }
  if (_SizeConverted != (int *)0x0) {
    *_SizeConverted = -1;
  }
  if (0x7fffffff < _SizeInBytes) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_0057662d();
    return 0x16;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,(__crt_locale_pointers *)_Locale);
  eVar4 = 0;
  if (*(int *)(local_14 + 0xa8) == 0) {
    if ((ushort)_WCh < 0x100) {
      if (_MbCh != (char *)0x0) {
        if (_SizeInBytes == 0) goto LAB_0058c9c9;
        *_MbCh = (char)_WCh;
      }
      if (_SizeConverted != (int *)0x0) {
        *_SizeConverted = 1;
      }
      goto LAB_0058c949;
    }
    if ((_MbCh != (char *)0x0) && (_SizeInBytes != 0)) {
      _memset(_MbCh,0,_SizeInBytes);
    }
  }
  else {
    local_8 = 0;
    iVar2 = WideCharToMultiByte(*(UINT *)(local_14 + 8),0,&_WCh,1,_MbCh,_SizeInBytes,(LPCSTR)0x0,
                                &local_8);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x7a) {
        if ((_MbCh != (char *)0x0) && (_SizeInBytes != 0)) {
          _memset(_MbCh,0,_SizeInBytes);
        }
LAB_0058c9c9:
        piVar1 = __errno();
        eVar4 = 0x22;
        *piVar1 = 0x22;
        FUN_0057662d();
        goto LAB_0058c949;
      }
    }
    else if (local_8 == 0) {
      if (_SizeConverted != (int *)0x0) {
        *_SizeConverted = iVar2;
      }
      goto LAB_0058c949;
    }
  }
  piVar1 = __errno();
  eVar4 = 0x2a;
  *piVar1 = 0x2a;
LAB_0058c949:
  if (local_c != '\0') {
    *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) & 0xfffffffd;
  }
  return eVar4;
}

