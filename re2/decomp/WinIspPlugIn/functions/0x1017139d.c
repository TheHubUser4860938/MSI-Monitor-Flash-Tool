// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::OnSelchangeCommandsList
// address: 0x1017139d
// body: available
// range: 0x1017139d-0x1017149c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsKeyboardPropertyPage::OnSelchangeCommandsList(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsKeyboardPropertyPage::OnSelchangeCommandsList(CMFCToolBarsKeyboardPropertyPage *this)

{
  code *pcVar1;
  WPARAM wParam;
  LRESULT LVar2;
  CFrameWnd *pCVar3;
  int iVar4;
  int iVar5;
  
  FUN_10047240();
  SendMessageW(*(HWND *)(this + 0x378),0x184,0,0);
  FUN_1017149d();
  wParam = SendMessageW(*(HWND *)(this + 0x3f8),0x188,0,0);
  if (wParam == 0xffffffff) {
    *(undefined4 *)(this + 0x578) = 0;
    CWnd::EnableWindow((CWnd *)(this + 0x140),0);
  }
  else {
    LVar2 = SendMessageW(*(HWND *)(this + 0x3f8),0x199,wParam,0);
    *(LRESULT *)(this + 0x578) = LVar2;
    pCVar3 = CWnd::GetParentFrame((CWnd *)this);
    if ((pCVar3 != (CFrameWnd *)0x0) && (*(int *)(pCVar3 + 0x20) != 0)) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x174);
      guard_check_icall(*(undefined4 *)(*(int *)(this + 0x578) + 0x20),this + 0x558);
      (*pcVar1)();
    }
    if ((*(int *)(this + 0x564) != 0) && (iVar5 = 0, 0 < *(int *)(this + 0x56c))) {
      iVar4 = 0;
      do {
        if (*(uint *)(*(int *)(this + 0x578) + 0x20) ==
            (uint)((tagACCEL *)(*(int *)(this + 0x564) + iVar4))->cmd) {
          AddKeyEntry(this,(tagACCEL *)(*(int *)(this + 0x564) + iVar4));
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 6;
      } while (iVar5 < *(int *)(this + 0x56c));
    }
    CWnd::EnableWindow((CWnd *)(this + 0x140),1);
  }
  FUN_10057526(0);
  return;
}

