// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonMainPanelFrame
// address: 0x100cf79f
// body: available
// range: 0x100cf79f-0x100cf814 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonMainPanelFrame(class
   CDC *,class CMFCRibbonMainPanel *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonMainPanelFrame
          (CMFCVisualManagerOffice2007 *this,undefined4 param_1,undefined4 param_2,
          undefined4 param_4,undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = CanDrawImage(this);
  if (iVar1 == 0) {
    CMFCVisualManager::OnDrawRibbonMainPanelFrame
              ((CMFCVisualManager *)this,param_1,param_2,param_4,param_5,param_6,param_7);
  }
  else if (0x13 < *(int *)(this + 0xc000)) {
    iVar1 = *(int *)(this + 0x4fe0);
    guard_check_icall(param_1,param_4,param_5,param_6 + 2,param_7,0,0xff);
    (**(code **)(iVar1 + 0x14))();
  }
  return;
}

