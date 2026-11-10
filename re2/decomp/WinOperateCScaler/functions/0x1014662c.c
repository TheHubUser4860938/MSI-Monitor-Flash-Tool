// rea decompile_all
// name: FUN_1014662c
// address: 0x1014662c
// body: available
// range: 0x1014662c-0x101466b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101466af to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1014662c(WPARAM param_1)

{
  CNoTrackObject *this;
  CSize *pCVar1;
  CWnd *in_ECX;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  this = CProcessLocalObject::GetData
                   ((CProcessLocalObject *)&DAT_1020c8a0,(_func_CNoTrackObject_ptr *)&LAB_101462d7);
  if (this != (CNoTrackObject *)0x0) {
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x198,param_1,(LPARAM)&local_18);
    pCVar1 = _AFX_CHECKLIST_STATE::GetCheckBoxSize((_AFX_CHECKLIST_STATE *)this,in_ECX);
    local_18.right = local_18.left + 2 + *(int *)pCVar1;
    InvalidateRect(*(HWND *)(in_ECX + 0x20),&local_18,0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

