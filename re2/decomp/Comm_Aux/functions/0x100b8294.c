// rea decompile_all
// name: CMFCPopupMenu::OnVScroll
// address: 0x100b8294
// body: available
// range: 0x100b8294-0x100b8402 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::OnVScroll(unsigned int,unsigned int,class CScrollBar
   *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPopupMenu::OnVScroll(CMFCPopupMenu *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  code *pcVar1;
  CMFCPopupMenuBar *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint nPos;
  tagSCROLLINFO local_24;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (param_3 == (CScrollBar *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_3 + 0x20);
  }
  if ((CWnd *)(this + 0xfb8) == (CWnd *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(this + 0xfd8);
  }
  if (iVar3 != iVar4) {
    CFrameWnd::OnVScroll((CFrameWnd *)this,param_1,param_2,param_3);
    goto switchD_100b837e_default;
  }
  pcVar1 = *(code **)(*(int *)this + 0x1c8);
  guard_check_icall();
  this_00 = (CMFCPopupMenuBar *)(*pcVar1)();
  _memset(&local_24,0,0x1c);
  local_24.cbSize = 0x1c;
  local_24.fMask = 0x17;
  CWnd::GetScrollInfo((CWnd *)(this + 0xfb8),2,&local_24,0x17);
  iVar3 = *(int *)(this_00 + 0xd4c);
  if (local_24.nMax < 1) {
    pcVar1 = *(code **)(*(int *)this_00 + 0x354);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    iVar2 = FUN_10094a15();
    if (((0 < iVar2) && (0 < iVar4)) &&
       (local_24.nMax = (iVar2 * iVar4 - *(int *)(this + 0xf50)) / iVar4 + 1, local_24.nMax < 0)) {
      local_24.nMax = 0;
    }
  }
  switch(param_1) {
  case 0:
    param_2 = iVar3 - 1;
    break;
  case 1:
    param_2 = iVar3 + 1;
    break;
  case 2:
    param_2 = iVar3 - local_24.nPage;
    break;
  case 3:
    param_2 = iVar3 + local_24.nPage;
    break;
  case 4:
  case 5:
    break;
  case 6:
    uVar5 = 0;
    param_2 = uVar5;
    goto LAB_100b838f;
  case 7:
    param_2 = local_24.nMax;
    break;
  default:
    goto switchD_100b837e_default;
  }
  uVar5 = param_2;
  if ((int)param_2 < 0) {
    uVar5 = 0;
  }
LAB_100b838f:
  nPos = local_24.nMax;
  if (((int)uVar5 < local_24.nMax) && (nPos = param_2, (int)param_2 < 0)) {
    nPos = 0;
  }
  if (nPos != *(uint *)(this_00 + 0xd4c)) {
    CMFCPopupMenuBar::SetOffset(this_00,nPos);
    if ((this != (CMFCPopupMenu *)0xfffff048) && (*(int *)(this + 0xfd8) != 0)) {
      SetScrollPos(*(HWND *)(this + 0xfd8),2,nPos,1);
    }
    AdjustScroll(this,0);
  }
switchD_100b837e_default:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

