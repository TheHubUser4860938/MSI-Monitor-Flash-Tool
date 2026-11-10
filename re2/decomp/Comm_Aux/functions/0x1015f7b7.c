// rea decompile_all
// name: CPaneContainerManager::RemovePaneDivider
// address: 0x1015f7b7
// body: available
// range: 0x1015f7b7-0x1015f7fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainerManager::RemovePaneDivider(class CPaneDivider *)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

void __thiscall
CPaneContainerManager::RemovePaneDivider(CPaneContainerManager *this,CPaneDivider *param_1)

{
  __POSITION *p_Var1;
  int iVar2;
  
  p_Var1 = CObList::Find((CObList *)(this + 0x20),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var1 != (__POSITION *)0x0) {
    FUN_10063c9c(p_Var1);
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  if (*(int *)(this + 0x3c) != 0) {
    iVar2 = FUN_10159909(param_1,2);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  return;
}

