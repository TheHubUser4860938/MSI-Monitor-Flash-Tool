// rea decompile_all
// name: FUN_00441739
// address: 0x441739
// body: available
// range: 0x441739-0x4417c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4417bd to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441739(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9,int param_10,undefined4 param_11)

{
  if (param_1 != (undefined4 *)0x0) {
    *(short *)(param_1 + 0xc) = (short)param_3;
    param_1[8] = (param_3 & 0xffff) >> 0xe & 1;
    param_1[5] = param_11;
    param_1[9] = param_7;
    *param_1 = param_2;
    *(undefined1 *)((int)param_1 + 0x32) = param_5;
    *(undefined1 *)((int)param_1 + 0x33) = param_6;
    param_1[1] = param_8;
    param_1[10] = param_4;
    param_1[0xb] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[7] = 1;
    if (param_9 != 0) {
      param_1[7] = 3;
      param_1[2] = param_9;
    }
    if (param_10 != 0) {
      param_1[7] = param_1[7] | 4;
      param_1[3] = param_10;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040ed80(0x80004005);
}

