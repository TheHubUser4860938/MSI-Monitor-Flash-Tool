// rea decompile_all
// name: CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar
// address: 0x1011e885
// body: available
// range: 0x1011e885-0x1011e9f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar(class CMFCRibbonPanel *)
   
   Library: Visual Studio 2015 Release */

CMFCRibbonPanelMenuBar * __thiscall
CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar
          (CMFCRibbonPanelMenuBar *this,CMFCRibbonPanel *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  undefined4 *puVar3;
  int local_18;
  
  CMFCPopupMenuBar::CMFCPopupMenuBar((CMFCPopupMenuBar *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0xdf8) = 0;
  *(undefined4 *)(this + 0xdfc) = 0;
  *(undefined4 *)(this + 0xe00) = 0;
  *(undefined4 *)(this + 0xe04) = 0;
  *(undefined4 *)(this + 0xe08) = 0;
  *(undefined4 *)(this + 0xe0c) = 0;
  *(undefined4 *)(this + 0xe10) = 0;
  *(undefined4 *)(this + 0xe14) = 0;
  local_18 = 0;
  *(undefined4 *)(this + 0xe18) = 0;
  *(undefined4 *)(this + 0xe1c) = 0;
  CWnd::CWnd((CWnd *)(this + 0xe20));
  *(undefined ***)(this + 0xe20) = CScrollBar::vftable;
  pcVar1 = (code *)**(undefined4 **)param_1;
  guard_check_icall();
  (*pcVar1)();
  pCVar2 = (CObject *)FUN_10019cd8();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanel_10196c00,pCVar2);
  *(CObject **)(this + 0xea4) = pCVar2;
  pcVar1 = *(code **)(*(int *)pCVar2 + 0xb0);
  guard_check_icall(param_1);
  (*pcVar1)();
  CommonInit(this);
  *(CMFCRibbonPanel **)(this + 0xea8) = param_1;
  *(CMFCRibbonPanelMenuBar **)(*(int *)(this + 0xea4) + 0x10c) = this;
  pcVar1 = *(code **)(*(int *)(*(int *)(this + 0xea4) + 0x114) + 0x16c);
  guard_check_icall(this);
  (*pcVar1)();
  if (0 < *(int *)(*(int *)(this + 0xea4) + 0x4e4)) {
    do {
      puVar3 = (undefined4 *)FUN_100d7168(local_18);
      pcVar1 = *(code **)(*(int *)*puVar3 + 0x16c);
      guard_check_icall(this);
      (*pcVar1)();
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(*(int *)(this + 0xea4) + 0x4e4));
  }
  *(undefined4 *)(this + 0xea0) = *(undefined4 *)(*(int *)(*(int *)(this + 0xea4) + 0x108) + 0x53c);
  return this;
}

