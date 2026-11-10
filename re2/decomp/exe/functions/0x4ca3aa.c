// rea decompile_all
// name: FUN_004ca3aa
// address: 0x4ca3aa
// body: available
// range: 0x4ca3aa-0x4ca721 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4ca3cf to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_004ca3aa(int param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  wchar_t *pwVar2;
  CMenu *pCVar3;
  int *piVar4;
  int iVar5;
  UINT UVar6;
  undefined4 uVar7;
  HMENU pHVar8;
  HMENU__ *pHVar9;
  uint uVar10;
  int iVar11;
  int in_ECX;
  HMENU hMenu;
  UINT flags;
  undefined1 local_188 [4];
  int local_184;
  CMFCToolBar *local_180;
  int local_17c;
  CMenu *local_178;
  uint local_174;
  wchar_t *local_170;
  CMFCToolBarMenuButton local_16c [4];
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  int local_138;
  int local_134;
  CMFCToolBarButton local_84 [4];
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_50;
  int local_4c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x178;
  local_8 = 0x4ca3b9;
  local_174 = param_3;
  if (param_3 != 0) {
    if ((*(HMENU__ **)(in_ECX + 0xf34) != (HMENU__ *)0x0) &&
       (local_184 = in_ECX, pCVar3 = CMenu::FromHandle(*(HMENU__ **)(in_ECX + 0xf34)),
       local_178 = pCVar3, pCVar3 != (CMenu *)0x0)) {
      local_180 = (CMFCToolBar *)FUN_00416408(0xd40);
      local_8 = 0;
      if (local_180 == (CMFCToolBar *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)CMFCToolBar::CMFCToolBar(local_180);
      }
      local_8 = 0xffffffff;
      flags = 0x50402808;
      pcVar1 = *(code **)(*piVar4 + 800);
      guard_check_icall(param_1,0x50402808,param_2);
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) {
        pcVar1 = *(code **)(*piVar4 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
      else {
        FUN_004349b3(local_174);
        local_17c = GetMenuItemCount(*(HMENU *)(pCVar3 + 4));
        hMenu = (HMENU)0x0;
        if (0 < local_17c) {
          do {
            UVar6 = GetMenuItemID(*(HMENU *)(local_178 + 4),(int)hMenu);
            uVar7 = FUN_004295fe();
            FUN_0040eb30(uVar7);
            local_8 = 1;
            FID_conflict_GetMenuStringA(hMenu,(UINT)&local_170,(LPSTR)0x400,param_1,flags);
            if (UVar6 == 0) {
              if (hMenu != (HMENU)(local_17c + -1)) {
                pcVar1 = *(code **)(*piVar4 + 0x348);
                guard_check_icall(0xffffffff);
                (*pcVar1)();
              }
            }
            else if (UVar6 == 0xffffffff) {
              local_174 = 0;
              if (DAT_0061775c != (CMenuTearOffManager *)0x0) {
                local_174 = CMenuTearOffManager::Parse
                                      (DAT_0061775c,
                                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                        *)&local_170);
              }
              iVar5 = FUN_004148c0(9,0);
              if (-1 < iVar5) {
                uVar7 = FUN_004147d0(&local_180,iVar5);
                local_8._0_1_ = 2;
                FUN_00415f50(uVar7);
                local_8 = CONCAT31(local_8._1_3_,1);
                FUN_0040efa0();
              }
              pwVar2 = local_170;
              pHVar8 = GetSubMenu(*(HMENU *)(local_178 + 4),(int)hMenu);
              pCVar3 = CMenu::FromHandle(pHVar8);
              pHVar9 = (HMENU__ *)0x0;
              if (pCVar3 != (CMenu *)0x0) {
                pHVar9 = *(HMENU__ **)(pCVar3 + 4);
              }
              CMFCToolBarMenuButton::CMFCToolBarMenuButton(local_16c,0xffffffff,pHVar9,-1,pwVar2,0);
              local_8 = CONCAT31(local_8._1_3_,3);
              iVar5 = local_134;
              if (local_168 == 0) {
                iVar5 = local_138;
              }
              if (iVar5 == -1) {
                local_160 = 0;
                local_164 = 1;
              }
              CMFCToolBarMenuButton::SetTearOff(local_16c,local_174);
              pcVar1 = *(code **)(*piVar4 + 0x344);
              guard_check_icall(local_16c,0xffffffff);
              (*pcVar1)();
              FUN_0048c45e();
            }
            else {
              iVar5 = IsStandardCommand(UVar6);
              if (iVar5 == 0) {
                CMFCToolBarButton(UVar6,0xffffffff,local_170,0,0);
                local_8 = CONCAT31(local_8._1_3_,4);
                iVar5 = local_4c;
                if (local_80 == 0) {
                  iVar5 = local_50;
                }
                if (iVar5 == -1) {
                  local_78 = 0;
                  local_7c = 1;
                }
                pcVar1 = *(code **)(*piVar4 + 0x344);
                guard_check_icall(local_84,0xffffffff);
                (*pcVar1)();
                CMFCToolBarButton::~CMFCToolBarButton(local_84);
              }
            }
            local_8 = 0xffffffff;
            FUN_0040efa0();
            hMenu = (HMENU)((int)&hMenu->unused + 1);
          } while ((int)hMenu < local_17c);
        }
        iVar5 = *piVar4;
        pcVar1 = *(code **)(iVar5 + 0x1c0);
        guard_check_icall();
        uVar10 = (*pcVar1)();
        pcVar1 = *(code **)(iVar5 + 0x1e4);
        guard_check_icall(uVar10 | 0x34);
        (*pcVar1)();
        pcVar1 = *(code **)(*piVar4 + 0x1ec);
        guard_check_icall(0xf000);
        (*pcVar1)();
        iVar5 = *(int *)(local_184 + 0x158);
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0xb0) != 0)) {
          iVar5 = *(int *)(iVar5 + 0xc0);
          pcVar1 = *(code **)(*piVar4 + 0x358);
          guard_check_icall();
          iVar11 = (*pcVar1)();
          pcVar1 = *(code **)(*piVar4 + 0x208);
          guard_check_icall(local_188,iVar11 * (local_17c / iVar5 + 1),0);
          (*pcVar1)();
        }
      }
    }
    FUN_0055bae6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

