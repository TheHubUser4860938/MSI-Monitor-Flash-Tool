// rea decompile_all
// name: FUN_10081f16
// address: 0x10081f16
// body: available
// range: 0x10081f16-0x1008263e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008263a to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

CObject * FUN_10081f16(undefined4 param_1,undefined4 param_2)

{
  CBasePane *this;
  uint uVar1;
  int iVar2;
  HMENU pHVar3;
  undefined4 uVar4;
  int *piVar5;
  CObject *pCVar6;
  BOOL BVar7;
  int iVar8;
  CBaseTabbedPane *pCVar9;
  HWND pHVar10;
  CWnd *pCVar11;
  CBasePane *in_ECX;
  code *pcVar12;
  UINT uIDCheckItem;
  undefined **local_2c;
  HMENU local_28;
  CObject *local_24;
  int local_20;
  CBasePane *local_1c;
  CObject *local_18;
  LPCWSTR local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x10081f22;
  if (DAT_1020fa7c == (int *)0x0) {
    return (CObject *)0x0;
  }
  pcVar12 = *(code **)(*(int *)in_ECX + 0x198);
  local_1c = in_ECX;
  guard_check_icall();
  uVar1 = (*pcVar12)();
  if ((uVar1 & 0xf000) == 0) {
    pcVar12 = *(code **)(*(int *)in_ECX + 0x1cc);
    guard_check_icall();
    iVar2 = (*pcVar12)();
    if (iVar2 == 0) {
      return (CObject *)0x0;
    }
  }
  local_2c = CMenu::vftable;
  local_18 = (CObject *)0x0;
  local_28 = (HMENU)0x0;
  local_8 = 0;
  pHVar3 = CreatePopupMenu();
  CMenu::Attach((CMenu *)&local_2c,pHVar3);
  uVar4 = FUN_10048e90();
  FUN_10034c30(uVar4);
  local_8._0_1_ = 1;
  iVar2 = FUN_10048ace(0x428f);
  if ((iVar2 == 0) || (iVar2 = FUN_10034d90(iVar2,0x428f), iVar2 == 0)) {
LAB_1008263a:
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  AppendMenuW(local_28,0,0xffffff9a,local_14);
  iVar2 = FUN_10048ace(0x4290);
  if ((iVar2 == 0) || (iVar2 = FUN_10034d90(iVar2,0x4290), iVar2 == 0)) goto LAB_1008263a;
  AppendMenuW(local_28,0,0xffffff99,local_14);
  iVar2 = FUN_10048ace(0x42c0);
  if ((iVar2 == 0) || (iVar2 = FUN_10034d90(iVar2,0x42c0), iVar2 == 0)) goto LAB_1008263a;
  AppendMenuW(local_28,0,0xffffff96,local_14);
  iVar2 = FUN_10048ace(0x4291);
  if ((iVar2 == 0) || (iVar2 = FUN_10034d90(iVar2,0x4291), iVar2 == 0)) goto LAB_1008263a;
  AppendMenuW(local_28,0,0xffffff98,local_14);
  iVar2 = FUN_10048ace(0x4292);
  if ((iVar2 == 0) || (iVar2 = FUN_10034d90(iVar2,0x4292), iVar2 == 0)) goto LAB_1008263a;
  AppendMenuW(local_28,0,0xffffff97,local_14);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10034f00();
  local_14 = (LPCWSTR)0x0;
  uVar4 = 0;
  pcVar12 = *(code **)(*(int *)in_ECX + 0x228);
  guard_check_icall(0);
  piVar5 = (int *)(*pcVar12)();
  if ((piVar5 != (int *)0x0) && (piVar5[8] != 0)) {
    pcVar12 = *(code **)(*piVar5 + 0x1a4);
    guard_check_icall(uVar4);
    iVar2 = (*pcVar12)();
    if (iVar2 == 1) {
      local_14 = (LPCWSTR)0x1;
    }
  }
  pcVar12 = *(code **)(*(int *)in_ECX + 0x1cc);
  guard_check_icall(uVar4);
  iVar2 = (*pcVar12)();
  if (iVar2 == 0) {
    EnableMenuItem(local_28,0xffffff9a,1);
  }
  pcVar12 = *(code **)(*(int *)in_ECX + 0x1d4);
  guard_check_icall();
  iVar2 = (*pcVar12)();
  if (iVar2 == 0) {
LAB_10082140:
    EnableMenuItem(local_28,0xffffff98,1);
  }
  else {
    pcVar12 = *(code **)(*(int *)in_ECX + 0x228);
    guard_check_icall(0);
    iVar2 = (*pcVar12)();
    if (iVar2 != 0) goto LAB_10082140;
  }
  pcVar12 = *(code **)(*(int *)in_ECX + 0x1dc);
  guard_check_icall();
  iVar2 = (*pcVar12)();
  if (iVar2 != 0) {
    EnableMenuItem(local_28,0xffffff9a,1);
    EnableMenuItem(local_28,0xffffff99,1);
    CheckMenuItem(local_28,0xffffff98,8);
    EnableMenuItem(local_28,0xffffff97,1);
  }
  pcVar12 = *(code **)(*(int *)in_ECX + 0x19c);
  guard_check_icall();
  pCVar6 = (CObject *)(*pcVar12)();
  pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101c56b8,pCVar6);
  pcVar12 = *(code **)(*(int *)in_ECX + 400);
  guard_check_icall();
  iVar2 = (*pcVar12)();
  if ((iVar2 == 0) || ((pCVar6 != (CObject *)0x0 && (*(int *)(pCVar6 + 0x420) != 0)))) {
    EnableMenuItem(local_28,0xffffff96,1);
  }
  pcVar12 = *(code **)(*(int *)in_ECX + 0x174);
  guard_check_icall();
  iVar2 = (*pcVar12)();
  if (iVar2 != 0) {
    EnableMenuItem(local_28,0xffffff9a,1);
    EnableMenuItem(local_28,0xffffff99,1);
    CheckMenuItem(local_28,0xffffff96,8);
  }
  pcVar12 = *(code **)(*(int *)in_ECX + 0x170);
  guard_check_icall();
  iVar2 = (*pcVar12)();
  if ((iVar2 == 0) && (local_14 == (LPCWSTR)0x0)) {
    pcVar12 = *(code **)(*(int *)in_ECX + 0x1dc);
    guard_check_icall();
    iVar2 = (*pcVar12)();
    if (iVar2 == 0) {
      pcVar12 = *(code **)(*(int *)in_ECX + 0x174);
      guard_check_icall();
      iVar2 = (*pcVar12)();
      if (iVar2 == 0) {
        uIDCheckItem = 0xffffff99;
        goto LAB_1008227d;
      }
    }
  }
  else {
    uIDCheckItem = 0xffffff9a;
LAB_1008227d:
    CheckMenuItem(local_28,uIDCheckItem,8);
  }
  pcVar12 = *(code **)(*(int *)in_ECX + 0x198);
  guard_check_icall();
  uVar1 = (*pcVar12)();
  if ((uVar1 & 0xf000) == 0) {
    EnableMenuItem(local_28,0xffffff99,1);
  }
  pcVar12 = *(code **)(*(int *)in_ECX + 0x1c8);
  guard_check_icall();
  iVar2 = (*pcVar12)();
  if (iVar2 == 0) {
    EnableMenuItem(local_28,0xffffff97,1);
  }
  pcVar12 = *(code **)(*(int *)in_ECX + 0x2e8);
  guard_check_icall(&local_2c);
  iVar2 = (*pcVar12)();
  if (iVar2 == 0) {
    local_8 = 2;
    goto LAB_100825da;
  }
  pHVar10 = *(HWND *)(in_ECX + 0x20);
  iVar2 = *DAT_1020fa7c;
  guard_check_icall(local_28,param_1,param_2,local_1c,0);
  iVar2 = (**(code **)(iVar2 + 0x14))();
  BVar7 = IsWindow(pHVar10);
  this = local_1c;
  if (BVar7 == 0) {
    local_8 = 3;
  }
  else {
    pcVar12 = *(code **)(*(int *)local_1c + 0x2ec);
    guard_check_icall(iVar2);
    iVar8 = (*pcVar12)();
    if (iVar8 != 0) {
      if (iVar2 == -0x6a) {
        pcVar12 = *(code **)(*(int *)this + 0x174);
        guard_check_icall();
        iVar2 = (*pcVar12)();
        if (iVar2 == 0) {
          pcVar12 = *(code **)(*(int *)this + 0x2e0);
          guard_check_icall(1);
LAB_1008261a:
          (*pcVar12)();
          goto LAB_1008261c;
        }
        pHVar10 = GetParent(*(HWND *)(this + 0x20));
        pCVar11 = CWnd::FromHandle(pHVar10);
        local_24 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101c65bc,
                                      (CObject *)pCVar11);
        if (local_24 == (CObject *)0x0) {
          local_8 = 5;
        }
        else {
          pcVar12 = *(code **)(*(int *)this + 0x19c);
          guard_check_icall();
          pCVar6 = (CObject *)(*pcVar12)();
          pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101c56b8,pCVar6);
          if (pCVar6 != (CObject *)0x0) {
            pcVar12 = *(code **)(*(int *)pCVar6 + 0x1d8);
            guard_check_icall(local_24);
            goto LAB_1008261a;
          }
          local_8 = 6;
        }
        local_18 = (CObject *)0x0;
        goto LAB_100825da;
      }
      if (iVar2 == -0x69) {
        pcVar12 = *(code **)(*(int *)this + 0x2dc);
LAB_1008254c:
        guard_check_icall();
      }
      else {
        if (iVar2 == -0x68) {
          pcVar12 = *(code **)(*(int *)this + 0x2d8);
          goto LAB_1008254c;
        }
        if (iVar2 != -0x67) {
          if (iVar2 == -0x66) {
            pcVar12 = *(code **)(*(int *)this + 0x16c);
            guard_check_icall();
            iVar2 = (*pcVar12)();
            pCVar9 = (CBaseTabbedPane *)this;
            if (iVar2 != 0) {
              pCVar9 = CBasePane::GetParentTabbedPane(this);
            }
            local_18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101c7908,
                                          (CObject *)pCVar9);
            if (local_18 != (CObject *)0x0) {
              pcVar12 = *(code **)(*(int *)local_18 + 0x3a0);
              guard_check_icall();
              pCVar6 = (CObject *)(*pcVar12)();
              local_24 = pCVar6;
              if (pCVar6 != (CObject *)0x0) {
                pcVar12 = *(code **)(*(int *)pCVar6 + 0x20c);
                guard_check_icall();
                local_1c = (CBasePane *)(*pcVar12)();
                pcVar12 = *(code **)(*(int *)pCVar6 + 0x1b0);
                guard_check_icall(local_1c);
                local_20 = (*pcVar12)();
                if (local_20 != 0) {
                  pcVar12 = *(code **)(*(int *)pCVar6 + 0x1f0);
                  guard_check_icall(local_1c);
                  iVar2 = (*pcVar12)();
                  if (iVar2 != 0) {
                    pcVar12 = *(code **)(*(int *)local_18 + 0x3bc);
                    guard_check_icall(local_20,0);
                    iVar2 = (*pcVar12)();
                    pCVar6 = local_24;
                    if (iVar2 != 0) {
                      pcVar12 = *(code **)(*(int *)local_24 + 0x1ac);
                      guard_check_icall();
                      iVar2 = (*pcVar12)();
                      if (0 < iVar2) {
                        pcVar12 = *(code **)(*(int *)pCVar6 + 0x1a4);
                        guard_check_icall();
                        iVar2 = (*pcVar12)();
                        if (iVar2 == 0) {
                          pcVar12 = *(code **)(*(int *)local_18 + 0x224);
                          guard_check_icall(0,0,0);
                          (*pcVar12)();
                        }
                      }
                      goto LAB_1008261c;
                    }
                  }
                }
              }
            }
            if (local_14 == (LPCWSTR)0x0) {
              pcVar12 = *(code **)(*(int *)this + 0x1fc);
              guard_check_icall(*(undefined4 *)(this + 0x1e8),*(undefined4 *)(this + 0x1ec),
                                *(undefined4 *)(this + 0x1f0),*(undefined4 *)(this + 500),0,1);
              (*pcVar12)();
            }
          }
          goto LAB_1008261c;
        }
        pcVar12 = *(code **)(*(int *)this + 0x170);
        guard_check_icall();
        iVar2 = (*pcVar12)();
        if ((iVar2 == 0) && (local_14 == (LPCWSTR)0x0)) goto LAB_1008261c;
        pcVar12 = *(code **)(*(int *)this + 0x228);
        guard_check_icall(0);
        piVar5 = (int *)(*pcVar12)();
        if (piVar5 == (int *)0x0) goto LAB_1008261c;
        pcVar12 = *(code **)(*piVar5 + 0x198);
        guard_check_icall();
      }
      (*pcVar12)();
LAB_1008261c:
      local_8 = 7;
      local_2c = CMenu::vftable;
      CMenu::DestroyMenu((CMenu *)&local_2c);
      return (CObject *)0x1;
    }
    local_8 = 4;
  }
  local_18 = (CObject *)0x1;
LAB_100825da:
  local_2c = CMenu::vftable;
  CMenu::DestroyMenu((CMenu *)&local_2c);
  return local_18;
}

