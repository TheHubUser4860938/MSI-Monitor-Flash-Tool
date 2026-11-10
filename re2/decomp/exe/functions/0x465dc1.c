// rea decompile_all
// name: FUN_00465dc1
// address: 0x465dc1
// body: available
// range: 0x465dc1-0x465f1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x465f18 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00465dc1(uint param_1,uint param_2,double param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  double local_20;
  double local_18;
  double local_10;
  int local_8;
  
  if ((-1 < param_4) && (-1 < param_5)) {
    local_8 = param_4 + param_5;
    if (local_8 == 0) {
      uVar1 = 0;
    }
    else {
      FUN_00465b6d((((int)((param_1 >> 0x10 & 0xff) * param_4 + (param_2 >> 0x10 & 0xff) * param_5)
                     / local_8 & 0xffU) << 8 |
                   (int)((param_1 >> 8 & 0xff) * param_4 + (param_2 >> 8 & 0xff) * param_5) /
                   local_8 & 0xffU) << 8 |
                   (int)((param_1 & 0xff) * param_4 + (param_2 & 0xff) * param_5) / local_8 & 0xffU,
                   &local_30,&local_20,local_50);
      FUN_00465b6d(param_2,local_58,&local_18,&local_28);
      local_10 = (double)local_8;
      uVar1 = FUN_00464bf4(local_30,((double)param_4 * local_20 + (double)param_5 * local_18) /
                                    local_10,local_28);
      if (param_3 != 1.0) {
        FUN_004659f1(uVar1,&local_48,&local_40,&local_38);
        local_38 = local_38 * param_3;
        if (1.0 < local_38) {
          local_38 = 1.0;
        }
        uVar1 = FUN_004649d1(local_48,local_38,local_40);
      }
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

