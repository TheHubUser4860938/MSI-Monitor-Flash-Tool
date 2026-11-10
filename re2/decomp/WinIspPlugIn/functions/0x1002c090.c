// rea decompile_all
// name: FUN_1002c090
// address: 0x1002c090
// body: available
// range: 0x1002c090-0x1002c0ea inclusive
// range: 0x1002c0f0-0x1002c11b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1002c090(ushort *param_1)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *in_ECX;
  uint uVar5;
  ushort *puVar6;
  
  if (*param_1 == 0) {
    uVar5 = 0;
  }
  else {
    puVar6 = param_1;
    do {
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (uVar2 != 0);
    uVar5 = (int)puVar6 - (int)(param_1 + 1) >> 1;
  }
  puVar1 = (uint *)(in_ECX + 8);
  if (7 < *(uint *)(in_ECX + 10)) {
    in_ECX = *(ushort **)in_ECX;
  }
  uVar3 = *puVar1;
  uVar4 = uVar5;
  if (uVar3 < uVar5) {
    uVar4 = uVar3;
  }
  do {
    if (uVar4 == 0) {
      uVar4 = 0;
LAB_1002c0d9:
      if (uVar4 == 0) {
        if (uVar3 < uVar5) {
          return 0xffffffff;
        }
        uVar4 = (uint)(uVar5 < uVar3);
      }
      return uVar4;
    }
    if (*in_ECX != *param_1) {
      uVar4 = (-(uint)(*in_ECX < *param_1) & 0xfffffffe) + 1;
      goto LAB_1002c0d9;
    }
    in_ECX = in_ECX + 1;
    param_1 = param_1 + 1;
    uVar4 = uVar4 - 1;
  } while( true );
}

