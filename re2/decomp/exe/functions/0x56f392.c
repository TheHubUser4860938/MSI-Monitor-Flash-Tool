// rea decompile_all
// name: std::locale::_Locimp::_Makexloc
// address: 0x56f392
// body: available
// range: 0x56f392-0x56f706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl std::locale::_Locimp::_Makexloc(class std::_Locinfo const
   &,int,class std::locale::_Locimp *,class std::locale const *)
   
   Library: Visual Studio 2015 Release */

void __cdecl
std::locale::_Locimp::_Makexloc(_Locinfo *param_1,int param_2,_Locimp *param_3,locale *param_4)

{
  uint uVar1;
  facet *pfVar2;
  collate<char> *pcVar3;
  _Mpunct<char> *p_Var4;
  moneypunct<char,0> *pmVar5;
  moneypunct<char,1> *pmVar6;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *ptVar7;
  time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *ptVar8;
  _Collvec _Var9;
  
  uVar1 = collate<char>::_Getcat((facet **)0x0,(locale *)0x0);
  if ((param_2 & (1 << ((byte)uVar1 & 0x1f)) >> 1) != 0) {
    if (param_4 == (locale *)0x0) {
      pfVar2 = (facet *)FUN_00416408(0x10);
      if (pfVar2 == (facet *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar2 + 4) = 0;
        *(undefined ***)pfVar2 = collate<char>::vftable;
        _Var9 = __Getcoll();
        *(_Collvec *)(pfVar2 + 8) = _Var9;
      }
      uVar1 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar1);
    }
    else {
      uVar1 = FUN_004021b0();
      pcVar3 = use_facet<std::collate<char>_>(param_4);
      _Locimp_Addfac(param_3,(facet *)pcVar3,uVar1);
    }
  }
  if ((param_2 & 0x20U) != 0) {
    if (param_4 == (locale *)0x0) {
      pfVar2 = (facet *)FUN_00416408(8);
      if (pfVar2 == (facet *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar2 + 4) = 0;
        *(undefined ***)pfVar2 = messages<char>::vftable;
      }
      uVar1 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar1);
    }
    else {
      uVar1 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar1);
    }
  }
  if ((param_2 & 4U) != 0) {
    if (param_4 == (locale *)0x0) {
      pfVar2 = (facet *)FUN_00416408(8);
      if (pfVar2 == (facet *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar2 + 4) = 0;
        *(undefined ***)pfVar2 =
             money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      uVar1 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar1);
      pfVar2 = (facet *)FUN_00416408(8);
      if (pfVar2 == (facet *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar2 + 4) = 0;
        *(undefined ***)pfVar2 =
             money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      uVar1 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar1);
    }
    else {
      uVar1 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar1);
      uVar1 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar1);
    }
  }
  if ((param_2 & 4U) != 0) {
    if (param_4 == (locale *)0x0) {
      p_Var4 = (_Mpunct<char> *)FUN_00416408(0x58);
      if (p_Var4 == (_Mpunct<char> *)0x0) {
        p_Var4 = (_Mpunct<char> *)0x0;
      }
      else {
        *(undefined4 *)(p_Var4 + 4) = 0;
        *(undefined ***)p_Var4 = _Mpunct<char>::vftable;
        p_Var4[0x28] = (_Mpunct<char>)0x0;
        _Mpunct<char>::_Init(p_Var4,param_1,false);
        *(undefined ***)p_Var4 = moneypunct<char,0>::vftable;
      }
      uVar1 = FUN_004021b0();
      _Locimp_Addfac(param_3,(facet *)p_Var4,uVar1);
      p_Var4 = (_Mpunct<char> *)FUN_00416408(0x58);
      if (p_Var4 == (_Mpunct<char> *)0x0) {
        p_Var4 = (_Mpunct<char> *)0x0;
      }
      else {
        *(undefined4 *)(p_Var4 + 4) = 0;
        *(undefined ***)p_Var4 = _Mpunct<char>::vftable;
        p_Var4[0x28] = (_Mpunct<char>)0x1;
        _Mpunct<char>::_Init(p_Var4,param_1,false);
        *(undefined ***)p_Var4 = moneypunct<char,1>::vftable;
      }
      uVar1 = FUN_004021b0();
      _Locimp_Addfac(param_3,(facet *)p_Var4,uVar1);
    }
    else {
      uVar1 = FUN_004021b0();
      pmVar5 = use_facet<std::moneypunct<char,0>_>(param_4);
      _Locimp_Addfac(param_3,(facet *)pmVar5,uVar1);
      uVar1 = FUN_004021b0();
      pmVar6 = use_facet<std::moneypunct<char,1>_>(param_4);
      _Locimp_Addfac(param_3,(facet *)pmVar6,uVar1);
    }
  }
  if ((param_2 & 0x10U) != 0) {
    if (param_4 == (locale *)0x0) {
      ptVar7 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_00416408(0x44);
      if (ptVar7 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        pfVar2 = (facet *)time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
                          time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
                                    (ptVar7,param_1,0);
      }
      uVar1 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar1);
      ptVar8 = (time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_00416408(0xc);
      if (ptVar8 == (time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        ptVar8 = (time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
      }
      else {
        *(undefined4 *)(ptVar8 + 4) = 0;
        *(undefined ***)ptVar8 =
             time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
        *(undefined4 *)(ptVar8 + 8) = 0;
        time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Init
                  (ptVar8,param_1);
      }
      uVar1 = FUN_004021b0();
      _Locimp_Addfac(param_3,(facet *)ptVar8,uVar1);
    }
    else {
      uVar1 = FUN_004021b0();
      ptVar7 = use_facet<std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>_>
                         (param_4);
      _Locimp_Addfac(param_3,(facet *)ptVar7,uVar1);
      uVar1 = FUN_004021b0();
      ptVar8 = use_facet<std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>_>
                         (param_4);
      _Locimp_Addfac(param_3,(facet *)ptVar8,uVar1);
    }
  }
  return;
}

