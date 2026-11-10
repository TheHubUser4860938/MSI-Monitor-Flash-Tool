// rea decompile_all
// name: CDockingPanesRow::OnInsertPane
// address: 0x100bd98e
// body: available
// range: 0x100bd98e-0x100bda98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CDockingPanesRow::OnInsertPane(class CPane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingPanesRow::OnInsertPane(CDockingPanesRow *this,CPane *param_1)

{
  code *pcVar1;
  __POSITION *p_Var2;
  bool bVar3;
  undefined4 *puVar4;
  CObject *pCVar5;
  int iVar6;
  __POSITION *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  local_1c = *(__POSITION **)(this + 0x28);
  do {
    p_Var2 = local_1c;
    local_1c = p_Var2;
    if (p_Var2 == (__POSITION *)0x0) {
      CObList::AddTail((CObList *)(this + 0x24),(CObject *)param_1);
      goto LAB_100bda1f;
    }
    puVar4 = (undefined4 *)FUN_1002466e(&local_1c);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101878f4,(CObject *)*puVar4);
    bVar3 = CPane::IsLeftOf((CPane *)pCVar5,local_18.left,local_18.top,local_18.right,
                            local_18.bottom,1);
  } while (!bVar3);
  CObList::InsertBefore((CObList *)(this + 0x24),p_Var2,(CObject *)param_1);
LAB_100bda1f:
  pcVar1 = *(code **)(*(int *)this + 0x44);
  guard_check_icall(1);
  (*pcVar1)();
  if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
    iVar6 = local_18.right - local_18.left;
  }
  else {
    iVar6 = local_18.bottom - local_18.top;
  }
  if (*(int *)(this + 0xc) < iVar6) {
    CDockSite::ResizeRow(*(CDockSite **)(this + 0x44),this,*(int *)(this + 0x1c) + iVar6,1);
  }
  *(CDockingPanesRow **)(param_1 + 0xbc) = this;
  pcVar1 = *(code **)(*(int *)this + 0x28);
  guard_check_icall(param_1);
  (*pcVar1)();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

