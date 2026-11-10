// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnVScroll
// address: 0x101572b1
// body: available
// range: 0x101572b1-0x10157425 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::OnVScroll(unsigned int,unsigned int,class
   CScrollBar *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnVScroll
          (CMFCRibbonPanelMenuBar *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  int iVar1;
  int iVar2;
  uint nPos;
  uint uVar3;
  tagSCROLLINFO local_24;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xea4) == 0) {
LAB_101573eb:
    if (DAT_10210bb4 == 0) {
      DAT_10210bb4 = 1;
      CWnd::OnVScroll((CWnd *)this,param_1,param_2,param_3);
      DAT_10210bb4 = 0;
    }
    goto switchD_1015736a_default;
  }
  if (param_3 == (CScrollBar *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_3 + 0x20);
  }
  if ((CWnd *)(this + 0xe20) == (CWnd *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0xe40);
  }
  if ((iVar1 != iVar2) || (*(int *)(*(int *)(this + 0xea4) + 0x110) == 0)) goto LAB_101573eb;
  _memset(&local_24,0,0x1c);
  local_24.cbSize = 0x1c;
  local_24.fMask = 0x17;
  CWnd::GetScrollInfo((CWnd *)(this + 0xe20),2,&local_24,0x17);
  iVar1 = *(int *)(*(int *)(this + 0xea4) + 0xb8);
  if ((int)(local_24.nMax - local_24.nPage) < 2) goto switchD_1015736a_default;
  iVar2 = CMFCRibbonGallery::GetMenuRowHeight
                    (*(CMFCRibbonGallery **)(*(int *)(this + 0xea4) + 0x110));
  switch(param_1) {
  case 0:
    param_2 = iVar1 - iVar2;
    break;
  case 1:
    param_2 = iVar1 + iVar2;
    break;
  case 2:
    param_2 = iVar1 - local_24.nPage;
    break;
  case 3:
    param_2 = iVar1 + local_24.nPage;
    break;
  case 4:
  case 5:
    break;
  case 6:
    uVar3 = 0;
    param_2 = uVar3;
    goto LAB_10157380;
  case 7:
    param_2 = local_24.nMax;
    break;
  default:
    goto switchD_1015736a_default;
  }
  uVar3 = param_2;
  if ((int)param_2 < 0) {
    uVar3 = 0;
  }
LAB_10157380:
  nPos = local_24.nMax - local_24.nPage;
  if (((int)uVar3 < (int)nPos) && (nPos = param_2, (int)param_2 < 0)) {
    nPos = 0;
  }
  if (nPos != *(uint *)(*(CMFCRibbonPanel **)(this + 0xea4) + 0xb8)) {
    CMFCRibbonPanel::ScrollPalette(*(CMFCRibbonPanel **)(this + 0xea4),nPos,0);
    SetScrollPos(*(HWND *)(this + 0xe40),2,nPos,1);
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
switchD_1015736a_default:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

