// rea decompile_all
// name: CMFCButton::OnLButtonUp
// address: 0x1006d019
// body: available
// range: 0x1006d019-0x1006d15f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCButton::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCButton::OnLButtonUp(CMFCButton *this)

{
  HWND hWnd;
  LPARAM lParam;
  int iVar1;
  bool bVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  uint uVar5;
  BOOL BVar6;
  
  bVar2 = true;
  if (((*(int *)(this + 0xac) == 0) || (*(int *)(this + 0xb0) == 0)) || (*(int *)(this + 0xb4) == 0)
     ) {
    bVar2 = false;
  }
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  if ((bVar2) && (*(int *)(this + 0xcc) != 0)) {
    if (*(int *)(this + 0xc4) == 0) {
      if ((*(int *)(this + 200) != 0) && (*(int *)(this + 0xc0) == 0)) {
        *(undefined4 *)(this + 0xc0) = 1;
        UncheckRadioButtonsInGroup(this);
      }
    }
    else {
      *(uint *)(this + 0xc0) = (uint)(*(int *)(this + 0xc0) == 0);
    }
  }
  hWnd = *(HWND *)(this + 0x20);
  if (*(int *)(this + 0xa8) != 0) {
    *(undefined4 *)(this + 0xa8) = 0;
    pHVar3 = GetParent(hWnd);
    pCVar4 = CWnd::FromHandle(pHVar3);
    if (pCVar4 != (CWnd *)0x0) {
      lParam = *(LPARAM *)(this + 0x20);
      uVar5 = CWnd::GetDlgCtrlID((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar4 + 0x20),0x111,uVar5 & 0xffff,lParam);
    }
  }
  BVar6 = IsWindow(hWnd);
  if (BVar6 != 0) {
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    FUN_100540e0();
    BVar6 = IsWindow(hWnd);
    if (BVar6 != 0) {
      if (*(int *)(this + 0xb8) != 0) {
        ReleaseCapture();
        *(undefined4 *)(this + 0xb8) = 0;
      }
      if (0 < *(int *)(this + 0xdc)) {
        KillTimer(*(HWND *)(this + 0x20),0xec0d);
      }
      iVar1 = *(int *)(this + 0x78c);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
        SendMessageW(*(HWND *)(iVar1 + 0x20),0x41c,0,0);
      }
    }
  }
  return;
}

