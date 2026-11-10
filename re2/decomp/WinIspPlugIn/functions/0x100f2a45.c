// rea decompile_all
// name: CDockingPanesRow::AddPane
// address: 0x100f2a45
// body: available
// range: 0x100f2a45-0x100f2bce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::AddPane(class CPane *,enum
   AFX_DOCK_METHOD,struct tagRECT const *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingPanesRow::AddPane
          (CDockingPanesRow *this,CPane *param_1,AFX_DOCK_METHOD param_2,tagRECT *param_3,
          int param_4)

{
  code *pcVar1;
  CPane *this_00;
  BOOL BVar2;
  AFX_GLOBAL_DATA *pAVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_48;
  undefined4 local_44;
  CPane *local_40;
  int local_3c;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  if ((param_3 == (tagRECT *)0x0) || (BVar2 = IsRectEmpty(param_3), BVar2 != 0)) {
    iVar6 = 0;
    if ((param_4 != 0) && (iVar6 = CalcLastPaneOffset(this), 0 < iVar6)) {
      pAVar3 = GetGlobalData();
      iVar6 = iVar6 + *(int *)(pAVar3 + 0x1b8);
    }
    GetClientRect(this,(CRect *)&local_18);
    uVar4 = *(uint *)(this + 0x40) & 0xa000;
    if (uVar4 == 0) {
      iVar5 = *(int *)(this + 0x18);
      local_3c = local_18.top + iVar6;
      if (*(int *)(this + 0x20) == 1) {
        iVar5 = iVar5 + *(int *)(this + 0x1c);
      }
    }
    else {
      local_3c = *(int *)(this + 0x18);
      iVar5 = local_18.left + iVar6;
      if (*(int *)(this + 0x20) == 1) {
        local_3c = local_3c + *(int *)(this + 0x1c);
      }
    }
  }
  else {
    CopyRect(&local_38,param_3);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    ::GetClientRect(*(HWND *)(*(int *)(this + 0x44) + 0x20),&local_28);
    GetWindowRect(this,(CRect *)&local_18);
    CWnd::ScreenToClient(*(CWnd **)(this + 0x44),&local_38);
    CWnd::ScreenToClient(*(CWnd **)(this + 0x44),&local_18);
    uVar4 = *(uint *)(this + 0x40) & 0xa000;
    if (uVar4 == 0) {
      iVar5 = *(int *)(this + 0x18) + local_28.left;
      local_3c = local_38.top - local_18.top;
    }
    else {
      iVar5 = local_38.left - local_18.left;
      local_3c = *(int *)(this + 0x18) + local_28.top;
    }
  }
  pcVar1 = *(code **)(*(int *)local_40 + 0x260);
  guard_check_icall(&local_48,0,uVar4 != 0);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)local_40 + 0x238);
  guard_check_icall(0,iVar5,local_3c,local_48,local_44,0x34,0);
  this_00 = local_40;
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 100);
  guard_check_icall(this_00);
  (*pcVar1)();
  CPane::UpdateVirtualRect(this_00);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

