// rea decompile_all
// name: CMFCPropertyGridCtrl::OnVScroll
// address: 0x100771dd
// body: available
// range: 0x100771dd-0x1007730c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::OnVScroll(unsigned int,unsigned int,class
   CScrollBar *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPropertyGridCtrl::OnVScroll
          (CMFCPropertyGridCtrl *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((*(int *)(this + 0x3d8) != 0) && (param_3 != (CScrollBar *)0x0)) &&
     (*(int *)(param_3 + 0x20) != 0)) {
    iVar1 = *(int *)(*(int *)(this + 0x3d8) + 0xc0);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x20);
    }
    if (iVar3 == *(int *)(param_3 + 0x20)) {
      return;
    }
  }
  CMFCPropertyGridToolTipCtrl::Hide((CMFCPropertyGridToolTipCtrl *)(this + 0x1d8));
  pcVar2 = *(code **)(*(int *)this + 0x188);
  guard_check_icall(1);
  (*pcVar2)();
  iVar1 = *(int *)(this + 0x35c);
  switch(param_1) {
  case 0:
    param_2 = iVar1 - 1;
    break;
  case 1:
    param_2 = iVar1 + 1;
    break;
  case 2:
    param_2 = iVar1 - *(int *)(this + 0x364);
    break;
  case 3:
    param_2 = *(int *)(this + 0x364) + iVar1;
    break;
  case 4:
  case 5:
    break;
  case 6:
    *(undefined4 *)(this + 0x35c) = 0;
    goto LAB_10077282;
  case 7:
    param_2 = *(uint *)(this + 0x360);
    break;
  default:
    goto switchD_10077243_default;
  }
  *(uint *)(this + 0x35c) = param_2;
LAB_10077282:
  iVar3 = *(int *)(this + 0x35c);
  iVar5 = iVar3;
  if (iVar3 < 0) {
    iVar5 = 0;
  }
  iVar4 = (*(int *)(this + 0x360) - *(int *)(this + 0x364)) + 1;
  if ((iVar5 < iVar4) && (iVar4 = iVar3, iVar3 < 0)) {
    iVar4 = 0;
  }
  *(int *)(this + 0x35c) = iVar4;
  if (iVar4 != iVar1) {
    CWnd::SetScrollPos((CWnd *)this,1,iVar4,1);
    ReposProperties(this);
    CWnd::ScrollWindow((CWnd *)this,0,(iVar1 - *(int *)(this + 0x35c)) * *(int *)(this + 0x354),
                       (tagRECT *)(this + 0x328),(tagRECT *)(this + 0x328));
    if (*(int *)(this + 0x3d8) != 0) {
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(*(int *)(this + 0x3d8) + 0x40),(HRGN)0x0,0x105);
    }
  }
switchD_10077243_default:
  return;
}

