// rea decompile_all
// name: FUN_10011db0
// address: 0x10011db0
// body: available
// range: 0x10011db0-0x10011e56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_10011db0(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 *in_ECX;
  int iVar2;
  undefined2 *in_EDX;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (in_ECX == in_EDX) {
    return param_1;
  }
  puVar5 = param_1 + 0xb;
  puVar3 = in_ECX + 0x1a;
  do {
    if (param_1 != (undefined4 *)0x0) {
      FUN_10010b90(-(uint)(puVar3 != (undefined2 *)0x34) & (uint)(puVar3 + -0x18));
      *param_1 = CCpRsString::vftable;
      puVar5[1] = 0xf;
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + -4) = 0;
      *(undefined2 *)(puVar5 + 2) = *puVar3;
      puVar5[3] = *(undefined4 *)(puVar3 + 2);
      puVar4 = (undefined4 *)(puVar3 + 4);
      puVar6 = puVar5 + 4;
      for (iVar2 = 0x82; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    param_1 = param_1 + 0x91;
    puVar5 = puVar5 + 0x91;
    puVar1 = puVar3 + 0x108;
    puVar3 = puVar3 + 0x122;
  } while (puVar1 != in_EDX);
  return param_1;
}

