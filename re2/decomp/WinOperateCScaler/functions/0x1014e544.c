// rea decompile_all
// name: CMFCTasksPane::OnLButtonUp
// address: 0x1014e544
// body: available
// range: 0x1014e544-0x1014e7dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTasksPane::OnLButtonUp(CMFCTasksPane *this,WPARAM param_1,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  RECT *pRVar7;
  int local_3c;
  RECT local_38;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  CDockablePane::OnLButtonUp((CDockablePane *)this,param_1,param_3,param_4);
  iVar6 = 0;
  if ((((*(int *)(this + 0x45c) == 0) && (*(int *)(this + 0x460) == 0)) &&
      (*(int *)(this + 0x53c) == 0)) && (*(int *)(this + 0x540) == 0)) goto LAB_1014e7cc;
  ReleaseCapture();
  iVar1 = *(int *)(this + 0x53c);
  local_3c = 1;
  if (iVar1 == 0) {
LAB_1014e5da:
    bVar3 = false;
  }
  else {
    pcVar2 = *(code **)(*(int *)this + 0x3e4);
    guard_check_icall(param_3,param_4);
    iVar4 = (*pcVar2)();
    if ((iVar1 != iVar4) || (*(int *)(this + 0x540) != iVar1)) goto LAB_1014e5da;
    bVar3 = true;
  }
  *(undefined4 *)(this + 0x540) = 0;
  if (bVar3) {
    *(undefined4 *)(this + 0x53c) = 0;
    *(uint *)(iVar1 + 0x30) = (uint)(*(int *)(iVar1 + 0x30) == 0);
    if (*(int *)(this + 0x378) != 0) {
      *(int *)(this + 0x544) = iVar1;
      iVar6 = *(int *)(iVar1 + 0x50);
      iVar4 = *(int *)(iVar1 + 0x48);
      *(int *)(this + 0x40c) = *(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x44);
      *(int *)(this + 0x410) = iVar6 - iVar4;
      SetTimer(*(HWND *)(this + 0x20),0xec0b,0x1e,(TIMERPROC)0x0);
      _DAT_1020c998 = _clock();
    }
    AdjustScroll(this);
    pcVar2 = *(code **)(*(int *)this + 0x3e0);
    guard_check_icall(0);
    (*pcVar2)();
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    SendMessageW(*(HWND *)(this + 0x20),0x200,param_1,
                 CONCAT22((undefined2)param_4,(undefined2)param_3));
  }
  else {
    if (iVar1 == 0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
    }
    else {
      local_18.left = *(LONG *)(iVar1 + 0x34);
      local_18.top = *(LONG *)(iVar1 + 0x38);
      local_18.right = *(LONG *)(iVar1 + 0x3c);
      local_18.bottom = *(LONG *)(iVar1 + 0x40);
    }
    local_28.left = local_18.left;
    local_28.top = local_18.top;
    local_28.right = local_18.right;
    local_28.bottom = local_18.bottom;
    RedrawWindow(*(HWND *)(this + 0x20),&local_28,(HRGN)0x0,0x105);
    iVar1 = *(int *)(this + 0x45c);
    if (((iVar1 == 0) || (iVar4 = FUN_10150e9b(param_3,param_4), iVar1 != iVar4)) ||
       (*(int *)(this + 0x460) != iVar1)) {
      local_3c = 0;
    }
    if (iVar1 == 0) {
      local_18.left = 0;
      pRVar7 = &local_18;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
    }
    else {
      local_28.left = *(LONG *)(iVar1 + 0xc);
      local_28.top = *(LONG *)(iVar1 + 0x10);
      local_28.right = *(LONG *)(iVar1 + 0x14);
      local_28.bottom = *(LONG *)(iVar1 + 0x18);
      pRVar7 = &local_28;
    }
    local_38.left = pRVar7->left;
    local_38.top = pRVar7->top;
    local_38.right = pRVar7->right;
    local_38.bottom = pRVar7->bottom;
    *(undefined4 *)(this + 0x45c) = 0;
    *(undefined4 *)(this + 0x460) = 0;
    RedrawWindow(*(HWND *)(this + 0x20),&local_38,(HRGN)0x0,0x105);
    if (local_3c != 0) {
      iVar4 = 0;
      local_3c = *(int *)(*(int *)(iVar1 + 4) + 0x10);
      while (local_3c != 0) {
        piVar5 = (int *)FUN_100972dc(&local_3c);
        if (*piVar5 == iVar1) goto LAB_1014e778;
        iVar4 = iVar4 + 1;
      }
      iVar4 = -1;
LAB_1014e778:
      local_3c = *(int *)(this + 0x484);
      while (local_3c != 0) {
        piVar5 = (int *)FUN_100972dc(&local_3c);
        if (*(int *)(iVar1 + 4) == *piVar5) goto LAB_1014e7b0;
        iVar6 = iVar6 + 1;
      }
      iVar6 = -1;
LAB_1014e7b0:
      pcVar2 = *(code **)(*(int *)this + 0x3b0);
      guard_check_icall(iVar6,iVar4,*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x28));
      (*pcVar2)();
    }
  }
LAB_1014e7cc:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

