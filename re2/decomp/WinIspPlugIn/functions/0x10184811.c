// rea decompile_all
// name: std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::_Getvals<wchar_t>
// address: 0x10184811
// body: available
// range: 0x10184811-0x1018486b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::_Getvals<wchar_t>(wchar_t,class std::_Locinfo const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
_Getvals<wchar_t>(time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                  *this,wchar_t param_1,_Locinfo *param_2)

{
  _Cvtvec *p_Var1;
  ushort *puVar2;
  undefined4 uVar3;
  int iVar4;
  time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_> *ptVar5;
  _Cvtvec local_30;
  
  p_Var1 = __Getcvt(&local_30);
  ptVar5 = this + 0x18;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)ptVar5 = p_Var1->_Page;
    p_Var1 = (_Cvtvec *)&p_Var1->_Mbcurmax;
    ptVar5 = ptVar5 + 4;
  }
  puVar2 = _Locinfo::_W_Getdays(param_2);
  uVar3 = FUN_1018c4f3(puVar2);
  *(undefined4 *)(this + 8) = uVar3;
  puVar2 = _Locinfo::_W_Getmonths(param_2);
  uVar3 = FUN_1018c4f3(puVar2);
  *(undefined4 *)(this + 0xc) = uVar3;
  uVar3 = FUN_1018c4f3(L":AM:am:PM:pm");
  *(undefined4 *)(this + 0x10) = uVar3;
  return;
}

