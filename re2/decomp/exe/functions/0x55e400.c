// rea decompile_all
// name: std::locale::_Locimp::_Makeloc
// address: 0x55e400
// body: available
// range: 0x55e400-0x55e646 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  int iVar1;
  facet *pfVar2;
  uint uVar3;
  _Locinfo *p_Var4;
  
  if ((param_2 & 2U) != 0) {
    if (param_4 == (locale *)0x0) {
      iVar1 = FUN_00416408(0x18);
      if (iVar1 == 0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        pfVar2 = (facet *)FUN_004022f0(param_1,0);
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)FUN_00405f50(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
  }
  if ((param_2 & 8U) != 0) {
    if (param_4 == (locale *)0x0) {
      pfVar2 = (facet *)FUN_00416408(8);
      if (pfVar2 == (facet *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar2 + 4) = 0;
        *(undefined ***)pfVar2 =
             num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
      pfVar2 = (facet *)FUN_00416408(8);
      if (pfVar2 == (facet *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar2 + 4) = 0;
        *(undefined ***)pfVar2 =
             num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)FUN_004060f0(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
  }
  if ((param_2 & 8U) != 0) {
    if (param_4 == (locale *)0x0) {
      pfVar2 = (facet *)FUN_00416408(0x18);
      if (pfVar2 == (facet *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar2 + 4) = 0;
        *(undefined ***)pfVar2 = numpunct<char>::vftable;
        FUN_00406ae0(param_1,0);
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)FUN_00406230(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
  }
  if ((param_2 & 2U) != 0) {
    if (param_4 == (locale *)0x0) {
      pfVar2 = (facet *)FUN_00416408(8);
      if (pfVar2 == (facet *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar2 + 4) = 0;
        *(undefined ***)pfVar2 = codecvt<char,char,_Mbstatet>::vftable;
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)FUN_0040db70(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
  }
  _Makexloc(param_1,param_2,param_3,param_4);
  _Makewloc(param_1,param_2,param_3,param_4);
  func_0x005674cd(param_1,param_2,param_3,param_4);
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | param_2;
  p_Var4 = *(_Locinfo **)(param_1 + 0x2c);
  if (p_Var4 == (_Locinfo *)0x0) {
    p_Var4 = param_1 + 0x30;
  }
  FUN_00409800(p_Var4);
  return param_3;
}

