// rea decompile_all
// name: CMDIChildWnd::UpdateClientEdge
// address: 0x1010c033
// body: available
// range: 0x1010c033-0x1010c12f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMDIChildWnd::UpdateClientEdge(struct tagRECT *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIChildWnd::UpdateClientEdge(CMDIChildWnd *this,tagRECT *param_1)

{
  code *pcVar1;
  bool bVar2;
  CMDIFrameWnd *this_00;
  CMDIChildWnd *pCVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint dwNewLong;
  
  this_00 = GetMDIFrame(this);
  pCVar3 = CMDIFrameWnd::MDIGetActive(this_00,(int *)0x0);
  if (pCVar3 != (CMDIChildWnd *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x1c8);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      bVar2 = true;
      goto LAB_1010c074;
    }
  }
  bVar2 = false;
LAB_1010c074:
  if (((pCVar3 == (CMDIChildWnd *)0x0) || (pCVar3 == this)) && (!bVar2)) {
    uVar5 = GetWindowLongW(*(HWND *)(this_00 + 0x120),-0x14);
    if (((pCVar3 == (CMDIChildWnd *)0x0) ||
        (uVar6 = CWnd::GetExStyle((CWnd *)this), (uVar6 & 0x200) != 0)) ||
       (uVar6 = CWnd::GetExStyle((CWnd *)this), (uVar6 & 0x1000000) == 0)) {
      dwNewLong = uVar5 | 0x200;
    }
    else {
      dwNewLong = uVar5 & 0xfffffdff;
    }
    if (uVar5 != dwNewLong) {
      RedrawWindow(*(HWND *)(this_00 + 0x120),(RECT *)0x0,(HRGN)0x0,0x81);
      SetWindowLongW(*(HWND *)(this_00 + 0x120),-0x14,dwNewLong);
      SetWindowPos(*(HWND *)(this_00 + 0x120),(HWND)0x0,0,0,0,0,0x137);
      if (param_1 != (tagRECT *)0x0) {
        GetClientRect(*(HWND *)(this_00 + 0x120),param_1);
      }
      return 1;
    }
  }
  return 0;
}

