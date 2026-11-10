// rea decompile_all
// name: CPreviewDC::MirrorFont
// address: 0x1017e37c
// body: available
// range: 0x1017e37c-0x1017e576 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewDC::MirrorFont(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewDC::MirrorFont(CPreviewDC *this)

{
  code *pcVar1;
  HFONT h;
  int iVar2;
  int iVar3;
  tagSIZE local_b4;
  tagSIZE local_ac;
  HFONT local_a4;
  LOGFONTW local_a0;
  tagTEXTMETRICW local_44;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 8) != 0) {
    if (*(int *)(this + 0x2c) == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x24);
      guard_check_icall(0xe);
      (*pcVar1)();
    }
    else if (*(int *)(this + 4) != 0) {
      GetObjectW(*(HANDLE *)(this + 0x2c),0x5c,&local_a0);
      GetTextFaceW(*(HDC *)(this + 8),0x20,local_a0.lfFaceName);
      GetTextMetricsW(*(HDC *)(this + 8),&local_44);
      if (local_44.tmHeight < 0) {
        local_a0.lfHeight = local_44.tmHeight;
      }
      else {
        local_a0.lfHeight = local_44.tmInternalLeading - local_44.tmHeight;
      }
      local_a0.lfWidth = local_44.tmAveCharWidth;
      local_a0.lfWeight = local_44.tmWeight;
      local_a0.lfItalic = local_44.tmItalic;
      local_a0.lfUnderline = local_44.tmUnderlined;
      local_a0.lfStrikeOut = local_44.tmStruckOut;
      local_a0.lfCharSet = local_44.tmCharSet;
      local_a0.lfPitchAndFamily = local_44.tmPitchAndFamily;
      local_a4 = CreateFontIndirectW(&local_a0);
      SelectObject(*(HDC *)(this + 4),local_a4);
      GetTextMetricsW(*(HDC *)(this + 4),&local_44);
      iVar3 = -local_a0.lfHeight;
      if (local_44.tmHeight < 0) {
        iVar2 = -local_44.tmHeight;
      }
      else {
        iVar2 = local_44.tmHeight - local_44.tmInternalLeading;
      }
      local_ac.cx = 0;
      local_ac.cy = 0;
      GetWindowExtEx(*(HDC *)(this + 4),&local_ac);
      local_b4.cx = 0;
      local_b4.cy = 0;
      GetViewportExtEx(*(HDC *)(this + 4),&local_b4);
      if (local_ac.cy < 0) {
        local_ac.cy = -local_ac.cy;
      }
      if (local_b4.cy < 0) {
        local_b4.cy = -local_b4.cy;
      }
      iVar3 = MulDiv(iVar3,local_b4.cy,local_ac.cy);
      iVar2 = MulDiv(iVar2,local_b4.cy,local_ac.cy);
      h = local_a4;
      if (iVar3 < iVar2) {
        local_a0.lfFaceName[0] = L'\0';
        local_a0.lfPitchAndFamily = ((local_a0.lfPitchAndFamily & 0xf0) != 0x50) - 1U & 0x50;
        h = CreateFontIndirectW(&local_a0);
        SelectObject(*(HDC *)(this + 4),h);
        DeleteObject(local_a4);
      }
      FUN_1005f9dd(this + 0x28);
      *(HFONT *)(this + 0x28) = h;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

