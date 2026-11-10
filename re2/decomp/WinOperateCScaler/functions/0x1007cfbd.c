// rea decompile_all
// name: CMFCTabCtrl::OnHScroll
// address: 0x1007cfbd
// body: available
// range: 0x1007cfbd-0x1007d0fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTabCtrl::OnHScroll(unsigned int,unsigned int,class CScrollBar *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTabCtrl::OnHScroll(CMFCTabCtrl *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  uint wParam;
  code *pcVar1;
  CWnd *pCVar2;
  int *piVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(this + 0x250) != 0) {
    if (param_3 == (CScrollBar *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_3 + 0x20);
    }
    iVar6 = 0;
    if (this != (CMFCTabCtrl *)0xfffffcd0) {
      iVar6 = *(int *)(this + 0x350);
    }
    if (iVar5 == iVar6) {
      if (*(int *)(this + 0xc0) == -1) {
        return;
      }
      if (DAT_1020a954 != 0) {
        return;
      }
      pcVar1 = *(code **)(*(int *)this + 0x210);
      guard_check_icall();
      pCVar2 = (CWnd *)(*pcVar1)();
      piVar3 = (int *)FUN_1009f8c7(*(undefined4 *)(this + 0xc0));
      DAT_1020a954 = 1;
      wParam = param_2 << 0x10 | param_1 & 0xffff;
      if ((*(int *)(*piVar3 + 0x38) != 0) &&
         (((char)param_1 == '\x04' || ((char)param_1 == '\x05')))) {
        iVar5 = CWnd::GetScrollPos(pCVar2,0);
        SendMessageW(*(HWND *)(pCVar2 + 0x20),0x1014,param_2 - iVar5,0);
      }
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x114,wParam,0);
      DAT_1020a954 = 0;
      iVar5 = CWnd::GetScrollPos(pCVar2,0);
      SetScrollPos(*(HWND *)(this + 0x350),2,iVar5,1);
      HideActiveWindowHorzScrollBar(this);
      pHVar4 = GetParent(*(HWND *)(this + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar4);
      SendMessageW(*(HWND *)(pCVar2 + 0x20),DAT_1020a93c,wParam,0);
      return;
    }
  }
  CWnd::OnVScroll((CWnd *)this,param_1,param_2,param_3);
  return;
}

