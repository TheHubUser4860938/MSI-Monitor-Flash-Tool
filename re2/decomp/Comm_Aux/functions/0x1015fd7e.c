// rea decompile_all
// name: CAutoHideDockSite::DockPane
// address: 0x1015fd7e
// body: available
// range: 0x1015fd7e-0x1015fefd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CAutoHideDockSite::DockPane(class CPane *,enum
   AFX_DOCK_METHOD,struct tagRECT const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CAutoHideDockSite::DockPane
          (CAutoHideDockSite *this,CPane *param_1,AFX_DOCK_METHOD param_2,tagRECT *param_3)

{
  code *pcVar1;
  int iVar2;
  __POSITION *p_Var3;
  CDockingPanesRow *pCVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_28;
  int local_24;
  tagRECT *local_20;
  CPane *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  local_20 = param_3;
  pcVar1 = *(code **)(*(int *)this + 0x164);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  piVar6 = &local_28;
  uVar5 = iVar2 == 0 ^ 1;
  uVar7 = 0;
  pcVar1 = *(code **)(*(int *)local_1c + 0x260);
  guard_check_icall(piVar6,0,uVar5);
  (*pcVar1)();
  if ((iVar2 == 0) != 0) {
    local_24 = local_28;
  }
  iVar2 = DAT_10206164 + local_24;
  p_Var3 = CObList::Find((CObList *)(this + 0x110),(CObject *)local_1c,(__POSITION *)0x0);
  if (p_Var3 != (__POSITION *)0x0) goto LAB_1015feeb;
  if (*(int *)(this + 0x138) == 0) {
    pCVar4 = CDockSite::AddRow((CDockSite *)this,(__POSITION *)0x0,iVar2);
    pcVar1 = *(code **)(*(int *)this + 0x194);
    guard_check_icall(piVar6,uVar7,uVar5);
    uVar5 = (*pcVar1)();
    if ((uVar5 & 0x1000) == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x194);
      guard_check_icall();
      uVar5 = (*pcVar1)();
      if ((uVar5 & 0x2000) == 0) {
        *(int *)(pCVar4 + 0x1c) = DAT_10206164;
        *(undefined4 *)(pCVar4 + 0x20) = 1;
        goto LAB_1015fe74;
      }
    }
    iVar2 = DAT_10206164;
    *(undefined4 *)(pCVar4 + 0x20) = 0;
    *(int *)(pCVar4 + 0x1c) = iVar2;
  }
  else {
    pCVar4 = *(CDockingPanesRow **)(*(int *)(this + 0x130) + 8);
  }
LAB_1015fe74:
  pcVar1 = *(code **)(*(int *)pCVar4 + 0x1c);
  guard_check_icall(local_1c,4,local_20,1);
  (*pcVar1)();
  CWnd::ShowWindow((CWnd *)this,5);
  CObList::AddTail((CObList *)(this + 0x110),(CObject *)local_1c);
  pcVar1 = *(code **)(*(int *)this + 0x2a8);
  guard_check_icall();
  (*pcVar1)();
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  pcVar1 = *(code **)(*(int *)this + 0x298);
  guard_check_icall(&local_18);
  (*pcVar1)();
LAB_1015feeb:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

