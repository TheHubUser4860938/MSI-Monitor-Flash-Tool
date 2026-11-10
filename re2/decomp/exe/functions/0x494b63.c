// rea decompile_all
// name: CFrameImpl::RedrawCaptionButton
// address: 0x494b63
// body: available
// range: 0x494b63-0x494be4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::RedrawCaptionButton(class CMFCCaptionButtonEx *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameImpl::RedrawCaptionButton(CFrameImpl *this,CMFCCaptionButtonEx *param_1)

{
  code *pcVar1;
  LONG *pLVar2;
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (param_1 != (CMFCCaptionButtonEx *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1 + 0xc);
    guard_check_icall(local_18);
    pLVar2 = (LONG *)(*pcVar1)();
    ((LPRECT)(this + 0x44))->left = *pLVar2;
    *(LONG *)(this + 0x48) = pLVar2[1];
    *(LONG *)(this + 0x4c) = pLVar2[2];
    *(LONG *)(this + 0x50) = pLVar2[3];
    SendMessageW(*(HWND *)(*(int *)(this + 0xb0) + 0x20),0x85,0,0);
    SetRectEmpty((LPRECT)(this + 0x44));
    UpdateWindow(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

