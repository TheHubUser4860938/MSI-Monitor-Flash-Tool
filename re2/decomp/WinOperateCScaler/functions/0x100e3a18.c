// rea decompile_all
// name: CMFCRibbonCategory::RecalcLayout
// address: 0x100e3a18
// body: available
// range: 0x100e3a18-0x100e3d8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonCategory::RecalcLayout(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonCategory::RecalcLayout(CMFCRibbonCategory *this,CDC *param_1)

{
  RECT *lprc;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  lprc = (RECT *)(this + 0x7c);
  BVar4 = IsRectEmpty(lprc);
  if (BVar4 != 0) goto LAB_100e3d7b;
  if (*(int *)(this + 0x540) != 0) {
    CleanUpSizes(this);
  }
  RecalcPanelWidths(this,param_1);
  if (*(int *)(this + 0x564) == 0) goto LAB_100e3d7b;
  bVar3 = false;
  uVar1 = *(uint *)(*(int *)(this + 0x53c) + 0x330);
  if (*(int *)(this + 0x544) < 0) {
    iVar5 = GetMinWidth(this,param_1);
    *(int *)(this + 0x544) = iVar5;
  }
  if (((uVar1 & 3) == 0) || (*(int *)(this + 0x540) != 0)) {
    if ((*(int *)(this + 0x70) != *(int *)(this + 0x84) - lprc->left) ||
       (*(int *)(this + 0x74) != *(int *)(this + 0x80))) {
      *(int *)(this + 0x70) = *(int *)(this + 0x84) - lprc->left;
      local_18.left = lprc->left;
      *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x80);
      local_18.top = *(LONG *)(this + 0x80);
      local_18.right = *(LONG *)(this + 0x84);
      local_18.bottom = *(LONG *)(this + 0x88);
      iVar5 = local_18.left + 4;
      iVar10 = local_18.right + -4;
      ResetPanelsLayout(this);
      iVar10 = iVar10 - iVar5;
      bVar3 = true;
      if (*(int *)(this + 0x544) < iVar10) {
        if (0 < *(int *)(this + 0x550)) {
          iVar5 = 0;
          if (*(int *)(this + 0x550) < 0) goto LAB_100e3cf8;
          while( true ) {
            iVar8 = SetPanelsLayout(this,iVar10);
            if (iVar8 != 0) goto LAB_100e3cf8;
            if (iVar5 == *(int *)(this + 0x550)) break;
            piVar7 = (int *)FUN_1009f8c7(iVar5);
            iVar8 = *piVar7;
            if ((iVar8 < 0) || (*(int *)(this + 0x564) <= iVar8)) break;
            piVar7 = (int *)FUN_1009f8c7(iVar8);
            iVar8 = *piVar7;
            if (iVar5 < *(int *)(this + 0x550) + -1) {
              piVar7 = (int *)FUN_1009f8c7(iVar5 + 1);
              if (*piVar7 != -1) goto LAB_100e3c4b;
              *(undefined4 *)(iVar8 + 100) = 1;
              iVar9 = *(int *)(iVar8 + 0x4d0) + -1;
              iVar5 = iVar5 + 1;
LAB_100e3c5f:
              *(int *)(iVar8 + 0xa4) = iVar9;
            }
            else {
LAB_100e3c4b:
              if (*(int *)(iVar8 + 0xa4) < *(int *)(iVar8 + 0x4d0) + -1) {
                iVar9 = *(int *)(iVar8 + 0xa4) + 1;
                goto LAB_100e3c5f;
              }
            }
            iVar5 = iVar5 + 1;
            if (*(int *)(this + 0x550) < iVar5) break;
          }
          ResetPanelsLayout(this);
        }
        iVar5 = SetPanelsLayout(this,iVar10);
        while (local_1c = 1, iVar5 == 0) {
          iVar5 = -1;
          iVar8 = 0;
          if (*(int *)(this + 0x564) < 1) break;
          do {
            piVar7 = (int *)FUN_1009f8c7(iVar8);
            iVar9 = (*(int *)(*piVar7 + 0x4d0) - *(int *)(*piVar7 + 0xa4)) + -1;
            if (local_1c <= iVar9) {
              iVar5 = iVar8;
              local_1c = iVar9;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(this + 0x564));
          if (iVar5 < 0) break;
          piVar7 = (int *)FUN_1009f8c7(iVar5);
          *(int *)(*piVar7 + 0xa4) = *(int *)(*piVar7 + 0xa4) + 1;
          iVar5 = SetPanelsLayout(this,iVar10);
        }
      }
      else {
        iVar5 = 0;
        if (0 < *(int *)(this + 0x564)) {
          do {
            piVar7 = (int *)FUN_1009f8c7(iVar5);
            iVar10 = *piVar7;
            *(undefined4 *)(iVar10 + 100) = 1;
            iVar5 = iVar5 + 1;
            *(int *)(iVar10 + 0xa4) = *(int *)(iVar10 + 0x4d0) + -1;
          } while (iVar5 < *(int *)(this + 0x564));
        }
      }
LAB_100e3cf8:
      pcVar2 = *(code **)(*(int *)this + 0xe4);
      guard_check_icall(param_1);
      (*pcVar2)();
    }
  }
  else {
    local_1c = 0;
    if (0 < *(int *)(this + 0x564)) {
      do {
        puVar6 = (undefined4 *)FUN_1009f8c7(local_1c);
        local_18.left = 0;
        piVar7 = (int *)*puVar6;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        pcVar2 = *(code **)(*piVar7 + 0xec);
        guard_check_icall(param_1,&local_18);
        (*pcVar2)();
        pcVar2 = *(code **)(*piVar7 + 0x104);
        guard_check_icall(0);
        (*pcVar2)();
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(this + 0x564));
    }
    *(undefined4 *)(this + 0x70) = 0xffffffff;
    *(undefined4 *)(this + 0x544) = 0xffffffff;
  }
  UpdateScrollButtons(this);
  if (((bVar3) && (*(int *)(this + 0x53c) != 0)) && (*(int *)(*(int *)(this + 0x53c) + 0x20) != 0))
  {
    local_18.left = *(LONG *)(this + 0x21c);
    local_18.top = *(LONG *)(this + 0x220);
    local_18.right = *(LONG *)(this + 0x224);
    local_18.bottom = *(LONG *)(this + 0x228);
    BVar4 = IsRectEmpty(&local_18);
    if (BVar4 != 0) {
      local_18.left = *(LONG *)(this + 0x3e4);
      local_18.top = *(LONG *)(this + 1000);
      local_18.right = *(LONG *)(this + 0x3ec);
      local_18.bottom = *(LONG *)(this + 0x3f0);
      BVar4 = IsRectEmpty(&local_18);
      if (BVar4 != 0) goto LAB_100e3d7b;
    }
    RedrawWindow(*(HWND *)(*(int *)(this + 0x53c) + 0x20),(RECT *)(this + 0x7c),(HRGN)0x0,0x105);
  }
LAB_100e3d7b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

