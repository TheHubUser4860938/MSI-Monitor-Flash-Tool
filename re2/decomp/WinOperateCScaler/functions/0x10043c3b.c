// rea decompile_all
// name: CMFCEditBrowseCtrl::OnMouseMove
// address: 0x10043c3b
// body: available
// range: 0x10043c3b-0x10043cc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCEditBrowseCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCEditBrowseCtrl::OnMouseMove
          (CMFCEditBrowseCtrl *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  
  if (*(int *)(this + 0x8c) == 0) {
    if (*(int *)(this + 0x88) != 0) {
      pt_00.y = param_4;
      pt_00.x = param_3;
      BVar1 = PtInRect((RECT *)(this + 0x94),pt_00);
      if (BVar1 == 0) {
        *(undefined4 *)(this + 0x88) = 0;
        ReleaseCapture();
        RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x401);
      }
    }
    FUN_100283ad();
  }
  else {
    pt.y = param_4;
    pt.x = param_3;
    BVar1 = PtInRect((RECT *)(this + 0x94),pt);
    if (BVar1 != *(int *)(this + 0x84)) {
      *(BOOL *)(this + 0x84) = BVar1;
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x401);
    }
  }
  return;
}

