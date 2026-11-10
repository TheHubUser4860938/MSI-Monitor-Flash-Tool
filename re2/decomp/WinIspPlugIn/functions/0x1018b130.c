// rea decompile_all
// name: Init
// address: 0x1018b130
// body: available
// range: 0x1018b130-0x1018b16a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall std::ctype<unsigned short>::_Init(class std::_Locinfo const &)
    protected: void __thiscall std::ctype<wchar_t>::_Init(class std::_Locinfo const &)
   
   Library: Visual Studio 2015 Release */

void Init(void)

{
  _Ctypevec *p_Var1;
  _Cvtvec *p_Var2;
  int in_ECX;
  int iVar3;
  uint *puVar4;
  _Cvtvec local_40;
  _Ctypevec local_14;
  
  p_Var1 = __Getctype(&local_14);
  *(uint *)(in_ECX + 8) = p_Var1->_Page;
  *(short **)(in_ECX + 0xc) = p_Var1->_Table;
  *(int *)(in_ECX + 0x10) = p_Var1->_Delfl;
  *(wchar_t **)(in_ECX + 0x14) = p_Var1->_LocaleName;
  p_Var2 = __Getcvt(&local_40);
  puVar4 = (uint *)(in_ECX + 0x18);
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = p_Var2->_Page;
    p_Var2 = (_Cvtvec *)&p_Var2->_Mbcurmax;
    puVar4 = puVar4 + 1;
  }
  return;
}

