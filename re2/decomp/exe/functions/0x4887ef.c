// rea decompile_all
// name: CMFCBaseTabCtrl::StartRenameTab
// address: 0x4887ef
// body: available
// range: 0x4887ef-0x48896e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x48880e to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::StartRenameTab(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCBaseTabCtrl::StartRenameTab(CMFCBaseTabCtrl *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  CWnd *this_00;
  int iVar4;
  AFX_GLOBAL_DATA *pAVar5;
  WPARAM wParam;
  HWND pHVar6;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x4887fb;
  iVar2 = 0;
  if (this != (CMFCBaseTabCtrl *)0x0) {
    iVar2 = *(int *)(this + 0x20);
  }
  if (iVar2 != 0) {
    if (((*(int *)(this + 0x154) != 0) && (-1 < param_1)) && (param_1 < *(int *)(this + 0x9c))) {
      iVar2 = FUN_004858f9(param_1);
      BVar3 = IsRectEmpty((RECT *)(iVar2 + 0x10));
      if (BVar3 == 0) {
        if (*(int *)(this + 0x150) != 0) goto LAB_0048880e;
        this_00 = (CWnd *)FUN_00416408(0x80);
        local_8 = 0;
        if (this_00 == (CWnd *)0x0) {
          this_00 = (CWnd *)0x0;
        }
        else {
          CWnd::CWnd(this_00);
          *(undefined ***)this_00 = CEdit::vftable;
        }
        local_8 = 0xffffffff;
        *(CWnd **)(this + 0x150) = this_00;
        local_24.left = ((RECT *)(iVar2 + 0x10))->left;
        local_24.top = *(LONG *)(iVar2 + 0x14);
        local_24.right = *(LONG *)(iVar2 + 0x18);
        local_24.bottom = *(LONG *)(iVar2 + 0x1c);
        pcVar1 = *(code **)(*(int *)this + 0x208);
        guard_check_icall(&local_24);
        (*pcVar1)();
        iVar4 = CEdit::Create(*(CEdit **)(this + 0x150),0x50800080,&local_24,(CWnd *)this,1);
        if (iVar4 == 0) {
          if (*(int **)(this + 0x150) != (int *)0x0) {
            pcVar1 = *(code **)(**(int **)(this + 0x150) + 4);
            guard_check_icall(1);
            (*pcVar1)();
          }
          *(undefined4 *)(this + 0x150) = 0;
        }
        else {
          FUN_004349b3(*(undefined4 *)(iVar2 + 4));
          pAVar5 = GetGlobalData();
          if (pAVar5 == (AFX_GLOBAL_DATA *)0xfffffee4) {
            wParam = 0;
          }
          else {
            wParam = *(WPARAM *)(pAVar5 + 0x120);
          }
          SendMessageW(*(HWND *)(*(int *)(this + 0x150) + 0x20),0x30,wParam,1);
          SendMessageW(*(HWND *)(*(int *)(this + 0x150) + 0x20),0xb1,0,-1);
          CWnd::SetFocus(*(CWnd **)(this + 0x150));
          *(int *)(this + 0x14c) = param_1;
          pHVar6 = SetCapture(*(HWND *)(this + 0x20));
          CWnd::FromHandle(pHVar6);
        }
      }
    }
    iVar2 = FUN_0055bae6();
    return iVar2;
  }
LAB_0048880e:
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

