// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonCategory
// address: 0x100975b2
// body: available
// range: 0x100975b2-0x10097789 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonCategory(class CDC
   *,class CMFCRibbonCategory *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonCategory
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CMFCRibbonCategory *param_2,int param_4,
          int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  CMFCRibbonBaseElement *pCVar2;
  int iVar3;
  CMFCVisualManagerBitmapCacheItem *pCVar4;
  CMFCVisualManagerOffice2007 *pCVar5;
  CMFCVisualManagerOffice2007 *pCVar6;
  CDC *pCVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_28;
  int local_24;
  CMFCVisualManagerOffice2007 *local_20;
  CDrawingManager local_1c [4];
  CMFCRibbonCategory *local_18;
  CDC *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x100975be;
  local_14 = param_1;
  local_18 = param_2;
  iVar1 = CanDrawImage(this);
  if (iVar1 == 0) {
    CMFCVisualManager::OnDrawRibbonCategory
              ((CMFCVisualManager *)this,local_14,local_18,param_4,param_5,param_6,param_7);
    return;
  }
  local_20 = this + 0xbd98;
  pCVar6 = this + 0x42a8;
  local_18 = (CMFCRibbonCategory *)pCVar6;
  pCVar2 = CMFCRibbonCategory::GetParentButton(param_2);
  if ((*(int *)(param_2 + 0x19c) == 0) ||
     ((pCVar2 != (CMFCRibbonBaseElement *)0x0 && (*(int *)(pCVar2 + 0xc4) != 0)))) {
    pCVar5 = this + 0xbd98;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x19c) * 0x648;
    pCVar6 = this + iVar1 + 0x8c78;
    pCVar5 = this + iVar1 + 0x90ec;
    local_20 = pCVar5;
    local_18 = (CMFCRibbonCategory *)pCVar6;
  }
  iVar1 = *(int *)(param_2 + 0x540);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xeb4) == 0) {
      if ((*(int *)(iVar1 + 0xea4) != 0) && (*(int *)(this + 0xc000) < 0x14)) {
        iVar1 = *(int *)pCVar6;
        guard_check_icall(local_14,param_4,param_5,param_6,param_7,0,0xff);
        (**(code **)(iVar1 + 0x1c))();
        return;
      }
    }
    else if ((param_4 < 0) || (param_5 < 0)) {
      CDrawingManager::CDrawingManager(local_1c,local_14);
      local_8 = 0;
      CDrawingManager::FillGradient
                (local_1c,param_4,param_5,param_6,param_7,*(undefined4 *)(this + 0x15c),
                 *(undefined4 *)(this + 0x160),1,0,0);
      FUN_10079775();
      return;
    }
  }
  if (pCVar5 != (CMFCVisualManagerOffice2007 *)0x0) {
    local_28 = *(int *)(pCVar6 + 0x130) - *(int *)(pCVar6 + 0x128);
    local_24 = param_7 - param_5;
    iVar1 = CMFCVisualManagerBitmapCache::FindIndex
                      ((CMFCVisualManagerBitmapCache *)pCVar5,(CSize *)&local_28);
    pCVar5 = local_20;
    if ((iVar1 != -1) ||
       (iVar1 = CMFCVisualManagerBitmapCache::CacheY
                          ((CMFCVisualManagerBitmapCache *)local_20,param_7 - param_5,
                           (CMFCControlRenderer *)pCVar6), iVar1 != -1)) {
      iVar3 = *(int *)(pCVar6 + 0x130) - *(int *)(pCVar6 + 0x160);
      uVar10 = 0xff;
      uVar9 = 0;
      uVar8 = *(undefined4 *)(pCVar6 + 0x158);
      pCVar7 = local_14;
      pCVar4 = CMFCVisualManagerBitmapCache::Get((CMFCVisualManagerBitmapCache *)pCVar5,iVar1);
      CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem::DrawY
                (pCVar4,pCVar7,param_4,param_5,param_6,param_7,uVar8,iVar3,uVar9,uVar10);
      return;
    }
  }
  iVar1 = *(int *)pCVar6;
  guard_check_icall(local_14,param_4,param_5,param_6,param_7,0,0xff);
  (**(code **)(iVar1 + 0x10))();
  return;
}

