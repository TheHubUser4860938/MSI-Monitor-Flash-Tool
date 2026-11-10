// rea decompile_all
// name: FUN_004701c0
// address: 0x4701c0
// body: available
// range: 0x4701c0-0x47073b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_004701c0(uint *param_1,CDC *param_2,int param_3)

{
  double dVar1;
  code *pcVar2;
  int iVar3;
  CDC *pCVar4;
  int iVar5;
  int *piVar6;
  BOOL BVar7;
  AFX_GLOBAL_DATA *pAVar8;
  int *in_ECX;
  undefined4 uVar9;
  IMAGES_IDS IVar10;
  undefined1 local_bc [8];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_b4 [8];
  undefined1 local_ac [8];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_a4 [8];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_9c [8];
  undefined1 local_94 [8];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  uint local_74;
  int local_70;
  uint *local_6c;
  int local_68;
  undefined8 local_64;
  int *local_5c;
  int local_58;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_54 [4];
  int local_50;
  CDC *local_4c;
  int local_48;
  tagRECT local_44;
  int local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xac;
  local_8 = 0x4701cf;
  local_6c = param_1;
  local_4c = param_2;
  local_5c = in_ECX;
  if ((((CMFCRibbonCategory *)in_ECX[0x22] == (CMFCRibbonCategory *)0x0) ||
      (*(int *)(in_ECX[0x18] + -0xc) == 0)) ||
     ((CMFCRibbonCategory::GetImageSize((CMFCRibbonCategory *)in_ECX[0x22],(int)&local_7c),
      local_7c == 0 && (local_78 == 0)))) {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_00470734;
  }
  CDC::GetTextExtent(param_2,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_74);
  pcVar2 = *(code **)(*in_ECX + 0x138);
  guard_check_icall();
  iVar5 = (*pcVar2)();
  if (iVar5 == 0) {
    pcVar2 = *(code **)(*in_ECX + 0x24c);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    if (iVar5 != 0) goto LAB_0047025c;
    local_58 = 0;
  }
  else {
LAB_0047025c:
    piVar6 = (int *)FUN_0045bc7e(local_94);
    local_58 = *piVar6;
    local_50 = local_58;
    if (local_58 != 0) {
      pAVar8 = GetGlobalData();
      if (*(int *)(pAVar8 + 0x1e8) == 0) {
        dVar1 = 1.0;
      }
      else {
        dVar1 = *(double *)(pAVar8 + 0x1e0);
      }
      if (1.0 < dVar1) {
        GetGlobalData();
        local_64 = (double)local_50;
        local_58 = FUN_0055bce0();
      }
    }
  }
  if (param_3 != 0) {
    in_ECX[0x55] = -1;
    if (in_ECX[0x69] != 0) {
      local_64 = (double)CONCAT44(0x7fff,(undefined4)local_64);
      local_5c = (int *)0x0;
      local_74 = 0x7fff;
      if (0 < in_ECX[0x69]) {
        do {
          piVar6 = (int *)FUN_004ab4cd(local_5c);
          local_50 = *piVar6;
          FUN_004147d0(&local_48,local_50);
          local_8 = 0;
          pcVar2 = *(code **)(*in_ECX + 0x24c);
          guard_check_icall();
          iVar5 = (*pcVar2)();
          if (iVar5 == 0) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_48,L"&&",L"\x01\x01");
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_48,L'&');
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_48,L"\x01\x01",L"&");
          }
          piVar6 = (int *)CDC::GetTextExtent(local_4c,local_9c);
          local_68 = *piVar6;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (in_ECX + 0x18),(int)local_54);
          local_8 = CONCAT31(local_8._1_3_,1);
          pcVar2 = *(code **)(*in_ECX + 0x24c);
          guard_check_icall();
          iVar5 = (*pcVar2)();
          if (iVar5 == 0) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                      (local_54,L"&&",L"\x01\x01");
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                      (local_54,L'&');
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                      (local_54,L"\x01\x01",L"&");
          }
          piVar6 = (int *)CDC::GetTextExtent(local_4c,local_a4);
          iVar5 = local_68;
          if (local_68 <= *piVar6 + local_58) {
            iVar5 = *piVar6 + local_58;
          }
          if (iVar5 < (int)local_64._4_4_) {
            local_64 = (double)CONCAT44(iVar5,(undefined4)local_64);
            in_ECX[0x55] = local_50;
          }
          FUN_0040efa0();
          local_8 = 0xffffffff;
          FUN_0040efa0();
          local_5c = (int *)((int)local_5c + 1);
        } while ((int)local_5c < in_ECX[0x69]);
        local_74 = local_64._4_4_;
      }
    }
    if ((local_74 & 1) != 0) {
      local_74 = local_74 - 1;
    }
    *local_6c = local_74;
    local_6c[1] = local_70 * 2;
    goto LAB_00470734;
  }
  local_48 = in_ECX[0x1e] + local_78 + 6;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  pcVar2 = *(code **)(*in_ECX + 0x24c);
  local_24.bottom = 0;
  guard_check_icall();
  iVar5 = (*pcVar2)();
  piVar6 = local_5c;
  if (iVar5 != 0) {
    local_48 = local_48 + 2;
  }
  local_64 = (double)CONCAT44(0x21,(undefined4)local_64);
  local_34 = in_ECX[0x1d];
  local_2c = in_ECX[0x1f];
  iStack_28 = in_ECX[0x20];
  pcVar2 = *(code **)(*local_5c + 0x24c);
  local_30 = local_48;
  guard_check_icall();
  iVar5 = (*pcVar2)();
  if (iVar5 == 0) {
    uVar9 = 0x21;
  }
  else {
    uVar9 = 0x821;
    local_64 = (double)CONCAT44(0x821,(undefined4)local_64);
  }
  if (piVar6[0x55] == -1) {
    iVar5 = *(int *)local_4c;
    guard_check_icall(piVar6[0x18],*(undefined4 *)(piVar6[0x18] + -0xc),&local_34,uVar9);
    (**(code **)(iVar5 + 0x68))();
    pcVar2 = *(code **)(*piVar6 + 0x138);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    if (iVar5 == 0) {
      pcVar2 = *(code **)(*piVar6 + 0x24c);
      guard_check_icall();
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) goto LAB_0047066d;
    }
    local_24.top = local_70 + local_48 + 2;
    local_24.left = piVar6[0x1d];
    local_24.right = piVar6[0x1f];
    local_24.bottom = piVar6[0x20];
    iVar5 = piVar6[0x1f];
    iVar3 = piVar6[0x1d];
    piVar6 = (int *)FUN_0045bc7e(local_ac);
    local_24.left = ((iVar5 + iVar3) / 2 - *piVar6 / 2) + -1;
  }
  else {
    FUN_004147d0(&local_68,piVar6[0x55]);
    local_8 = 2;
    iVar5 = *(int *)local_4c;
    guard_check_icall(local_68,*(undefined4 *)(local_68 + -0xc),&local_34,local_64._4_4_);
    (**(code **)(iVar5 + 0x68))();
    local_30 = local_70 + local_48;
    local_2c = local_2c - local_58;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(piVar6 + 0x18)
               ,(int)&local_50);
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar5 = *(int *)local_4c;
    guard_check_icall(local_50,*(undefined4 *)(local_50 + -0xc),&local_34,local_64._4_4_);
    (**(code **)(iVar5 + 0x68))();
    pcVar2 = *(code **)(*piVar6 + 0x138);
    guard_check_icall();
    iVar5 = (*pcVar2)();
    if (iVar5 == 0) {
      pcVar2 = *(code **)(*piVar6 + 0x24c);
      guard_check_icall();
      iVar5 = (*pcVar2)();
      if (iVar5 != 0) goto LAB_00470617;
    }
    else {
LAB_00470617:
      local_24.left = local_34;
      local_24.top = local_30 + 2;
      local_24.right = local_2c;
      local_24.bottom = iStack_28;
      iVar5 = local_2c - local_34;
      piVar6 = (int *)CDC::GetTextExtent(local_4c,local_b4);
      local_24.left = local_2c - (iVar5 - *piVar6) / 2;
    }
    FUN_0040efa0();
    local_8 = 0xffffffff;
    FUN_0040efa0();
  }
LAB_0047066d:
  BVar7 = IsRectEmpty(&local_24);
  if (BVar7 == 0) {
    iVar5 = FUN_0045bc7e(local_bc);
    local_44.bottom = local_24.top + *(int *)(iVar5 + 4);
    local_44.right = local_24.left + local_58;
    local_44.left = local_24.left;
    local_44.top = local_24.top;
    local_24.right = local_44.right;
    local_24.bottom = local_44.bottom;
    OffsetRect(&local_44,0,1);
    pAVar8 = GetGlobalData();
    pCVar4 = local_4c;
    if (*(int *)(pAVar8 + 0x1e8) == 0) {
      dVar1 = 1.0;
    }
    else {
      dVar1 = *(double *)(pAVar8 + 0x1e0);
    }
    if (dVar1 <= 1.0) {
      IVar10 = 0;
    }
    else {
      IVar10 = 0xd;
    }
    local_84 = 0;
    local_80 = 0;
    CMenuImages::Draw(local_4c,IVar10,(CRect *)&local_44,3,(CSize *)&local_84);
    local_8c = 0;
    local_88 = 0;
    CMenuImages::Draw(pCVar4,IVar10,(CRect *)&local_24,(uint)(local_5c[0x35] != 0),
                      (CSize *)&local_8c);
  }
  *local_6c = 0;
  local_6c[1] = 0;
LAB_00470734:
  FUN_0055bae6();
  return;
}

