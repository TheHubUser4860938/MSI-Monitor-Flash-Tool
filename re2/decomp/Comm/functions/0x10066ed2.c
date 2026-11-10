// rea decompile_all
// name: CMFCToolBar::UpdateButton
// address: 0x10066ed2
// body: available
// range: 0x10066ed2-0x10066fa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCToolBar::UpdateButton(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::UpdateButton(CMFCToolBar *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined **local_30;
  undefined4 local_2c;
  int local_28;
  CMFCToolBar *local_1c;
  undefined4 local_10;
  int local_8;
  
  pcVar1 = *(code **)(*(int *)this + 0x3c4);
  guard_check_icall();
  piVar3 = (int *)(*pcVar1)();
  if (piVar3 != (int *)0x0) {
    CCmdUI::CCmdUI((CCmdUI *)&local_30);
    local_10 = *(undefined4 *)(this + 0xc48);
    local_28 = param_1;
    local_30 = CMFCToolBarCmdUI::vftable;
    local_1c = this;
    iVar4 = FUN_1005f070(param_1);
    if ((((iVar4 != 0) && (uVar2 = *(uint *)(iVar4 + 0x20), uVar2 != 0)) && (0x1ef < uVar2 - 0xf000)
        ) && (uVar2 < 0xff00)) {
      local_8 = 0;
      pcVar1 = *(code **)(*piVar3 + 0x150);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 != 0) {
        local_8 = piVar3[0x20];
      }
      local_2c = *(undefined4 *)(iVar4 + 0x20);
      if ((local_8 == 0) ||
         (((DAT_101dc968 != 0 && (*(uint *)(DAT_101dc968 + 0x24) <= *(uint *)(iVar4 + 0x20))) &&
          (*(uint *)(iVar4 + 0x20) <= *(uint *)(DAT_101dc968 + 0x28))))) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      FUN_10016727(piVar3,uVar6);
    }
  }
  return;
}

