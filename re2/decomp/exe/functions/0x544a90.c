// rea decompile_all
// name: CMFCImagePaintArea::OnSetCursor
// address: 0x544a90
// body: available
// range: 0x544a90-0x544b8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCImagePaintArea::OnSetCursor(class CWnd *,unsigned int,unsigned
   int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCImagePaintArea::OnSetCursor(CMFCImagePaintArea *this,CWnd *param_1,uint param_2,uint param_3)

{
  POINT pt;
  BOOL BVar1;
  int iVar2;
  HCURSOR hCursor;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_20.x = 0;
  local_20.y = 0;
  GetCursorPos(&local_20);
  ScreenToClient(*(HWND *)(this + 0x20),&local_20);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  local_18.right = *(int *)(this + 200) * *(int *)(this + 0xa4) + local_18.left;
  local_18.bottom = *(int *)(this + 0xcc) * *(int *)(this + 0xa8) + local_18.top;
  pt.y = local_20.y;
  pt.x = local_20.x;
  BVar1 = PtInRect(&local_18,pt);
  if (BVar1 == 0) {
LAB_00544b72:
    FUN_0042ec70();
  }
  else {
    iVar2 = *(int *)(this + 0xf4);
    if (iVar2 == 0) {
      hCursor = *(HCURSOR *)(this + 0xb0);
    }
    else if (iVar2 == 1) {
      hCursor = *(HCURSOR *)(this + 0xb4);
    }
    else if (iVar2 == 2) {
      hCursor = *(HCURSOR *)(this + 0xb8);
    }
    else if (iVar2 == 3) {
      hCursor = *(HCURSOR *)(this + 0xbc);
    }
    else if (iVar2 == 4) {
      hCursor = *(HCURSOR *)(this + 0xc0);
    }
    else {
      if (iVar2 != 5) goto LAB_00544b72;
      hCursor = *(HCURSOR *)(this + 0xc4);
    }
    SetCursor(hCursor);
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

