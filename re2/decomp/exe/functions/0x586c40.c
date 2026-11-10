// rea decompile_all
// name: FUN_00586c40
// address: 0x586c40
// body: available
// range: 0x586c40-0x586c7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x586c7a to 0x592318 FUN_00592318 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00586c40(int param_1)

{
  uint uVar1;
  bool bVar2;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar3;
  
  bVar2 = DAT_00619680 == 0;
  if ((!bVar2) && (bVar2 = false, (MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f))
  {
    uVar1 = FUN_00592318();
    return uVar1;
  }
  uVar1 = __fload_withFB();
  if (bVar2) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      if (DAT_00619454 != 0) {
        return 1;
      }
      uVar1 = __startOneArgErrorHandling();
    }
    return uVar1;
  }
  fVar3 = (float10)fcos(extraout_ST0);
  if ((in_FPUStatusWord & 0x400) != 0) {
    do {
      fVar3 = fVar3 - ROUND(fVar3 / _DAT_005e199a) * _DAT_005e199a;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fcos(fVar3);
  }
  if (DAT_00619454 != 0) {
    return (uint)in_FPUStatusWord;
  }
  uVar1 = __math_exit();
  return uVar1;
}

