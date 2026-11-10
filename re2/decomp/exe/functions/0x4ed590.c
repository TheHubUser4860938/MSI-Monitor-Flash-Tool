// rea decompile_all
// name: CDockingPanesRow::AddPaneFromRow
// address: 0x4ed590
// body: available
// range: 0x4ed590-0x4ed6fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::AddPaneFromRow(class CPane *,enum
   AFX_DOCK_METHOD)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingPanesRow::AddPaneFromRow(CDockingPanesRow *this,CPane *param_1,AFX_DOCK_METHOD param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int xRight;
  int iVar4;
  LONG yTop;
  tagPOINT local_40;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  if (param_2 == 1) {
    local_40.x = 0;
    local_40.y = 0;
    GetCursorPos(&local_40);
    ScreenToClient(*(HWND *)(*(int *)(this + 0x44) + 0x20),&local_40);
    iVar4 = *(int *)(param_1 + 0x168);
    iVar3 = *(int *)(param_1 + 0x16c);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    ::GetClientRect(*(HWND *)(param_1 + 0x20),&local_38);
    CWnd::ClientToScreen((CWnd *)param_1,&local_38);
    uVar2 = *(uint *)(this + 0x40) & 0xa000;
    if (uVar2 == 0) {
      iVar4 = local_40.y - iVar3;
    }
    else {
      iVar4 = local_40.x - iVar4;
    }
    yTop = iVar4 - (local_38.left - local_18.left);
  }
  else {
    CWnd::ScreenToClient(*(CWnd **)(this + 0x44),&local_18);
    uVar2 = *(uint *)(this + 0x40) & 0xa000;
    yTop = local_18.left;
    if (uVar2 == 0) {
      yTop = local_18.top;
    }
  }
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  if (uVar2 == 0) {
    iVar3 = (local_18.bottom - local_18.top) + yTop;
    xRight = (*(int *)(this + 0x18) - local_18.left) + local_18.right;
    iVar4 = *(int *)(this + 0x18);
  }
  else {
    iVar3 = (*(int *)(this + 0x18) - local_18.top) + local_18.bottom;
    xRight = (local_18.right - local_18.left) + yTop;
    iVar4 = yTop;
    yTop = *(int *)(this + 0x18);
  }
  SetRect(&local_28,iVar4,yTop,xRight,iVar3);
  pcVar1 = *(code **)(*(int *)param_1 + 0x238);
  guard_check_icall(0,local_28.left,local_28.top,local_28.right,local_28.bottom,0x15,0);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 100);
  guard_check_icall(param_1);
  (*pcVar1)();
  CPane::UpdateVirtualRect(param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

