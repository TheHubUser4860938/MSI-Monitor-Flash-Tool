// rea decompile_all
// name: FUN_1000e8c0
// address: 0x1000e8c0
// body: available
// range: 0x1000e8c0-0x1000ea14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e8c0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  undefined4 *puVar1;
  
  *in_ECX = *param_1;
  *(undefined1 *)(in_ECX + 1) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)((int)in_ECX + 5) = *(undefined1 *)((int)param_1 + 5);
  *(undefined1 *)((int)in_ECX + 6) = *(undefined1 *)((int)param_1 + 6);
  *(undefined1 *)((int)in_ECX + 7) = *(undefined1 *)((int)param_1 + 7);
  *(undefined1 *)(in_ECX + 2) = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)((int)in_ECX + 9) = *(undefined1 *)((int)param_1 + 9);
  *(undefined1 *)((int)in_ECX + 10) = *(undefined1 *)((int)param_1 + 10);
  *(undefined1 *)((int)in_ECX + 0xb) = *(undefined1 *)((int)param_1 + 0xb);
  if ((in_ECX + 3 != param_1 + 3) &&
     (puVar1 = (undefined4 *)(-(uint)(param_1 != (undefined4 *)0xfffffff4) & (uint)(param_1 + 4)),
     in_ECX + 4 != puVar1)) {
    FUN_10046260(puVar1,0,0xffffffff);
  }
  *(undefined2 *)(in_ECX + 0x10) = *(undefined2 *)(param_1 + 0x10);
  *(undefined1 *)((int)in_ECX + 0x42) = *(undefined1 *)((int)param_1 + 0x42);
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  *(undefined1 *)(in_ECX + 0x13) = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)((int)in_ECX + 0x4d) = *(undefined1 *)((int)param_1 + 0x4d);
  *(undefined1 *)((int)in_ECX + 0x4e) = *(undefined1 *)((int)param_1 + 0x4e);
  *(undefined1 *)((int)in_ECX + 0x4f) = *(undefined1 *)((int)param_1 + 0x4f);
  *(undefined1 *)(in_ECX + 0x14) = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)((int)in_ECX + 0x51) = *(undefined1 *)((int)param_1 + 0x51);
  *(undefined1 *)((int)in_ECX + 0x52) = *(undefined1 *)((int)param_1 + 0x52);
  *(undefined1 *)((int)in_ECX + 0x53) = *(undefined1 *)((int)param_1 + 0x53);
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  if ((in_ECX + 0x17 != param_1 + 0x17) &&
     (puVar1 = (undefined4 *)(-(uint)(param_1 != (undefined4 *)0xffffffa4) & (uint)(param_1 + 0x18))
     , in_ECX + 0x18 != puVar1)) {
    FUN_10046260(puVar1,0,0xffffffff);
  }
  in_ECX[0x24] = param_1[0x24];
  if ((in_ECX + 0x25 != param_1 + 0x25) &&
     (puVar1 = (undefined4 *)(-(uint)(param_1 != (undefined4 *)0xffffff6c) & (uint)(param_1 + 0x26))
     , in_ECX + 0x26 != puVar1)) {
    FUN_10046260(puVar1,0,0xffffffff);
  }
  if ((in_ECX + 0x32 != param_1 + 0x32) &&
     (puVar1 = (undefined4 *)(-(uint)(param_1 != (undefined4 *)0xffffff38) & (uint)(param_1 + 0x33))
     , in_ECX + 0x33 != puVar1)) {
    FUN_10046260(puVar1,0,0xffffffff);
  }
  return;
}

