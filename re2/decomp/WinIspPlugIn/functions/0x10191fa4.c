// rea decompile_all
// name: _Getvals<>
// address: 0x10191fa4
// body: available
// range: 0x10191fa4-0x10192010 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall std::time_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getvals<char>(char,class std::_Locinfo const &)
    protected: void __thiscall std::time_get<unsigned short,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > >::_Getvals<unsigned short>(unsigned short,class
   std::_Locinfo const &)
   
   Library: Visual Studio 2015 Release */

void _Getvals<>(undefined4 param_1,_Locinfo *param_2)

{
  _Cvtvec *p_Var1;
  char *pcVar2;
  int in_ECX;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _Cvtvec local_34;
  int local_8;
  
  local_8 = in_ECX;
  p_Var1 = __Getcvt(&local_34);
  puVar4 = (uint *)(in_ECX + 0x18);
  puVar5 = puVar4;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = p_Var1->_Page;
    p_Var1 = (_Cvtvec *)&p_Var1->_Mbcurmax;
    puVar5 = puVar5 + 1;
  }
  uVar6 = 0;
  puVar5 = puVar4;
  pcVar2 = std::_Locinfo::_Getdays(param_2);
  uVar6 = FUN_100127b0(pcVar2,uVar6,puVar5);
  uVar7 = 0;
  *(undefined4 *)(local_8 + 8) = uVar6;
  puVar5 = puVar4;
  pcVar2 = std::_Locinfo::_Getmonths(param_2);
  uVar6 = FUN_100127b0(pcVar2,uVar7,puVar5);
  *(undefined4 *)(local_8 + 0xc) = uVar6;
  uVar6 = FUN_100127b0(":AM:am:PM:pm",0,puVar4);
  *(undefined4 *)(local_8 + 0x10) = uVar6;
  return;
}

