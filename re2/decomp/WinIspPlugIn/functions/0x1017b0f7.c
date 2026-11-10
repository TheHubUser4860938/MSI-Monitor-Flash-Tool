// rea decompile_all
// name: CMFCTasksPane::OnUpdateCmdUI
// address: 0x1017b0f7
// body: available
// range: 0x1017b0f7-0x1017b1d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCTasksPane::OnUpdateCmdUI(class CFrameWnd *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::OnUpdateCmdUI(CMFCTasksPane *this,CFrameWnd *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined **local_38;
  undefined4 local_34;
  int local_30;
  CMFCTasksPane *local_24;
  undefined4 local_18;
  CDockablePane *local_10;
  int local_c;
  int local_8;
  
  local_10 = (CDockablePane *)this;
  CCmdUI::CCmdUI((CCmdUI *)&local_38);
  local_18 = *(undefined4 *)(this + 0x48c);
  local_30 = 0;
  local_c = *(int *)(this + 0x484);
  local_38 = CMFCTasksPaneToolBarCmdUI::vftable;
  local_24 = this;
  while (local_c != 0) {
    piVar3 = (int *)FUN_100c321b(&local_c);
    local_8 = *(int *)(*piVar3 + 0x10);
    while (local_8 != 0) {
      piVar3 = (int *)FUN_100c321b(&local_8);
      iVar1 = *piVar3;
      if ((DAT_10247680 != 0) && (*(uint *)(DAT_10247680 + 0x24) <= *(uint *)(iVar1 + 0x24))) {
        param_2 = param_2 & -(uint)(*(uint *)(DAT_10247680 + 0x28) < *(uint *)(iVar1 + 0x24));
      }
      local_34 = *(undefined4 *)(iVar1 + 0x24);
      uVar2 = *(uint *)(iVar1 + 0x24);
      if (((uVar2 != 0) && (0x1ef < uVar2 - 0xf000)) && (uVar2 < 0xff00)) {
        FUN_1004d83d(param_1,param_2);
      }
    }
    local_30 = local_30 + 1;
    local_8 = 0;
    this = (CMFCTasksPane *)local_10;
  }
  CDockablePane::OnUpdateCmdUI((CDockablePane *)this,param_1,param_2);
  return;
}

