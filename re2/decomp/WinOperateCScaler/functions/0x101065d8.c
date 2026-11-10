// rea decompile_all
// name: CMDIClientAreaWnd::Serialize
// address: 0x101065d8
// body: available
// range: 0x101065d8-0x10106981 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMDIClientAreaWnd::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIClientAreaWnd::Serialize(CMDIClientAreaWnd *this,CArchive *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  CMFCTabCtrl *pCVar4;
  undefined4 uVar5;
  int iVar6;
  WPARAM wParam;
  HWND pHVar7;
  CWnd *pCVar8;
  CObject *local_c;
  CObject *local_8;
  
  local_c = (CObject *)this;
  local_8 = (CObject *)this;
  CMDITabInfo::Serialize((CMDITabInfo *)(this + 0x2ac8),param_1);
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    if (((byte)param_1[0x18] & 1) != 0) {
      FUN_101043c2(0);
      FUN_1003ae2b();
      *(undefined4 *)(this + 0x2b38) = 1;
      FUN_10026405(this + 0x2a9c);
      FUN_10026405(this + 0x2b30);
      FUN_10026405(this + 0x2a98);
      FUN_10026405(&local_c);
      *(CObject **)(this + 0x2b90) = local_c;
      FUN_10026405(this + 0x2b58);
      FUN_10026405(this + 0x2b5c);
      if (*(int *)(this + 0x2a9c) == 0) {
        if (*(int *)(this + 0x2b30) == 0) {
          SerializeOpenChildren(this,param_1);
        }
        else {
          local_8 = (CObject *)0x0;
          FUN_10026405(&local_8);
          local_c = local_8;
          if (0 < (int)local_8) {
            do {
              pcVar1 = *(code **)(*(int *)this + 0x164);
              guard_check_icall(0);
              pCVar4 = (CMFCTabCtrl *)(*pcVar1)();
              local_8 = (CObject *)pCVar4;
              SerializeTabGroup(this,param_1,pCVar4,1);
              pcVar1 = *(code **)(*(int *)pCVar4 + 0x1ac);
              guard_check_icall();
              iVar6 = (*pcVar1)();
              if (iVar6 == 0) {
                pcVar1 = *(code **)(*(int *)local_8 + 0x60);
                guard_check_icall();
                (*pcVar1)();
                pcVar1 = *(code **)(*(int *)local_8 + 4);
                guard_check_icall(1);
                (*pcVar1)();
              }
              else {
                CObList::AddTail((CObList *)(this + 11000),local_8);
              }
              local_c = local_c + -1;
            } while (local_c != (CObject *)0x0);
          }
          if (0 < *(int *)(this + 0x2b04)) {
            pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101b54cc,
                                        *(CObject **)(*(int *)(this + 0x2b00) + 8));
            CMFCTabCtrl::SetResizeMode((CMFCTabCtrl *)pCVar3,0);
          }
          EnableMDITabbedGroups(this,1,(CMDITabInfo *)(this + 0x2ac8));
        }
      }
      else {
        SerializeTabGroup(this,param_1,(CMFCTabCtrl *)(this + 0x80),0);
        EnableMDITabs(this,1,(CMDITabInfo *)(this + 0x2ac8));
      }
      *(undefined4 *)(this + 0x2b38) = 0;
      if (*(int *)(this + 0x2b30) == 0) {
        if (*(int *)(this + 0x2a9c) != 0) {
          UpdateTabs(this,1);
          pcVar1 = *(code **)(*(int *)(this + 0x80) + 0x184);
          guard_check_icall();
          (*pcVar1)();
        }
      }
      else {
        FUN_10107833(1);
        local_8 = *(CObject **)(this + 0x2afc);
        while (local_8 != (CObject *)0x0) {
          puVar2 = (undefined4 *)FUN_100972dc(&local_8);
          pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101b54cc,
                                      (CObject *)*puVar2);
          pcVar1 = *(code **)(*(int *)pCVar3 + 0x184);
          local_c = pCVar3;
          guard_check_icall();
          (*pcVar1)();
          if (*(int *)(pCVar3 + 0x298) != 0) {
            iVar6 = *(int *)pCVar3;
            pcVar1 = *(code **)(iVar6 + 0x20c);
            guard_check_icall();
            uVar5 = (*pcVar1)();
            pcVar1 = *(code **)(iVar6 + 0x1b0);
            guard_check_icall(uVar5);
            iVar6 = (*pcVar1)();
            wParam = 0;
            if (iVar6 != 0) {
              wParam = *(WPARAM *)(iVar6 + 0x20);
            }
            PostMessageW(*(HWND *)(this + 0x20),0x222,wParam,0);
          }
        }
      }
      pHVar7 = GetParent(*(HWND *)(this + 0x20));
      pCVar8 = CWnd::FromHandle(pHVar7);
      pcVar1 = *(code **)(*(int *)pCVar8 + 0x178);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  else {
    FUN_10025aff(*(undefined4 *)(this + 0x2a9c));
    FUN_10025aff(*(undefined4 *)(this + 0x2b30));
    FUN_10025aff(*(undefined4 *)(this + 0x2a98));
    FUN_10025aff(*(undefined4 *)(this + 0x2b90));
    FUN_10025aff(*(undefined4 *)(this + 0x2b58));
    FUN_10025aff(*(undefined4 *)(this + 0x2b5c));
    if (*(int *)(this + 0x2a9c) == 0) {
      if (*(int *)(this + 0x2b30) == 0) {
        SerializeOpenChildren(this,param_1);
      }
      else {
        iVar6 = *(int *)(this + 0x2b04);
        FUN_10025aff(iVar6);
        if (0 < iVar6) {
          local_8 = *(CObject **)(this + 0x2afc);
          while (local_8 != (CObject *)0x0) {
            puVar2 = (undefined4 *)FUN_100972dc(&local_8);
            pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101b54cc,
                                        (CObject *)*puVar2);
            SerializeTabGroup(this,param_1,(CMFCTabCtrl *)pCVar3,0);
          }
        }
      }
    }
    else {
      SerializeTabGroup(this,param_1,(CMFCTabCtrl *)(this + 0x80),0);
    }
  }
  return;
}

