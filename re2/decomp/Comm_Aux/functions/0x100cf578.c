// rea decompile_all
// name: FUN_100cf578
// address: 0x100cf578
// body: available
// range: 0x100cf578-0x100cf856 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100cf578(CDC *param_1,CObject *param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  CMFCVisualManagerOffice2007 *in_ECX;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_38 [8];
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  CDC *local_20;
  CMFCVisualManagerOffice2007 *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  local_1c = in_ECX;
  iVar2 = CMFCVisualManagerOffice2007::CanDrawImage(in_ECX);
  if (((iVar2 == 0) || (param_2 == (CObject *)0x0)) || (*(int *)(param_2 + 0x8c) != 0)) {
    FUN_10149cfe(local_20,param_2,param_3,param_4,param_5,param_6,param_7);
    goto LAB_100cf844;
  }
  local_30 = param_3;
  local_2c = param_4;
  local_28 = param_5;
  local_24 = param_6;
  iVar2 = FUN_1004e58b(&PTR_s_CMFCRibbonStatusBar_101d2504);
  if (iVar2 == 0) {
    iVar2 = FUN_1004e58b(&PTR_s_CMFCRibbonBar_101d30bc);
    if (iVar2 == 0) {
      uVar4 = FUN_1004e58b(&PTR_s_CMFCRibbonPanelMenuBar_101d3680);
      if (param_7 == 0) {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar9 = uVar4 & ~-(uint)(*(int *)(param_2 + 0xddc) != 0);
        }
        iVar2 = FUN_1004e58b(&PTR_s_CMFCPopupMenuBar_10205d98);
        if (iVar2 != 0) {
          if (uVar9 == 0) {
            iVar2 = FUN_1004e58b(&PTR_s_CMFCColorBar_10205c18);
            if (iVar2 == 0) {
              iVar2 = *(int *)local_1c;
              piVar5 = (int *)FUN_10094c92(local_38);
              pcVar1 = *(code **)(iVar2 + 0x2dc);
              guard_check_icall();
              iVar6 = (*pcVar1)();
              iVar2 = *piVar5;
              local_18.left = 0;
              local_18.top = 0;
              local_18.right = 0;
              local_18.bottom = 0;
              GetClientRect(*(HWND *)(param_2 + 0x20),&local_18);
              if (local_18.right - local_28 < 0x32) {
                local_28 = local_18.right;
              }
              local_30 = ~-(uint)(*(int *)(param_2 + 0xd40) != 0) & iVar2 + iVar6 + 1 + param_3;
              pHVar7 = GetParent(*(HWND *)(param_2 + 0x20));
              pCVar8 = CWnd::FromHandle(pHVar7);
              if (pCVar8 != (CWnd *)0x0) {
                iVar2 = FUN_1004e58b(&PTR_s_CMFCPopupMenu_10205bec);
                if ((iVar2 != 0) && (*(int *)(pCVar8 + 0x1168) == 0)) {
                  pcVar1 = *(code **)(*(int *)local_1c + 0x2dc);
                  guard_check_icall();
                  iVar2 = (*pcVar1)();
                  piVar5 = (int *)FUN_10094c92(local_38);
                  local_30 = iVar2 * 3 + (*piVar5 + 1) * 2 + param_3;
                }
              }
            }
          }
          CMFCVisualManagerOffice2007::DrawSeparator(local_1c,local_20,(CRect *)&local_30,1);
          goto LAB_100cf844;
        }
        iVar2 = (int)(local_28 - local_30) / 5;
        local_30 = local_30 + iVar2;
        local_28 = local_28 - iVar2;
      }
      else {
        if (uVar4 != 0) goto LAB_100cf7ee;
        iVar2 = (local_24 - local_2c) / 5;
        local_2c = local_2c + iVar2;
        local_24 = local_24 - iVar2;
      }
      CMFCVisualManagerOffice2007::DrawSeparator
                (local_1c,local_20,(CRect *)&local_30,(CPen *)(local_1c + 0x8f30),
                 (CPen *)(local_1c + 0x1e8),(uint)(param_7 == 0));
      goto LAB_100cf844;
    }
LAB_100cf7ee:
    if ((int)(param_5 - param_3) < *(int *)(local_1c + 0x151c)) {
      param_3 = param_5 - *(int *)(local_1c + 0x151c);
    }
    uVar11 = 1;
    uVar10 = 1;
    local_1c = local_1c + 0x14c8;
  }
  else {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonStatusBar_101d2504,param_2);
    param_3 = param_3 - 1;
    param_4 = param_4 + -5;
    param_5 = param_5 + 1;
    local_1c = local_1c + 0x460;
    param_6 = param_6 + (-(uint)(*(int *)(pCVar3 + 0x16f8) != 0) & 0xfffffffd) + 5;
    uVar11 = 3;
    uVar10 = 2;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  CMFCToolBarImages::DrawEx
            ((CMFCToolBarImages *)local_1c,local_20,param_3,param_4,param_5,param_6,0,uVar10,uVar11,
             0,0,0,0,0xff);
LAB_100cf844:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

