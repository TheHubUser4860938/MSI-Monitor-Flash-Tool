// rea decompile_all
// name: CMFCRibbonBar::OnLButtonDown
// address: 0x10151d08
// body: available
// range: 0x10151d08-0x10151f58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonBar::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonBar::OnLButtonDown(CMFCRibbonBar *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  int *piVar2;
  BOOL BVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  int iVar6;
  tagPOINT local_20;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  CPane::OnLButtonDown((CPane *)this,param_1,param_3,param_4);
  DeactivateKeyboardFocus(this,1);
  pcVar1 = *(code **)(*(int *)this + 0x334);
  guard_check_icall();
  piVar2 = (int *)(*pcVar1)();
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 0x198);
    guard_check_icall();
    (*pcVar1)();
  }
  if ((((byte)this[0x330] & 2) != 0) || (*(int *)(this + 0x16b8) != 0)) {
    local_18.left = *(LONG *)(this + 0x808);
    local_18.top = *(LONG *)(this + 0x80c);
    local_18.bottom = *(LONG *)(this + 0x814);
    local_18.right = (local_18.bottom - local_18.top) + local_18.left;
    pt.y = param_4;
    pt.x = param_3;
    BVar3 = PtInRect(&local_18,pt);
    if (BVar3 != 0) {
      local_20.x = *(LONG *)(this + 0x808);
      local_20.y = *(LONG *)(this + 0x814);
      ClientToScreen(*(HWND *)(this + 0x20),&local_20);
      ShowSysMenu(this,(CPoint *)&local_20);
      goto LAB_10151f46;
    }
  }
  OnMouseMove(this,param_1,param_3,param_4);
  pcVar1 = *(code **)(*(int *)this + 0x330);
  guard_check_icall(param_3,param_4,0,0);
  piVar2 = (int *)(*pcVar1)();
  local_20.y = (LONG)piVar2;
  if (piVar2 == (int *)0x0) {
    pt_00.y = param_4;
    pt_00.x = param_3;
    BVar3 = PtInRect((RECT *)(this + 0x808),pt_00);
    if (BVar3 != 0) {
      if (DAT_1020f8f4 != 0) {
        SendMessageW(*(HWND *)(DAT_1020f8f4 + 0x20),0x10,0,0);
      }
      pt_01.y = param_4;
      pt_01.x = param_3;
      BVar3 = PtInRect((RECT *)(this + 0x828),pt_01);
      if (BVar3 == 0) {
        pHVar4 = GetParent(*(HWND *)(this + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar4);
        SendMessageW(*(HWND *)(pCVar5 + 0x20),0xa1,2,
                     CONCAT22((undefined2)param_4,(undefined2)param_3));
      }
      goto LAB_10151f46;
    }
    if ((*(int **)(this + 0x7a8) != (int *)0x0) && (((byte)this[0x330] & 1) == 0)) {
      pcVar1 = *(code **)(**(int **)(this + 0x7a8) + 0xbc);
      guard_check_icall(param_3,param_4);
      piVar2 = (int *)(*pcVar1)();
      goto LAB_10151ef7;
    }
  }
  else {
    pcVar1 = *(code **)(*piVar2 + 0x210);
    guard_check_icall();
    (*pcVar1)();
    piVar2[0x34] = 1;
    local_18.left = piVar2[0x1d];
    local_18.top = piVar2[0x1e];
    local_18.right = piVar2[0x1f];
    local_18.bottom = piVar2[0x20];
    InflateRect(&local_18,1,1);
    RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x105);
    piVar2 = (int *)local_20.y;
LAB_10151ef7:
    *(int **)(this + 0x33c) = piVar2;
  }
  if (*(int **)(this + 0x33c) != (int *)0x0) {
    local_20.y = 0xfa;
    pcVar1 = *(code **)(**(int **)(this + 0x33c) + 0x14c);
    guard_check_icall(&local_20.y);
    iVar6 = (*pcVar1)();
    if (iVar6 != 0) {
      SetTimer(*(HWND *)(this + 0x20),0xec19,local_20.y,(TIMERPROC)0x0);
      *(undefined4 *)(this + 0x300) = 1;
    }
  }
LAB_10151f46:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

