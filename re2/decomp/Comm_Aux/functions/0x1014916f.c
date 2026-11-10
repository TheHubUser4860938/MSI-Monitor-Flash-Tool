// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawRibbonCategoryCaption
// address: 0x1014916f
// body: available
// range: 0x1014916f-0x10149227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerOffice2003::OnDrawRibbonCategoryCaption(class CDC *,class
   CMFCRibbonContextCaption *)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2003::OnDrawRibbonCategoryCaption
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,CMFCRibbonContextCaption *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  AFX_GLOBAL_DATA *pAVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1014917b;
  pAVar6 = GetGlobalData();
  if (8 < *(int *)(pAVar6 + 0x1ac)) {
    pAVar6 = GetGlobalData();
    iVar7 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar6);
    if (iVar7 == 0) {
      pcVar5 = *(code **)(*(int *)this + 0x284);
      guard_check_icall(*(undefined4 *)(param_2 + 0x1c4));
      iVar7 = (*pcVar5)();
      uVar1 = *(undefined4 *)(param_2 + 0x74);
      uVar2 = *(undefined4 *)(param_2 + 0x78);
      uVar3 = *(undefined4 *)(param_2 + 0x7c);
      uVar4 = *(undefined4 *)(param_2 + 0x80);
      if (iVar7 != -1) {
        CDrawingManager::CDrawingManager(local_18,param_1);
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 1;
        local_8 = 0;
        pAVar6 = GetGlobalData();
        CDrawingManager::FillGradient
                  (local_18,uVar1,uVar2,uVar3,uVar4,iVar7,*(undefined4 *)(pAVar6 + 0x54),uVar9,
                   uVar10,uVar11);
        local_8 = 0xffffffff;
        FUN_100afd36();
      }
      pAVar6 = GetGlobalData();
      return *(ulong *)(pAVar6 + 0x68);
    }
  }
  uVar8 = CMFCVisualManager::OnDrawRibbonCategoryCaption((CMFCVisualManager *)this,param_1,param_2);
  return uVar8;
}

