// rea decompile_all
// name: FUN_10011c80
// address: 0x10011c80
// body: available
// range: 0x10011c80-0x10011d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011d96 to 0x1014f4d6 FUN_1014f4d6 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10011d9b to 0x1014f4d6 FUN_1014f4d6 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011c80(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar3;
  
  uVar1 = param_1;
  if (param_1 == 0) {
    uVar3 = 0;
LAB_10011c94:
    param_1 = param_1 & 0xffffff00;
    FUN_10011db0(uVar3,in_ECX,param_1,in_ECX);
    iVar2 = (int)(DAT_101def34 - DAT_101def30) / 0x244;
    if (DAT_101def30 != 0) {
      FUN_1000d0f0(DAT_101def34 - DAT_101def30,iVar2);
      FUN_1000d080(DAT_101def30,(int)(DAT_101def38 - DAT_101def30) / 0x244);
    }
    DAT_101def30 = uVar3;
    DAT_101def38 = uVar1 * 0x244 + uVar3;
    DAT_101def34 = iVar2 * 0x244 + uVar3;
    return;
  }
  if (param_1 < 0x70fe3d) {
    uVar3 = param_1 * 0x244;
    if (uVar3 < 0x1000) {
      uVar3 = FUN_10011f7d(uVar3);
      in_ECX = extraout_ECX_00;
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1014f4d6();
      }
      goto LAB_10011c94;
    }
    if (uVar3 < uVar3 + 0x23) {
      iVar2 = FUN_10011f7d(uVar3 + 0x23);
      if (iVar2 != 0) {
        uVar3 = iVar2 + 0x23U & 0xffffffe0;
        *(int *)(uVar3 - 4) = iVar2;
        in_ECX = extraout_ECX;
        goto LAB_10011c94;
      }
      goto LAB_10011d96;
    }
  }
  else {
    FUN_10149c04();
  }
  FUN_10149c04();
LAB_10011d96:
                    /* WARNING: Subroutine does not return */
  FUN_1014f4d6();
}

