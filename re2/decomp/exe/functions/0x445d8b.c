// rea decompile_all
// name: ATL::CRowset<ATL::CAccessorBase>::SetData
// address: 0x445d8b
// body: available
// range: 0x445d8b-0x445dcd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall ATL::CRowset<class ATL::CAccessorBase>::SetData(int)const 
   
   Library: Visual Studio 2015 Release */

long __thiscall
ATL::CRowset<ATL::CAccessorBase>::SetData(CRowset<ATL::CAccessorBase> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  piVar1 = *(int **)(this + 4);
  if (piVar1 == (int *)0x0) {
    lVar5 = -0x7fffbffe;
  }
  else {
    piVar2 = *(int **)(this + 8);
    if ((uint)param_1 < (uint)piVar2[1]) {
      uVar4 = *(undefined4 *)(*piVar2 + param_1 * 8);
    }
    else {
      uVar4 = 0;
    }
    iVar3 = *piVar1;
    guard_check_icall(piVar1,*(undefined4 *)(this + 0xc),uVar4,piVar2[2]);
    lVar5 = (**(code **)(iVar3 + 0x10))();
  }
  return lVar5;
}

