// rea decompile_all
// name: CDockingPanesRow::ShowPane
// address: 0x100f4bc0
// body: available
// range: 0x100f4bc0-0x100f4cb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockingPanesRow::ShowPane(class CPane *,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockingPanesRow::ShowPane(CDockingPanesRow *this,CPane *param_1,int param_2,int param_3)

{
  code *pcVar1;
  __POSITION *p_Var2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  p_Var2 = CObList::Find((CObList *)(this + 0x24),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var2 != (__POSITION *)0x0) {
    CWnd::ShowWindow((CWnd *)param_1,-(uint)(param_2 != 0) & 5);
    pcVar1 = *(code **)(*(int *)this + 0x44);
    guard_check_icall(param_3);
    (*pcVar1)();
    if (param_2 == 0) {
      ExpandStretchedPanes(this);
    }
    else {
      if (param_3 != 0) goto LAB_100f4c9f;
      pcVar1 = *(code **)(*(int *)param_1 + 0x20c);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x28);
      guard_check_icall(param_1);
      (*pcVar1)();
    }
    if (param_3 == 0) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      GetClientRect(this,(CRect *)&local_18);
      pcVar1 = *(code **)(**(int **)(this + 0x44) + 0x298);
      guard_check_icall(&local_18);
      (*pcVar1)();
      iVar3 = *(int *)this;
      guard_check_icall(&local_18,0xffffffff,0,0);
      (**(code **)(iVar3 + 0x3c))();
    }
  }
LAB_100f4c9f:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

