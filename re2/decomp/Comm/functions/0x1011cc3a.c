// rea decompile_all
// name: CMFCRibbonBar::SetPrintPreviewMode
// address: 0x1011cc3a
// body: available
// range: 0x1011cc3a-0x1011cdc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonBar::SetPrintPreviewMode(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonBar::SetPrintPreviewMode(CMFCRibbonBar *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  CMFCRibbonPanel *pCVar3;
  CMFCRibbonPanel *pCVar4;
  CMFCRibbonPanel *pCVar5;
  int *piVar6;
  CMFCRibbonCategory *this_00;
  int iVar7;
  
  if (*(int *)(this + 0x2f0) == 0) {
    return;
  }
  *(int *)(this + 0x304) = param_1;
  if (param_1 == 0) {
    iVar7 = 0;
    if (0 < *(int *)(this + 0x7fc)) {
      do {
        piVar6 = (int *)FUN_100d7168(iVar7);
        ShowCategory(this,*piVar6,1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this + 0x7fc));
    }
    FUN_100ca1db(0,0xffffffff);
    *(undefined4 *)(*(int *)(this + 0x7b4) + 0x68) = 0;
    this_00 = *(CMFCRibbonCategory **)(this + 0x7ac);
    *(CMFCRibbonCategory **)(this + 0x7a8) = this_00;
    if (this_00 == (CMFCRibbonCategory *)0x0) goto LAB_1011cd95;
  }
  else {
    iVar7 = *(int *)this;
    pCVar3 = CMFCRibbonCategory::GetPanel(*(CMFCRibbonCategory **)(this + 0x7b4),2);
    pCVar4 = CMFCRibbonCategory::GetPanel(*(CMFCRibbonCategory **)(this + 0x7b4),1);
    pCVar5 = CMFCRibbonCategory::GetPanel(*(CMFCRibbonCategory **)(this + 0x7b4),0);
    guard_check_icall(pCVar5,pCVar4,pCVar3);
    (**(code **)(iVar7 + 0x35c))();
    FUN_100ca1db(0,0xffffffff);
    iVar7 = 0;
    if (0 < *(int *)(this + 0x7d4)) {
      do {
        piVar6 = (int *)FUN_100d7168(iVar7);
        iVar1 = *piVar6;
        if (*(int *)(iVar1 + 0x68) != 0) {
          FUN_100c9f11(*(undefined4 *)(this + 0x7fc),iVar7);
          *(undefined4 *)(iVar1 + 0x68) = 0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this + 0x7d4));
    }
    *(undefined4 *)(*(int *)(this + 0x7b4) + 0x68) = 1;
    if (*(CMFCRibbonCategory **)(this + 0x7a8) != (CMFCRibbonCategory *)0x0) {
      CMFCRibbonCategory::SetActive(*(CMFCRibbonCategory **)(this + 0x7a8),0);
    }
    this_00 = *(CMFCRibbonCategory **)(this + 0x7b4);
    *(undefined4 *)(this + 0x7ac) = *(undefined4 *)(this + 0x7a8);
    *(CMFCRibbonCategory **)(this + 0x7a8) = this_00;
  }
  CMFCRibbonCategory::SetActive(this_00,1);
LAB_1011cd95:
  pcVar2 = *(code **)(*(int *)this + 0x210);
  guard_check_icall();
  (*pcVar2)();
  RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  return;
}

