// rea decompile_all
// name: FUN_1004ee24
// address: 0x1004ee24
// body: available
// range: 0x1004ee24-0x1004ef48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004ef44 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ee24(int param_1)

{
  undefined4 *puVar1;
  CWnd *this;
  int in_ECX;
  int iVar2;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(in_ECX + 500) = 0;
  *(undefined4 *)(in_ECX + 0x1f0) = 0;
  if (((in_ECX != 0) && (*(int *)(in_ECX + 0x20) != 0)) &&
     (*(CWnd **)(in_ECX + 0x110) != (CWnd *)0x0)) {
    CWnd::SetFocus(*(CWnd **)(in_ECX + 0x110));
    this = (CWnd *)FUN_1004ef4a(param_1);
    if (this != (CWnd *)0x0) {
      CWnd::SubclassWindow((CWnd *)(in_ECX + 0x120),*(HWND__ **)(this + 0x20));
      FUN_1004317e(*(undefined4 *)(in_ECX + 0xe0));
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      CListCtrl::GetItemRect(*(CListCtrl **)(in_ECX + 0x110),param_1,&local_28,2);
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_18);
      CWnd::SetWindowPos(this,(CWnd *)0x0,-1,-1,local_28.right - local_28.left,
                         local_18.bottom - local_18.top,0x16);
      *(int *)(in_ECX + 500) = in_ECX;
      *(undefined4 *)(in_ECX + 0x1f0) = 1;
      iVar2 = *(int *)(in_ECX + 0x88);
      while (iVar2 != 0) {
        puVar1 = (undefined4 *)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 4);
        if ((CWnd *)*puVar1 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1001d023();
        }
        CWnd::EnableWindow((CWnd *)*puVar1,0);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

