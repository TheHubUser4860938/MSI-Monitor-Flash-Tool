// rea decompile_all
// name: __Tolower
// address: 0x1014a10c
// body: available
// range: 0x1014a10c-0x1014a205 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Tolower
   
   Library: Visual Studio 2015 Release */

int __cdecl __Tolower(int param_1,_Ctypevec *param_2)

{
  wchar_t **ppwVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  LPCSTR _LpSrcStr;
  BOOL unaff_EBX;
  _locale_t _Plocinfo;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  uint local_10;
  UINT local_c;
  byte local_8;
  undefined1 local_7;
  
  if (param_2 == (_Ctypevec *)0x0) {
    ppwVar1 = ____lc_locale_name_func();
    _Plocinfo = (_locale_t)ppwVar1[2];
    local_c = ____lc_codepage_func();
  }
  else {
    _Plocinfo = (_locale_t)param_2->_LocaleName;
    local_c = param_2->_Page;
  }
  if (_Plocinfo == (_locale_t)0x0) {
    if (0x19 < param_1 - 0x41U) {
      return param_1;
    }
    return param_1 + 0x20;
  }
  if ((uint)param_1 < 0x100) {
    if (param_2 != (_Ctypevec *)0x0) {
      if ((*(byte *)(param_2->_Table + param_1) & 1) == 0) {
        return param_1;
      }
      goto LAB_1014a173;
    }
    iVar2 = _isupper(param_1);
    if (iVar2 == 0) {
      return param_1;
    }
  }
  else {
LAB_1014a173:
    if (param_2 != (_Ctypevec *)0x0) {
      local_18 = (undefined1)((uint)param_1 >> 8);
      uVar4 = (uint)(int)param_2->_Table[param_1 >> 8 & 0xff] >> 0xf & 1;
      goto LAB_1014a1aa;
    }
  }
  local_10 = param_1 >> 8;
  puVar3 = ___pctype_func();
  local_18 = (undefined1)local_10;
  uVar4 = puVar3[local_10 & 0xff] & 0x8000;
LAB_1014a1aa:
  if (uVar4 == 0) {
    local_17 = 0;
    _LpSrcStr = (LPCSTR)0x1;
    local_18 = (char)param_1;
  }
  else {
    local_16 = 0;
    _LpSrcStr = (LPCSTR)0x2;
    local_17 = (char)param_1;
  }
  iVar2 = ___crtLCMapStringA(_Plocinfo,(LPCWSTR)0x100,(DWORD)&local_18,_LpSrcStr,(int)&local_8,
                             (LPSTR)0x3,local_c,1,unaff_EBX);
  if ((iVar2 != 0) && (param_1 = (int)local_8, iVar2 != 1)) {
    param_1 = (int)CONCAT11(local_8,local_7);
  }
  return param_1;
}

