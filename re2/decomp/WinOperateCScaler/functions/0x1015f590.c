// rea decompile_all
// name: std::numpunct<wchar_t>::_Init
// address: 0x1015f590
// body: available
// range: 0x1015f590-0x1015f671 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall std::numpunct<wchar_t>::_Init(class std::_Locinfo const &,bool)
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::numpunct<wchar_t>::_Init(numpunct<wchar_t> *this,_Locinfo *param_1,bool param_2)

{
  lconv *plVar1;
  ushort uVar2;
  wchar_t wVar3;
  _Cvtvec *p_Var4;
  undefined4 uVar5;
  int iVar6;
  _Cvtvec *p_Var7;
  undefined1 local_a8 [44];
  _Cvtvec local_7c;
  numpunct<wchar_t> *local_50;
  undefined **local_4c;
  lconv *local_48;
  _Cvtvec local_44;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_8 = 0x1015f59f;
  local_50 = this;
  local_48 = _localeconv();
  p_Var4 = __Getcvt(&local_7c);
  plVar1 = local_48;
  p_Var7 = &local_44;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    p_Var7->_Page = p_Var4->_Page;
    p_Var4 = (_Cvtvec *)&p_Var4->_Mbcurmax;
    p_Var7 = (_Cvtvec *)&p_Var7->_Mbcurmax;
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  local_8 = 0;
  if (param_2) {
    local_4c = &PTR_101a6410;
  }
  else {
    local_4c = (undefined **)local_48->grouping;
  }
  __Getcvt(&local_7c);
  uVar5 = FUN_10156025(local_4c,0,local_a8);
  *(undefined4 *)(this + 8) = uVar5;
  uVar5 = FUN_10158e3b("false",0,&local_44);
  *(undefined4 *)(this + 0x10) = uVar5;
  uVar5 = FUN_10158e3b(&DAT_101a7854,0,&local_44);
  *(undefined4 *)(this + 0x14) = uVar5;
  if (param_2) {
    uVar2 = _Maklocchr<unsigned_short>('.',(ushort *)0x0,&local_44);
    *(ushort *)(this + 0xc) = uVar2;
    wVar3 = _Maklocchr<unsigned_short>(',',(ushort *)0x0,&local_44);
  }
  else {
    *(wchar_t *)(this + 0xc) = *plVar1->_W_decimal_point;
    wVar3 = *plVar1->_W_thousands_sep;
  }
  *(wchar_t *)(this + 0xe) = wVar3;
  FUN_10154489();
  return;
}

