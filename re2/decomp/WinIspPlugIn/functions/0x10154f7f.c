// rea decompile_all
// name: FUN_10154f7f
// address: 0x10154f7f
// body: available
// range: 0x10154f7f-0x10155509 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10154f7f(undefined4 param_1,LONG *param_2)

{
  double dVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  BOOL BVar5;
  int iVar6;
  AFX_GLOBAL_DATA *pAVar7;
  CMFCRibbonMainPanel *in_ECX;
  int iVar8;
  int iVar9;
  undefined1 local_6c [8];
  int local_64;
  int local_60;
  CMFCRibbonMainPanel *local_5c;
  CObject *local_58;
  int local_54;
  int local_50;
  undefined8 local_4c;
  LONG *local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int *local_2c;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_38 = param_1;
  local_30 = *(int *)(in_ECX + 0x4f4);
  local_44 = param_2;
  local_5c = in_ECX;
  local_34 = CMFCRibbonMainPanel::GetMenuElements(in_ECX);
  iVar9 = *(int *)(in_ECX + 0xb4);
  iVar8 = *(int *)(in_ECX + 0xb0);
  ((LPRECT)(in_ECX + 0x4fc))->left = *param_2;
  *(LONG *)(in_ECX + 0x500) = param_2[1];
  *(LONG *)(in_ECX + 0x504) = param_2[2];
  *(LONG *)(in_ECX + 0x508) = param_2[3];
  InflateRect((LPRECT)(in_ECX + 0x4fc),-iVar8,-iVar9);
  *(int *)(in_ECX + 0x500) = *(int *)(in_ECX + 0x500) + *(int *)(in_ECX + 0x4f4);
  local_50 = 0;
  if (*(CMFCRibbonCategory **)(in_ECX + 0x108) != (CMFCRibbonCategory *)0x0) {
    piVar3 = (int *)CMFCRibbonCategory::GetImageSize
                              (*(CMFCRibbonCategory **)(in_ECX + 0x108),(int)local_6c);
    local_50 = *piVar3;
  }
  local_3c = 0;
  local_4c = (double)(ulonglong)(uint)local_4c;
  iVar9 = 0;
  if (0 < local_34) {
    do {
      iVar9 = 0;
      puVar4 = (undefined4 *)FUN_100efaed(local_3c);
      local_2c = (int *)*puVar4;
      pcVar2 = *(code **)(*local_2c + 0x180);
      guard_check_icall(local_38);
      (*pcVar2)();
      pcVar2 = *(code **)(*local_2c + 0xbc);
      guard_check_icall(1);
      (*pcVar2)();
      pcVar2 = *(code **)(*local_2c + 0xf4);
      guard_check_icall(&local_64,local_38);
      (*pcVar2)();
      if ((local_64 == 0) && (local_60 == 0)) {
        local_2c[0x1d] = 0;
        local_2c[0x1e] = 0;
        local_2c[0x1f] = 0;
        local_2c[0x20] = 0;
        local_28.left = iVar9;
        local_28.top = iVar9;
        local_28.right = iVar9;
        local_28.bottom = iVar9;
      }
      else {
        local_18.left = *(int *)(in_ECX + 0xb0) + *local_44;
        local_18.top = local_44[1] + *(int *)(in_ECX + 0xb4) + local_30;
        local_18.right = local_18.left + local_64;
        local_18.bottom = local_18.top + local_60;
        local_2c[0x1d] = local_18.left;
        local_2c[0x1e] = local_18.top;
        local_2c[0x1f] = local_18.right;
        local_2c[0x20] = local_18.bottom;
        if (local_4c._4_4_ <= local_64) {
          local_4c = (double)CONCAT44(local_64,(uint)local_4c);
        }
        local_30 = local_30 + local_60;
      }
      local_3c = local_3c + 1;
    } while (local_3c < local_34);
    iVar9 = local_4c._4_4_;
  }
  iVar8 = 0;
  iVar9 = iVar9 + *(int *)(in_ECX + 0xb0) * 2;
  local_4c = (double)CONCAT44(iVar9,(uint)local_4c);
  *(LONG *)(in_ECX + 0x504) = ((LPRECT)(in_ECX + 0x4fc))->left + iVar9;
  *(int *)(in_ECX + 0x508) = *(int *)(in_ECX + 0xb4) + local_30;
  InflateRect((LPRECT)(in_ECX + 0x4fc),1,1);
  local_3c = 0;
  *(int *)(in_ECX + 0xa8) = iVar9 + *(int *)(in_ECX + 0xb0) * 2;
  if (0 < local_34) {
    local_58 = (CObject *)(in_ECX + 0x4dc);
    do {
      piVar3 = (int *)FUN_100efaed(iVar8);
      local_3c = *piVar3;
      local_2c = (int *)(local_3c + 0x74);
      local_18.left = *local_2c;
      local_18.top = *(int *)(local_3c + 0x78);
      local_18.right = *(int *)(local_3c + 0x7c);
      local_18.bottom = *(int *)(local_3c + 0x80);
      BVar5 = IsRectEmpty(&local_18);
      iVar9 = local_50;
      if (BVar5 == 0) {
        local_18.right = local_18.left + local_4c._4_4_;
        if ((0 < local_50) &&
           (iVar6 = FUN_10051e53(&PTR_s_CMFCRibbonSeparator_101ed1d0), iVar6 != 0)) {
          local_18.left = local_18.left + 4 + iVar9;
        }
        *local_2c = local_18.left;
        local_2c[1] = local_18.top;
        local_2c[2] = local_18.right;
        local_2c[3] = local_18.bottom;
      }
      iVar8 = iVar8 + 1;
      in_ECX = local_5c;
    } while (iVar8 < local_34);
  }
  if (*(CObject **)(in_ECX + 0x510) != (CObject *)0x0) {
    local_58 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonRecentFilesList_101f733c,
                                  *(CObject **)(in_ECX + 0x510));
    if ((local_58 != (CObject *)0x0) && (*(int *)(local_58 + 0x114) == 0)) {
      FUN_1015477b();
    }
    pcVar2 = *(code **)(**(int **)(in_ECX + 0x510) + 0x110);
    guard_check_icall(0);
    (*pcVar2)();
    pcVar2 = *(code **)(**(int **)(in_ECX + 0x510) + 0x180);
    guard_check_icall(local_38);
    (*pcVar2)();
    pcVar2 = *(code **)(**(int **)(in_ECX + 0x510) + 0xf4);
    guard_check_icall(&local_54,local_38);
    (*pcVar2)();
    pAVar7 = GetGlobalData();
    if (*(int *)(pAVar7 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar7 + 0x1e0);
    }
    if (dVar1 == 1.0) {
      iVar9 = *(int *)(in_ECX + 0x4f8);
    }
    else {
      GetGlobalData();
      local_4c = (double)*(int *)(in_ECX + 0x4f8);
      iVar9 = FUN_101804f0();
    }
    if (local_54 <= iVar9) {
      local_54 = iVar9;
    }
    if (*(int *)(in_ECX + 0x508) - *(int *)(in_ECX + 0x500) < local_50) {
      *(int *)(in_ECX + 0x508) = *(int *)(in_ECX + 0x500) + local_50;
    }
    local_28.left = *(LONG *)(in_ECX + 0x504);
    local_28.top = *(LONG *)(in_ECX + 0x500);
    local_28.right = local_28.left + local_54;
    local_28.bottom = *(LONG *)(in_ECX + 0x508);
    if (local_58 == (CObject *)0x0) {
      InflateRect(&local_28,0,-1);
    }
    local_18.left = local_28.left;
    local_18.top = local_28.top;
    local_18.right = local_28.right;
    local_18.bottom = local_28.bottom;
    iVar9 = *(int *)(in_ECX + 0x510);
    *(LONG *)(iVar9 + 0x74) = local_28.left;
    *(LONG *)(iVar9 + 0x78) = local_28.top;
    *(LONG *)(iVar9 + 0x7c) = local_28.right;
    *(LONG *)(iVar9 + 0x80) = local_28.bottom;
    *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) + local_54;
  }
  if (0 < *(int *)(in_ECX + 0x4f0)) {
    local_30 = *(int *)(in_ECX + 0xb4) + *(int *)(in_ECX + 0x508);
    local_4c = (double)CONCAT44((*local_44 - *(int *)(in_ECX + 0xb0)) + *(int *)(in_ECX + 0xa8),
                                (uint)local_4c);
    local_34 = 0;
    local_50 = 0;
    if (0 < *(int *)(in_ECX + 0x4f0)) {
      do {
        iVar9 = 0;
        puVar4 = (undefined4 *)FUN_100efaed((*(int *)(in_ECX + 0x4e4) - local_50) + -1);
        local_2c = (int *)*puVar4;
        pcVar2 = *(code **)(*local_2c + 0x180);
        guard_check_icall(local_38);
        (*pcVar2)();
        pcVar2 = *(code **)(*local_2c + 0xf4);
        guard_check_icall(&local_40,local_38);
        (*pcVar2)();
        if ((local_40 == 0) && (local_3c == 0)) {
          local_2c[0x1d] = 0;
          local_2c[0x1e] = 0;
          local_2c[0x1f] = 0;
          local_2c[0x20] = 0;
          local_28.left = iVar9;
          local_28.top = iVar9;
          local_28.right = iVar9;
          local_28.bottom = iVar9;
        }
        else {
          local_40 = local_40 + 3;
          local_18.left = local_4c._4_4_;
          if (local_4c._4_4_ - local_40 < *local_44 + *(int *)(in_ECX + 0xb0)) {
            local_30 = local_30 + local_34;
            local_18.left = (*local_44 - *(int *)(in_ECX + 0xb0)) + *(int *)(in_ECX + 0xa8);
            local_34 = iVar9;
          }
          local_18.left = local_18.left - local_40;
          local_18.right = local_18.left + local_40;
          local_18.bottom = local_3c + local_30;
          local_2c[0x1d] = local_18.left;
          local_2c[0x1e] = local_30;
          local_2c[0x1f] = local_18.right;
          local_2c[0x20] = local_18.bottom;
          if (local_34 <= local_3c) {
            local_34 = local_3c;
          }
          local_4c = (double)CONCAT44(local_18.left + -4,(uint)local_4c);
          local_18.top = local_30;
        }
        local_50 = local_50 + 1;
      } while (local_50 < *(int *)(in_ECX + 0x4f0));
    }
    local_30 = local_30 + local_34;
  }
  iVar9 = 0;
  if (0 < *(int *)(in_ECX + 0x4e4)) {
    do {
      puVar4 = (undefined4 *)FUN_100efaed(iVar9);
      pcVar2 = *(code **)(*(int *)*puVar4 + 0x124);
      guard_check_icall(local_38);
      (*pcVar2)();
      iVar9 = iVar9 + 1;
      in_ECX = local_5c;
    } while (iVar9 < *(int *)(local_5c + 0x4e4));
  }
  *(LONG *)(in_ECX + 0xcc) = *local_44;
  *(LONG *)(in_ECX + 0xd0) = local_44[1];
  *(LONG *)(in_ECX + 0xd4) = local_44[2];
  *(LONG *)(in_ECX + 0xd8) = local_44[3];
  *(int *)(in_ECX + 0xd8) = *(int *)(in_ECX + 0xd0) + *(int *)(in_ECX + 0xb4) + local_30;
  *(int *)(in_ECX + 0xd4) =
       *(int *)(in_ECX + 0xb0) + *(int *)(in_ECX + 0xcc) + *(int *)(in_ECX + 0xa8);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

