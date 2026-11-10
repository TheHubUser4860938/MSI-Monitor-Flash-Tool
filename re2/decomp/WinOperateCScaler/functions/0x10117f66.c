// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawButtonBorder
// address: 0x10117f66
// body: available
// range: 0x10117f66-0x10118198 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawButtonBorder(class CDC
   *,class CMFCToolBarButton *,class CRect,enum CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawButtonBorder
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,CObject *param_2,int param_4,int param_5,
          int param_6,int param_7,int param_8)

{
  code *pcVar1;
  CWnd *pCVar2;
  int iVar3;
  CObject *pCVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  ulong uVar8;
  AFX_GLOBAL_DATA *pAVar9;
  ulong uVar10;
  CMFCVisualManagerOfficeXP *pCVar11;
  CDrawingManager local_24 [4];
  CWnd *local_20;
  CMFCVisualManagerOfficeXP *local_1c;
  ulong local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar3 = param_8;
  uStack_4 = 0x20;
  local_8 = 0x10117f72;
  if ((param_8 == 1) || (param_8 == 2)) {
    uVar10 = *(ulong *)(this + 0xe8);
    local_1c = this;
    local_18 = uVar10;
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10201a04,param_2);
    local_20 = (CWnd *)(uint)(pCVar4 != (CObject *)0x0);
    if ((local_20 == (CWnd *)0x0) ||
       ((*(int *)(pCVar4 + 0x6c) == 0 ||
        (iVar5 = FUN_100250d6(&PTR_s_CMFCPopupMenuBar_10201930), iVar5 == 0)))) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    local_14 = uVar6 ^ 1;
    pCVar11 = local_1c;
    if ((local_20 != (CWnd *)0x0) && (uVar6 == 0)) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x70);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      uVar10 = local_18;
      pCVar11 = local_1c;
      if (iVar5 != 0) {
        pCVar2 = *(CWnd **)(pCVar4 + 0x8c);
        local_14 = 0;
        local_20 = pCVar2;
        if ((pCVar2 != (CWnd *)0x0) &&
           ((BVar7 = IsWindowVisible(*(HWND *)(pCVar2 + 0x20)), BVar7 != 0 ||
            (uVar10 = local_18, pCVar11 = local_1c, *(int *)(pCVar2 + 0xf48) != 0)))) {
          local_18 = *(ulong *)(local_1c + 0xe4);
          pcVar1 = *(code **)(*(int *)local_1c + 0x30c);
          guard_check_icall(pCVar4,&param_4);
          pCVar11 = local_1c;
          (*pcVar1)();
          pCVar2 = local_20;
          uVar8 = CWnd::GetExStyle(local_20);
          uVar10 = local_18;
          if ((*(int *)(pCVar11 + 0x150) != 0) &&
             (((((uVar8 & 0x400000) == 0 && (DAT_10201adc != 0)) && (DAT_10209cf0 == 0)) &&
              (pAVar9 = GetGlobalData(), uVar10 = local_18, 8 < *(int *)(pAVar9 + 0x1ac))))) {
            pAVar9 = GetGlobalData();
            iVar5 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar9);
            uVar10 = local_18;
            if ((iVar5 == 0) && (*(int *)(pCVar2 + 0xf44) == 0)) {
              CDrawingManager::CDrawingManager(local_24,param_1);
              local_8 = 0;
              CDrawingManager::DrawShadow
                        (local_24,param_4,param_5,param_6,param_7,*(int *)(pCVar11 + 0x7c),100,0x4b,
                         0,0,*(int *)(pCVar11 + 0xa8),1);
              local_8 = 0xffffffff;
              FUN_10084c54();
              uVar10 = local_18;
              pCVar11 = local_1c;
            }
          }
        }
      }
    }
    if (iVar3 == 1) {
      if (((local_14 != 0) && (*(ulong *)(pCVar11 + 0xd4) != 0xffffffff)) &&
         (((*(uint *)(param_2 + 0x24) & 0x10000) == 0 &&
          ((5 < param_6 - param_4 && (5 < param_7 - param_5)))))) {
        uVar10 = *(ulong *)(pCVar11 + 0xd4);
      }
    }
    else if (iVar3 != 2) {
      return;
    }
    if ((uVar6 != 0) && ((*(uint *)(param_2 + 0x24) & 0x10000) != 0)) {
      if ((*(uint *)(param_2 + 0x24) & 0x800000) != 0) {
        uVar10 = *(ulong *)(pCVar11 + 0xd4);
      }
      param_7 = param_7 + 1;
    }
    CDC::Draw3dRect(param_1,(tagRECT *)&param_4,uVar10,uVar10);
  }
  return;
}

