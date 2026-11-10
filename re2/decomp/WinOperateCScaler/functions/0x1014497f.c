// rea decompile_all
// name: CMFCMousePropertyPage::SelectCommand
// address: 0x1014497f
// body: available
// range: 0x1014497f-0x10144a47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCMousePropertyPage::SelectCommand(unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCMousePropertyPage::SelectCommand(CMFCMousePropertyPage *this,uint param_1)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  LRESULT LVar3;
  uint uVar4;
  WPARAM wParam;
  
  pCVar2 = CWnd::GetParentFrame((CWnd *)this);
  if ((pCVar2 == (CFrameWnd *)0x0) || (*(int *)(pCVar2 + 0x20) == 0)) {
    FUN_10018940();
  }
  else {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x174);
    guard_check_icall(param_1,this + 0x250);
    (*pcVar1)();
  }
  FUN_1002b7d2(0);
  wParam = 0;
  LVar3 = SendMessageW(*(HWND *)(this + 0x170),0x18b,0,0);
  if (0 < LVar3) {
    do {
      uVar4 = SendMessageW(*(HWND *)(this + 0x170),0x199,wParam,0);
      if (param_1 == uVar4) {
        SendMessageW(*(HWND *)(this + 0x170),0x186,wParam,0);
        SendMessageW(*(HWND *)(this + 0x170),0x197,wParam,0);
        return 1;
      }
      wParam = wParam + 1;
      LVar3 = SendMessageW(*(HWND *)(this + 0x170),0x18b,0,0);
    } while ((int)wParam < LVar3);
  }
  return 0;
}

