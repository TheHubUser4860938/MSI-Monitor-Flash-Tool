// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawOutlookBarSplitter
// address: 0x1011ddd8
// body: available
// range: 0x1011ddd8-0x1011dede inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawOutlookBarSplitter(class CDC
   *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawOutlookBarSplitter
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  int iVar3;
  CDrawingManager local_2c [8];
  int local_24;
  int local_20;
  CMFCVisualManagerOffice2003 *local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1011dde4;
  local_1c = this;
  pAVar1 = GetGlobalData();
  if (8 < *(int *)(pAVar1 + 0x1ac)) {
    pAVar1 = GetGlobalData();
    iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar1);
    if (iVar2 == 0) {
      CDrawingManager::CDrawingManager(local_2c,param_1);
      local_8 = 0;
      CDrawingManager::FillGradient
                (local_2c,param_3,param_4,param_5,param_6,*(undefined4 *)(this + 0x1b0),
                 *(undefined4 *)(this + 0x1ac),1,0,0);
      local_18 = 10;
      local_14 = (param_6 - param_4) + -3;
      iVar3 = (param_5 + param_3) / 2 + local_14 * -5;
      local_24 = param_4 + 2;
      local_20 = param_4 + 3;
      iVar2 = local_14 / 2;
      do {
        pAVar1 = GetGlobalData();
        CDC::FillSolidRect(param_1,iVar3 + 1,local_20,iVar2,iVar2,*(ulong *)(pAVar1 + 0x24));
        CDC::FillSolidRect(param_1,iVar3,local_24,iVar2,iVar2,*(ulong *)(local_1c + 0x1a8));
        iVar3 = iVar3 + local_14;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      FUN_10084c54();
      return;
    }
  }
  CMFCVisualManager::OnDrawOutlookBarSplitter
            ((CMFCVisualManager *)local_1c,param_1,param_3,param_4,param_5,param_6);
  return;
}

