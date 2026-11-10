// rea decompile_all
// name: CMFCTasksPane::OnCancelMode
// address: 0x54fcf1
// body: available
// range: 0x54fcf1-0x54fdec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::OnCancelMode(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::OnCancelMode(CMFCTasksPane *this)

{
  int iVar1;
  RECT *pRVar2;
  RECT local_38;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  CDockablePane::OnCancelMode((CDockablePane *)this);
  iVar1 = *(int *)(this + 0x45c);
  if (iVar1 == 0) {
    if (*(int *)(this + 0x460) != 0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      goto LAB_0054fd3b;
    }
  }
  else {
    local_18.left = *(LONG *)(iVar1 + 0xc);
    local_18.top = *(LONG *)(iVar1 + 0x10);
    local_18.right = *(LONG *)(iVar1 + 0x14);
    local_18.bottom = *(LONG *)(iVar1 + 0x18);
LAB_0054fd3b:
    *(undefined4 *)(this + 0x45c) = 0;
    *(undefined4 *)(this + 0x460) = 0;
    local_28.left = local_18.left;
    local_28.top = local_18.top;
    local_28.right = local_18.right;
    local_28.bottom = local_18.bottom;
    ReleaseCapture();
    RedrawWindow(*(HWND *)(this + 0x20),&local_28,(HRGN)0x0,0x105);
  }
  iVar1 = *(int *)(this + 0x53c);
  if (iVar1 == 0) {
    if (*(int *)(this + 0x540) == 0) goto LAB_0054fdd0;
    local_18.left = 0;
    pRVar2 = &local_18;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
  }
  else {
    local_28.left = *(LONG *)(iVar1 + 0x34);
    local_28.top = *(LONG *)(iVar1 + 0x38);
    local_28.right = *(LONG *)(iVar1 + 0x3c);
    local_28.bottom = *(LONG *)(iVar1 + 0x40);
    pRVar2 = &local_28;
  }
  *(undefined4 *)(this + 0x53c) = 0;
  local_38.left = pRVar2->left;
  *(undefined4 *)(this + 0x540) = 0;
  local_38.top = pRVar2->top;
  local_38.right = pRVar2->right;
  local_38.bottom = pRVar2->bottom;
  ReleaseCapture();
  RedrawWindow(*(HWND *)(this + 0x20),&local_38,(HRGN)0x0,0x105);
LAB_0054fdd0:
  *(undefined4 *)(this + 0x460) = 0;
  *(undefined4 *)(this + 0x540) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

