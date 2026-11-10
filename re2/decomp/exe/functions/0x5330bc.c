// rea decompile_all
// name: CMFCEditBrowseCtrl::OnLButtonUp
// address: 0x5330bc
// body: available
// range: 0x5330bc-0x53312b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCEditBrowseCtrl::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCEditBrowseCtrl::OnLButtonUp
          (CMFCEditBrowseCtrl *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  BOOL BVar2;
  
  if (*(int *)(this + 0x8c) == 0) {
    FUN_0042ec70();
  }
  else {
    ReleaseCapture();
    *(undefined4 *)(this + 0x84) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
    *(undefined4 *)(this + 0x88) = 0;
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x401);
    pt.y = param_4;
    pt.x = param_3;
    BVar2 = PtInRect((RECT *)(this + 0x94),pt);
    if (BVar2 != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x164);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}

