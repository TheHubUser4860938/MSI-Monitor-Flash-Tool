// rea decompile_all
// name: std::_Mpunct<unsigned_short>::_Getvals<unsigned_short>
// address: 0x10184642
// body: available
// range: 0x10184642-0x101846d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall std::_Mpunct<unsigned short>::_Getvals<unsigned short>(unsigned
   short,struct lconv const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::_Mpunct<unsigned_short>::_Getvals<unsigned_short>
          (_Mpunct<unsigned_short> *this,ushort param_1,lconv *param_2)

{
  _Cvtvec *p_Var1;
  ushort uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  if (this[0x28] == (_Mpunct<unsigned_short>)0x0) {
    pcVar4 = param_2->currency_symbol;
  }
  else {
    pcVar4 = param_2->int_curr_symbol;
  }
  p_Var1 = (_Cvtvec *)(this + 0x2c);
  uVar3 = FUN_1018491f(pcVar4,0,p_Var1);
  *(undefined4 *)(this + 0x10) = uVar3;
  pcVar4 = "";
  if ((byte)param_2->p_sign_posn < 5) {
    pcVar4 = param_2->positive_sign;
  }
  uVar3 = FUN_1018491f(pcVar4,0,p_Var1);
  *(undefined4 *)(this + 0x14) = uVar3;
  pcVar4 = "-";
  if ((byte)param_2->n_sign_posn < 5) {
    pcVar4 = param_2->negative_sign;
  }
  uVar3 = FUN_1018491f(pcVar4,0,p_Var1);
  *(undefined4 *)(this + 0x18) = uVar3;
  uVar2 = _Maklocchr<unsigned_short>(*param_2->mon_decimal_point,(ushort *)0x0,p_Var1);
  *(ushort *)(this + 0xc) = uVar2;
  uVar2 = _Maklocchr<unsigned_short>(*param_2->mon_thousands_sep,(ushort *)0x0,p_Var1);
  *(ushort *)(this + 0xe) = uVar2;
  return;
}

