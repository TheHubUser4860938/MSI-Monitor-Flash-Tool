// rea decompile_all
// name: FUN_0048fa42
// address: 0x48fa42
// body: available
// range: 0x48fa42-0x48fad8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x48fad4 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048fa42(undefined4 *param_1)

{
  int in_ECX;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  ICONINFO local_18;
  
  if (*(int *)(in_ECX + 0x2d4) < 1) {
    if (*(int *)(in_ECX + 0x2cc) == 0) {
      *param_1 = 0;
      local_28 = 0;
    }
    else {
      _memset(&local_18,0,0x14);
      GetIconInfo(*(HICON *)(in_ECX + 0x2cc),&local_18);
      GetObjectW(local_18.hbmColor,0x18,local_30);
      DeleteObject(local_18.hbmColor);
      DeleteObject(local_18.hbmMask);
      *param_1 = local_2c;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x2cc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    *param_1 = *(undefined4 *)(in_ECX + 0x324);
    local_28 = *(undefined4 *)(in_ECX + 0x328);
  }
  param_1[1] = local_28;
  return;
}

