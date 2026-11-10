// rea decompile_all
// name: CPaneContainerManager::CreatePaneDivider
// address: 0x1015eae0
// body: available
// range: 0x1015eae0-0x1015ebc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CPaneDivider * __thiscall CPaneContainerManager::CreatePaneDivider(class
   CRect,unsigned long,int)
   
   Library: Visual Studio 2015 Release */

CPaneDivider * __thiscall CPaneContainerManager::CreatePaneDivider(CPaneContainerManager *this)

{
  code *pcVar1;
  CObject *pCVar2;
  CPaneDivider *this_00;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  CPaneContainerManager *local_8;
  
  local_8 = this;
  pCVar2 = (CObject *)FUN_1004e514();
  this_00 = (CPaneDivider *)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_101d4408,pCVar2)
  ;
  CPaneDivider::Init(this_00,0,(CWnd *)0x0);
  iVar5 = in_stack_00000018;
  if (in_stack_00000018 == -1) {
    iVar5 = DAT_10206160;
    DAT_10206160 = DAT_10206160 + 1;
  }
  if (DAT_10206160 <= iVar5) {
    DAT_10206160 = iVar5 + 1;
  }
  local_8 = *(CPaneContainerManager **)(this + 0x24);
  while (local_8 != (CPaneContainerManager *)0x0) {
    puVar3 = (undefined4 *)FUN_10034920(&local_8);
    iVar4 = CWnd::GetDlgCtrlID((CWnd *)*puVar3);
    if (iVar4 == iVar5) {
      iVar5 = DAT_10206160;
      DAT_10206160 = DAT_10206160 + 1;
    }
  }
  pcVar1 = *(code **)(*(int *)this_00 + 0x2a8);
  guard_check_icall(0,in_stack_00000014,&stack0x00000004,*(undefined4 *)(this + 0x4c),iVar5,0);
  iVar5 = (*pcVar1)();
  if (iVar5 == 0) {
    pcVar1 = *(code **)(*(int *)this_00 + 4);
    guard_check_icall(1);
    (*pcVar1)();
    this_00 = (CPaneDivider *)0x0;
  }
  else {
    FUN_1015d6ca(5);
    *(CPaneContainerManager **)(this_00 + 0x168) = this;
    CObList::AddTail((CObList *)(this + 0x20),(CObject *)this_00);
  }
  return this_00;
}

