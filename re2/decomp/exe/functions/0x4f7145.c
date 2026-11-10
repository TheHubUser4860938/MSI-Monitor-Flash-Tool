// rea decompile_all
// name: CMFCDropDownFrame::OnDestroy
// address: 0x4f7145
// body: available
// range: 0x4f7145-0x4f71cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCDropDownFrame::OnDestroy(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCDropDownFrame::OnDestroy(CMFCDropDownFrame *this)

{
  CObject *pCVar1;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (*(int *)(this + 0x134) != 0) {
    *(undefined4 *)(*(int *)(this + 0x134) + 0x78) = 0;
    *(uint *)(*(int *)(this + 0x134) + 0x24) = *(uint *)(*(int *)(this + 0x134) + 0x24) & 0xfffdffff
    ;
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_0060c580,
                                *(CObject **)(*(int *)(this + 0x134) + 0x6c));
    if (pCVar1 != (CObject *)0x0) {
      local_c.x = 0;
      local_c.y = 0;
      GetCursorPos(&local_c);
      ScreenToClient(*(HWND *)(pCVar1 + 0x20),&local_c);
      SendMessageW(*(HWND *)(pCVar1 + 0x20),0x202,0,
                   CONCAT22((undefined2)local_c.y,(undefined2)local_c.x));
    }
  }
  CFrameWnd::OnDestroy((CFrameWnd *)this);
  return;
}

