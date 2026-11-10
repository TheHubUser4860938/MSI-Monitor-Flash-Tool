// rea decompile_all
// name: CDockingManager::OnMoveMiniFrame
// address: 0x100b8d85
// body: available
// range: 0x100b8d85-0x100b91a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockingManager::OnMoveMiniFrame(class CWnd *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDockingManager::OnMoveMiniFrame(CDockingManager *this,CWnd *param_1)

{
  code *pcVar1;
  bool bVar2;
  SHORT SVar3;
  CObject *pCVar4;
  uint uVar5;
  CWnd *pCVar6;
  CWnd *pCVar7;
  clock_t cVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  CObject *local_38;
  CObject *local_34;
  CObject *local_30;
  CObject *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  LONG local_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_30 = (CObject *)param_1;
  SVar3 = GetKeyState(0x11);
  if (SVar3 < 0) goto LAB_100b918f;
  iVar10 = 1;
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_102018e4,(CObject *)param_1);
  iVar9 = *(int *)(this + 0x1b8);
  if (((iVar9 == 0) || (*(int *)(iVar9 + 8) == 0)) || (bVar2 = true, *(int *)(iVar9 + 4) == 0)) {
    bVar2 = false;
  }
  local_2c = pCVar4;
  if (pCVar4 == (CObject *)0x0) goto LAB_100b918f;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  local_18._8_4_ = 0;
  local_c = 0;
  GetWindowRect(*(HWND *)(local_30 + 0x20),(LPRECT)local_18);
  pcVar1 = *(code **)(*(int *)pCVar4 + 0x170);
  guard_check_icall();
  local_28 = (*pcVar1)();
  local_24 = local_28;
  local_20 = local_28;
  local_1c = local_28;
  CGlobalUtils::AdjustRectToWorkArea
            ((CGlobalUtils *)&PTR_vftable_1020194c,(CRect *)local_18,(CRect *)&local_28);
  pCVar4 = local_2c;
  CWnd::SetWindowPos((CWnd *)local_2c,(CWnd *)0x0,local_18._0_4_,local_18._4_4_,0,0,0x15);
  local_18._8_4_ = 0;
  local_c = 0;
  GetCursorPos((LPPOINT)(local_18 + 8));
  pcVar1 = *(code **)(*(int *)pCVar4 + 0x1a8);
  guard_check_icall();
  pCVar4 = (CObject *)(*pcVar1)();
  local_34 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,pCVar4);
  if (local_34 == (CObject *)0x0) {
LAB_100b8ec8:
    pcVar1 = *(code **)(*(int *)this + 0x14);
    guard_check_icall(local_18._8_4_,local_c,local_2c,1);
    local_30 = (CObject *)(*pcVar1)();
    if (local_30 != (CObject *)0x0) {
      pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(local_30 + 200));
      pCVar7 = CWnd::FromHandlePermanent(*(HWND__ **)(local_2c + 200));
      if (pCVar6 == pCVar7) {
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10201958,local_30);
        local_30 = pCVar4;
        if (pCVar4 != (CObject *)0x0) {
          if (*(int *)(this + 0x124) == 0) {
            cVar8 = _clock();
            *(clock_t *)(this + 0x128) = cVar8;
            *(CObject **)(this + 0x124) = pCVar4;
          }
          if ((*(CObject **)(this + 0x124) == pCVar4) &&
             (cVar8 = _clock(), (int)DAT_10201904 < cVar8 - *(int *)(this + 0x128))) {
            pcVar1 = *(code **)(*(int *)pCVar4 + 0x248);
            guard_check_icall(local_2c,1);
            (*pcVar1)();
            cVar8 = _clock();
            *(undefined4 *)(this + 0x124) = 0;
            *(clock_t *)(this + 0x128) = cVar8;
          }
        }
        goto LAB_100b918f;
      }
    }
  }
  else if (!bVar2) {
    pcVar1 = *(code **)(*(int *)local_34 + 0x1c0);
    guard_check_icall();
    uVar5 = (*pcVar1)();
    if (((uVar5 & 0x40) != 0) && (iVar9 = FUN_100250d6(&PTR_s_CDockablePane_10201ba4), iVar9 != 0))
    goto LAB_100b8ec8;
  }
  *(undefined4 *)(this + 0x124) = 0;
  if (local_34 == (CObject *)0x0) goto LAB_100b918f;
  pcVar1 = *(code **)(*(int *)local_34 + 0x198);
  guard_check_icall();
  uVar5 = (*pcVar1)();
  if ((uVar5 & 0xf000) == 0) goto LAB_100b918f;
  local_38 = (CObject *)0x0;
  pcVar1 = *(code **)(*(int *)local_34 + 0x2b4);
  guard_check_icall(DAT_1020190c,&local_38);
  uVar5 = (*pcVar1)();
  uVar5 = -(uint)(local_34 != local_38) & uVar5;
  if (((local_38 != (CObject *)0x0) || (uVar5 == 2)) && (!bVar2)) {
    if (local_38 == (CObject *)0x0) {
      local_30 = (CObject *)0x0;
    }
    else {
      local_30 = (CObject *)FUN_100250d6(&PTR_s_CDockSite_101c037c);
    }
    if (local_38 != (CObject *)0x0) {
      iVar10 = FUN_100250d6(&PTR_s_CDockablePane_10201ba4);
    }
    pCVar4 = DAT_10201900;
    if ((local_30 != (CObject *)0x0) || (pCVar4 = DAT_10201904, iVar10 != 0)) {
      local_30 = pCVar4;
      if ((*(CObject **)(this + 0x120) != local_38) || (uVar5 != *(uint *)(this + 300))) {
        cVar8 = _clock();
        pCVar4 = local_30;
        *(uint *)(this + 300) = uVar5;
        *(clock_t *)(this + 0x128) = cVar8;
        *(CObject **)(this + 0x120) = local_38;
        CPaneFrameWnd::SetDockingTimer((CPaneFrameWnd *)local_2c,(uint)local_30);
      }
      cVar8 = _clock();
      if (cVar8 - *(int *)(this + 0x128) < (int)pCVar4) goto LAB_100b918f;
    }
  }
  *(undefined4 *)(this + 0x120) = 0;
  cVar8 = _clock();
  pCVar4 = local_2c;
  *(undefined4 *)(this + 300) = 0;
  *(clock_t *)(this + 0x128) = cVar8;
  CPaneFrameWnd::KillDockingTimer((CPaneFrameWnd *)local_2c);
  if (uVar5 == 1) {
    if (local_38 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 400);
      guard_check_icall(0,0,1);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)local_34 + 0x2a0);
      guard_check_icall(local_38);
      iVar9 = (*pcVar1)();
      pCVar4 = local_2c;
      if (iVar9 != 0) goto LAB_100b918f;
    }
LAB_100b9172:
    uVar11 = 0;
  }
  else {
    if (uVar5 != 2) {
      if ((uVar5 == 3) && (!bVar2)) {
        pcVar1 = *(code **)(*(int *)pCVar4 + 400);
        guard_check_icall(2,local_38,1);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)this + 0x38);
        guard_check_icall(0);
        (*pcVar1)();
        goto LAB_100b918f;
      }
      goto LAB_100b9172;
    }
    if (bVar2) goto LAB_100b9172;
    uVar11 = 1;
  }
  pcVar1 = *(code **)(*(int *)pCVar4 + 400);
  guard_check_icall(uVar11,local_38,1);
  (*pcVar1)();
LAB_100b918f:
  iVar9 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar9;
}

