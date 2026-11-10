// rea decompile_all
// name: FUN_10005c30
// address: 0x10005c30
// body: available
// range: 0x10005c30-0x10005cd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_10005c30(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 5;
    do {
      if (param_3 != (uint *)0x0) {
        param_3[5] = 0xf;
        param_3[4] = 0;
        *(undefined1 *)param_3 = 0;
        if (*puVar2 < 0x10) {
          if (puVar2[-1] + 1 != 0) {
            FUN_1016b1e0(param_3,puVar2 + -5,puVar2[-1] + 1);
          }
        }
        else {
          *param_3 = puVar2[-5];
          puVar2[-5] = 0;
        }
        param_3[4] = puVar2[-1];
        param_3[5] = *puVar2;
        *puVar2 = 0xf;
        puVar2[-1] = 0;
        if (*puVar2 < 0x10) {
          puVar1 = puVar2 + -5;
        }
        else {
          puVar1 = (uint *)puVar2[-5];
        }
        *(undefined1 *)puVar1 = 0;
      }
      param_3 = param_3 + 6;
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 6;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}

