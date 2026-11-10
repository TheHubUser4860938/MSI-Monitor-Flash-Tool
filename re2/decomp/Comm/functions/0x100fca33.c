// rea decompile_all
// name: CMDIClientAreaWnd::UpdateTabs
// address: 0x100fca33
// body: available
// range: 0x100fca33-0x100fcf66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::UpdateTabs(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIClientAreaWnd::UpdateTabs(CMDIClientAreaWnd *this,int param_1)

{
  CMDIClientAreaWnd *pCVar1;
  code *pcVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  int iVar7;
  int *piVar8;
  HICON__ *pHVar9;
  ulong uVar10;
  int iVar11;
  CFrameWnd *pCVar12;
  undefined4 uVar13;
  undefined1 local_3c [4];
  CMDIClientAreaWnd *local_38;
  int local_34;
  int local_30;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  HICON__ *local_20;
  undefined4 local_1c;
  CWnd *local_18;
  CObject *local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100fca3f;
  if (*(int *)(this + 0x2b38) != 0) {
    return;
  }
  local_38 = this;
  if (*(int *)(this + 0x2b30) != 0) {
    FUN_100fc4dd(param_1);
    return;
  }
  pCVar1 = this + 0x80;
  if (pCVar1 == (CMDIClientAreaWnd *)0x0) {
    return;
  }
  if (*(int *)(this + 0xa0) == 0) {
    return;
  }
  if (*(int *)(this + 0x2a98) == 0) {
    return;
  }
  local_28 = 0;
  pcVar2 = *(code **)(*(int *)pCVar1 + 0x1ac);
  guard_check_icall();
  iVar3 = (*pcVar2)();
  pHVar4 = GetWindow(*(HWND *)(this + 0x20),5);
  pCVar5 = CWnd::FromHandle(pHVar4);
  local_18 = pCVar5;
  if (pCVar5 != (CWnd *)0x0) {
    do {
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_10193444,(CObject *)pCVar5)
      ;
      local_34 = 1;
      local_14 = pCVar6;
      if (pCVar6 == (CObject *)0x0) {
        iVar7 = FUN_10019d4f(&PTR_s_CMFCTabCtrl_1018a624);
        if (iVar7 == 0) goto LAB_100fcafd;
        pHVar4 = GetWindow(*(HWND *)(local_18 + 0x20),2);
        pCVar5 = CWnd::FromHandle(pHVar4);
        local_18 = pCVar5;
      }
      else {
        pcVar2 = *(code **)(*(int *)pCVar6 + 0x1e4);
        guard_check_icall();
        local_34 = (*pcVar2)();
        pCVar6 = local_14;
LAB_100fcafd:
        pCVar5 = local_18;
        local_24 = -1;
        local_30 = -1;
        if (*(int *)(this + 0x2ad0) == 0) {
          pcVar2 = *(code **)(*(int *)pCVar1 + 0x174);
          guard_check_icall();
          (*pcVar2)();
          CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x2aac));
          while (iVar7 = _IsolationAwareImageList_GetImageCount_4(*(undefined4 *)(this + 0x2aa8)),
                pCVar6 = local_14, 0 < iVar7) {
            _IsolationAwareImageList_Remove_8(*(undefined4 *)(this + 0x2aa8),0);
          }
          if (((local_14 != (CObject *)0x0) &&
              (iVar7 = CMDIChildWndEx::IsTaskbarTabsSupportEnabled((CMDIChildWndEx *)local_14),
              iVar7 != 0)) &&
             (iVar7 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs((CMDIChildWndEx *)pCVar6),
             iVar7 != 0)) {
            pcVar2 = *(code **)(*(int *)pCVar6 + 0x1e0);
            guard_check_icall();
            pHVar9 = (HICON__ *)(*pcVar2)();
            if ((pHVar9 != (HICON__ *)0x0) ||
               ((pCVar12 = CWnd::GetTopLevelFrame((CWnd *)this), pCVar12 != (CFrameWnd *)0x0 &&
                (pHVar9 = CGlobalUtils::GetWndIcon
                                    ((CGlobalUtils *)&PTR_vftable_101d3944,(CWnd *)pCVar12),
                pHVar9 != (HICON__ *)0x0)))) goto LAB_100fcc97;
          }
        }
        else {
          if (pCVar6 == (CObject *)0x0) {
            local_20 = (HICON__ *)SendMessageW(*(HWND *)(local_18 + 0x20),0x7f,0,0);
            if (local_20 == (HICON__ *)0x0) {
              local_20 = (HICON__ *)GetClassLongW(*(HWND *)(pCVar5 + 0x20),-0x22);
              goto LAB_100fcb7f;
            }
          }
          else {
            pcVar2 = *(code **)(*(int *)pCVar6 + 0x1e0);
            guard_check_icall();
            local_20 = (HICON__ *)(*pcVar2)();
LAB_100fcb7f:
            if (local_20 == (HICON__ *)0x0) goto LAB_100fccae;
          }
          iVar7 = CMap<int,int,int,int>::Lookup
                            ((CMap<int,int,int,int> *)(this + 0x2aac),(int)local_20,&local_30);
          if (iVar7 == 0) {
            local_24 = _IsolationAwareImageList_ReplaceIcon_12
                                 (*(undefined4 *)(this + 0x2aa8),0xffffffff,local_20);
            piVar8 = (int *)FUN_10067d49(local_20);
            *piVar8 = local_24;
            iVar7 = _IsolationAwareImageList_GetImageCount_4(*(undefined4 *)(this + 0x2aa8));
            pHVar9 = local_20;
            if (iVar7 == 1) {
              if (this == (CMDIClientAreaWnd *)0xffffd55c) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined4 *)(this + 0x2aa8);
              }
              pcVar2 = *(code **)(*(int *)pCVar1 + 0x16c);
              guard_check_icall(uVar13);
              (*pcVar2)();
              pHVar9 = local_20;
            }
          }
          else {
            local_24 = local_30;
            pHVar9 = local_20;
          }
LAB_100fcc97:
          pcVar2 = *(code **)(*(int *)local_14 + 0x1f0);
          guard_check_icall(pHVar9);
          (*pcVar2)();
        }
LAB_100fccae:
        uVar13 = FUN_10013071();
        FUN_10003190(uVar13);
        local_8 = 0;
        if (local_14 == (CObject *)0x0) {
          CWnd::GetWindowTextW
                    (local_18,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_1c);
        }
        else {
          pcVar2 = *(code **)(*(int *)local_14 + 0x1dc);
          guard_check_icall(local_3c);
          uVar13 = (*pcVar2)();
          local_8._0_1_ = 1;
          FUN_100030d0(uVar13);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10003460();
        }
        if (local_18 == (CWnd *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(local_18 + 0x20);
        }
        pcVar2 = *(code **)(*(int *)pCVar1 + 0x21c);
        guard_check_icall(uVar13);
        pHVar9 = (HICON__ *)(*pcVar2)();
        local_20 = pHVar9;
        if ((int)pHVar9 < 0) {
          if (((local_14 == (CObject *)0x0) || (*(int *)(local_14 + 300) == 0)) && (local_34 != 0))
          {
            pcVar2 = *(code **)(*(int *)pCVar1 + 0x18c);
            guard_check_icall(local_18,local_1c,local_24,1);
            (*pcVar2)();
            iVar7 = *(int *)pCVar1;
            pcVar2 = *(code **)(iVar7 + 0x1ac);
            guard_check_icall();
            iVar11 = (*pcVar2)();
            pcVar2 = *(code **)(iVar7 + 0x214);
            guard_check_icall(iVar11 + -1);
            (*pcVar2)();
            this = local_38;
            goto LAB_100fce66;
          }
        }
        else {
          uVar10 = CWnd::GetExStyle(local_18);
          if ((uVar10 & 0x10000000) == 0) {
            pcVar2 = *(code **)(*(int *)pCVar1 + 0x198);
            guard_check_icall(pHVar9,1);
            (*pcVar2)();
LAB_100fce66:
            local_28 = 1;
          }
          else {
            uVar13 = FUN_10013071();
            FUN_10003190(uVar13);
            local_8 = CONCAT31(local_8._1_3_,2);
            pcVar2 = *(code **)(*(int *)pCVar1 + 0x1bc);
            guard_check_icall(pHVar9,local_2c);
            (*pcVar2)();
            iVar7 = FUN_100257be(local_1c);
            if (iVar7 != 0) {
              pcVar2 = *(code **)(*(int *)pCVar1 + 0x1c0);
              guard_check_icall(local_20,&local_1c);
              (*pcVar2)();
              local_28 = 1;
            }
            pcVar2 = *(code **)(*(int *)pCVar1 + 0x1c4);
            guard_check_icall(local_20);
            iVar7 = (*pcVar2)();
            if (iVar7 != local_24) {
              pcVar2 = *(code **)(*(int *)pCVar1 + 0x1c8);
              guard_check_icall(local_20,local_24);
              (*pcVar2)();
              local_28 = 1;
            }
            local_8 = local_8 & 0xffffff00;
            FUN_10003460();
          }
        }
        pHVar4 = GetWindow(*(HWND *)(local_18 + 0x20),2);
        pCVar5 = CWnd::FromHandle(pHVar4);
        local_8 = 0xffffffff;
        local_18 = pCVar5;
        FUN_10003460();
      }
    } while (pCVar5 != (CWnd *)0x0);
    if ((local_28 != 0) &&
       (pCVar12 = CWnd::GetParentFrame((CWnd *)this), pCVar12 != (CFrameWnd *)0x0)) {
      pCVar12 = CWnd::GetParentFrame((CWnd *)this);
      pcVar2 = *(code **)(*(int *)pCVar12 + 0x178);
      guard_check_icall(1);
      (*pcVar2)();
    }
  }
  if (param_1 != 0) {
    iVar7 = *(int *)pCVar1;
    pcVar2 = *(code **)(iVar7 + 0x20c);
    guard_check_icall();
    uVar13 = (*pcVar2)();
    pcVar2 = *(code **)(iVar7 + 0x224);
    guard_check_icall(uVar13);
    (*pcVar2)();
  }
  if (iVar3 == 0) {
    pcVar2 = *(code **)(*(int *)pCVar1 + 0x1ac);
    guard_check_icall();
    iVar3 = (*pcVar2)();
    if (0 < iVar3) goto LAB_100fcf2c;
  }
  pcVar2 = *(code **)(*(int *)pCVar1 + 0x1ac);
  guard_check_icall();
  iVar3 = (*pcVar2)();
  if (iVar3 != 0) {
    return;
  }
LAB_100fcf2c:
  pCVar1 = local_38;
  pCVar12 = CWnd::GetParentFrame((CWnd *)local_38);
  pcVar2 = *(code **)(*(int *)pCVar12 + 0x178);
  guard_check_icall(1);
  (*pcVar2)();
  RedrawWindow(*(HWND *)(pCVar1 + 0x20),(RECT *)0x0,(HRGN)0x0,0x507);
  return;
}

