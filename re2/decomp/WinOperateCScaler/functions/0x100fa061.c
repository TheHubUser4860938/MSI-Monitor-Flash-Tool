// rea decompile_all
// name: CMFCMenuBar::OnTimer
// address: 0x100fa061
// body: available
// range: 0x100fa061-0x100fa0f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCMenuBar::OnTimer(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCMenuBar::OnTimer(CMFCMenuBar *this,uint param_1)

{
  POINT pt;
  CMFCToolBarMenuButton *pCVar1;
  BOOL BVar2;
  int iVar3;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (param_1 == 0xec12) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    ScreenToClient(*(HWND *)(this + 0x20),&local_c);
    pCVar1 = CMFCToolBar::GetDroppedDownMenu((CMFCToolBar *)this,(int *)0x0);
    if ((pCVar1 != (CMFCToolBarMenuButton *)0x0) && (*(int *)(pCVar1 + 0x8c) != 0)) {
      pt.y = local_c.y;
      pt.x = local_c.x;
      BVar2 = PtInRect((RECT *)(pCVar1 + 0x54),pt);
      if (BVar2 != 0) {
        iVar3 = CMFCPopupMenu::AreAllCommandsShown(*(CMFCPopupMenu **)(pCVar1 + 0x8c));
        if (iVar3 == 0) {
          CMFCPopupMenu::ShowAllCommands(*(CMFCPopupMenu **)(pCVar1 + 0x8c));
        }
      }
    }
    KillTimer(*(HWND *)(this + 0x20),0xec12);
  }
  FUN_100283ad();
  return;
}

