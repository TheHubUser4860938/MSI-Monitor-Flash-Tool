// rea decompile_all
// name: std::_Mpunct<unsigned_short>::_Init
// address: 0x1015f2b0
// body: available
// range: 0x1015f2b0-0x1015f373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall std::_Mpunct<unsigned short>::_Init(class std::_Locinfo const &,bool)
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::_Mpunct<unsigned_short>::_Init(_Mpunct<unsigned_short> *this,_Locinfo *param_1,bool param_2)

{
  char cVar1;
  _Cvtvec *p_Var2;
  lconv *plVar3;
  undefined4 uVar4;
  int iVar5;
  _Mpunct<unsigned_short> *p_Var6;
  _Cvtvec local_44;
  _Mpunct<unsigned_short> *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x1015f2bc;
  local_18 = this;
  p_Var2 = __Getcvt(&local_44);
  p_Var6 = this + 0x2c;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)p_Var6 = p_Var2->_Page;
    p_Var2 = (_Cvtvec *)&p_Var2->_Mbcurmax;
    p_Var6 = p_Var6 + 4;
  }
  plVar3 = _localeconv();
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  local_8 = 0;
  uVar4 = FUN_10156025(plVar3->mon_grouping,0,this + 0x2c);
  *(undefined4 *)(this + 8) = uVar4;
  _Getvals<unsigned_short>(this,0,plVar3);
  if (this[0x28] == (_Mpunct<unsigned_short>)0x0) {
    cVar1 = plVar3->frac_digits;
  }
  else {
    cVar1 = plVar3->int_frac_digits;
  }
  iVar5 = (int)cVar1;
  *(int *)(this + 0x1c) = iVar5;
  if ((iVar5 < 0) || (0x7e < iVar5)) {
    *(undefined4 *)(this + 0x1c) = 0;
  }
  Makpat(this + 0x20,(int)plVar3->p_sep_by_space,(int)plVar3->p_cs_precedes,(int)plVar3->p_sign_posn
        );
  Makpat(this + 0x24,(int)plVar3->n_sep_by_space,(int)plVar3->n_cs_precedes,(int)plVar3->n_sign_posn
        );
  if (param_2) {
    *(undefined4 *)(this + 0x20) = 0x76782b24;
    *(undefined4 *)(this + 0x24) = 0x76782b24;
  }
  return;
}

