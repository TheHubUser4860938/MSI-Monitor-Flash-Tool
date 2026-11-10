// rea decompile_all
// name: CMFCTasksPane::OnMouseMove
// address: 0x1017978d
// body: available
// range: 0x1017978d-0x10179ad2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTasksPane::OnMouseMove(CMFCTasksPane *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CWnd *pCVar7;
  HWND pHVar8;
  RECT *lprc;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  CDockablePane::OnMouseMove((CDockablePane *)this,param_1,param_3,param_4);
  bVar2 = false;
  if (*(int *)(this + 0x374) != 0) {
    lprc = (RECT *)(this + 0x424);
    pt.y = param_4;
    pt.x = param_3;
    BVar3 = PtInRect(lprc,pt);
    if ((BVar3 == 0) || (*(int *)(this + 0x398) < 1)) {
      lprc = (RECT *)(this + 0x434);
      pt_00.y = param_4;
      pt_00.x = param_3;
      BVar3 = PtInRect(lprc,pt_00);
      if ((BVar3 != 0) && (iVar4 = IsScrollDnAvailable(this), iVar4 != 0)) {
        *(undefined4 *)(this + 0x390) = 1;
        goto LAB_10179814;
      }
      *(undefined4 *)(this + 0x390) = 0;
    }
    else {
      *(undefined4 *)(this + 0x390) = 0xffffffff;
LAB_10179814:
      InvalidateRect(*(HWND *)(this + 0x20),lprc,1);
    }
    if (*(int *)(this + 0x390) != 0) {
      SetTimer(*(HWND *)(this + 0x20),0xec0c,0x50,(TIMERPROC)0x0);
      goto LAB_10179ac0;
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x3e4);
  guard_check_icall(param_3,param_4);
  iVar5 = (*pcVar1)();
  iVar6 = FUN_1017be4a(param_3,param_4);
  iVar4 = *(int *)(this + 0x45c);
  if ((iVar4 == iVar6) && (*(int *)(this + 0x53c) == iVar5)) goto LAB_10179ac0;
  if (iVar6 == 0) {
    if (iVar5 == 0) {
      iVar4 = *(int *)(this + 0x53c);
      if (iVar4 != 0) {
        local_18.left = *(LONG *)(iVar4 + 0x34);
        local_18.top = *(LONG *)(iVar4 + 0x38);
        local_18.right = *(LONG *)(iVar4 + 0x3c);
        local_18.bottom = *(LONG *)(iVar4 + 0x40);
        *(undefined4 *)(this + 0x53c) = 0;
        if (*(int *)(this + 0x540) == 0) {
          ReleaseCapture();
        }
        RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,5);
        bVar2 = true;
      }
      iVar4 = *(int *)(this + 0x45c);
      if (iVar4 != 0) {
        local_18.left = *(LONG *)(iVar4 + 0xc);
        local_18.top = *(LONG *)(iVar4 + 0x10);
        local_18.right = *(LONG *)(iVar4 + 0x14);
        local_18.bottom = *(LONG *)(iVar4 + 0x18);
        *(undefined4 *)(this + 0x45c) = 0;
        if (*(int *)(this + 0x460) == 0) {
          ReleaseCapture();
        }
        RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x105);
        bVar2 = true;
      }
      pCVar7 = CWnd::GetOwner((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar7 + 0x20),0x362,0xe001,0);
      if (!bVar2) goto LAB_10179ac0;
    }
    else {
LAB_10179948:
      iVar4 = *(int *)(this + 0x53c);
      if (iVar4 == 0) {
        pHVar8 = GetCapture();
        pCVar7 = CWnd::FromHandle(pHVar8);
        if (pCVar7 != (CWnd *)0x0) goto LAB_10179ac0;
        pHVar8 = SetCapture(*(HWND *)(this + 0x20));
        CWnd::FromHandle(pHVar8);
      }
      else {
        local_18.left = *(LONG *)(iVar4 + 0x34);
        local_18.top = *(LONG *)(iVar4 + 0x38);
        local_18.right = *(LONG *)(iVar4 + 0x3c);
        local_18.bottom = *(LONG *)(iVar4 + 0x40);
        *(undefined4 *)(this + 0x53c) = 0;
        RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,5);
      }
      iVar4 = *(int *)(this + 0x45c);
      if (iVar4 != 0) {
        local_18.left = *(LONG *)(iVar4 + 0xc);
        local_18.top = *(LONG *)(iVar4 + 0x10);
        local_18.right = *(LONG *)(iVar4 + 0x14);
        local_18.bottom = *(LONG *)(iVar4 + 0x18);
        *(undefined4 *)(this + 0x45c) = 0;
        RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,5);
      }
      *(int *)(this + 0x53c) = iVar5;
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(iVar5 + 0x34),(HRGN)0x0,5);
    }
  }
  else {
    if (iVar5 != 0) goto LAB_10179948;
    if (*(int *)(iVar6 + 0x38) == 0) {
      pCVar7 = CWnd::GetOwner((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar7 + 0x20),0x362,0xe001,0);
      goto LAB_10179ac0;
    }
    if (iVar4 == 0) {
      pHVar8 = GetCapture();
      pCVar7 = CWnd::FromHandle(pHVar8);
      if (pCVar7 != (CWnd *)0x0) goto LAB_10179ac0;
      pHVar8 = SetCapture(*(HWND *)(this + 0x20));
      CWnd::FromHandle(pHVar8);
    }
    else {
      local_18.left = *(LONG *)(iVar4 + 0xc);
      local_18.top = *(LONG *)(iVar4 + 0x10);
      local_18.right = *(LONG *)(iVar4 + 0x14);
      local_18.bottom = *(LONG *)(iVar4 + 0x18);
      *(undefined4 *)(this + 0x45c) = 0;
      RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,5);
    }
    iVar4 = *(int *)(this + 0x53c);
    if (iVar4 != 0) {
      local_18.left = *(LONG *)(iVar4 + 0x34);
      local_18.top = *(LONG *)(iVar4 + 0x38);
      local_18.right = *(LONG *)(iVar4 + 0x3c);
      local_18.bottom = *(LONG *)(iVar4 + 0x40);
      *(undefined4 *)(this + 0x53c) = 0;
      RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,5);
    }
    *(int *)(this + 0x45c) = iVar6;
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(iVar6 + 0xc),(HRGN)0x0,5);
    if (*(int *)(iVar6 + 0x24) != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x3bc);
      guard_check_icall(*(undefined4 *)(iVar6 + 0x24));
      (*pcVar1)();
    }
  }
  UpdateWindow(*(HWND *)(this + 0x20));
LAB_10179ac0:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

