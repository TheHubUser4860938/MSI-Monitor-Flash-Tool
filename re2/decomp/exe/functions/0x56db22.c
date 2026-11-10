// rea decompile_all
// name: std::_Mpunct<char>::_Getvals<char>
// address: 0x56db22
// body: available
// range: 0x56db22-0x56db9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall std::_Mpunct<char>::_Getvals<char>(char,struct lconv const *)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __thiscall std::_Mpunct<char>::_Getvals<char>(_Mpunct<char> *this,char param_1,lconv *param_2)

{
  _Mpunct<char> *p_Var1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (this[0x28] == (_Mpunct<char>)0x0) {
    pcVar3 = param_2->currency_symbol;
  }
  else {
    pcVar3 = param_2->int_curr_symbol;
  }
  p_Var1 = this + 0x2c;
  uVar2 = FUN_00406c80(pcVar3,0,p_Var1);
  *(undefined4 *)(this + 0x10) = uVar2;
  pcVar3 = "";
  if ((byte)param_2->p_sign_posn < 5) {
    pcVar3 = param_2->positive_sign;
  }
  uVar2 = FUN_00406c80(pcVar3,0,p_Var1);
  *(undefined4 *)(this + 0x14) = uVar2;
  pcVar3 = "-";
  if ((byte)param_2->n_sign_posn < 5) {
    pcVar3 = param_2->negative_sign;
  }
  uVar2 = FUN_00406c80(pcVar3,0,p_Var1);
  *(undefined4 *)(this + 0x18) = uVar2;
  this[0xc] = *(_Mpunct<char> *)param_2->mon_decimal_point;
  this[0xd] = *(_Mpunct<char> *)param_2->mon_thousands_sep;
  return;
}

