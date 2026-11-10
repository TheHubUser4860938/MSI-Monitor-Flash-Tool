// rea decompile_all
// name: FUN_10153e41
// address: 0x10153e41
// body: available
// range: 0x10153e41-0x10153ec0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10153ebc to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10153e41(LPCWSTR param_1)

{
  code *pcVar1;
  int iVar2;
  int in_ECX;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (param_1 != (LPCWSTR)0x0) {
    iVar2 = lstrcmpW(*(LPCWSTR *)(*(int *)(in_ECX + 0x28) + 0x60),param_1);
    if (iVar2 != 0) {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x28) + 0xb4);
      guard_check_icall(param_1);
      (*pcVar1)();
      iVar2 = *(int *)(in_ECX + 0x28);
      local_18.left = *(LONG *)(iVar2 + 0x74);
      local_18.top = *(LONG *)(iVar2 + 0x78);
      local_18.right = *(LONG *)(iVar2 + 0x7c);
      local_18.bottom = *(LONG *)(iVar2 + 0x80);
      RedrawWindow(*(HWND *)(*(int *)(in_ECX + 0x14) + 0x20),&local_18,(HRGN)0x0,0x105);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

