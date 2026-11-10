// rea decompile_all
// name: CMFCImagePaintArea::OnLButtonDown
// address: 0x10140b7b
// body: available
// range: 0x10140b7b-0x10140c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCImagePaintArea::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCImagePaintArea::OnLButtonDown
          (CMFCImagePaintArea *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  tagPOINT tVar1;
  BOOL BVar2;
  HWND pHVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xac) != 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    local_18.right = *(int *)(this + 200) * *(int *)(this + 0xa4) + local_18.left;
    local_18.bottom = *(int *)(this + 0xcc) * *(int *)(this + 0xa8) + local_18.top;
    InflateRect(&local_18,-1,-1);
    pt.y = param_4;
    pt.x = param_3;
    BVar2 = PtInRect(&local_18,pt);
    if (BVar2 != 0) {
      if (*(int *)(this + 0xf4) == 0) {
        tVar1.y = param_4;
        tVar1.x = param_3;
        DrawPixel(this,tVar1);
      }
      else if (*(int *)(this + 0xf4) - 2U < 3) {
        ScreenToBitmap(this,(CPoint *)&param_3);
        *(LONG *)(this + 0xe0) = param_3;
        *(LONG *)(this + 0xe4) = param_4;
        *(LONG *)(this + 0xe8) = param_3;
        *(LONG *)(this + 0xec) = param_4;
      }
      pHVar3 = SetCapture(*(HWND *)(this + 0x20));
      CWnd::FromHandle(pHVar3);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

