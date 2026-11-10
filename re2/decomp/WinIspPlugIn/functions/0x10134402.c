// rea decompile_all
// name: FUN_10134402
// address: 0x10134402
// body: available
// range: 0x10134402-0x10134633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10134402(void)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  CObject *pCVar6;
  CMFCToolBar *in_ECX;
  int iVar7;
  undefined1 local_50 [4];
  int local_4c;
  undefined1 local_48 [4];
  CMFCToolBarButton *local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  pAVar1 = GetGlobalData();
  local_40 = 1.0;
  if (*(int *)(pAVar1 + 0x1e8) != 0) {
    local_40 = *(double *)(pAVar1 + 0x1e0);
  }
  CMFCToolBar::GetImageSize(in_ECX);
  if ((local_24 == 0) && (local_20 == 0)) {
    local_24 = 0x10;
    local_20 = 0x10;
  }
  iVar2 = local_24 + 10;
  iVar3 = local_20 + 0xe;
  local_38 = (double)CONCAT44(iVar3,(undefined4)local_38);
  local_30 = iVar2;
  local_2c = iVar3;
  local_1c = iVar2;
  if (local_40 != 1.0) {
    local_38 = (double)iVar2;
    iVar2 = FUN_101804f0();
    local_38 = (double)local_2c;
    local_1c = iVar2;
    iVar3 = FUN_101804f0();
    local_38 = (double)CONCAT44(iVar3,(undefined4)local_38);
  }
  local_28 = 0;
  local_20 = 0;
  iVar7 = 0;
  if ((*(int *)(in_ECX + 0xd14) != 0) &&
     (local_28 = iVar3, local_20 = iVar2, piVar4 = (int *)FUN_100b0af4(local_50), iVar7 = iVar2,
     iVar2 <= *piVar4 + 10)) {
    piVar4 = (int *)FUN_100b0af4(local_48);
    iVar7 = *piVar4 + 10;
    local_20 = iVar7;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(in_ECX + 0x20),&local_18);
  if ((iVar7 == 0) && (local_28 == 0)) {
    iVar2 = *(int *)(in_ECX + 0xc48);
  }
  else {
    iVar2 = *(int *)(in_ECX + 0xc48) + -1;
  }
  local_4c = (local_18.right - iVar7) + 2;
  local_40 = (double)CONCAT44(*(int *)(in_ECX + 0xc44),(undefined4)local_40);
  iVar2 = iVar2 - (((local_18.right - local_18.left) - iVar7) + 2) / (local_1c + -2);
  iVar3 = *(int *)(in_ECX + 0xc44);
  while (local_2c = iVar2, iVar3 != 0) {
    puVar5 = (undefined4 *)FUN_10065af5((int)&local_40 + 4);
    local_44 = (CMFCToolBarButton *)*puVar5;
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_1023daac,
                                (CObject *)local_44);
    if ((iVar2 < 1) || (pCVar6 != (CObject *)0x0)) {
      iVar2 = local_38._4_4_;
      iVar3 = local_1c;
      if (local_44 == *(CMFCToolBarButton **)(in_ECX + 0xd14)) {
        iVar2 = local_28;
        iVar3 = iVar7;
      }
      CMFCToolBarButton::SetRect(local_44,local_4c,0xffffffff,local_4c + iVar3,iVar2);
      local_4c = local_4c + (2 - local_1c);
    }
    else {
      if (*(int *)(in_ECX + 0xd14) != 0) {
        CObList::AddHead((CObList *)(*(int *)(in_ECX + 0xd14) + 0x110),(CObject *)local_44);
      }
      CMFCToolBarButton::SetRect(local_44,0,0,0,0);
      local_2c = local_2c + -1;
    }
    iVar2 = local_2c;
    iVar7 = local_20;
    iVar3 = local_40._4_4_;
  }
  CMFCToolBar::UpdateTooltips(in_ECX);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

