// rea decompile_all
// name: CMFCTabCtrl::OnLButtonDown
// address: 0x100a7456
// body: available
// range: 0x100a7456-0x100a7632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTabCtrl::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTabCtrl::OnLButtonDown(CMFCTabCtrl *this,WPARAM param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  BOOL BVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  LRESULT LVar5;
  int iVar6;
  tagRECT *ptVar7;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pt_00.y = param_4;
  pt_00.x = param_3;
  BVar2 = PtInRect((RECT *)(this + 700),pt_00);
  if (BVar2 == 0) {
    if (*(int *)(this + 0x29f8) != 0) {
      pt.y = param_4;
      pt.x = param_3;
      BVar2 = PtInRect((RECT *)(this + 0x2fc),pt);
      if (BVar2 != 0) {
        pHVar3 = GetParent(*(HWND *)(this + 0x20));
        pCVar4 = CWnd::FromHandle(pHVar3);
        LVar5 = SendMessageW(*(HWND *)(pCVar4 + 0x20),DAT_1020f150,(WPARAM)this,(LPARAM)&local_28);
        CopyRect((LPRECT)(this + 0x31c),&local_28);
        if ((LVar5 != 0) && (BVar2 = IsRectEmpty((LPRECT)(this + 0x31c)), BVar2 == 0)) {
          *(undefined4 *)(this + 0x29c) = 1;
          pHVar3 = SetCapture(*(HWND *)(this + 0x20));
          CWnd::FromHandle(pHVar3);
          ptVar7 = (tagRECT *)(this + 0x30c);
          ptVar7->left = ((RECT *)(this + 0x2fc))->left;
          *(undefined4 *)(this + 0x310) = *(undefined4 *)(this + 0x300);
          *(undefined4 *)(this + 0x314) = *(undefined4 *)(this + 0x304);
          *(undefined4 *)(this + 0x318) = *(undefined4 *)(this + 0x308);
          CWnd::ClientToScreen((CWnd *)this,ptVar7);
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          SetRectEmpty(&local_18);
          pcVar1 = *(code **)(*(int *)this + 0x2fc);
          guard_check_icall(ptVar7,&local_18);
          (*pcVar1)();
          goto LAB_100a7622;
        }
      }
    }
    pcVar1 = *(code **)(*(int *)this + 0x2f0);
    guard_check_icall();
    iVar6 = (*pcVar1)();
    if (iVar6 != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x218);
      guard_check_icall(&param_3);
      iVar6 = (*pcVar1)();
      if (iVar6 == *(int *)(this + 0xc0)) {
        ActivateMDITab(this,iVar6);
      }
    }
    CMFCBaseTabCtrl::OnLButtonDown((CMFCBaseTabCtrl *)this,param_1,param_3,param_4);
    if (*(int *)(this + 0x158) == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x24c);
      guard_check_icall(&param_3);
      iVar6 = (*pcVar1)();
      if (iVar6 != 0) {
        MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(iVar6 + 0x20),(LPPOINT)&param_3,1);
        SendMessageW(*(HWND *)(iVar6 + 0x20),0x201,param_1,
                     CONCAT22((undefined2)param_4,(undefined2)param_3));
      }
    }
  }
  else {
    *(undefined4 *)(this + 0x26c) = 1;
    pHVar3 = SetCapture(*(HWND *)(this + 0x20));
    CWnd::FromHandle(pHVar3);
  }
LAB_100a7622:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

