// rea decompile_all
// name: CPaneContainerManager::ReplacePane
// address: 0x101349f9
// body: available
// range: 0x101349f9-0x10134a75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::ReplacePane(class CDockablePane *,class
   CDockablePane *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneContainerManager::ReplacePane
          (CPaneContainerManager *this,CDockablePane *param_1,CDockablePane *param_2)

{
  CObList *this_00;
  code *pcVar1;
  __POSITION *p_Var2;
  CPaneContainer *this_01;
  CPaneContainerManager *local_8;
  
  this_00 = (CObList *)(this + 4);
  local_8 = this;
  p_Var2 = CObList::Find(this_00,(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var2 == (__POSITION *)0x0) {
    CObList::AddTail(this_00,(CObject *)param_2);
  }
  else {
    local_8 = (CPaneContainerManager *)0x0;
    pcVar1 = *(code **)(*(int *)this + 0x8c);
    guard_check_icall(param_1,&local_8);
    this_01 = (CPaneContainer *)(*pcVar1)();
    if (this_01 != (CPaneContainer *)0x0) {
      CPaneContainer::SetPane(this_01,param_2,(int)local_8);
      CObList::InsertAfter(this_00,p_Var2,(CObject *)param_2);
      FUN_10039ef3(p_Var2);
    }
  }
  return 1;
}

