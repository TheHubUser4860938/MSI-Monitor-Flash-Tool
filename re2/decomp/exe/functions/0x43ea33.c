// rea decompile_all
// name: FUN_0043ea33
// address: 0x43ea33
// body: available
// range: 0x43ea33-0x43eaed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43eae9 to 0x43e041 FUN_0043e041 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0043ea33(undefined4 param_1,undefined4 *param_2)

{
  uint local_10;
  uint local_c;
  byte local_5;
  
  *param_2 = 1;
  FUN_0043e7aa(&local_5);
  if (local_5 == 0xff) {
    FUN_0043e7f2(&local_c);
    if ((ushort)local_c == 0xfffe) {
      *param_2 = 2;
      FUN_0043e7aa(&local_5);
      if (local_5 != 0xff) goto LAB_0043ea59;
      FUN_0043e7f2(&local_c);
    }
    if ((ushort)local_c < 0xffff) {
      local_c = (uint)(ushort)local_c;
    }
    else {
      FUN_00450090(&local_c);
      if (local_c == 0xffffffff) {
        FUN_0043e83f(&local_10);
        if ((local_c != 0) || (local_c = local_10, 0x7fffffff < local_10)) {
                    /* WARNING: Subroutine does not return */
          FUN_0043e041(1,0);
        }
      }
    }
  }
  else {
LAB_0043ea59:
    local_c = (uint)local_5;
  }
  return local_c;
}

