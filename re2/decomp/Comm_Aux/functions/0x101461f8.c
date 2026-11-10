// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnEraseTabsArea
// address: 0x101461f8
// body: available
// range: 0x101461f8-0x10146270 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnEraseTabsArea(class CDC *,class
   CRect,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnEraseTabsArea
          (CMFCVisualManagerOfficeXP *this,int param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,int *param_7)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  HBRUSH hbr;
  
  piVar2 = param_7;
  pcVar1 = *(code **)(*param_7 + 0x280);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    hbr = (HBRUSH)0x0;
    if (piVar2[0x4d] == 0) {
      pAVar4 = (AFX_GLOBAL_DATA *)(this + 0x114);
    }
    else {
      pAVar4 = GetGlobalData();
      pAVar4 = pAVar4 + 0x98;
    }
    if (pAVar4 != (AFX_GLOBAL_DATA *)0x0) {
      hbr = *(HBRUSH *)(pAVar4 + 4);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr);
  }
  else {
    CMFCVisualManager::OnFillAutoHideButtonBackground
              ((CMFCVisualManager *)this,param_1,param_3,param_4,param_5,param_6,piVar2);
  }
  return;
}

