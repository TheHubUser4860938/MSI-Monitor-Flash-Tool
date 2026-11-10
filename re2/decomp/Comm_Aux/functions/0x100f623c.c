// rea decompile_all
// name: CGlobalUtils::ForceAdjustLayout
// address: 0x100f623c
// body: available
// range: 0x100f623c-0x100f6341 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CGlobalUtils::ForceAdjustLayout(class CDockingManager *,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CGlobalUtils::ForceAdjustLayout(CGlobalUtils *this,CDockingManager *param_1,int param_2,int param_3)

{
  BOOL BVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (CDockingManager *)0x0) &&
     (((DAT_1020e3c0 != 0 || (param_2 != 0)) && (*(int *)(param_1 + 0xe4) != 0)))) {
    BVar1 = IsWindowVisible(*(HWND *)(*(int *)(param_1 + 0xe4) + 0x20));
    if ((BVar1 != 0) || (param_3 != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      SendMessageW(*(HWND *)(*(int *)(param_1 + 0xe4) + 0x20),0xb,0,0);
      GetWindowRect(*(HWND *)(*(int *)(param_1 + 0xe4) + 0x20),&local_18);
      CWnd::SetWindowPos(*(CWnd **)(param_1 + 0xe4),(CWnd *)0x0,-1,-1,
                         (local_18.right - local_18.left) + 1,(local_18.bottom - local_18.top) + 1,
                         0x16);
      CWnd::SetWindowPos(*(CWnd **)(param_1 + 0xe4),(CWnd *)0x0,-1,-1,local_18.right - local_18.left
                         ,local_18.bottom - local_18.top,0x16);
      SendMessageW(*(HWND *)(*(int *)(param_1 + 0xe4) + 0x20),0xb,1,0);
      RedrawWindow(*(HWND *)(*(int *)(param_1 + 0xe4) + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

