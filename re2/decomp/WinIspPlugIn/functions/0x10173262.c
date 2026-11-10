// rea decompile_all
// name: CCheckListBox::accDoDefaultAction
// address: 0x10173262
// body: available
// range: 0x10173262-0x1017335d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual long __thiscall CCheckListBox::accDoDefaultAction(struct tagVARIANT)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CCheckListBox::accDoDefaultAction
          (CCheckListBox *this,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  LPARAM lParam;
  LRESULT LVar1;
  int iVar2;
  ulong uVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  
  if ((0 < param_4) && (LVar1 = SendMessageW(*(HWND *)(this + 0x20),0x18b,0,0), param_4 <= LVar1)) {
    iVar8 = *(int *)(this + 0x84);
    iVar2 = GetCheck(this,param_4 + -1);
    iVar8 = (iVar2 + 1) % (int)((iVar8 == 6) + 2);
    SetCheck(this,param_4 + -1,iVar8);
    uVar3 = CWnd::GetExStyle((CWnd *)this);
    if (((uVar3 & 0x808) != 0) &&
       (LVar1 = SendMessageW(*(HWND *)(this + 0x20),0x187,param_4 - 1,0), LVar1 != 0)) {
      SetSelectionCheck(this,iVar8);
    }
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    lParam = *(LPARAM *)(this + 0x20);
    uVar6 = CWnd::GetDlgCtrlID((CWnd *)this);
    SendMessageW(*(HWND *)(pCVar5 + 0x20),0x111,uVar6 & 0xffff | 0x280000,lParam);
    SendMessageW(*(HWND *)(this + 0x20),0x185,1,param_4 + -1);
    return 0;
  }
  lVar7 = CWnd::accDoDefaultAction((CWnd *)this,param_2,param_3,param_4,param_5);
  return lVar7;
}

