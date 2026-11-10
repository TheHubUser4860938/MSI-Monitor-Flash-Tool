// rea decompile_all
// name: CMFCPopupMenuBar::OnLButtonUp
// address: 0x100ba6a0
// body: available
// range: 0x100ba6a0-0x100ba79d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenuBar::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPopupMenuBar::OnLButtonUp(CMFCPopupMenuBar *this,WPARAM param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  BOOL BVar2;
  CMFCToolBar *pCVar3;
  CFrameWnd *pCVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if (*(int *)(this + 0xd60) == 0) {
    if (DAT_101daf90 == 0) {
      pt.y = param_4;
      pt.x = param_3;
      BVar2 = PtInRect(&local_18,pt);
      if (BVar2 == 0) {
        pCVar3 = FindDestintationToolBar(this,param_3,param_4);
        if (pCVar3 != (CMFCToolBar *)0x0) {
          MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(pCVar3 + 0x20),(LPPOINT)&param_3,1);
          SendMessageW(*(HWND *)(pCVar3 + 0x20),0x202,param_1,
                       CONCAT22((undefined2)param_4,(undefined2)param_3));
        }
        pCVar4 = AFXGetParentFrame((CWnd *)this);
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x60);
        guard_check_icall();
        (*pcVar1)();
        goto LAB_100ba78c;
      }
      goto LAB_100ba756;
    }
  }
  else {
LAB_100ba756:
    if ((DAT_101daf90 == 0) && (-1 < *(int *)(this + 0xbf0))) {
      *(int *)(this + 0xbec) = *(int *)(this + 0xbf0);
    }
  }
  *(undefined4 *)(this + 0xd60) = 0;
  if (*(int *)(this + 0xd74) != 0) {
    CMFCToolBar::OnLButtonUp((CMFCToolBar *)this,param_1,param_3,param_4);
  }
LAB_100ba78c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

