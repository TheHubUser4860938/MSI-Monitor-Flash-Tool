// rea decompile_all
// name: CMFCTasksPane::OnLButtonDown
// address: 0x101793de
// body: available
// range: 0x101793de-0x101794f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTasksPane::OnLButtonDown(CMFCTasksPane *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  undefined4 uVar2;
  int iVar3;
  BOOL BVar4;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x3e4);
  guard_check_icall(param_3,param_4);
  uVar2 = (*pcVar1)();
  *(undefined4 *)(this + 0x540) = uVar2;
  iVar3 = FUN_1017be4a(param_3,param_4);
  *(int *)(this + 0x460) = iVar3;
  if (iVar3 != 0) {
    local_20.x = *(LONG *)(iVar3 + 0xc);
    local_20.y = *(LONG *)(iVar3 + 0x10);
    ClientToScreen(*(HWND *)(this + 0x20),&local_20);
    NotifyWinEvent(0x8005,*(HWND *)(this + 0x20),-4,
                   CONCAT22((undefined2)local_20.y,(undefined2)local_20.x));
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  pt.y = param_4;
  pt.x = param_3;
  BVar4 = PtInRect(&local_18,pt);
  if (BVar4 != 0) {
    pt_00.y = param_4;
    pt_00.x = param_3;
    BVar4 = PtInRect((RECT *)(this + 0x414),pt_00);
    if (BVar4 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x3c4);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        CWnd::SetFocus((CWnd *)this);
      }
      goto LAB_101794e1;
    }
  }
  CDockablePane::OnLButtonDown((CDockablePane *)this,param_1,param_3,param_4);
LAB_101794e1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

