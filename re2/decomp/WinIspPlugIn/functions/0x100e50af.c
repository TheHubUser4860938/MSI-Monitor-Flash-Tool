// rea decompile_all
// name: CDockingManager::OnPaneContextMenu
// address: 0x100e50af
// body: available
// range: 0x100e50af-0x100e5187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CDockingManager::OnPaneContextMenu(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingManager::OnPaneContextMenu(CDockingManager *this,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  HMENU pHVar3;
  int *piVar4;
  undefined **local_1c;
  undefined4 local_18;
  CMFCPopupMenu *local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100e50bb;
  piVar4 = (int *)0x0;
  if (*(int *)(this + 0x1dc) != 0) {
    pCVar2 = DAT_102471dc;
    if ((DAT_102471dc == (CFrameWnd *)0x0) &&
       (pCVar2 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0xe4)), pCVar2 == (CFrameWnd *)0x0)) {
      return;
    }
    local_1c = CMenu::vftable;
    local_18 = 0;
    local_8 = 0;
    pHVar3 = CreatePopupMenu();
    CMenu::Attach((CMenu *)&local_1c,pHVar3);
    BuildPanesMenu(this,(CMenu *)&local_1c,*(int *)(this + 0x1e0));
    local_14 = (CMFCPopupMenu *)FUN_100491ae(0x1178);
    local_8._0_1_ = 1;
    if (local_14 != (CMFCPopupMenu *)0x0) {
      piVar4 = (int *)CMFCPopupMenu::CMFCPopupMenu(local_14);
    }
    piVar4[0x3ce] = 0;
    *(undefined4 *)(this + 0x1d8) = 1;
    local_8 = (uint)local_8._1_3_ << 8;
    pcVar1 = *(code **)(*piVar4 + 0x210);
    guard_check_icall(pCVar2,param_2,param_3,local_18,0,0);
    (*pcVar1)();
    local_8 = 2;
    local_1c = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_1c);
  }
  return;
}

