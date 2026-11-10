// rea decompile_all
// name: CMFCButton::CheckNextPrevRadioButton
// address: 0x1006be05
// body: available
// range: 0x1006be05-0x1006bf00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCButton::CheckNextPrevRadioButton(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCButton::CheckNextPrevRadioButton(CMFCButton *this,int param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CWnd *pCVar3;
  CObject *this_00;
  ulong uVar4;
  uint uVar5;
  HWND hWnd;
  LPARAM lParam;
  
  hWnd = (HWND)0x0;
  if (*(int *)(this + 200) != 0) {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    pCVar3 = CWnd::GetNextDlgGroupItem(pCVar2,(CWnd *)this,(uint)(param_1 == 0));
    if (pCVar3 != (CWnd *)this) {
      do {
        this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCButton_101da55c,(CObject *)pCVar3);
        if (((this_00 != (CObject *)0x0) && (*(int *)(this_00 + 200) != 0)) &&
           (uVar4 = CWnd::GetExStyle((CWnd *)this_00), (uVar4 & 0x18000000) == 0x10000000)) break;
        pCVar3 = CWnd::GetNextDlgGroupItem(pCVar2,pCVar3,(uint)(param_1 == 0));
      } while (pCVar3 != (CWnd *)this);
      if (((this_00 != (CObject *)0x0) && (this_00 != (CObject *)this)) &&
         (*(int *)(this_00 + 0xc0) == 0)) {
        SendMessageW(*(HWND *)(this_00 + 0x20),0xf1,1,0);
        CWnd::SetFocus((CWnd *)this_00);
        pHVar1 = GetParent(*(HWND *)(this_00 + 0x20));
        pCVar2 = CWnd::FromHandle(pHVar1);
        if (pCVar2 != (CWnd *)0x0) {
          hWnd = *(HWND *)(pCVar2 + 0x20);
        }
        lParam = *(LPARAM *)(this_00 + 0x20);
        uVar5 = GetWindowLongW(*(HWND *)(this_00 + 0x20),-0xc);
        SendMessageW(hWnd,0x111,uVar5 & 0xffff,lParam);
        return 1;
      }
    }
  }
  return 0;
}

