// rea decompile_all
// name: CDockingManager::AddPane
// address: 0x100b5e1a
// body: available
// range: 0x100b5e1a-0x100b5eeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDockingManager::AddPane(class CBasePane *,int,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockingManager::AddPane
          (CDockingManager *this,CBasePane *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  __POSITION *p_Var2;
  undefined4 *puVar3;
  CObject *pCVar4;
  int iVar5;
  CObList *this_00;
  __POSITION *local_8;
  
  this_00 = (CObList *)(this + (-(uint)(param_3 != 0) & 0x1c) + 0x20);
  p_Var2 = CObList::Find(this_00,(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var2 != (__POSITION *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    if (param_4 == 0) {
      CObList::AddHead(this_00,(CObject *)param_1);
      goto LAB_100b5ed4;
    }
    local_8 = *(__POSITION **)(this_00 + 4);
    while (p_Var2 = local_8, local_8 = p_Var2, p_Var2 != (__POSITION *)0x0) {
      puVar3 = (undefined4 *)FUN_100972dc(&local_8);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101b236c,(CObject *)*puVar3);
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x180);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 != 0) {
        CObList::InsertBefore(this_00,p_Var2,(CObject *)param_1);
        return 1;
      }
    }
  }
  CObList::AddTail(this_00,(CObject *)param_1);
LAB_100b5ed4:
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(this + 0xe4);
  return 1;
}

