// rea decompile_all
// name: std::locale::_Locimp::_Makewloc
// address: 0x567a56
// body: available
// range: 0x567a56-0x567fde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl std::locale::_Locimp::_Makewloc(class std::_Locinfo const
   &,int,class std::locale::_Locimp *,class std::locale const *)
   
   Library: Visual Studio 2015 Release */

void __cdecl
std::locale::_Locimp::_Makewloc(_Locinfo *param_1,int param_2,_Locimp *param_3,locale *param_4)

{
  byte bVar1;
  facet *pfVar2;
  uint uVar3;
  numpunct<wchar_t> *this;
  _Mpunct<wchar_t> *p_Var4;
  int iVar5;
  facet *pfVar6;
  _Collvec _Var7;
  
  pfVar6 = (facet *)0x0;
  if ((param_2 & 2U) != 0) {
    if (param_4 == (locale *)0x0) {
      pfVar2 = (facet *)FUN_00416408(0x44);
      if (pfVar2 == (facet *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar2 + 4) = 0;
        *(undefined ***)pfVar2 = ctype<wchar_t>::vftable;
        FUN_00407a00(param_1);
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)FUN_0040dcb0(param_4);
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
             num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::vftable
        ;
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
             num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::vftable
        ;
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
  }
  if ((param_2 & 8U) != 0) {
    if (param_4 == (locale *)0x0) {
      this = (numpunct<wchar_t> *)FUN_00416408(0x18);
      if (this == (numpunct<wchar_t> *)0x0) {
        this = (numpunct<wchar_t> *)0x0;
      }
      else {
        *(undefined4 *)(this + 4) = 0;
        *(undefined ***)this = numpunct<wchar_t>::vftable;
        numpunct<wchar_t>::_Init(this,param_1,false);
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,(facet *)this,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
  }
  bVar1 = ::Getcat(0,0);
  if ((param_2 & (1 << (bVar1 & 0x1f)) >> 1) != 0) {
    if (param_4 == (locale *)0x0) {
      pfVar2 = (facet *)FUN_00416408(0x10);
      if (pfVar2 == (facet *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar2 + 4) = 0;
        *(undefined ***)pfVar2 = collate<wchar_t>::vftable;
        _Var7 = __Getcoll();
        *(_Collvec *)(pfVar2 + 8) = _Var7;
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
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
        *(undefined ***)pfVar2 = messages<wchar_t>::vftable;
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
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
             money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
             vftable;
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
             money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
             vftable;
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
  }
  if ((param_2 & 4U) != 0) {
    if (param_4 == (locale *)0x0) {
      p_Var4 = (_Mpunct<wchar_t> *)FUN_00416408(0x58);
      if (p_Var4 == (_Mpunct<wchar_t> *)0x0) {
        p_Var4 = (_Mpunct<wchar_t> *)0x0;
      }
      else {
        *(undefined4 *)(p_Var4 + 4) = 0;
        *(undefined ***)p_Var4 = _Mpunct<wchar_t>::vftable;
        p_Var4[0x28] = (_Mpunct<wchar_t>)0x0;
        _Mpunct<wchar_t>::_Init(p_Var4,param_1,false);
        *(undefined ***)p_Var4 = moneypunct<wchar_t,0>::vftable;
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,(facet *)p_Var4,uVar3);
      p_Var4 = (_Mpunct<wchar_t> *)FUN_00416408(0x58);
      if (p_Var4 == (_Mpunct<wchar_t> *)0x0) {
        p_Var4 = (_Mpunct<wchar_t> *)0x0;
      }
      else {
        *(undefined4 *)(p_Var4 + 4) = 0;
        *(undefined ***)p_Var4 = _Mpunct<wchar_t>::vftable;
        p_Var4[0x28] = (_Mpunct<wchar_t>)0x1;
        _Mpunct<wchar_t>::_Init(p_Var4,param_1,false);
        *(undefined ***)p_Var4 = moneypunct<wchar_t,1>::vftable;
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,(facet *)p_Var4,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
  }
  if ((param_2 & 0x10U) != 0) {
    if (param_4 == (locale *)0x0) {
      iVar5 = FUN_00416408(0x44);
      if (iVar5 == 0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        pfVar2 = (facet *)time_get<>(param_1,0);
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
      pfVar2 = (facet *)FUN_00416408(0xc);
      if (pfVar2 == (facet *)0x0) {
        pfVar2 = (facet *)0x0;
      }
      else {
        *(undefined4 *)(pfVar2 + 4) = 0;
        *(undefined ***)pfVar2 =
             time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
             vftable;
        *(undefined4 *)(pfVar2 + 8) = 0;
        Init(param_1);
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
      uVar3 = FUN_004021b0();
      pfVar2 = (facet *)::use_facet<>(param_4);
      _Locimp_Addfac(param_3,pfVar2,uVar3);
    }
  }
  if ((param_2 & 2U) != 0) {
    if (param_4 == (locale *)0x0) {
      iVar5 = FUN_00416408(0x34);
      if (iVar5 != 0) {
        pfVar6 = (facet *)FUN_00407410(param_1,0);
      }
      uVar3 = FUN_004021b0();
      _Locimp_Addfac(param_3,pfVar6,uVar3);
    }
    else {
      uVar3 = FUN_004021b0();
      pfVar6 = (facet *)FUN_0040da30(param_4);
      _Locimp_Addfac(param_3,pfVar6,uVar3);
    }
  }
  return;
}

