// rea decompile_all
// name: std::numpunct<unsigned_short>::_Getvals<unsigned_short>
// address: 0x560213
// body: available
// range: 0x560213-0x560276 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall std::numpunct<unsigned short>::_Getvals<unsigned short>(unsigned
   short,struct lconv const *,struct _Cvtvec)
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::numpunct<unsigned_short>::_Getvals<unsigned_short>
          (numpunct<unsigned_short> *this,ushort param_1,lconv *param_2,_Cvtvec param_3)

{
  ushort uVar1;
  int iVar2;
  _Cvtvec *p_Var3;
  _Cvtvec *p_Var4;
  _Cvtvec local_34;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  p_Var3 = &param_3;
  p_Var4 = &local_34;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var4->_Page = p_Var3->_Page;
    p_Var3 = (_Cvtvec *)&p_Var3->_Mbcurmax;
    p_Var4 = (_Cvtvec *)&p_Var4->_Mbcurmax;
  }
  uVar1 = _Maklocchr<unsigned_short>(*param_2->decimal_point,(ushort *)0x0,&local_34);
  *(ushort *)(this + 0xc) = uVar1;
  uVar1 = _Maklocchr<unsigned_short>(*param_2->thousands_sep,(ushort *)0x0,&local_34);
  *(ushort *)(this + 0xe) = uVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

