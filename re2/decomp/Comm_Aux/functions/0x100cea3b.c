// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonPanel
// address: 0x100cea3b
// body: available
// range: 0x100cea3b-0x100ced68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonPanel(class
   CDC *,class CMFCRibbonPanel *,class CRect,class CRect)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonPanel
          (CMFCVisualManagerOffice2007 *this,undefined4 param_1,CMFCRibbonPanel *param_2,
          LONG param_4,int param_5,LONG param_6,CMFCRibbonPanel *param_7,undefined4 param_8,
          int param_9,undefined4 param_10,int param_11)

{
  code *pcVar1;
  CMFCVisualManagerOffice2007 *pCVar2;
  CMFCVisualManagerOffice2007 *pCVar3;
  int iVar4;
  ulong uVar5;
  CMFCRibbonBaseElement *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CMFCVisualManagerBitmapCacheItem *pCVar10;
  uint uVar11;
  CMFCRibbonPanel *pCVar12;
  undefined4 uVar13;
  LONG LVar14;
  LONG LVar15;
  LONG LVar16;
  LONG LVar17;
  CMFCRibbonPanel *pCVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int local_2c;
  int local_28;
  CMFCVisualManagerOffice2007 *local_24;
  CMFCVisualManagerOffice2007 *local_20;
  ulong local_1c;
  CMFCRibbonPanel *local_18;
  CMFCVisualManagerOffice2007 *local_14;
  CMFCVisualManagerOffice2007 *local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = param_1;
  local_18 = param_2;
  local_14 = this;
  iVar4 = CanDrawImage(this);
  if (iVar4 == 0) {
    uVar5 = CMFCVisualManager::OnDrawRibbonPanel
                      ((CMFCVisualManager *)this,local_c,local_18,param_4,param_5,param_6,param_7,
                       param_8,param_9,param_10,param_11);
    return uVar5;
  }
  local_1c = *(ulong *)(this + 0x9090);
  iVar4 = FUN_1004e58b(&PTR_s_CMFCRibbonMainPanel_101d3284);
  pCVar12 = local_18;
  if (iVar4 != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x2f4);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    InflateRect((LPRECT)&param_4,iVar4,iVar4);
    iVar4 = *(int *)(this + 0x4e68);
    guard_check_icall(local_c,param_4,param_5,param_6,param_7,0,0xff);
    goto LAB_100ced5a;
  }
  local_8 = *(uint *)(param_2 + 0x68);
  if (local_8 != 0) {
    local_1c = *(ulong *)(this + 0x9094);
  }
  iVar4 = *(int *)(param_2 + 0x108);
  local_24 = this + 0x4a00;
  local_10 = this + 0x4b78;
  local_20 = this + 0xbdc4;
  local_14 = this + 0xbdf0;
  pCVar6 = CMFCRibbonPanel::GetParentButton(local_18);
  if ((*(int *)(iVar4 + 0x19c) != 0) &&
     ((pCVar6 == (CMFCRibbonBaseElement *)0x0 || (*(int *)(pCVar6 + 0xc4) == 0)))) {
    local_10 = this + 0x8c18;
    local_24 = this + 0x8aa0;
    local_14 = this + 0xbd6c;
    local_20 = this + 0xbd40;
    if (local_8 == 0) {
      local_1c = *(ulong *)(this + 0x90fc);
    }
    else {
      local_1c = *(ulong *)(this + 0x9100);
    }
  }
  iVar7 = CMFCRibbonPanel::IsCollapsed(pCVar12);
  pCVar3 = local_20;
  pCVar2 = local_24;
  LVar17 = param_6;
  iVar4 = param_5;
  LVar15 = param_4;
  if (iVar7 != 0) {
    return local_1c;
  }
  if (param_11 - param_9 < 1) {
    return local_1c;
  }
  if (*(int *)(local_24 + 0x94) == 0) {
    return local_1c;
  }
  iVar7 = *(int *)(local_10 + 0x94);
  pCVar12 = param_7;
  if (iVar7 != 0) {
    pCVar12 = param_7 + -(param_11 - param_9);
  }
  local_18 = pCVar12;
  if (local_20 == (CMFCVisualManagerOffice2007 *)0x0) {
LAB_100cec73:
    iVar8 = *(int *)pCVar2;
    local_8 = (uint)(local_8 != 0);
    guard_check_icall(local_c,LVar15,iVar4,LVar17,pCVar12,local_8,0xff);
    (**(code **)(iVar8 + 0x10))();
    pCVar12 = local_18;
  }
  else {
    local_2c = *(int *)(local_24 + 0x130) - *(int *)(local_24 + 0x128);
    iVar8 = (int)pCVar12 - param_5;
    local_28 = iVar8;
    iVar9 = CMFCVisualManagerBitmapCache::FindIndex
                      ((CMFCVisualManagerBitmapCache *)local_20,(CSize *)&local_2c);
    if ((iVar9 == -1) &&
       (iVar9 = CMFCVisualManagerBitmapCache::CacheY
                          ((CMFCVisualManagerBitmapCache *)pCVar3,iVar8,
                           (CMFCControlRenderer *)pCVar2), iVar9 == -1)) goto LAB_100cec73;
    iVar8 = *(int *)(pCVar2 + 0x130) - *(int *)(pCVar2 + 0x160);
    uVar20 = 0xff;
    uVar11 = (uint)(local_8 != 0);
    uVar19 = *(undefined4 *)(pCVar2 + 0x158);
    uVar13 = local_c;
    LVar14 = LVar15;
    LVar16 = LVar17;
    pCVar18 = pCVar12;
    local_8 = uVar11;
    pCVar10 = CMFCVisualManagerBitmapCache::Get((CMFCVisualManagerBitmapCache *)local_20,iVar9);
    CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem::DrawY
              (pCVar10,uVar13,LVar14,iVar4,LVar16,pCVar18,uVar19,iVar8,uVar11,uVar20);
  }
  pCVar3 = local_10;
  pCVar2 = local_14;
  pCVar18 = param_7;
  if (iVar7 == 0) {
    return local_1c;
  }
  if (local_14 != (CMFCVisualManagerOffice2007 *)0x0) {
    iVar7 = (int)param_7 - (int)pCVar12;
    local_2c = *(int *)(local_10 + 0x130) - *(int *)(local_10 + 0x128);
    local_28 = iVar7;
    iVar4 = CMFCVisualManagerBitmapCache::FindIndex
                      ((CMFCVisualManagerBitmapCache *)local_14,(CSize *)&local_2c);
    if ((iVar4 != -1) ||
       (iVar4 = CMFCVisualManagerBitmapCache::CacheY
                          ((CMFCVisualManagerBitmapCache *)pCVar2,iVar7,
                           (CMFCControlRenderer *)pCVar3), iVar4 != -1)) {
      iVar7 = *(int *)(pCVar3 + 0x130) - *(int *)(pCVar3 + 0x160);
      uVar20 = 0xff;
      uVar19 = *(undefined4 *)(pCVar3 + 0x158);
      uVar13 = local_c;
      uVar11 = local_8;
      pCVar10 = CMFCVisualManagerBitmapCache::Get((CMFCVisualManagerBitmapCache *)pCVar2,iVar4);
      CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem::DrawY
                (pCVar10,uVar13,LVar15,pCVar12,LVar17,pCVar18,uVar19,iVar7,uVar11,uVar20);
      return local_1c;
    }
  }
  iVar4 = *(int *)pCVar3;
  guard_check_icall(local_c,LVar15,pCVar12,LVar17,pCVar18,local_8,0xff);
LAB_100ced5a:
  (**(code **)(iVar4 + 0x10))();
  return local_1c;
}

