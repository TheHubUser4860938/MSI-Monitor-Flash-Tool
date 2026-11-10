// rea decompile_all
// name: COleControlContainer::ScrollChildren
// address: 0x44083d
// body: available
// range: 0x44083d-0x44089b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COleControlContainer::ScrollChildren(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
COleControlContainer::ScrollChildren(COleControlContainer *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  
  local_8 = *(int *)(this + 0x44);
  while (local_8 != 0) {
    piVar3 = (int *)FUN_004ead48(&local_8);
    iVar4 = *piVar3;
    iVar1 = *(int *)(iVar4 + 4);
    if (iVar1 != 0) {
      OffsetRect((LPRECT)(iVar1 + 0x30),param_1,param_2);
      iVar4 = *(int *)(iVar4 + 4);
      piVar3 = *(int **)(iVar4 + 0x54);
      iVar4 = iVar4 + 0x30;
      pcVar2 = *(code **)(*piVar3 + 0x1c);
      guard_check_icall(piVar3,iVar4,iVar4);
      (*pcVar2)();
    }
  }
  return;
}

