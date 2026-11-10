// rea decompile_all
// name: std::locale::_Locimp::_Makeloc
// address: 0x1015745e
// body: available
// range: 0x1015745e-0x101576a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static class std::locale::_Locimp * __cdecl std::locale::_Locimp::_Makeloc(class
   std::_Locinfo const &,int,class std::locale::_Locimp *,class std::locale const *)
   
   Library: Visual Studio 2015 Release */

_Locimp * __cdecl
std::locale::_Locimp::_Makeloc(_Locinfo *param_1,int param_2,_Locimp *param_3,locale *param_4)

{
  ctype<char> *this;
  facet *pfVar1;
  uint uVar2;
  _Locinfo *p_Var3;
  
  if ((param_2 & 2U) != 0) {
    if (param_4 == (locale *)0x0) {
      this = (ctype<char> *)FUN_1001cfa0(0x18);
      if (this == (ctype<char> *)0x0) {
        pfVar1 = (facet *)0x0;
      }
      else {
        pfVar1 = (facet *)ctype<char>::ctype<char>(this,param_1,0);
      }
      uVar2 = id::operator_unsigned_int((id *)&DAT_1020d138);
      _Locimp_Addfac(param_3,pfVar1,uVar2);
    }
    else {
      uVar2 = id::operator_unsigned_int((id *)&DAT_1020d138);
      pfVar1 = (facet *)FUN_10005f00(param_4);
      _Locimp_Addfac(param_3,pfVar1,uVar2);
    }
  }
  if ((param_2 & 8U) != 0) {
    if (param_4 == (locale *)0x0) {
      pfVar1 = (facet *)FUN_1001cfa0(8);
      if (pfVar1 == (facet *)0x0) {
        pfVar1 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar1 + 4) = 0;
        *(undefined ***)pfVar1 =
             num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      uVar2 = id::operator_unsigned_int((id *)&DAT_1020d180);
      _Locimp_Addfac(param_3,pfVar1,uVar2);
      pfVar1 = (facet *)FUN_1001cfa0(8);
      if (pfVar1 == (facet *)0x0) {
        pfVar1 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar1 + 4) = 0;
        *(undefined ***)pfVar1 =
             num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      uVar2 = id::operator_unsigned_int((id *)&DAT_1020742c);
      _Locimp_Addfac(param_3,pfVar1,uVar2);
    }
    else {
      uVar2 = id::operator_unsigned_int((id *)&DAT_1020d180);
      pfVar1 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar1,uVar2);
      uVar2 = id::operator_unsigned_int((id *)&DAT_1020742c);
      pfVar1 = (facet *)FUN_100192b0(param_4);
      _Locimp_Addfac(param_3,pfVar1,uVar2);
    }
  }
  if ((param_2 & 8U) != 0) {
    if (param_4 == (locale *)0x0) {
      pfVar1 = (facet *)FUN_1001cfa0(0x18);
      if (pfVar1 == (facet *)0x0) {
        pfVar1 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar1 + 4) = 0;
        *(undefined ***)pfVar1 = numpunct<char>::vftable;
        FUN_1001a650(param_1,0);
      }
      uVar2 = id::operator_unsigned_int((id *)&DAT_10207430);
      _Locimp_Addfac(param_3,pfVar1,uVar2);
    }
    else {
      uVar2 = id::operator_unsigned_int((id *)&DAT_10207430);
      pfVar1 = (facet *)FUN_100193f0(param_4);
      _Locimp_Addfac(param_3,pfVar1,uVar2);
    }
  }
  if ((param_2 & 2U) != 0) {
    if (param_4 == (locale *)0x0) {
      pfVar1 = (facet *)FUN_1001cfa0(8);
      if (pfVar1 == (facet *)0x0) {
        pfVar1 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar1 + 4) = 0;
        *(undefined ***)pfVar1 = codecvt<char,char,_Mbstatet>::vftable;
      }
      uVar2 = id::operator_unsigned_int((id *)&DAT_102073fc);
      _Locimp_Addfac(param_3,pfVar1,uVar2);
    }
    else {
      uVar2 = id::operator_unsigned_int((id *)&DAT_102073fc);
      pfVar1 = (facet *)FUN_10005dc0(param_4);
      _Locimp_Addfac(param_3,pfVar1,uVar2);
    }
  }
  _Makexloc(param_1,param_2,param_3,param_4);
  _Makewloc(param_1,param_2,param_3,param_4);
  _Makeushloc(param_1,param_2,param_3,param_4);
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | param_2;
  p_Var3 = *(_Locinfo **)(param_1 + 0x2c);
  if (p_Var3 == (_Locinfo *)0x0) {
    p_Var3 = param_1 + 0x30;
  }
  FUN_10013740(p_Var3);
  return param_3;
}

