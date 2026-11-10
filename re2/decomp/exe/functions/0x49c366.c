// rea decompile_all
// name: CDockSite::RemoveRow
// address: 0x49c366
// body: available
// range: 0x49c366-0x49c3f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockSite::RemoveRow(class CDockingPanesRow *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockSite::RemoveRow(CDockSite *this,CDockingPanesRow *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  __POSITION *p_Var4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  pcVar2 = *(code **)(*(int *)param_1 + 0x58);
  guard_check_icall();
  iVar3 = (*pcVar2)();
  if (iVar3 != 0) {
    ResizeDockSiteByOffset(this,-iVar1,1);
  }
  p_Var4 = CObList::Find((CObList *)(this + 300),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var4 != (__POSITION *)0x0) {
    pcVar2 = *(code **)(*(int *)this + 0x288);
    guard_check_icall(p_Var4,0);
    (*pcVar2)();
    FUN_004d2617(p_Var4);
    pcVar2 = *(code **)(*(int *)param_1 + 4);
    guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}

