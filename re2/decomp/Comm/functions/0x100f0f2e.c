// rea decompile_all
// name: FUN_100f0f2e
// address: 0x100f0f2e
// body: available
// range: 0x100f0f2e-0x100f12ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f12c6 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f0f2e(CDC *param_1,CRect *param_2,undefined4 param_3,int param_4,int param_5,int param_6
                 ,int param_7,int param_8)

{
  double dVar1;
  code *pcVar2;
  CDC *this;
  AFX_GLOBAL_DATA *pAVar3;
  CPen *pCVar4;
  int iVar5;
  CMFCVisualManager *pCVar6;
  CMFCToolBarButton *in_ECX;
  CMFCToolBarImages *pCVar7;
  CMFCToolBarImages *this_00;
  uint uVar8;
  undefined4 uVar9;
  undefined1 local_64 [12];
  int local_58;
  int local_54;
  CPen *local_50;
  undefined8 local_4c;
  CMFCToolBarButton *local_44;
  CPen *local_40;
  CPen *local_3c;
  CRect *local_38;
  CDC *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 uStack_24;
  POINT local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_34 = param_1;
  local_38 = param_2;
  local_44 = in_ECX;
  CMFCToolBarButton::FillInterior(in_ECX,param_1,param_2,param_6,0);
  pCVar4 = (CPen *)0x7;
  local_40 = (CPen *)0x7;
  pAVar3 = GetGlobalData();
  if (*(int *)(pAVar3 + 0x1e8) == 0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = *(double *)(pAVar3 + 0x1e0);
  }
  if (dVar1 != 1.0) {
    GetGlobalData();
    pCVar4 = (CPen *)FUN_10149490();
    local_40 = pCVar4;
  }
  if (DAT_101daf98 == 0) {
    local_40 = (CPen *)((int)pCVar4 / 2 + 1);
  }
  else {
    pCVar4 = (CPen *)((int)pCVar4 * 2);
  }
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)(param_2 + 0xc);
  local_28 = *(int *)(param_2 + 8) + (-1 - (int)pCVar4 / 2);
  local_3c = pCVar4;
  if (*(CMFCToolBar **)(in_ECX + 0x70) != (CMFCToolBar *)0x0) {
    local_50 = *(CPen **)(in_ECX + 0xc);
    *(undefined4 *)(in_ECX + 0x84) = 1;
    CMFCToolBar::GetImageSize(*(CMFCToolBar **)(in_ECX + 0x70));
    pAVar3 = GetGlobalData();
    if (*(int *)(pAVar3 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar3 + 0x1e0);
    }
    iVar5 = local_58;
    if (dVar1 != 1.0) {
      GetGlobalData();
      local_4c = (double)local_58;
      iVar5 = FUN_10149490();
      local_4c = (double)local_54;
      local_54 = FUN_10149490();
    }
    local_4c = (double)CONCAT44(local_54,(undefined4)local_4c);
    if ((DAT_101daf98 == 0) || (*(int *)(*(int *)(in_ECX + 0x70) + 0x604) < 1)) {
      this_00 = (CMFCToolBarImages *)(*(int *)(in_ECX + 0x70) + 0x2b8);
    }
    else {
      this_00 = (CMFCToolBarImages *)(*(int *)(in_ECX + 0x70) + 0x600);
    }
    if (*(int *)(in_ECX + 0x88) == 0) {
      pAVar3 = GetGlobalData();
      CMFCToolBarImages::SetTransparentColor(this_00,*(ulong *)(pAVar3 + 0x1c));
      pCVar7 = this_00;
    }
    else {
      pAVar3 = GetGlobalData();
      CMFCToolBarImages::SetTransparentColor(DAT_101daf80,*(ulong *)(pAVar3 + 0x1c));
      pCVar7 = DAT_101daf80;
    }
    CMFCToolBarImages::PrepareDrawImage(pCVar7,local_64,iVar5,local_4c._4_4_,0);
    uVar9 = *(undefined4 *)(in_ECX + 0x44);
    *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(in_ECX + 0x80);
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(in_ECX + 0x80);
    *(undefined4 *)(in_ECX + 0xc) = 1;
    *(undefined4 *)(in_ECX + 0x44) = 1;
    if (*(int *)(in_ECX + 0x88) == 0) {
      CMFCToolBarButton::OnDraw
                (in_ECX,local_34,(CRect *)&local_30,this_00,param_4,param_5,param_6,0,param_8);
    }
    else {
      *(int *)(in_ECX + 4) = *(int *)(in_ECX + 0x88);
      CMFCToolBarButton::OnDraw
                (in_ECX,local_34,local_38,DAT_101daf80,param_4,param_5,param_6,0,param_8);
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    *(undefined4 *)(in_ECX + 0x34) = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x38) = 0xffffffff;
    *(CPen **)(in_ECX + 0xc) = local_50;
    *(undefined4 *)(in_ECX + 0x44) = uVar9;
    FUN_10050819(local_64);
    *(undefined4 *)(in_ECX + 0x84) = 0;
  }
  this = local_34;
  uVar8 = *(uint *)(in_ECX + 0x24) >> 0x11 & 1;
  local_20.x = (*(int *)(local_38 + 8) - (int)local_3c) + -1 + uVar8;
  local_18 = (*(int *)(local_38 + 8) - (int)local_40) + 1 + uVar8;
  local_20.y = (*(int *)(local_38 + 0xc) - (int)local_40) + 1 + uVar8;
  local_c = (*(int *)(local_38 + 0xc) - (int)local_3c) + -1 + uVar8;
  pcVar2 = *(code **)(*(int *)local_34 + 0x24);
  local_14 = local_20.y;
  local_10 = local_18;
  guard_check_icall(8);
  local_50 = (CPen *)(*pcVar2)();
  if (local_50 == (CPen *)0x0) {
LAB_100f12c6:
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  pAVar3 = GetGlobalData();
  local_3c = CDC::SelectObject(this,(CPen *)(pAVar3 + 0xb0));
  if (local_3c == (CPen *)0x0) goto LAB_100f12c6;
  Polygon(*(HDC *)(this + 4),&local_20,3);
  if (param_5 != 0) goto LAB_100f129d;
  pcVar2 = *(code **)(*(int *)in_ECX + 0x54);
  guard_check_icall();
  iVar5 = (*pcVar2)();
  if ((iVar5 == 0) || (param_7 == 0)) goto LAB_100f129d;
  if ((*(int *)(in_ECX + 0x78) == 0) && (uVar8 = *(uint *)(in_ECX + 0x24), (uVar8 & 0x30000) == 0))
  {
    if ((param_6 == 0) || ((uVar8 & 0x150000) != 0)) goto LAB_100f129d;
    uVar8 = uVar8 & 0x20000;
LAB_100f1258:
    if (uVar8 == 0) goto LAB_100f126f;
    pCVar6 = CMFCVisualManager::GetInstance();
    uVar9 = 1;
  }
  else {
    if (*(int *)(in_ECX + 0x20) != 0) {
      uVar8 = *(int *)(in_ECX + 0x20) + 1;
      goto LAB_100f1258;
    }
LAB_100f126f:
    pCVar6 = CMFCVisualManager::GetInstance();
    uVar9 = 2;
  }
  pcVar2 = *(code **)(*(int *)pCVar6 + 0x88);
  guard_check_icall(local_34,local_44,*(undefined4 *)local_38,*(undefined4 *)(local_38 + 4),
                    *(undefined4 *)(local_38 + 8),*(undefined4 *)(local_38 + 0xc),uVar9);
  (*pcVar2)();
LAB_100f129d:
  CDC::SelectObject(local_34,local_50);
  CDC::SelectObject(local_34,local_3c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

