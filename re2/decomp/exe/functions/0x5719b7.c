// rea decompile_all
// name: __Wcscoll
// address: 0x5719b7
// body: available
// range: 0x5719b7-0x571a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Wcscoll
   
   Library: Visual Studio 2015 Release */

int __cdecl
__Wcscoll(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,_Collvec *param_5)

{
  int iVar1;
  int *piVar2;
  int _CchCount1;
  int _CchCount2;
  
  _CchCount1 = (int)param_2 - (int)param_1 >> 1;
  _CchCount2 = (int)param_4 - (int)param_3 >> 1;
  if (param_5 == (_Collvec *)0x0) {
    param_5 = (_Collvec *)____lc_locale_name_func();
  }
  if (param_5->_LocaleName == (LPCWSTR)0x0) {
    iVar1 = _CchCount1;
    if (_CchCount2 <= _CchCount1) {
      iVar1 = _CchCount2;
    }
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      if (*param_1 != *param_3) {
        iVar1 = (-(uint)((ushort)*param_1 < (ushort)*param_3) & 0xfffffffe) + 1;
        goto LAB_00571a06;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
    iVar1 = 0;
LAB_00571a06:
    if ((iVar1 == 0) && (_CchCount1 != _CchCount2)) {
      iVar1 = (uint)(_CchCount2 <= _CchCount1) * 2 + -1;
    }
  }
  else {
    iVar1 = ___crtCompareStringW(param_5->_LocaleName,0x1000,param_1,_CchCount1,param_3,_CchCount2);
    if (iVar1 == 0) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}

