// rea decompile_all
// name: CMFCToolBar::OnMouseLeave
// address: 0x456a2c
// body: available
// range: 0x456a2c-0x456b9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::OnMouseLeave(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::OnMouseLeave(CMFCToolBar *this)

{
  code *pcVar1;
  CMFCToolBarMenuButton *pCVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CWnd *pCVar5;
  int iVar6;
  CMFCToolBarButton *pCVar7;
  bool bVar8;
  undefined4 uVar9;
  
  if ((DAT_00614ed0 == 0) &&
     (((*(int *)(this + 0xbac) == 0 || (DAT_00614ed8 != 0)) ||
      (pCVar2 = GetDroppedDownMenu(this,(int *)0x0), pCVar2 == (CMFCToolBarMenuButton *)0x0)))) {
    *(undefined4 *)(this + 0xcfc) = 0xffffffff;
    *(undefined4 *)(this + 0xd00) = 0xffffffff;
    *(undefined4 *)(this + 0xba8) = 0;
    pHVar3 = GetFocus();
    pCVar4 = CWnd::FromHandle(pHVar3);
    bVar8 = pCVar4 == (CWnd *)this;
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar3);
    if (((pCVar5 != (CWnd *)0x0) && (iVar6 = FUN_0043970d(&PTR_s_CMFCTabCtrl_005c65ac), iVar6 != 0))
       && (bVar8 = pCVar5 == pCVar4, !bVar8)) {
      pHVar3 = GetParent(*(HWND *)(pCVar5 + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar3);
      bVar8 = pCVar5 == pCVar4;
    }
    if ((*(int *)(this + 0xbf0) < 0) && (DAT_00614ecc == this)) {
      pcVar1 = *(code **)(*(int *)this + 0x418);
      guard_check_icall(0xffffffff);
      (*pcVar1)();
    }
    else if (!bVar8) {
      pcVar1 = *(code **)(*(int *)this + 0x3f4);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 == 0) {
        iVar6 = *(int *)(this + 0xbf0);
        *(undefined4 *)(this + 0xbf0) = 0xffffffff;
        uVar9 = 0xffffffff;
        pcVar1 = *(code **)(*(int *)this + 0x3b0);
        guard_check_icall(0xffffffff);
        (*pcVar1)();
        pCVar7 = InvalidateButton(this,iVar6);
        UpdateWindow(*(HWND *)(this + 0x20));
        if (pCVar7 != (CMFCToolBarButton *)0x0) {
          pcVar1 = *(code **)(*(int *)pCVar7 + 0x70);
          guard_check_icall(uVar9);
          iVar6 = (*pcVar1)();
          if (iVar6 != 0) {
            return;
          }
        }
        if (DAT_00614ecc == this) {
          pCVar4 = CWnd::GetOwner((CWnd *)this);
          SendMessageW(*(HWND *)(pCVar4 + 0x20),0x362,0xe001,0);
        }
      }
    }
  }
  return;
}

