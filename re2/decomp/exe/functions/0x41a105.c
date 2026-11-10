// rea decompile_all
// name: CMFCVisualManager::GetToolbarButtonTextColor
// address: 0x41a105
// body: available
// range: 0x41a105-0x41a1ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::GetToolbarButtonTextColor(class
   CMFCToolBarButton *,enum CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManager::GetToolbarButtonTextColor
          (CMFCVisualManager *this,CMFCToolBarButton *param_1,AFX_BUTTON_STATE param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  ulong uVar5;
  
  if (DAT_00614ed8 == 0) {
LAB_0041a133:
    if ((*(uint *)(param_1 + 0x24) & 0x40000) == 0) {
LAB_0041a141:
      bVar2 = false;
      goto LAB_0041a143;
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)param_1 + 0x60);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      if (DAT_00614ed8 == 0) goto LAB_0041a133;
      goto LAB_0041a141;
    }
  }
  bVar2 = true;
LAB_0041a143:
  iVar3 = FUN_0043970d(&PTR_s_CMFCOutlookBarPaneButton_0060c688);
  if (iVar3 == 0) {
    if (!bVar2) {
      if (param_2 == 2) {
        uVar5 = CMFCToolBar::GetHotTextColor();
        return uVar5;
      }
      pAVar4 = GetGlobalData();
      return *(ulong *)(pAVar4 + 0x68);
    }
    pAVar4 = GetGlobalData();
  }
  else {
    pAVar4 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar4);
    if (iVar3 == 0) {
      pAVar4 = GetGlobalData();
      if (bVar2) {
        return *(ulong *)(pAVar4 + 0x1c);
      }
      return *(ulong *)(pAVar4 + 0x6c);
    }
    pAVar4 = GetGlobalData();
    if (!bVar2) {
      return *(ulong *)(pAVar4 + 0x70);
    }
  }
  return *(ulong *)(pAVar4 + 0x38);
}

