// rea decompile_all
// name: CPane::OnLButtonUp
// address: 0x10081aa3
// body: available
// range: 0x10081aa3-0x10081cba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPane::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPane::OnLButtonUp(CPane *this,WPARAM param_1,undefined2 param_3,undefined2 param_4)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CDockingManager *pCVar6;
  uint uVar7;
  CPane *pCVar8;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x228);
  guard_check_icall(0);
  iVar2 = (*pcVar1)();
  if (this[0x170] == (CPane)0x0) {
    if ((iVar2 != 0) && (this[0x172] == (CPane)0x0)) {
      BVar3 = IsWindowVisible(*(HWND *)(iVar2 + 0x20));
      if (BVar3 != 0) {
        MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(iVar2 + 0x20),(LPPOINT)&param_3,1);
        SendMessageW(*(HWND *)(iVar2 + 0x20),0x202,param_1,CONCAT22(param_4,param_3));
        goto LAB_10081ca8;
      }
    }
  }
  else {
    ReleaseCapture();
    this[0x170] = (CPane)0x0;
    if (param_1 != 0xffff) {
      if (*(HWND *)(this + 0x184) != (HWND)0x0) {
        BVar3 = IsWindow(*(HWND *)(this + 0x184));
        if (BVar3 != 0) {
          DestroyWindow(*(HWND *)(this + 0x184));
        }
      }
      *(undefined4 *)(this + 0x184) = 0;
    }
    pcVar1 = *(code **)(*(int *)this + 0x30c);
    guard_check_icall(0);
    (*pcVar1)();
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    pCVar6 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10205db4,pCVar5);
    if ((pCVar6 != (CDockingManager *)0x0) &&
       (*(CSmartDockingManager **)(pCVar6 + 0x1b8) != (CSmartDockingManager *)0x0)) {
      CSmartDockingManager::Stop(*(CSmartDockingManager **)(pCVar6 + 0x1b8));
    }
    pcVar1 = *(code **)(*(int *)this + 0x1b8);
    guard_check_icall();
    uVar7 = (*pcVar1)();
    if (((uVar7 & 2) != 0) && ((*(int *)(this + 0x1bc) != 0 || (-1 < *(int *)(this + 0x1c0))))) {
      local_18.left = *(LONG *)(this + 0x198);
      local_18.top = *(LONG *)(this + 0x19c);
      local_18.right = *(LONG *)(this + 0x1a0);
      local_18.bottom = *(LONG *)(this + 0x1a4);
      if (*(int *)(this + 0x1bc) != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x1b8);
        guard_check_icall();
        uVar7 = (*pcVar1)();
        if ((uVar7 & 2) != 0) {
          FUN_100fb2df(1);
        }
      }
      local_1c = 0;
      pcVar1 = *(code **)(*(int *)this + 0x31c);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x2b0);
      guard_check_icall(&local_1c);
      pCVar8 = (CPane *)(*pcVar1)();
      if (local_1c == 0) {
        BVar3 = IsRectEmpty(&local_18);
        if ((BVar3 == 0) && (pCVar8 != this)) {
          pcVar1 = *(code **)(*(int *)this + 0x1fc);
          guard_check_icall(local_18.left,local_18.top,local_18.right,local_18.bottom,5,1);
          (*pcVar1)();
        }
      }
      goto LAB_10081ca8;
    }
  }
  this[0x172] = (CPane)0x0;
  if (*(CDockingPanesRow **)(this + 0xbc) != (CDockingPanesRow *)0x0) {
    CDockingPanesRow::FixupVirtualRects(*(CDockingPanesRow **)(this + 0xbc),false,(CPane *)0x0);
  }
  FUN_100509af();
LAB_10081ca8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

