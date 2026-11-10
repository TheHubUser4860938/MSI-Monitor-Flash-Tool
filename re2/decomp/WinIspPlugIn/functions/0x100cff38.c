// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonRecentFilesFrame
// address: 0x100cff38
// body: available
// range: 0x100cff38-0x100cffbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonRecentFilesFrame(class
   CDC *,class CMFCRibbonMainPanel *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonRecentFilesFrame
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,undefined4 param_2,int param_4,
          LONG param_5,int param_6,LONG param_7)

{
  int iVar1;
  HBRUSH hbr;
  int local_1c;
  LONG LStack_18;
  int local_14;
  LONG LStack_10;
  undefined4 local_c;
  CDC *local_8;
  
  local_8 = param_1;
  local_c = param_2;
  iVar1 = CanDrawImage(this);
  if (iVar1 == 0) {
    CMFCVisualManagerOfficeXP::OnDrawRibbonRecentFilesFrame
              ((CMFCVisualManagerOfficeXP *)this,local_8,local_c,param_4,param_5,param_6,param_7);
  }
  else {
    param_6 = param_6 + 2;
    hbr = (HBRUSH)0x0;
    if (this != (CMFCVisualManagerOffice2007 *)0xffffff04) {
      hbr = *(HBRUSH *)(this + 0x100);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_4,hbr);
    local_14 = param_4 + 2;
    local_1c = param_4;
    LStack_18 = param_5;
    LStack_10 = param_7;
    DrawSeparator(this,local_8,(CRect *)&local_1c,0);
  }
  return;
}

