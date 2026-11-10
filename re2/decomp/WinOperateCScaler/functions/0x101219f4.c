// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnHighlightRarelyUsedMenuItems
// address: 0x101219f4
// body: available
// range: 0x101219f4-0x10121aac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall
   CMFCVisualManagerOffice2003::OnHighlightRarelyUsedMenuItems(class CDC *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnHighlightRarelyUsedMenuItems
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,int param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  undefined1 local_20 [8];
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10121a00;
  pcVar1 = *(code **)(*(int *)this + 0x2dc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  piVar3 = (int *)FUN_1006a934(local_20);
  iVar2 = *piVar3 + param_3 + 1 + iVar2 * 2;
  pAVar4 = GetGlobalData();
  if (8 < *(int *)(pAVar4 + 0x1ac)) {
    pAVar4 = GetGlobalData();
    iVar5 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar4);
    if (iVar5 == 0) {
      CDrawingManager::CDrawingManager(local_18,param_1);
      local_8 = 0;
      CDrawingManager::FillGradient
                (local_18,param_3 + -1,param_4,iVar2,param_6,*(undefined4 *)(this + 0xbc),
                 *(undefined4 *)(this + 0x164),0,0,0);
      FUN_10084c54();
      return;
    }
  }
  CMFCVisualManagerOfficeXP::OnHighlightRarelyUsedMenuItems
            ((CMFCVisualManagerOfficeXP *)this,param_1,param_3 + -1,param_4,iVar2,param_6);
  return;
}

