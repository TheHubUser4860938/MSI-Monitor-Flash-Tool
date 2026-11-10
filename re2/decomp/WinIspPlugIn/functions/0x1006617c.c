// rea decompile_all
// name: FUN_1006617c
// address: 0x1006617c
// body: available
// range: 0x1006617c-0x1006622b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10066227 to 0x10047680 FUN_10047680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006617c(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
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
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if ((0x76b < param_1) && (param_2 - 1U < 0xc)) {
    if ((param_3 - 1U < 0x1f) && (((param_4 < 0x18 && (param_5 < 0x3c)) && (param_6 < 0x3c)))) {
      local_24 = param_4;
      local_1c = param_2 + -1;
      local_18 = param_1 + -0x76c;
      local_2c = param_6;
      local_c = param_7;
      local_28 = param_5;
      local_20 = param_3;
      lVar1 = FUN_101a9051(&local_2c);
      *in_ECX = lVar1;
      if (lVar1 != -1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      uVar2 = 0x80070057;
      goto LAB_10066227;
    }
  }
  uVar2 = 0x80004005;
LAB_10066227:
                    /* WARNING: Subroutine does not return */
  FUN_10047680(uVar2);
}

