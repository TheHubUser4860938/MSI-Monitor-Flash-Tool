// rea decompile_all
// name: CMFCRibbonBaseElement::SetDroppedDown
// address: 0x100c9ffb
// body: available
// range: 0x100c9ffb-0x100ca09e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonBaseElement::SetDroppedDown(class CMFCPopupMenu *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonBaseElement::SetDroppedDown(CMFCRibbonBaseElement *this,CMFCPopupMenu *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  HWND pHVar5;
  
  *(CMFCPopupMenu **)(this + 0x9c) = param_1;
  if (param_1 == (CMFCPopupMenu *)0x0) {
    pcVar2 = *(code **)(*(int *)this + 0x200);
    guard_check_icall(0xffffffff);
    (*pcVar2)();
  }
  else {
    CMFCPopupMenu::SetParentRibbonElement(param_1,this);
  }
  uVar1 = *(uint *)(this + 0xe0);
  uVar4 = (uint)(param_1 != (CMFCPopupMenu *)0x0);
  *(uint *)(this + 0xe0) = uVar4;
  if (uVar4 == 0) {
    *(undefined4 *)(this + 0xd0) = 0;
    *(undefined4 *)(this + 200) = 0;
  }
  if (uVar1 != uVar4) {
    pcVar2 = *(code **)(*(int *)this + 0x1b8);
    guard_check_icall();
    (*pcVar2)();
  }
  iVar3 = *(int *)(this + 0x94);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) && (param_1 == (CMFCPopupMenu *)0x0)) {
    pHVar5 = GetParent(*(HWND *)(iVar3 + 0x20));
    DAT_101dc384 = CWnd::FromHandle(pHVar5);
  }
  *(undefined4 *)(this + 0xfc) = 0;
  return;
}

