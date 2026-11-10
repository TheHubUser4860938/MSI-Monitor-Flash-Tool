// rea decompile_all
// name: CVSListBoxBase::OnSetFont
// address: 0x100446a6
// body: available
// range: 0x100446a6-0x1004473e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CVSListBoxBase::OnSetFont(class CFont *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CVSListBoxBase::OnSetFont(CVSListBoxBase *this,CFont *param_1,int param_2)

{
  HFONT pHVar1;
  HWND hWnd;
  BOOL BVar2;
  LOGFONTW local_64;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  FUN_1001d029();
  if (param_1 != (CFont *)0x0) {
    GetObjectW(*(HANDLE *)(param_1 + 4),0x5c,&local_64);
    CGdiObject::DeleteObject((CGdiObject *)(this + 0x104));
    pHVar1 = CreateFontIndirectW(&local_64);
    CMenu::Attach((CMenu *)(this + 0x104),(HMENU__ *)pHVar1);
  }
  if (this == (CVSListBoxBase *)0x0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = *(HWND *)(this + 0x20);
  }
  BVar2 = IsWindow(hWnd);
  if (BVar2 != 0) {
    FUN_10043632();
    if (param_2 != 0) {
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

