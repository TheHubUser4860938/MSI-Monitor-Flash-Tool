// rea decompile_all
// name: CCheckListBox::OnLButtonDown
// address: 0x10146d0f
// body: available
// range: 0x10146d0f-0x10146e11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CCheckListBox::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CCheckListBox::OnLButtonDown
          (CCheckListBox *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  LPARAM lParam;
  WPARAM wParam;
  int iVar1;
  HWND pHVar2;
  ulong uVar3;
  LRESULT LVar4;
  uint uVar5;
  int iVar6;
  CCheckListBox *local_8;
  
  local_8 = this;
  CWnd::SetFocus((CWnd *)this);
  wParam = FUN_10146174(param_3,param_4,&local_8);
  iVar1 = IsEnabled(this,wParam);
  if (iVar1 == 0) {
    return;
  }
  if (((*(int *)(this + 0x84) != 2) && (*(int *)(this + 0x84) != 5)) &&
     (local_8 != (CCheckListBox *)0x0)) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    local_8 = (CCheckListBox *)CWnd::FromHandle(pHVar2);
    iVar6 = (*(int *)(this + 0x84) == 6) + 2;
    iVar1 = GetCheck(this,wParam);
    if (iVar1 == iVar6) {
      iVar1 = iVar1 + -1;
    }
    iVar6 = (iVar1 + 1) % iVar6;
    SetCheck(this,wParam,iVar6);
    FUN_1014662c(wParam);
    uVar3 = CWnd::GetExStyle((CWnd *)this);
    if (((uVar3 & 0x808) == 0) ||
       (LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x187,wParam,0), LVar4 == 0)) {
      FUN_100283ad();
    }
    else {
      SetSelectionCheck(this,iVar6);
    }
    lParam = *(LPARAM *)(this + 0x20);
    uVar5 = CWnd::GetDlgCtrlID((CWnd *)this);
    SendMessageW(*(HWND *)(local_8 + 0x20),0x111,uVar5 & 0xffff | 0x280000,lParam);
    return;
  }
  FUN_100283ad();
  return;
}

