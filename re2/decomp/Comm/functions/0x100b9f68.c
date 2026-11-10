// rea decompile_all
// name: FUN_100b9f68
// address: 0x100b9f68
// body: available
// range: 0x100b9f68-0x100ba556 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ba552 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b9f68(CObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  SHORT SVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  BOOL BVar7;
  int iVar8;
  CObject *pCVar9;
  CWnd *pCVar10;
  CMFCPopupMenuBar *in_ECX;
  __POSITION *p_Var11;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 uVar12;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  undefined4 extraout_EDX_12;
  undefined4 extraout_EDX_13;
  undefined4 extraout_EDX_14;
  undefined4 extraout_EDX_15;
  undefined4 extraout_EDX_16;
  undefined4 extraout_EDX_17;
  __POSITION *p_Var13;
  __POSITION *p_Var14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  __POSITION *local_38;
  int local_34;
  CObject *local_30;
  __POSITION *local_2c;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  uVar17 = 0;
  if (*(int *)(in_ECX + 0xbf0) < 0) {
    p_Var13 = (__POSITION *)0x0;
LAB_100b9fa1:
    p_Var11 = (__POSITION *)0x0;
  }
  else {
    p_Var13 = CObList::FindIndex((CObList *)(in_ECX + 0xc3c),*(int *)(in_ECX + 0xbf0));
    in_EDX = extraout_EDX;
    if (p_Var13 == (__POSITION *)0x0) goto LAB_100b9fa1;
    p_Var11 = *(__POSITION **)(p_Var13 + 8);
  }
  bVar2 = false;
  iVar8 = *(int *)(in_ECX + 0xbf0);
  local_2c = p_Var11;
  p_Var14 = p_Var13;
  if (param_1 == (CObject *)0x9) {
    SVar3 = GetKeyState(0x10);
    in_EDX = extraout_EDX_00;
    if (-1 < (char)SVar3) {
      param_1 = (CObject *)0x28;
      goto LAB_100b9fdf;
    }
    param_1 = (CObject *)0x26;
    goto LAB_100ba1f9;
  }
LAB_100b9fdf:
  uVar16 = CONCAT44(in_EDX,uVar17);
  if (param_1 == (CObject *)0xd) {
    uVar17 = 1;
    pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_101d39fc,
                                (CObject *)p_Var11);
    uVar16 = CONCAT44(extraout_EDX_13,uVar17);
    if (pCVar9 == (CObject *)0x0) goto LAB_100ba53f;
    pcVar1 = *(code **)(*(int *)pCVar9 + 0xf0);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    if (iVar5 == 0) {
      pcVar1 = *(code **)(*(int *)pCVar9 + 0xcc);
      guard_check_icall(0);
      uVar15 = (*pcVar1)();
      uVar16 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),uVar17);
      if ((int)uVar15 != 0) goto LAB_100ba53f;
    }
    pCVar10 = CWnd::GetOwner((CWnd *)in_ECX);
    SendMessageW(*(HWND *)(pCVar10 + 0x20),0x362,0xe001,0);
    pcVar1 = *(code **)(*(int *)in_ECX + 1000);
    guard_check_icall(pCVar9);
    (*pcVar1)();
    uVar16 = CONCAT44(extraout_EDX_14,uVar17);
    p_Var13 = local_2c;
    local_34 = iVar8;
    goto LAB_100ba473;
  }
  if ((CObject *)0x20 < param_1) {
    if (param_1 < (CObject *)0x23) {
      uVar16 = CONCAT44(in_EDX,uVar17);
      if ((*(int *)(in_ECX + 0xd80) != 0) &&
         (uVar16 = CONCAT44(in_EDX,uVar17), 0 < *(int *)(in_ECX + 0xd84))) {
        local_30 = (CObject *)0x0;
        iVar8 = *(int *)(in_ECX + 0xbf0);
        *(undefined4 *)(in_ECX + 0xd88) = 1;
        if (0 < *(int *)(in_ECX + 0xd84)) {
          p_Var11 = (__POSITION *)((uint)(param_1 != (CObject *)0x21) * 2 + 0x26);
          do {
            pcVar1 = *(code **)(*(int *)in_ECX + 0x400);
            guard_check_icall(p_Var11);
            (*pcVar1)();
            local_30 = local_30 + 1;
            in_EDX = extraout_EDX_09;
          } while ((int)local_30 < *(int *)(in_ECX + 0xd84));
        }
        *(undefined4 *)(in_ECX + 0xd88) = 0;
        uVar16 = CONCAT44(in_EDX,iVar8);
        if (iVar8 != *(int *)(in_ECX + 0xbf0)) {
          pcVar1 = *(code **)(*(int *)in_ECX + 0x25c);
          guard_check_icall(*(int *)(in_ECX + 0xbf0));
          (*pcVar1)();
          uVar16 = CONCAT44(extraout_EDX_10,iVar8);
        }
      }
      goto LAB_100ba53f;
    }
    if (param_1 == (CObject *)0x23) {
      p_Var14 = (__POSITION *)0x0;
LAB_100ba1f9:
      uVar16 = CONCAT44(in_EDX,uVar17);
      if (((*(int *)(in_ECX + 0xd80) != 0) && (p_Var13 == *(__POSITION **)(in_ECX + 0xc40))) &&
         (param_1 != (CObject *)0x23)) goto LAB_100ba53f;
      uVar17 = 1;
      uVar16 = CONCAT44(in_EDX,1);
      if (*(int *)(in_ECX + 0xc48) == 0) goto LAB_100ba53f;
      if ((p_Var14 == (__POSITION *)0x0) ||
         (local_2c = p_Var14, FUN_1002e90e(&local_2c), in_EDX = extraout_EDX_07,
         local_2c == (__POSITION *)0x0)) {
        local_2c = *(__POSITION **)(in_ECX + 0xc44);
        iVar8 = *(int *)(in_ECX + 0xc48);
      }
      local_34 = iVar8 + -1;
      uVar16 = CONCAT44(in_EDX,uVar17);
      if (local_2c == p_Var14) goto LAB_100ba53f;
      do {
        local_38 = local_2c;
        uVar16 = FUN_1002e90e(&local_2c);
        uVar12 = (undefined4)((ulonglong)uVar16 >> 0x20);
        local_30 = (CObject *)*(int *)uVar16;
        if (((((byte)local_30[0x24] & 1) == 0) &&
            (BVar7 = IsRectEmpty((RECT *)(local_30 + 0x54)), uVar12 = extraout_EDX_08, BVar7 == 0))
           && (*(int *)(local_30 + 0x20) != -2)) break;
        uVar16 = CONCAT44(uVar12,uVar17);
        if (local_2c == (__POSITION *)0x0) {
          if (*(int *)(in_ECX + 0xd80) != 0) goto LAB_100ba53f;
          local_34 = *(int *)(in_ECX + 0xc48);
          local_2c = *(__POSITION **)(in_ECX + 0xc44);
        }
        local_34 = local_34 + -1;
      } while (local_2c != p_Var14);
    }
    else {
      if (param_1 == (CObject *)0x24) {
        p_Var14 = (__POSITION *)0x0;
      }
      else {
        if (param_1 == (CObject *)0x26) goto LAB_100ba1f9;
        if (param_1 != (CObject *)0x28) goto LAB_100ba01c;
      }
      if (((*(int *)(in_ECX + 0xd80) != 0) && (p_Var13 == *(__POSITION **)(in_ECX + 0xc44))) &&
         (param_1 != (CObject *)0x24)) goto LAB_100ba53f;
      uVar17 = 1;
      uVar16 = CONCAT44(in_EDX,1);
      if (*(int *)(in_ECX + 0xc48) == 0) goto LAB_100ba53f;
      if ((p_Var14 == (__POSITION *)0x0) ||
         (local_2c = p_Var14, FUN_1002466e(&local_2c), in_EDX = extraout_EDX_05,
         local_2c == (__POSITION *)0x0)) {
        local_2c = *(__POSITION **)(in_ECX + 0xc40);
        local_34 = 0;
      }
      else {
        local_34 = iVar8 + 1;
      }
      uVar16 = CONCAT44(in_EDX,uVar17);
      if (local_2c == p_Var14) goto LAB_100ba53f;
      do {
        local_38 = local_2c;
        uVar16 = FUN_1002466e(&local_2c);
        uVar12 = (undefined4)((ulonglong)uVar16 >> 0x20);
        local_30 = (CObject *)*(int *)uVar16;
        if (((((byte)local_30[0x24] & 1) == 0) &&
            (BVar7 = IsRectEmpty((RECT *)(local_30 + 0x54)), uVar12 = extraout_EDX_06, BVar7 == 0))
           && (*(int *)(local_30 + 0x20) != -2)) break;
        uVar16 = CONCAT44(uVar12,uVar17);
        local_34 = local_34 + 1;
        if (local_2c == (__POSITION *)0x0) {
          if (*(int *)(in_ECX + 0xd80) != 0) goto LAB_100ba53f;
          local_2c = *(__POSITION **)(in_ECX + 0xc40);
          local_34 = 0;
        }
      } while (local_2c != p_Var14);
    }
    uVar16 = CONCAT44(uVar12,uVar17);
    if (local_38 == (__POSITION *)0x0) goto LAB_100ba53f;
    local_2c = *(__POSITION **)(local_38 + 8);
    bVar2 = true;
    p_Var13 = local_2c;
    goto LAB_100ba473;
  }
LAB_100ba01c:
  uVar16 = CONCAT44(in_EDX,uVar17);
  if (DAT_101daf90 != 0) goto LAB_100ba53f;
  uVar4 = GetAsyncKeyState(0x11);
  uVar16 = CONCAT44(extraout_EDX_01,uVar17);
  if ((uVar4 & 0x8000) != 0) goto LAB_100ba53f;
  uVar16 = FUN_10090cb5(param_1);
  uVar12 = (undefined4)((ulonglong)uVar16 >> 0x20);
  if ((int)uVar16 == 0) {
LAB_100ba3af:
    uVar16 = CONCAT44(uVar12,uVar17);
    if ((DAT_101d3acc == 0) || (uVar16 = CONCAT44(uVar12,uVar17), *(int *)(in_ECX + 0xd68) != 0))
    goto LAB_100ba53f;
    local_30 = (CObject *)0x0;
    iVar8 = CMap<int,int,int,int>::Lookup
                      ((CMap<int,int,int,int> *)(in_ECX + 0xdb4),(int)param_1,(int *)&local_30);
    uVar16 = CONCAT44(extraout_EDX_12,uVar17);
    if (iVar8 == 0) goto LAB_100ba53f;
    p_Var13 = (__POSITION *)0x0;
    pCVar9 = local_30;
  }
  else {
    param_1 = (CObject *)FUN_10090f00(param_1);
    local_30 = param_1;
    iVar5 = CMap<HMENU__*,HMENU__*&,void*,void*&>::Lookup
                      ((CMap<HMENU__*,HMENU__*&,void*,void*&> *)(in_ECX + 0xd20),
                       (HMENU__ **)&local_30,&local_2c);
    p_Var13 = local_2c;
    uVar12 = extraout_EDX_02;
    if (iVar5 == 0) goto LAB_100ba3af;
    local_30 = *(CObject **)(in_ECX + 0xc40);
    iVar5 = 0;
    while (local_34 = iVar8, local_30 != (CObject *)0x0) {
      piVar6 = (int *)FUN_1002466e(&local_30);
      if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10012a3f();
      }
      local_34 = iVar5;
      if ((CObject *)*piVar6 == (CObject *)p_Var13) break;
      iVar5 = iVar5 + 1;
    }
    local_30 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_101d39fc,
                                  (CObject *)p_Var13);
    uVar16 = CONCAT44(extraout_EDX_03,uVar17);
    if (local_30 == (CObject *)0x0) {
LAB_100ba473:
      uVar17 = (undefined4)uVar16;
      if (p_Var13 != p_Var11) {
        if ((bVar2) && (*(int *)(in_ECX + 0xd88) == 0)) {
          pcVar1 = *(code **)(*(int *)in_ECX + 0x25c);
          guard_check_icall(local_34);
          (*pcVar1)();
        }
        if (DAT_101daf90 != 0) {
          *(int *)(in_ECX + 0xbf4) = local_34;
        }
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        *(int *)(in_ECX + 0xbf0) = local_34;
        GetClientRect(*(HWND *)(in_ECX + 0x20),&local_18);
        local_28.left = *(LONG *)(local_2c + 0x54);
        local_28.top = *(LONG *)(local_2c + 0x58);
        local_28.right = *(LONG *)(local_2c + 0x5c);
        local_28.bottom = *(LONG *)(local_2c + 0x60);
        uVar12 = extraout_EDX_15;
        if ((local_18.top <= local_28.top) && (local_28.bottom <= local_18.bottom)) {
          if (p_Var11 != (__POSITION *)0x0) {
            InvalidateRect(*(HWND *)(in_ECX + 0x20),(RECT *)(p_Var11 + 0x54),1);
          }
          InvalidateRect(*(HWND *)(in_ECX + 0x20),&local_28,1);
          UpdateWindow(*(HWND *)(in_ECX + 0x20));
          uVar12 = extraout_EDX_16;
        }
        uVar16 = CONCAT44(uVar12,uVar17);
        if (*(int *)(local_2c + 0x20) != -1) {
          pcVar1 = *(code **)(*(int *)in_ECX + 0x418);
          guard_check_icall(*(int *)(local_2c + 0x20));
          (*pcVar1)();
          uVar16 = CONCAT44(extraout_EDX_17,uVar17);
        }
      }
      goto LAB_100ba53f;
    }
    pcVar1 = *(code **)(*(int *)local_30 + 0xcc);
    guard_check_icall(0);
    uVar15 = (*pcVar1)();
    uVar16 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),uVar17);
    if ((int)uVar15 != 0) {
      if (*(int *)(local_30 + 0x8c) != 0) {
        SendMessageW(*(HWND *)(*(int *)(local_30 + 0x8c) + 0x20),0x100,0x24,0);
        uVar16 = CONCAT44(extraout_EDX_04,uVar17);
      }
      goto LAB_100ba473;
    }
    if ((*(uint *)(p_Var13 + 0x24) & 0x40000) == 0) {
      pcVar1 = *(code **)(*(int *)in_ECX + 1000);
      guard_check_icall(local_30);
      uVar16 = (*pcVar1)();
      if ((int)uVar16 != 0) goto LAB_100ba53f;
      goto LAB_100ba473;
    }
    pCVar9 = (CObject *)0x0;
  }
  CMFCPopupMenuBar::InvokeMenuCommand(in_ECX,(uint)pCVar9,(CMFCToolBarButton *)p_Var13);
  uVar16 = CONCAT44(extraout_EDX_11,uVar17);
LAB_100ba53f:
  __security_check_cookie
            (local_8 ^ (uint)&stack0xfffffffc,(int)((ulonglong)uVar16 >> 0x20),p_Var11,(int)uVar16);
  return;
}

