// rea decompile_all
// name: CMFCToolBar::OnUpdateCmdUI
// address: 0x1006f524
// body: available
// range: 0x1006f524-0x1006f5e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBar::OnUpdateCmdUI(class CFrameWnd *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::OnUpdateCmdUI(CMFCToolBar *this,CFrameWnd *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined **local_2c;
  undefined4 local_28;
  uint local_24;
  CMFCToolBar *local_18;
  uint local_c;
  
  CCmdUI::CCmdUI((CCmdUI *)&local_2c);
  local_c = *(uint *)(this + 0xc48);
  iVar3 = 0;
  local_2c = CMFCToolBarCmdUI::vftable;
  local_24 = 0;
  local_18 = this;
  if (local_c != 0) {
    do {
      iVar2 = FUN_1006a5a5(local_24);
      if (iVar2 == 0) {
        return;
      }
      if ((DAT_1020b6c8 != 0) && (*(uint *)(DAT_1020b6c8 + 0x24) <= *(uint *)(iVar2 + 0x20))) {
        param_2 = param_2 & -(uint)(*(uint *)(DAT_1020b6c8 + 0x28) < *(uint *)(iVar2 + 0x20));
      }
      local_28 = *(undefined4 *)(iVar2 + 0x20);
      if (((((*(byte *)(iVar2 + 0x24) & 1) == 0) && (uVar1 = *(uint *)(iVar2 + 0x20), uVar1 != 0))
          && (0x1ef < uVar1 - 0xf000)) && (uVar1 < 0xff00)) {
        FUN_1002069a(param_1,param_2);
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_c);
  }
  if ((param_2 != 0) && (*(int *)(this + 0xbb0) != 0)) {
    iVar3 = 1;
  }
  CWnd::UpdateDialogControls((CWnd *)this,(CCmdTarget *)param_1,iVar3);
  return;
}

