// rea decompile_all
// name: CMFCVisualManagerOfficeXP::GetToolbarButtonTextColor
// address: 0x1014379d
// body: available
// range: 0x1014379d-0x10143859 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall
   CMFCVisualManagerOfficeXP::GetToolbarButtonTextColor(class CMFCToolBarButton *,enum
   CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOfficeXP::GetToolbarButtonTextColor
          (CMFCVisualManagerOfficeXP *this,CMFCToolBarButton *param_1,AFX_BUTTON_STATE param_2)

{
  code *pcVar1;
  bool bVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  ulong uVar5;
  
  pAVar3 = GetGlobalData();
  iVar4 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar3);
  if (iVar4 != 0) goto LAB_10143848;
  if (DAT_10245ca8 == 0) {
LAB_101437e2:
    if ((*(uint *)(param_1 + 0x24) & 0x40000) != 0) goto LAB_101437eb;
LAB_101437f0:
    bVar2 = false;
  }
  else {
    pcVar1 = *(code **)(*(int *)param_1 + 0x60);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      if (DAT_10245ca8 == 0) goto LAB_101437e2;
      goto LAB_101437f0;
    }
LAB_101437eb:
    bVar2 = true;
  }
  iVar4 = FUN_10051e53(&PTR_s_CMFCOutlookBarPaneButton_1023d9e0);
  if (iVar4 != 0) {
    pAVar3 = GetGlobalData();
    if (bVar2) {
      return *(ulong *)(pAVar3 + 0x38);
    }
    iVar4 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar3);
    if (iVar4 != 0) {
      pAVar3 = GetGlobalData();
      return *(ulong *)(pAVar3 + 0x70);
    }
    pAVar3 = GetGlobalData();
    return *(ulong *)(pAVar3 + 0x68);
  }
  if ((param_2 == 2) && ((*(uint *)(param_1 + 0x24) & 0x30000) != 0)) {
    pAVar3 = GetGlobalData();
    return *(ulong *)(pAVar3 + 0x40);
  }
LAB_10143848:
  uVar5 = CMFCVisualManager::GetToolbarButtonTextColor((CMFCVisualManager *)this,param_1,param_2);
  return uVar5;
}

