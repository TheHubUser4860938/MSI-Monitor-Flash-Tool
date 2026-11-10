// rea decompile_all
// name: CPaneContainerManager::PaneFromPoint
// address: 0x10134572
// body: available
// range: 0x10134572-0x101347d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CDockablePane * __thiscall CPaneContainerManager::PaneFromPoint(class
   CPoint,int,int,int &,int &)
   
   Library: Visual Studio 2015 Release */

CDockablePane * __thiscall
CPaneContainerManager::PaneFromPoint
          (CPaneContainerManager *this,LONG param_2,LONG param_3,int param_4,int param_5,
          undefined4 *param_6,uint *param_7)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  undefined4 *puVar2;
  CObject *pCVar3;
  ulong uVar4;
  BOOL BVar5;
  int iVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  CDockingManager *pCVar9;
  CDockablePane *pCVar10;
  int local_40;
  uint *local_3c;
  RECT local_38;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_3c = param_7;
  *param_6 = 0;
  local_40 = *(int *)(this + 8);
  while( true ) {
    do {
      if (local_40 == 0) {
        if (param_5 == 0) {
          local_3c = *(uint **)(this + 8);
          goto joined_r0x1013475f;
        }
        goto LAB_101347c3;
      }
      puVar2 = (undefined4 *)FUN_100972dc(&local_40);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,(CObject *)*puVar2)
      ;
    } while ((pCVar3 == (CObject *)0x0) ||
            (uVar4 = CWnd::GetExStyle((CWnd *)pCVar3), (uVar4 & 0x10000000) == 0));
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    ::GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_28);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x32c);
    guard_check_icall(&local_38,&local_18);
    (*pcVar1)();
    pt.y = param_3;
    pt.x = param_2;
    BVar5 = PtInRect(&local_38,pt);
    if ((BVar5 != 0) ||
       (pt_00.y = param_3, pt_00.x = param_2, BVar5 = PtInRect(&local_18,pt_00), BVar5 != 0)) break;
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x334);
    guard_check_icall(param_2,param_3,1);
    iVar6 = (*pcVar1)();
    if (iVar6 == 2) {
      *local_3c = 1;
      goto LAB_101347c3;
    }
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x1a4);
    guard_check_icall();
    iVar6 = (*pcVar1)();
    local_28.top = local_28.top + iVar6;
    local_28.bottom = local_28.bottom + (local_18.top - local_18.bottom);
    pt_01.y = param_3;
    pt_01.x = param_2;
    BVar5 = PtInRect(&local_28,pt_01);
    if (BVar5 != 0) {
      pHVar7 = GetParent(*(HWND *)(pCVar3 + 0x20));
      pCVar8 = CWnd::FromHandle(pHVar7);
      pCVar9 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_1020194c,pCVar8);
      if ((((pCVar9 != (CDockingManager *)0x0) && (iVar6 = *(int *)(pCVar9 + 0x1b8), iVar6 != 0)) &&
          (*(int *)(iVar6 + 8) != 0)) && (*(int *)(iVar6 + 4) != 0)) {
        if (*(int *)(iVar6 + 0x110) - 4U < 5) {
          *local_3c = (uint)(*(int *)(iVar6 + 0x110) == 8);
        }
        goto LAB_101347c3;
      }
      InflateRect(&local_28,-param_4,-param_4);
      pt_02.y = param_3;
      pt_02.x = param_2;
      BVar5 = PtInRect(&local_28,pt_02);
      if ((BVar5 == 0) || (param_4 == 0)) goto LAB_101347c3;
    }
  }
  *param_6 = 1;
  goto LAB_101347c3;
  while( true ) {
    puVar2 = (undefined4 *)FUN_100972dc(&local_3c);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,(CObject *)*puVar2);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    ::GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_18);
    InflateRect(&local_18,param_4,param_4);
    pt_03.y = param_3;
    pt_03.x = param_2;
    BVar5 = PtInRect(&local_18,pt_03);
    if (BVar5 != 0) break;
joined_r0x1013475f:
    if (local_3c == (uint *)0x0) break;
  }
LAB_101347c3:
  pCVar10 = (CDockablePane *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar10;
}

