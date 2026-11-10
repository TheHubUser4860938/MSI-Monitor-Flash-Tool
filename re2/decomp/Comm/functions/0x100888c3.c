// rea decompile_all
// name: FUN_100888c3
// address: 0x100888c3
// body: available
// range: 0x100888c3-0x10088c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100888c3(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  int iVar4;
  CMFCToolBar *in_ECX;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  CObject *local_44;
  int local_40;
  CObject *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if ((((in_ECX != (CMFCToolBar *)0x0) && (*(int *)(in_ECX + 0x20) != 0)) &&
      (BVar2 = IsWindow(*(HWND *)(in_ECX + 0x20)), BVar2 != 0)) && (*(int *)(in_ECX + 0xbdc) == 0))
  {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(in_ECX + 0x20),&local_18);
    InflateRect(&local_18,-(*(int *)(in_ECX + 0xddc) + *(int *)(in_ECX + 0xdec)),
                -(*(int *)(in_ECX + 0xde0) + *(int *)(in_ECX + 0xde8)));
    local_38 = 0;
    if ((*(int *)(*(int *)(in_ECX + 0xe50) + -0xc) == 0) ||
       (local_34 = 0, *(int *)(in_ECX + 0xe48) != -1)) {
      local_34 = 1;
    }
    local_40 = *(int *)(in_ECX + 0xc40);
    local_2c = local_18.left;
    local_30 = local_18.top;
    iVar5 = local_18.left;
    iVar7 = local_18.top;
joined_r0x10088987:
    if (local_40 != 0) {
      local_28.left = 0;
      local_28.top = local_28.left;
      local_28.right = local_28.left;
      local_28.bottom = local_28.left;
      puVar3 = (undefined4 *)FUN_1002466e(&local_40);
      local_44 = (CObject *)*puVar3;
      if (((byte)local_44[0x24] & 1) == 0) goto LAB_10088a14;
      if (local_38 == 0) {
        local_54 = iVar5;
        if (local_18.left < iVar5) {
          iVar7 = iVar7 + *(int *)(in_ECX + 0xe3c) + *(int *)(in_ECX + 0xde8);
          local_54 = local_18.left;
          local_30 = iVar7;
        }
        local_4c = (local_18.right - local_18.left) + local_54;
        local_30 = local_30 + 4;
        local_48 = iVar7 + 2;
        local_2c = local_18.left;
        local_50 = iVar7;
        local_28.left = local_54;
        local_28.top = iVar7;
        local_28.right = local_4c;
        local_28.bottom = local_48;
      }
      else {
        SetRectEmpty(&local_28);
      }
      local_38 = 1;
      goto LAB_10088c0b;
    }
    CMFCToolBar::UpdateTooltips(in_ECX);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_10088a14:
  local_3c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarColorButton_101d37e0,local_44);
  if (local_3c == (CObject *)0x0) goto joined_r0x10088987;
  if ((*(int *)(local_3c + 0x84) != 0) && (*(int *)(in_ECX + 0xdfc) == 0)) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x170);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    iVar5 = local_2c;
    if (iVar4 == 0) {
      SetRectEmpty(&local_28);
      goto LAB_10088c0b;
    }
  }
  if (((*(int *)(local_3c + 0x78) == 0) && (*(int *)(local_3c + 0x7c) == 0)) &&
     (*(int *)(local_3c + 0x80) == 0)) {
    if (local_18.right < *(int *)(in_ECX + 0xe38) + iVar5) {
      iVar7 = iVar7 + *(int *)(in_ECX + 0xe3c);
      local_2c = local_18.left;
      iVar5 = local_18.left;
      local_30 = iVar7;
    }
    if ((*(int *)(local_3c + 0x88) == 0) || (local_34 != 0)) {
      local_5c = *(int *)(in_ECX + 0xe38) + iVar5;
      local_58 = *(int *)(in_ECX + 0xe3c) + iVar7;
      local_2c = local_2c + *(int *)(in_ECX + 0xe38);
      local_38 = 0;
      local_64 = iVar5;
      local_60 = iVar7;
      local_28.left = iVar5;
      local_28.top = iVar7;
      local_28.right = local_5c;
      local_28.bottom = local_58;
    }
    else {
      SetRectEmpty(&local_28);
    }
    if ((*(int *)(local_3c + 0x70) == *(int *)(in_ECX + 0xe48)) && (*(int *)(local_3c + 0x88) == 0))
    {
      local_34 = 0;
    }
  }
  else {
    if (local_18.left < iVar5) {
      iVar7 = iVar7 + *(int *)(in_ECX + 0xe3c) + *(int *)(in_ECX + 0xde8);
      local_2c = local_18.left;
      iVar5 = local_18.left;
      local_30 = iVar7;
    }
    if ((*(int *)(local_3c + 0x7c) == 0) || (local_34 == 0)) {
      local_84 = iVar5;
      iVar4 = *(int *)(in_ECX + 0xde4) - *(int *)(in_ECX + 0xde8) / 2;
      local_80 = iVar7;
      local_7c = (local_18.right - local_18.left) + iVar5;
      piVar6 = &local_84;
      local_78 = iVar4 + iVar7;
      local_2c = local_18.left;
    }
    else {
      local_70 = iVar7;
      local_74 = local_2c;
      local_2c = local_2c + ((local_18.right - *(int *)(in_ECX + 0xe38)) - local_18.left);
      piVar6 = &local_74;
      local_6c = local_2c;
      local_68 = (*(int *)(in_ECX + 0xde4) - *(int *)(in_ECX + 0xde8) / 2) + iVar7;
      iVar4 = ((local_68 - *(int *)(in_ECX + 0xe3c)) - local_30) / 2;
    }
    local_28.left = *piVar6;
    local_30 = local_30 + iVar4;
    local_28.top = piVar6[1];
    local_28.right = piVar6[2];
    local_28.bottom = piVar6[3];
    if (*(int *)(local_3c + 0x7c) != 0) {
      InflateRect(&local_28,-(*(int *)(in_ECX + 0xdec) / 2),-(*(int *)(in_ECX + 0xde8) / 2));
    }
    local_38 = 0;
  }
LAB_10088c0b:
  CMFCToolBarButton::SetRect
            ((CMFCToolBarButton *)local_44,local_28.left,local_28.top,local_28.right,local_28.bottom
            );
  iVar5 = local_2c;
  iVar7 = local_30;
  goto joined_r0x10088987;
}

