// rea decompile_all
// name: FUN_004d3bba
// address: 0x4d3bba
// body: available
// range: 0x4d3bba-0x4d3c69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d3c65 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d3bba(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 param_7)

{
  longlong *in_ECX;
  longlong lVar1;
  undefined4 uVar2;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((0x76b < param_1) && (param_2 - 1U < 0xc)) {
    if ((param_3 - 1U < 0x1f) && (((param_4 < 0x18 && (param_5 < 0x3c)) && (param_6 < 0x3c)))) {
      local_24 = param_4;
      local_1c = param_2 + -1;
      local_18 = param_1 + -0x76c;
      local_2c = param_6;
      local_c = param_7;
      local_28 = param_5;
      local_20 = param_3;
      lVar1 = FUN_0058783d(&local_2c);
      *in_ECX = lVar1;
      if (lVar1 != -1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      uVar2 = 0x80070057;
      goto LAB_004d3c65;
    }
  }
  uVar2 = 0x80004005;
LAB_004d3c65:
                    /* WARNING: Subroutine does not return */
  FUN_0040ed80(uVar2);
}

