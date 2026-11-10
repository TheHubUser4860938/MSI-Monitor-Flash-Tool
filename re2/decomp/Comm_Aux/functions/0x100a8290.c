// rea decompile_all
// name: CMFCTabCtrl::PreTranslateMessage
// address: 0x100a8290
// body: available
// range: 0x100a8290-0x100a8516 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCTabCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCTabCtrl::PreTranslateMessage(CMFCTabCtrl *this,tagMSG *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  CWnd *pCVar5;
  HWND pHVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  
  uVar1 = param_1->message;
  if (uVar1 < 0x105) {
    if (uVar1 == 0x104) goto LAB_100a84a6;
    if (uVar1 < 0xa1) goto LAB_100a84e9;
    if (uVar1 < 0xa3) goto LAB_100a84a6;
    if (uVar1 < 0xa4) goto LAB_100a84e9;
    if (uVar1 < 0xa6) goto LAB_100a84a6;
    if (uVar1 < 0xa7) goto LAB_100a84e9;
    if (uVar1 < 0xa9) goto LAB_100a84a6;
    if (uVar1 != 0x100) goto LAB_100a84e9;
    if ((*(int *)(this + 0xc0) == -1) || (uVar2 = GetAsyncKeyState(0x11), (uVar2 & 0x8000) == 0))
    goto LAB_100a84a6;
    if (param_1->wParam == 0x21) {
      iVar7 = *(int *)(this + 0xc0);
      iVar4 = *(int *)(this + 0xbc) + -1 + iVar7;
      bVar10 = SBORROW4(iVar4,iVar7);
      iVar3 = iVar4 - iVar7;
      bVar9 = iVar4 == iVar7;
LAB_100a842e:
      if (!bVar9 && bVar10 == iVar3 < 0) {
        iVar7 = *(int *)(this + 0xbc);
        pcVar8 = *(code **)(*(int *)this + 0x27c);
        guard_check_icall(iVar4 % iVar7);
        iVar3 = (*pcVar8)();
        if (iVar3 == 0) goto code_r0x100a8424;
        *(undefined4 *)(this + 0x24c) = 1;
        pcVar8 = *(code **)(*(int *)this + 0x214);
        guard_check_icall(iVar4 % iVar7);
        (*pcVar8)();
        pcVar8 = *(code **)(*(int *)this + 0x210);
        guard_check_icall();
        pCVar5 = (CWnd *)(*pcVar8)();
        CWnd::SetFocus(pCVar5);
        pcVar8 = *(code **)(*(int *)this + 0x270);
LAB_100a83cd:
        guard_check_icall(*(undefined4 *)(this + 0xc0));
        (*pcVar8)();
        *(undefined4 *)(this + 0x24c) = 0;
      }
      goto LAB_100a83e5;
    }
    if (param_1->wParam != 0x22) goto LAB_100a84a6;
    iVar7 = *(int *)(this + 0xc0);
    iVar3 = *(int *)(this + 0xbc) + iVar7;
    while (iVar7 = iVar7 + 1, iVar7 < iVar3) {
      iVar3 = *(int *)(this + 0xbc);
      pcVar8 = *(code **)(*(int *)this + 0x27c);
      guard_check_icall(iVar7 % iVar3);
      iVar4 = (*pcVar8)();
      if (iVar4 != 0) {
        *(undefined4 *)(this + 0x24c) = 1;
        pcVar8 = *(code **)(*(int *)this + 0x214);
        guard_check_icall(iVar7 % iVar3);
        (*pcVar8)();
        pcVar8 = *(code **)(*(int *)this + 0x210);
        guard_check_icall();
        pCVar5 = (CWnd *)(*pcVar8)();
        CWnd::SetFocus(pCVar5);
        pcVar8 = *(code **)(*(int *)this + 0x270);
        goto LAB_100a83cd;
      }
      iVar3 = *(int *)(this + 0xbc) + *(int *)(this + 0xc0);
    }
LAB_100a83e5:
    iVar7 = 1;
  }
  else {
    if ((uVar1 < 0x200) ||
       ((0x202 < uVar1 && ((uVar1 < 0x204 || ((0x205 < uVar1 && (1 < uVar1 - 0x207))))))))
    goto LAB_100a84e9;
LAB_100a84a6:
    iVar7 = *(int *)(this + 0xfc);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x20) != 0)) {
      SendMessageW(*(HWND *)(iVar7 + 0x20),0x407,0,(LPARAM)param_1);
    }
    iVar7 = *(int *)(this + 0xf8);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x20) != 0)) {
      SendMessageW(*(HWND *)(iVar7 + 0x20),0x407,0,(LPARAM)param_1);
    }
LAB_100a84e9:
    pHVar6 = (HWND)0x0;
    if (param_1->message == 0x203) {
      if (this != (CMFCTabCtrl *)0xffffddb0) {
        pHVar6 = *(HWND *)(this + 0x2270);
      }
      if (param_1->hwnd == pHVar6) goto LAB_100a83e5;
    }
    iVar7 = CMFCBaseTabCtrl::PreTranslateMessage((CMFCBaseTabCtrl *)this,param_1);
  }
  return iVar7;
code_r0x100a8424:
  iVar4 = iVar4 + -1;
  iVar7 = *(int *)(this + 0xc0);
  bVar10 = SBORROW4(iVar4,iVar7);
  iVar3 = iVar4 - iVar7;
  bVar9 = iVar4 == iVar7;
  goto LAB_100a842e;
}

