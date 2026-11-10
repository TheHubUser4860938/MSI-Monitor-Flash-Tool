// rea decompile_all
// name: CMFCColorPickerCtrl::GetCursorPos
// address: 0x10148da6
// body: available
// range: 0x10148da6-0x10148e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CPoint __thiscall CMFCColorPickerCtrl::GetCursorPos(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorPickerCtrl::GetCursorPos(CMFCColorPickerCtrl *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  if (*(int *)(this + 0x80) == 1) {
    iVar2 = PointFromLum(this,*(double *)(this + 0x88));
    *in_stack_00000004 = local_18.left + 6 + *(int *)(this + 0xa8);
  }
  else {
    if (*(int *)(this + 0x80) != 2) goto LAB_10148e53;
    iVar1 = FUN_101548f0();
    iVar2 = FUN_101548f0();
    *in_stack_00000004 = iVar1;
  }
  in_stack_00000004[1] = iVar2;
LAB_10148e53:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

