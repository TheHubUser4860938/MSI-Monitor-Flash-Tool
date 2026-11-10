// rea decompile_all
// name: CMFCRibbonBar::FindNextFocusedElement
// address: 0x101265f3
// body: available
// range: 0x101265f3-0x10126a92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static class CMFCRibbonBaseElement * __stdcall
   CMFCRibbonBar::FindNextFocusedElement(int,class CArray<class CMFCRibbonBaseElement *,class
   CMFCRibbonBaseElement *> const &,class CRect,class CMFCRibbonBaseElement *,int,int,int &)
   
   Library: Visual Studio 2015 Release */

CMFCRibbonBaseElement *
CMFCRibbonBar::FindNextFocusedElement
          (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          CMFCRibbonBaseElement *param_7,int param_8,int param_9,undefined4 *param_10)

{
  code *pcVar1;
  ushort uVar2;
  int *piVar3;
  CMFCRibbonBaseElement *pCVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  BOOL BVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  *param_10 = 0;
  local_2c = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      piVar3 = (int *)FUN_1009f8c7(local_2c);
      if ((CMFCRibbonBaseElement *)*piVar3 == param_7) {
        if (local_2c < 0) break;
        iVar5 = FUN_100250d6(&PTR_s_CMFCRibbonTab_101c1c50);
        piVar3 = (int *)0x0;
        if (param_1 == 9) {
          local_34 = -1;
          uVar2 = GetAsyncKeyState(0x10);
          iVar12 = local_2c;
          if ((uVar2 & 0x8000) == 0) goto LAB_10126757;
          goto LAB_1012668b;
        }
        pcVar1 = *(code **)(*(int *)param_7 + 0x160);
        guard_check_icall();
        iVar5 = (*pcVar1)();
        if (iVar5 != 0) break;
        iVar5 = *(int *)(param_7 + 0x74);
        iVar12 = *(int *)(param_7 + 0x78);
        iVar6 = *(int *)(param_7 + 0x7c);
        iVar13 = *(int *)(param_7 + 0x80);
        if (param_1 == 0x25) {
LAB_1012693b:
          local_2c = iVar6 + 1;
          if (param_1 != 0x27) {
            local_2c = iVar5 + -6;
          }
          goto LAB_10126966;
        }
        if (param_1 != 0x26) {
          if (param_1 == 0x27) goto LAB_1012693b;
          if (param_1 != 0x28) break;
        }
        iVar5 = (iVar5 + iVar6) / 2;
        if (param_1 == 0x28) {
          iVar13 = iVar13 + 1;
        }
        else {
          iVar13 = iVar12 + -1;
        }
        iVar12 = iVar5;
        goto LAB_101268a2;
      }
      local_2c = local_2c + 1;
    } while (local_2c < *(int *)(param_2 + 8));
  }
  goto LAB_1012663c;
LAB_1012668b:
  do {
    iVar12 = iVar12 + -1;
    if (iVar12 < 0) {
      if (param_8 != 0) goto LAB_10126749;
      if (param_9 != 0) goto LAB_1012673b;
      iVar12 = *(int *)(param_2 + 8) + -1;
    }
    if (iVar12 == local_2c) goto LAB_1012663c;
    if (iVar5 == 0) {
LAB_101266c9:
      puVar7 = (undefined4 *)FUN_1009f8c7(iVar12);
      pcVar1 = *(code **)(*(int *)*puVar7 + 0x11c);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 != 0) {
        piVar3 = (int *)FUN_1009f8c7(iVar12);
        iVar6 = *piVar3;
        local_18.left = *(LONG *)(iVar6 + 0x74);
        local_18.top = *(LONG *)(iVar6 + 0x78);
        local_18.right = *(LONG *)(iVar6 + 0x7c);
        local_18.bottom = *(LONG *)(iVar6 + 0x80);
        BVar8 = IsRectEmpty(&local_18);
        if (BVar8 == 0) {
          local_34 = iVar12;
        }
      }
    }
    else {
      FUN_1009f8c7(iVar12);
      iVar6 = FUN_100250d6(&PTR_s_CMFCRibbonTab_101c1c50);
      if (iVar6 == 0) goto LAB_101266c9;
    }
  } while (local_34 < 0);
  goto LAB_1012672a;
LAB_10126757:
  do {
    iVar12 = iVar12 + 1;
    if (*(int *)(param_2 + 8) <= iVar12) {
      if (param_9 != 0) goto LAB_1012680c;
      if (param_8 != 0) goto LAB_101267fe;
      iVar12 = 0;
    }
    if (iVar12 == local_2c) goto LAB_1012663c;
    if (iVar5 == 0) {
LAB_10126798:
      puVar7 = (undefined4 *)FUN_1009f8c7(iVar12);
      pcVar1 = *(code **)(*(int *)*puVar7 + 0x11c);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 != 0) {
        piVar3 = (int *)FUN_1009f8c7(iVar12);
        iVar6 = *piVar3;
        local_18.left = *(LONG *)(iVar6 + 0x74);
        local_18.top = *(LONG *)(iVar6 + 0x78);
        local_18.right = *(LONG *)(iVar6 + 0x7c);
        local_18.bottom = *(LONG *)(iVar6 + 0x80);
        BVar8 = IsRectEmpty(&local_18);
        if (BVar8 == 0) {
          local_34 = iVar12;
        }
      }
    }
    else {
      FUN_1009f8c7(iVar12);
      iVar6 = FUN_100250d6(&PTR_s_CMFCRibbonTab_101c1c50);
      if (iVar6 == 0) goto LAB_10126798;
    }
  } while (local_34 < 0);
LAB_1012672a:
  FUN_1009f8c7(local_34);
  goto LAB_1012663c;
LAB_10126966:
  do {
    if (param_1 == 0x27) {
      if (param_5 < local_2c) {
        if (param_9 != 0) goto LAB_1012680c;
        local_2c = param_3;
        if (param_8 != 0) goto LAB_101267fe;
      }
    }
    else if (local_2c < param_3) {
      if (param_8 != 0) goto LAB_10126749;
      local_2c = param_5;
      if (param_9 != 0) goto LAB_1012673b;
    }
    if ((iVar5 <= local_2c) && (local_2c <= iVar6)) break;
    local_28.right = local_2c + 5;
    local_28.left = local_2c;
    local_28.top = iVar12;
    local_28.bottom = iVar13;
    iVar10 = CMFCRibbonBaseElement::IsLargeMode(param_7);
    iVar9 = iVar13;
    if (iVar10 == 0) {
      pcVar1 = *(code **)(*(int *)param_7 + 0x144);
      guard_check_icall();
      iVar10 = (*pcVar1)();
      iVar9 = local_28.bottom;
      if (iVar10 != 0) goto LAB_101269fb;
    }
    else {
LAB_101269fb:
      InflateRect(&local_28,0,(iVar9 - local_28.top) / -3);
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_30 = 0;
    piVar11 = piVar3;
    if (0 < *(int *)(param_2 + 8)) {
      do {
        piVar11 = (int *)FUN_1009f8c7(local_30);
        piVar11 = (int *)*piVar11;
        pcVar1 = *(code **)(*piVar11 + 0x11c);
        guard_check_icall();
        iVar9 = (*pcVar1)();
        if ((iVar9 != 0) &&
           (BVar8 = IntersectRect(&local_18,(RECT *)(piVar11 + 0x1d),&local_28), BVar8 != 0)) break;
        local_30 = local_30 + 1;
        piVar11 = piVar3;
      } while (local_30 < *(int *)(param_2 + 8));
    }
    local_2c = local_2c + (((param_1 != 0x27) - 1 & 10) - 5);
    piVar3 = piVar11;
  } while (piVar11 == (int *)0x0);
  goto LAB_1012663c;
LAB_10126749:
  *param_10 = 0xffffffff;
  goto LAB_1012663c;
LAB_1012673b:
  *param_10 = 2;
  goto LAB_1012663c;
LAB_1012680c:
  *param_10 = 1;
  goto LAB_1012663c;
LAB_101267fe:
  *param_10 = 0xfffffffe;
  goto LAB_1012663c;
LAB_101268a2:
  do {
    iVar6 = iVar13;
    if ((iVar5 < param_3) && (param_5 < iVar12)) break;
joined_r0x101268b7:
    do {
      if (piVar3 != (int *)0x0) break;
      pCVar4 = FindNearest(iVar5,iVar6,param_2);
      if (pCVar4 == (CMFCRibbonBaseElement *)0x0) {
        pCVar4 = FindNearest(iVar12,iVar6,param_2);
        piVar3 = (int *)0x0;
        if (pCVar4 != (CMFCRibbonBaseElement *)0x0) goto LAB_101268dc;
      }
      else {
LAB_101268dc:
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x11c);
        guard_check_icall();
        iVar9 = (*pcVar1)();
        piVar3 = (int *)((uint)pCVar4 & -(uint)(iVar9 != 0));
      }
      iVar6 = iVar6 + (((param_1 != 0x28) - 1 & 10) - 5);
      if (param_1 == 0x28) {
        if (param_6 < iVar6) break;
        goto joined_r0x101268b7;
      }
    } while (param_4 <= iVar6);
    iVar5 = iVar5 + -5;
    iVar12 = iVar12 + 5;
  } while (piVar3 == (int *)0x0);
LAB_1012663c:
  pCVar4 = (CMFCRibbonBaseElement *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar4;
}

