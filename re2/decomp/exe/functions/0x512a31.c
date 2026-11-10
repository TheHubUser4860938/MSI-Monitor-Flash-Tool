// rea decompile_all
// name: CMDIClientAreaWnd::SerializeOpenChildren
// address: 0x512a31
// body: available
// range: 0x512a31-0x512ede inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x512ca0 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: void __thiscall CMDIClientAreaWnd::SerializeOpenChildren(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIClientAreaWnd::SerializeOpenChildren(CMDIClientAreaWnd *this,CArchive *param_1)

{
  code *pcVar1;
  CMDIClientAreaWnd *pCVar2;
  HWND pHVar3;
  CObject *pCVar4;
  undefined4 uVar5;
  int iVar6;
  CWnd *pCVar7;
  CBasePane *pCVar8;
  bool bVar9;
  CObList local_94 [4];
  CArchive *local_90;
  undefined4 local_88;
  LONG local_78;
  CObject *local_74;
  LONG local_70;
  int local_6c;
  int local_68;
  CBaseTabbedPane *local_64;
  int local_60;
  CArchive *local_5c;
  WPARAM local_58;
  CMDIClientAreaWnd *local_54;
  CObject *local_50;
  CObject *local_4c;
  CObject *local_48;
  CObject *local_44;
  tagWINDOWPLACEMENT local_40;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x84;
  local_8 = 0x512a40;
  local_5c = param_1;
  local_54 = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar3);
    local_48 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,(CObject *)pCVar7)
    ;
    local_44 = (CObject *)0x0;
    FUN_00450090(&local_44);
    local_58 = 0;
    local_68 = 0;
    local_74 = local_44;
    if (0 < (int)local_44) {
      do {
        uVar5 = FUN_004295fe();
        FUN_0040eb30(uVar5);
        local_8 = 3;
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_60);
        local_44 = (CObject *)0x0;
        local_50 = (CObject *)0x0;
        FUN_00450090(&local_44);
        if (local_44 != (CObject *)0x0) {
          local_50 = CArchive::ReadObject(param_1,(CRuntimeClass *)0x0);
        }
        FUN_00450090(&local_40.flags);
        FUN_00450090(&local_40);
        FUN_0041822b(&local_40.ptMaxPosition,8);
        FUN_0041822b(&local_40.ptMinPosition,8);
        FUN_0041822b(&local_40.rcNormalPosition,0x10);
        FUN_00450090(&local_40.showCmd);
        local_6c = 0;
        FUN_00450090(&local_6c);
        local_4c = (CObject *)0xffffffff;
        FUN_00450090(&local_4c);
        if (local_68 != 0) {
          local_40.showCmd = 3;
        }
        local_44 = (CObject *)0x0;
        if (*(int *)(local_60 + -0xc) == 0) {
          if (local_4c != (CObject *)0xffffffff) goto LAB_00512dd8;
        }
        else if (local_4c == (CObject *)0xffffffff) {
          pcVar1 = *(code **)(*(int *)local_48 + 0x228);
          guard_check_icall(local_60,local_50);
          local_44 = (CObject *)(*pcVar1)();
        }
        else {
LAB_00512dd8:
          pCVar8 = CMDIFrameWndEx::GetPane((CMDIFrameWndEx *)local_48,(uint)local_4c);
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,
                                      (CObject *)pCVar8);
          local_4c = pCVar4;
          if (pCVar4 != (CObject *)0x0) {
            local_64 = CBasePane::GetParentTabbedPane((CBasePane *)pCVar4);
            if (local_64 != (CBaseTabbedPane *)0x0) {
              pcVar1 = *(code **)(*(int *)pCVar4 + 0x378);
              guard_check_icall();
              (*pcVar1)();
              pCVar4 = local_4c;
            }
            pcVar1 = *(code **)(*(int *)local_48 + 0x1d4);
            guard_check_icall(pCVar4);
            local_44 = (CObject *)(*pcVar1)();
            if (local_64 != (CBaseTabbedPane *)0x0) {
              pcVar1 = *(code **)(*(int *)local_64 + 0x3c0);
              guard_check_icall(local_4c);
              (*pcVar1)();
            }
          }
        }
        if (local_50 != (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)local_50 + 4);
          guard_check_icall(1);
          (*pcVar1)();
        }
        pCVar4 = local_44;
        if (local_44 != (CObject *)0x0) {
          CWnd::SetWindowPlacement((CWnd *)local_44,&local_40);
          if (local_40.showCmd == 3) {
            CWnd::ShowWindow((CWnd *)local_54,3);
            local_68 = 1;
          }
          if (local_6c != 0) {
            local_58 = *(WPARAM *)(pCVar4 + 0x20);
          }
        }
        local_8 = 0xffffffff;
        FUN_0040efa0();
        local_74 = local_74 + -1;
        param_1 = local_5c;
      } while (local_74 != (CObject *)0x0);
      if (local_58 != 0) {
        SendMessageW(*(HWND *)(local_54 + 0x20),0x222,local_58,0);
      }
    }
  }
  else {
    CObList::CObList(local_94,10);
    local_8 = 0;
    pHVar3 = GetWindow(*(HWND *)(this + 0x20),5);
    pCVar4 = (CObject *)CWnd::FromHandle(pHVar3);
    while (pCVar4 != (CObject *)0x0) {
      local_44 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_005c1ebc,pCVar4);
      if (local_44 != (CObject *)0x0) {
        local_50 = (CObject *)0x0;
        pcVar1 = *(code **)(*(int *)local_44 + 0x218);
        guard_check_icall(&local_50);
        uVar5 = (*pcVar1)();
        FUN_00415a10(uVar5);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_50 != (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)local_50 + 4);
          guard_check_icall(1);
          (*pcVar1)();
        }
        if (*(int *)(local_4c + -0xc) != 0) {
          CObList::AddHead(local_94,local_44);
        }
        local_8 = local_8 & 0xffffff00;
        FUN_0040efa0();
      }
      pHVar3 = GetWindow(*(HWND *)(pCVar4 + 0x20),2);
      pCVar4 = (CObject *)CWnd::FromHandle(pHVar3);
      this = local_54;
      param_1 = local_5c;
    }
    local_58 = SendMessageW(*(HWND *)(this + 0x20),0x229,0,0);
    FUN_0043e915(local_88);
    while (local_90 != (CArchive *)0x0) {
      if (local_90 == (CArchive *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      local_5c = *(CArchive **)local_90;
      local_54 = (CMDIClientAreaWnd *)
                 AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_005c1ebc,
                                    *(CObject **)(local_90 + 8));
      local_48 = (CObject *)0x0;
      pcVar1 = *(code **)(*(int *)local_54 + 0x218);
      guard_check_icall(&local_48);
      uVar5 = (*pcVar1)();
      FUN_00415a10(uVar5);
      local_8 = CONCAT31(local_8._1_3_,2);
      CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_44);
      bVar9 = local_48 != (CObject *)0x0;
      FUN_0043e915(bVar9);
      if ((bVar9) && (FUN_004e3f8c(local_48), local_48 != (CObject *)0x0)) {
        pcVar1 = *(code **)(*(int *)local_48 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
      pCVar2 = local_54;
      CWnd::GetWindowPlacement((CWnd *)local_54,&local_40);
      FUN_0043e915(local_40.flags);
      FUN_0043e915(local_40.length);
      local_78 = local_40.ptMaxPosition.x;
      local_74 = (CObject *)local_40.ptMaxPosition.y;
      FUN_0043f073(&local_78,8);
      local_70 = local_40.ptMinPosition.x;
      local_6c = local_40.ptMinPosition.y;
      FUN_0043f073(&local_70,8);
      FUN_0043f073(&local_40.rcNormalPosition,0x10);
      FUN_0043e915(local_40.showCmd);
      FUN_0043e915(*(WPARAM *)(pCVar2 + 0x20) == local_58);
      pCVar7 = *(CWnd **)(pCVar2 + 0x444);
      iVar6 = -1;
      if ((pCVar7 != (CWnd *)0x0) && (*(int *)(pCVar7 + 0x20) != 0)) {
        iVar6 = CWnd::GetDlgCtrlID(pCVar7);
      }
      FUN_0043e915(iVar6);
      local_8 = local_8 & 0xffffff00;
      FUN_0040efa0();
      local_90 = local_5c;
    }
    CObList::~CObList(local_94);
  }
  FUN_0055bae6();
  return;
}

