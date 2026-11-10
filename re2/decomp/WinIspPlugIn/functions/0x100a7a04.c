// rea decompile_all
// name: CMFCTabCtrl::OnCommand
// address: 0x100a7a04
// body: available
// range: 0x100a7a04-0x100a7d08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCTabCtrl::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCTabCtrl::OnCommand(CMFCTabCtrl *this,uint param_1,long param_2)

{
  CMFCTabButton *this_00;
  HWND hWnd;
  code *pcVar1;
  LONG LVar2;
  LONG LVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    FUN_10055094(param_1,0);
    goto LAB_100a7b88;
  }
  iVar8 = *(int *)(this + 0x2a4);
  if (this == (CMFCTabCtrl *)0xfffffc50) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(this + 0x3d0);
  }
  if (param_2 == iVar9) {
    if (((*(int *)(this + 0x254) == 0) && (*(int *)(this + 600) == 0)) &&
       (*(int *)(this + 0x25c) == 0)) {
      iVar9 = iVar8 + -0x14;
LAB_100a7c3c:
      *(int *)(this + 0x2a4) = iVar9;
    }
    else if (0 < *(int *)(this + 0x2b0)) {
      piVar5 = (int *)FUN_100efaed(*(int *)(this + 0x2b0) + -1);
      *(int *)(this + 0x2a4) =
           *(int *)(this + 0x2a4) +
           *(int *)(*piVar5 + 0x10) + -2 +
           (((*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) - *(int *)(*piVar5 + 0x18)) -
           DAT_1023d660);
      *(int *)(this + 0x2b0) = *(int *)(this + 0x2b0) + -1;
    }
  }
  else {
    this_00 = (CMFCTabButton *)(this + 0xb58);
    iVar9 = 0;
    if (this_00 != (CMFCTabButton *)0x0) {
      iVar9 = *(int *)(this + 0xb78);
    }
    if (param_2 == iVar9) {
      if (*(int *)(this + 0x290) != 0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(this + 0xb78),&local_18);
        CMFCTabButton::SetPressed(this_00,1);
        LVar3 = local_18.bottom;
        LVar2 = local_18.left;
        local_1c = local_18.left;
        uVar6 = CWnd::GetExStyle((CWnd *)this);
        if ((uVar6 & 0x400000) != 0) {
          local_1c = LVar2 + (local_18.right - local_18.left);
        }
        SendMessageW(*(HWND *)(this + 0xb78),0x1f,0,0);
        hWnd = *(HWND *)(this + 0x20);
        CMFCTabButton::SetPressed(this_00,1);
        pcVar1 = *(code **)(*(int *)this + 0x2ec);
        guard_check_icall(local_1c,LVar3);
        (*pcVar1)();
        BVar7 = IsWindow(hWnd);
        if (BVar7 == 0) goto LAB_100a7b88;
        CMFCTabButton::SetPressed((CMFCTabButton *)(this + 0xb58),0);
LAB_100a7b7b:
        FUN_10055094(param_1,param_2);
        goto LAB_100a7b88;
      }
      if (((*(int *)(this + 0x254) == 0) && (*(int *)(this + 600) == 0)) &&
         (*(int *)(this + 0x25c) == 0)) {
        iVar9 = iVar8 + 0x14;
        goto LAB_100a7c3c;
      }
      if (*(int *)(this + 0x2b0) < *(int *)(this + 0xbc)) {
        piVar5 = (int *)FUN_100efaed(*(int *)(this + 0x2b0));
        *(int *)(this + 0x2a4) =
             *(int *)(this + 0x2a4) +
             DAT_1023d660 + 1 +
             (((*(int *)(*piVar5 + 0x18) - *(int *)(this + 0x2e8)) + *(int *)(this + 0x2e0)) -
             *(int *)(*piVar5 + 0x10));
        *(int *)(this + 0x2b0) = *(int *)(this + 0x2b0) + 1;
      }
    }
    else {
      if (this == (CMFCTabCtrl *)0xffffed00) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(this + 0x1320);
      }
      if (param_2 != iVar9) {
        if (this == (CMFCTabCtrl *)0xffffe558) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(this + 0x1ac8);
        }
        if (param_2 == iVar9) {
          iVar9 = *(int *)(this + 0x2a8);
          goto LAB_100a7c3c;
        }
        if (this == (CMFCTabCtrl *)0xffffddb0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(this + 0x2270);
        }
        if (param_2 == iVar8) {
          pcVar1 = *(code **)(*(int *)this + 0x210);
          guard_check_icall();
          iVar8 = (*pcVar1)();
          if (iVar8 != 0) {
            SendMessageW(*(HWND *)(iVar8 + 0x20),0x10,0,0);
          }
          goto LAB_100a7b88;
        }
        goto LAB_100a7b7b;
      }
      *(undefined4 *)(this + 0x2a4) = 0;
    }
  }
  if (((*(int *)(this + 0x254) == 0) && (*(int *)(this + 600) == 0)) &&
     (*(int *)(this + 0x25c) == 0)) {
    iVar9 = *(int *)(this + 0x2a4);
    iVar10 = 0;
    if (-1 < iVar9) {
      iVar10 = iVar9;
    }
    iVar4 = *(int *)(this + 0x2a8);
    if (iVar10 < *(int *)(this + 0x2a8)) {
      if (iVar9 < 0) {
        iVar9 = 0;
      }
    }
    else {
LAB_100a7c84:
      iVar9 = iVar4;
    }
  }
  else {
    iVar9 = *(int *)(this + 0x2a4);
    iVar4 = 0;
    if (iVar9 < 0) goto LAB_100a7c84;
  }
  *(int *)(this + 0x2a4) = iVar9;
  if (iVar8 != iVar9) {
    pcVar1 = *(code **)(*(int *)this + 0x2dc);
    guard_check_icall();
    (*pcVar1)();
    FUN_100ab22f();
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
  }
LAB_100a7b88:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}

