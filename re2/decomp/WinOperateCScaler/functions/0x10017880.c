// rea decompile_all
// name: FUN_10017880
// address: 0x10017880
// body: available
// range: 0x10017880-0x100178ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017880(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  undefined1 *puVar3;
  
  uVar1 = in_ECX[1];
  if ((param_1 < uVar1) && (uVar2 = *in_ECX, uVar2 <= param_1)) {
    if (uVar1 == in_ECX[2]) {
      FUN_1000f570(1);
    }
    puVar3 = (undefined1 *)in_ECX[1];
    if (puVar3 == (undefined1 *)0x0) goto LAB_100178f6;
    param_1 = *in_ECX + ((int)(param_1 - uVar2) / 0x18) * 0x18;
  }
  else {
    if (uVar1 == in_ECX[2]) {
      FUN_1000f570(1);
    }
    puVar3 = (undefined1 *)in_ECX[1];
    if (puVar3 == (undefined1 *)0x0) goto LAB_100178f6;
  }
  *(undefined4 *)(puVar3 + 0x14) = 0xf;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *puVar3 = 0;
  FUN_100035d0(param_1);
LAB_100178f6:
  in_ECX[1] = in_ECX[1] + 0x18;
  return;
}

