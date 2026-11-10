// rea decompile_all
// name: __Getcvt
// address: 0x55cd50
// body: available
// range: 0x55cd50-0x55cdbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Getcvt
   
   Library: Visual Studio 2015 Release */

_Cvtvec * __cdecl __Getcvt(_Cvtvec *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  UINT UVar2;
  uint uVar3;
  wchar_t **ppwVar4;
  int iVar5;
  uint _C;
  _Cvtvec *p_Var6;
  
  _C = 0;
  __return_storage_ptr__->_Page = 0;
  p_Var6 = __return_storage_ptr__;
  for (iVar5 = 10; p_Var6 = (_Cvtvec *)&p_Var6->_Mbcurmax, iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)p_Var6 = 0;
  }
  UVar2 = ____lc_codepage_func();
  __return_storage_ptr__->_Page = UVar2;
  uVar3 = ____mb_cur_max_func();
  __return_storage_ptr__->_Mbcurmax = uVar3;
  ppwVar4 = ____lc_locale_name_func();
  pwVar1 = ppwVar4[2];
  __return_storage_ptr__->_Isclocale = (uint)(pwVar1 == (wchar_t *)0x0);
  if ((pwVar1 == (wchar_t *)0x0) == 0) {
    do {
      iVar5 = __ismbblead(_C);
      if (iVar5 != 0) {
        __return_storage_ptr__->_Isleadbyte[(int)_C >> 3] =
             __return_storage_ptr__->_Isleadbyte[(int)_C >> 3] | (byte)(1 << (_C & 7));
      }
      _C = _C + 1;
    } while ((int)_C < 0x100);
  }
  return __return_storage_ptr__;
}

