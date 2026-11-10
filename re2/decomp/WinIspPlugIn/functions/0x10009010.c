// rea decompile_all
// name: FUN_10009010
// address: 0x10009010
// body: available
// range: 0x10009010-0x1000907c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10009010(ushort *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *in_ECX;
  
  puVar1 = (uint *)(param_1 + 8);
  if (7 < *(uint *)(param_1 + 10)) {
    param_1 = *(ushort **)param_1;
  }
  puVar2 = (uint *)(in_ECX + 8);
  if (7 < *(uint *)(in_ECX + 10)) {
    in_ECX = *(ushort **)in_ECX;
  }
  uVar3 = *puVar1;
  uVar4 = *puVar2;
  uVar5 = uVar3;
  if (uVar4 < uVar3) {
    uVar5 = uVar4;
  }
  do {
    if (uVar5 == 0) {
      uVar5 = 0;
LAB_10009040:
      if (uVar5 == 0) {
        if (uVar4 < uVar3) {
          return 0xffffffff;
        }
        uVar5 = (uint)(uVar3 < uVar4);
      }
      return uVar5;
    }
    if (*in_ECX != *param_1) {
      uVar5 = (-(uint)(*in_ECX < *param_1) & 0xfffffffe) + 1;
      goto LAB_10009040;
    }
    in_ECX = in_ECX + 1;
    param_1 = param_1 + 1;
    uVar5 = uVar5 - 1;
  } while( true );
}

