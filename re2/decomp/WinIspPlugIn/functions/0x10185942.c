// rea decompile_all
// name: codecvt<>
// address: 0x10185942
// body: available
// range: 0x10185942-0x1018597a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::codecvt<unsigned short,char,struct _Mbstatet>::codecvt<unsigned
   short,char,struct _Mbstatet>(class std::_Locinfo const &,unsigned int)
    public: __thiscall std::codecvt<wchar_t,char,struct _Mbstatet>::codecvt<wchar_t,char,struct
   _Mbstatet>(class std::_Locinfo const &,unsigned int)
   
   Library: Visual Studio 2015 Release */

void codecvt<>(undefined4 param_1,undefined4 param_2)

{
  _Cvtvec *p_Var1;
  undefined4 *in_ECX;
  int iVar2;
  uint *puVar3;
  _Cvtvec local_34;
  
  in_ECX[1] = param_2;
  *in_ECX = std::codecvt<unsigned_short,char,_Mbstatet>::vftable;
  p_Var1 = __Getcvt(&local_34);
  puVar3 = in_ECX + 2;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = p_Var1->_Page;
    p_Var1 = (_Cvtvec *)&p_Var1->_Mbcurmax;
    puVar3 = puVar3 + 1;
  }
  return;
}

