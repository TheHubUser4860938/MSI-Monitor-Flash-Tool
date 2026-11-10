// rea decompile_all
// name: CPane::OnMouseMove
// address: 0x1005795f
// body: available
// range: 0x1005795f-0x10057a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPane::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPane::OnMouseMove(CPane *this,undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  int dy;
  int dx;
  tagPOINT local_10;
  int *local_8;
  
  if (this[0x170] == (CPane)0x0) {
    FUN_100283ad();
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x1b8);
    guard_check_icall();
    uVar2 = (*pcVar1)();
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 2) != 0) {
        CMFCDragFrameImpl::MoveDragFrame((CMFCDragFrameImpl *)(this + 0x18c),0);
      }
    }
    else {
      local_10.x = 0;
      local_10.y = 0;
      GetCursorPos(&local_10);
      dy = local_10.y - *(int *)(this + 0x194);
      dx = local_10.x - *(int *)(this + 400);
      OffsetRect((LPRECT)(this + 0x150),dx,dy);
      UpdateVirtualRect(this,dx,dy);
      local_8 = *(int **)(this + 0xb8);
      if (local_8 != (int *)0x0) {
        pcVar1 = *(code **)(*local_8 + 0x280);
        guard_check_icall(this,param_1,dx,dy);
        (*pcVar1)();
        RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      }
      *(LONG *)(this + 400) = local_10.x;
      *(LONG *)(this + 0x194) = local_10.y;
    }
  }
  return;
}

