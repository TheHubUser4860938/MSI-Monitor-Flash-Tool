// rea decompile_all
// name: FUN_10015970
// address: 0x10015970
// body: available
// range: 0x10015970-0x10015adc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10015970(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_22c [125];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  local_c = 0;
  piStack_28 = &local_c;
  uStack_2c = 0x1001598f;
  iVar1 = FUN_100012b0();
  if ((iVar1 == 0) || (iVar1 == -0xe)) {
    if (iVar1 == -0xe) {
      DAT_1020b240 = (code *)0x0;
    }
    if ((DAT_1020b240 != (code *)0x0) && (DAT_1020b244 != _DAT_1020aad4)) {
      DAT_1020b240 = (code *)0x0;
    }
    if (((DAT_1020b240 == (code *)0x0) && (local_c != 0)) && (DAT_1020aa90 != (code *)0x0)) {
      piStack_28 = (int *)0xfa0b9a59;
      uStack_2c = 0x10015a01;
      DAT_1020b240 = (code *)(*DAT_1020aa90)();
      DAT_1020b244 = _DAT_1020aad4;
    }
    if (DAT_1020b240 == (code *)0x0) {
      DAT_1020aac4 = DAT_1020aac4 + -1;
      iVar1 = -3;
    }
    else {
      local_8 = DAT_1020b240;
      local_14 = 0;
      local_10 = 0;
      if (DAT_1020aa98 != (code *)0x0) {
        piStack_28 = &local_14;
        uStack_2c = 0xfa0b9a59;
        uStack_30 = 0x10015a72;
        (*DAT_1020aa98)();
      }
      puVar2 = auStack_22c;
      for (iVar1 = 0x81; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
          iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *(undefined4 *)register0x00000010;
        puVar2 = puVar2 + 1;
      }
      iVar1 = (*local_8)();
      if (DAT_1020aa9c != (code *)0x0) {
        uStack_2c = local_10;
        uStack_30 = local_14;
        uStack_34 = 0xfa0b9a59;
        uStack_38 = 0x10015aba;
        piStack_28 = (int *)iVar1;
        (*DAT_1020aa9c)();
      }
      DAT_1020aac4 = DAT_1020aac4 + -1;
    }
  }
  return iVar1;
}

