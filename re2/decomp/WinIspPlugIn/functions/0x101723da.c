// rea decompile_all
// name: CCheckListBox::OnKeyDown
// address: 0x101723da
// body: available
// range: 0x101723da-0x10172568 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CCheckListBox::OnKeyDown(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CCheckListBox::OnKeyDown(CCheckListBox *this,uint param_1,uint param_2,uint param_3)

{
  LPARAM lParam;
  WPARAM wParam;
  HWND pHVar1;
  CWnd *pCVar2;
  ulong uVar3;
  int iVar4;
  LRESULT LVar5;
  int iVar6;
  uint uVar7;
  UINT Msg;
  
  if (param_1 != 0x20) {
LAB_10172559:
    FUN_100540e0();
    return;
  }
  wParam = SendMessageW(*(HWND *)(this + 0x20),0x19f,0,0);
  pHVar1 = GetParent(*(HWND *)(this + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  if (((wParam == 0xffffffff) || (*(int *)(this + 0x84) == 2)) || (*(int *)(this + 0x84) == 5))
  goto LAB_10172559;
  uVar3 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar3 & 8) == 0) {
    iVar4 = IsEnabled(this,wParam);
    if (iVar4 != 0) {
      iVar4 = (*(int *)(this + 0x84) == 6) + 2;
      iVar6 = GetCheck(this,wParam);
      if (iVar6 == iVar4) {
        iVar6 = iVar6 + -1;
      }
      iVar4 = (iVar6 + 1) % iVar4;
      SetCheck(this,wParam,iVar4);
      FUN_1017226d(wParam);
      uVar3 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar3 & 0x800) != 0) {
        SetSelectionCheck(this,iVar4);
      }
      wParam = *(WPARAM *)(this + 0x20);
      uVar7 = CWnd::GetDlgCtrlID((CWnd *)this);
      uVar7 = uVar7 & 0xffff | 0x280000;
      Msg = 0x111;
      pHVar1 = *(HWND *)(pCVar2 + 0x20);
      goto LAB_101724d2;
    }
LAB_101724c9:
    uVar7 = 0;
  }
  else {
    iVar4 = IsEnabled(this,wParam);
    if (iVar4 == 0) goto LAB_101724c9;
    LVar5 = SendMessageW(*(HWND *)(this + 0x20),0x187,wParam,0);
    if (LVar5 != 0) {
      iVar4 = (*(int *)(this + 0x84) == 6) + 2;
      iVar6 = GetCheck(this,wParam);
      if (iVar6 == iVar4) {
        iVar6 = iVar6 + -1;
      }
      SetCheck(this,wParam,(iVar6 + 1) % iVar4);
      lParam = *(LPARAM *)(this + 0x20);
      uVar7 = CWnd::GetDlgCtrlID((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x111,uVar7 & 0xffff | 0x280000,lParam);
    }
    uVar7 = (uint)(LVar5 == 0);
  }
  Msg = 0x185;
  pHVar1 = *(HWND *)(this + 0x20);
LAB_101724d2:
  SendMessageW(pHVar1,Msg,uVar7,wParam);
  return;
}

