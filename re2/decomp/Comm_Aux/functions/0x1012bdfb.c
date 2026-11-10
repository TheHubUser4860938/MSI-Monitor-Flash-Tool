// rea decompile_all
// name: CDockablePane::OnMouseMove
// address: 0x1012bdfb
// body: available
// range: 0x1012bdfb-0x1012c0ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockablePane::OnMouseMove(CDockablePane *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  CDockablePane *pCVar2;
  ushort uVar3;
  uint uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  int iVar7;
  BOOL BVar8;
  long lVar9;
  CObject *pCVar10;
  CDockingManager *pCVar11;
  int iVar12;
  int _X;
  int iVar13;
  tagPOINT local_34;
  tagPOINT local_2c;
  CDockablePane *local_24;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_20.x = 0;
  local_20.y = 0;
  local_24 = this;
  GetCursorPos(&local_20);
  pcVar1 = *(code **)(*(int *)this + 0x1b8);
  guard_check_icall();
  uVar4 = (*pcVar1)();
  if ((uVar4 & 1) == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x1b8);
    guard_check_icall();
    uVar4 = (*pcVar1)();
    if (((uVar4 & 2) != 0) && (this[0x2c8] != (CDockablePane)0x0)) {
      CPane::OnMouseMove((CPane *)this,param_1,param_3,param_4);
      goto LAB_1012c099;
    }
  }
  else {
    if (this[0x170] == (CDockablePane)0x0) {
      pHVar5 = GetCapture();
      pCVar6 = CWnd::FromHandle(pHVar5);
      if (pCVar6 != (CWnd *)this) {
        if (this[0x170] != (CDockablePane)0x0) goto LAB_1012be60;
        goto LAB_1012be70;
      }
LAB_1012be91:
      if (*(int *)(this + 0x360) == 0) {
        ReleaseCapture();
        this[0x170] = (CDockablePane)0x0;
        this[0x2c8] = (CDockablePane)0x0;
      }
    }
    else {
LAB_1012be60:
      pHVar5 = GetCapture();
      pCVar6 = CWnd::FromHandle(pHVar5);
      if (pCVar6 != (CWnd *)this) goto LAB_1012be91;
LAB_1012be70:
      iVar7 = GetSystemMetrics(0x17);
      uVar3 = GetAsyncKeyState((iVar7 != 0) + 1);
      if ((uVar3 & 0x8000) == 0) goto LAB_1012be91;
    }
    if (this[0x2c8] != (CDockablePane)0x0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      if (this[0x2c9] == (CDockablePane)0x0) {
        pt.y = local_20.y;
        pt.x = local_20.x;
        BVar8 = PtInRect(&local_18,pt);
        this[0x2c9] = (CDockablePane)('\x01' - (BVar8 != 1));
      }
      iVar12 = local_20.x - *(int *)(this + 400);
      iVar13 = local_20.y - *(int *)(local_24 + 0x194);
      *(LONG *)(local_24 + 0x194) = local_20.y;
      local_2c.x = *(LONG *)(local_24 + 0x168);
      local_2c.y = *(LONG *)(local_24 + 0x16c);
      *(LONG *)(local_24 + 400) = local_20.x;
      ClientToScreen(*(HWND *)(local_24 + 0x20),&local_2c);
      pCVar2 = local_24;
      iVar7 = local_20.y - local_2c.y;
      _X = local_20.x - local_2c.x;
      CPane::UpdateVirtualRect((CPane *)local_24,iVar12,iVar13);
      lVar9 = _labs(_X);
      if (lVar9 <= DAT_10210688) {
        lVar9 = _labs(iVar7);
        if (lVar9 <= DAT_1021068c) goto LAB_1012c099;
      }
      if (*(CPane *)(pCVar2 + 0x2c9) != (CPane)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x16c);
        guard_check_icall();
        iVar7 = (*pcVar1)();
        if (iVar7 == 0) {
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x1fc);
          guard_check_icall(*(undefined4 *)(pCVar2 + 0x1e8),*(undefined4 *)(pCVar2 + 0x1ec),
                            *(undefined4 *)(pCVar2 + 0x1f0),*(undefined4 *)(pCVar2 + 500),1,1);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x19c);
          guard_check_icall();
          pCVar6 = (CWnd *)(*pcVar1)();
          pCVar11 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10205db4,pCVar6);
          CGlobalUtils::ForceAdjustLayout((CGlobalUtils *)&PTR_vftable_10205db4,pCVar11,0,0);
        }
        else {
          pHVar5 = GetParent(*(HWND *)(pCVar2 + 0x20));
          pCVar6 = CWnd::FromHandle(pHVar5);
          pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_101bc588,
                                       (CObject *)pCVar6);
          if (pCVar10 != (CObject *)0x0) {
            pcVar1 = *(code **)(*(int *)pCVar10 + 0x1a0);
            guard_check_icall(1,0xffffffff,0);
            (*pcVar1)();
          }
        }
        *(undefined2 *)(pCVar2 + 0x2c8) = 0;
      }
      goto LAB_1012c099;
    }
  }
  local_34.x = param_3;
  local_34.y = param_4;
  ClientToScreen(*(HWND *)(this + 0x20),&local_34);
  pcVar1 = *(code **)(*(int *)this + 0x388);
  guard_check_icall(local_34.x,local_34.y);
  (*pcVar1)();
LAB_1012c099:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

