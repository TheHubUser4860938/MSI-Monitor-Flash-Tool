// rea decompile_all
// name: CMFCCaptionBar::OnMouseMove
// address: 0x10114208
// body: available
// range: 0x10114208-0x1011430f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCCaptionBar::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCCaptionBar::OnMouseMove(CMFCCaptionBar *this,uint param_1,LONG param_3,LONG param_4)

{
  RECT *lprc;
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  undefined4 uVar2;
  tagTRACKMOUSEEVENT local_14;
  
  CPane::OnMouseMove((CPane *)this,param_1,param_3,param_4);
  if ((*(int *)(this + 0x458) != 0) && (*(int *)(this + 0x480) != 0)) {
    pt.y = param_4;
    pt.x = param_3;
    BVar1 = PtInRect((RECT *)(this + 0x460),pt);
    if (*(int *)(this + 0x474) != BVar1) {
      *(BOOL *)(this + 0x474) = BVar1;
      if (((param_1 & 1) == 0) || (BVar1 == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined4 *)(this + 0x470) = uVar2;
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0x460),1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  lprc = (RECT *)(this + 0x4ac);
  BVar1 = IsRectEmpty(lprc);
  if (BVar1 == 0) {
    pt_00.y = param_4;
    pt_00.x = param_3;
    BVar1 = PtInRect(lprc,pt_00);
    if (*(int *)(this + 0x4a4) != BVar1) {
      *(BOOL *)(this + 0x4a4) = BVar1;
      if (((param_1 & 1) == 0) || (BVar1 == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined4 *)(this + 0x4a0) = uVar2;
      InvalidateRect(*(HWND *)(this + 0x20),lprc,1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  if (*(int *)(this + 0x47c) == 0) {
    local_14.hwndTrack = *(HWND *)(this + 0x20);
    *(undefined4 *)(this + 0x47c) = 1;
    local_14.cbSize = 0x10;
    local_14.dwFlags = 2;
    TrackMouseEvent(&local_14);
  }
  return;
}

