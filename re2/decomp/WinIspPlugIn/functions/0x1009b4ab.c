// rea decompile_all
// name: CMFCToolBar::OnWindowPosChanged
// address: 0x1009b4ab
// body: available
// range: 0x1009b4ab-0x1009b52d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::OnWindowPosChanged(struct tagWINDOWPOS *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::OnWindowPosChanged(CMFCToolBar *this,tagWINDOWPOS *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int iVar5;
  
  if ((*(int *)(this + 0xc34) < *(int *)(param_1 + 0x10)) ||
     (*(int *)(this + 0xc38) < *(int *)(param_1 + 0x14))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(int *)(this + 0xc34) = *(int *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xc38) = uVar1;
  FUN_100540e0();
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  if (!bVar2) {
    if (pCVar4 == (CWnd *)0x0) goto LAB_1009b521;
    iVar5 = FUN_10051e53(&PTR_s_CMFCReBar_101ec98c);
    if (iVar5 == 0) goto LAB_1009b521;
  }
  RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
LAB_1009b521:
  RedrawCustomizeButton(this);
  return;
}

