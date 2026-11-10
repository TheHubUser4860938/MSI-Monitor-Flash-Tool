// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnFillPopupWindowBackground
// address: 0x1014d350
// body: available
// range: 0x1014d350-0x1014d3d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnFillPopupWindowBackground(class
   CDC *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnFillPopupWindowBackground
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1014d35c;
  pAVar1 = GetGlobalData();
  if (8 < *(int *)(pAVar1 + 0x1ac)) {
    pAVar1 = GetGlobalData();
    iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar1);
    if (iVar2 == 0) {
      CDrawingManager::CDrawingManager(local_18,param_1);
      local_8 = 0;
      CDrawingManager::FillGradient
                (local_18,param_3,param_4,param_5,param_6,*(undefined4 *)(this + 0x15c),
                 *(undefined4 *)(this + 0x160),1,0,0);
      FUN_100b0b83();
      return;
    }
  }
  CMFCVisualManagerOfficeXP::OnFillPopupWindowBackground
            ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6);
  return;
}

