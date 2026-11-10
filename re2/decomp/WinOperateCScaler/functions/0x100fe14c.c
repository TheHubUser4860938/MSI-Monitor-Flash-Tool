// rea decompile_all
// name: CDockablePane::AttachToTabWnd
// address: 0x100fe14c
// body: available
// range: 0x100fe14c-0x100fe4fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CDockablePane * __thiscall CDockablePane::AttachToTabWnd(class
   CDockablePane *,enum AFX_DOCK_METHOD,int,class CDockablePane * *)
   
   Library: Visual Studio 2015 Release */

CDockablePane * __thiscall
CDockablePane::AttachToTabWnd
          (CDockablePane *this,CDockablePane *param_1,AFX_DOCK_METHOD param_2,int param_3,
          CDockablePane **param_4)

{
  code *pcVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  int iVar7;
  CDockablePane *pCVar8;
  undefined4 uVar9;
  BOOL BVar10;
  tagRECT *ptVar11;
  CObject *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (param_4 != (CDockablePane **)0x0) {
    *param_4 = (CDockablePane *)0x0;
  }
  pcVar1 = *(code **)(*(int *)param_1 + 0x18c);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x18c);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      local_1c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101bf638,
                                    (CObject *)param_1);
      pcVar1 = *(code **)(*(int *)param_1 + 0x228);
      guard_check_icall(0);
      iVar2 = (*pcVar1)();
      pHVar3 = GetParent(*(HWND *)(this + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      SetRectEmpty(&local_18);
      if (local_1c == (CObject *)0x0) {
        pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar3);
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_101b4338,
                                    (CObject *)pCVar5);
        if (pCVar6 != (CObject *)0x0) {
          pHVar3 = GetParent(*(HWND *)(pCVar5 + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar3);
        }
        local_1c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101bf638,
                                      (CObject *)pCVar5);
        if (local_1c == (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)param_1 + 0x31c);
          guard_check_icall();
          (*pcVar1)();
          GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
          ptVar11 = &local_18;
          pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar3);
          CWnd::ScreenToClient(pCVar5,ptVar11);
          pcVar1 = *(code **)(*(int *)param_1 + 0x350);
          guard_check_icall();
          local_1c = (CObject *)(*pcVar1)();
          CBasePane::InsertPane((CBasePane *)param_1,(CBasePane *)local_1c,(CBasePane *)param_1,1);
          iVar7 = ReplacePane(param_1,(CDockablePane *)local_1c,param_2,0);
          if (iVar7 == 0) {
            if (iVar2 == 0) {
              CBasePane::RemovePaneFromDockManager
                        ((CBasePane *)this,(CBasePane *)local_1c,1,0,0,(CBasePane *)0x0);
            }
            if (local_1c != (CObject *)0x0) {
              pcVar1 = *(code **)(*(int *)local_1c + 4);
              guard_check_icall(1);
              (*pcVar1)();
            }
            goto LAB_100fe2f8;
          }
          iVar2 = *(int *)local_1c;
          pcVar1 = *(code **)(*(int *)param_1 + 0x198);
          guard_check_icall();
          uVar9 = (*pcVar1)();
          pcVar1 = *(code **)(iVar2 + 0x1ec);
          guard_check_icall(uVar9);
          (*pcVar1)();
          iVar2 = *(int *)local_1c;
          pcVar1 = *(code **)(*(int *)param_1 + 0x194);
          guard_check_icall();
          uVar9 = (*pcVar1)();
          pcVar1 = *(code **)(iVar2 + 0x1e0);
          guard_check_icall(uVar9);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)param_1 + 0x240);
          guard_check_icall(1);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)local_1c + 0x3b4);
          guard_check_icall(param_1,1,param_3,1);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)param_1 + 0x1f0);
          guard_check_icall(0);
          (*pcVar1)();
        }
      }
      if (param_4 != (CDockablePane **)0x0) {
        *param_4 = (CDockablePane *)local_1c;
      }
      pcVar1 = *(code **)(*(int *)this + 0x1f0);
      guard_check_icall(0);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x2f8);
      guard_check_icall(&local_1c,0,param_2);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x21c);
      guard_check_icall(local_1c,1);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x308);
      guard_check_icall(local_1c,param_2);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)local_1c + 0x3b4);
      guard_check_icall(this,1,param_3,1);
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x220);
        guard_check_icall(pCVar4);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)this + 0x2fc);
        guard_check_icall(local_1c,0,param_2);
        (*pcVar1)();
      }
      BVar10 = IsRectEmpty(&local_18);
      if (BVar10 == 0) {
        pcVar1 = *(code **)(*(int *)local_1c + 0x238);
        guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                          local_18.bottom - local_18.top,0x14,0);
        (*pcVar1)();
        if (iVar2 != 0) {
          pcVar1 = *(code **)(*(int *)this + 0x268);
          guard_check_icall(0);
          (*pcVar1)();
        }
      }
      pcVar1 = *(code **)(*(int *)local_1c + 0x210);
      guard_check_icall();
      (*pcVar1)();
    }
  }
LAB_100fe2f8:
  pCVar8 = (CDockablePane *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar8;
}

