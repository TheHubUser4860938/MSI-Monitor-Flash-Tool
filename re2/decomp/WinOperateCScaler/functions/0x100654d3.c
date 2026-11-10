// rea decompile_all
// name: CMFCVisualManager::OnDrawTabsButtonBorder
// address: 0x100654d3
// body: available
// range: 0x100654d3-0x10065539 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTabsButtonBorder(class CDC *,class
   CRect &,class CMFCButton *,unsigned int,class CMFCBaseTabCtrl *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawTabsButtonBorder
          (CMFCVisualManager *this,CDC *param_1,CRect *param_2,CMFCButton *param_3,uint param_4,
          CMFCBaseTabCtrl *param_5)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  ulong uVar3;
  
  iVar1 = CMFCButton::IsPressed(param_3);
  if ((iVar1 == 0) && ((param_4 & 1) == 0)) {
    pAVar2 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar2 + 0x60);
    pAVar2 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)param_2,*(ulong *)(pAVar2 + 0x5c),uVar3);
  }
  else {
    pAVar2 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar2 + 0x5c);
    pAVar2 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)param_2,*(ulong *)(pAVar2 + 0x60),uVar3);
    *(int *)param_2 = *(int *)param_2 + 2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 2;
  }
  InflateRect((LPRECT)param_2,-2,-2);
  return;
}

