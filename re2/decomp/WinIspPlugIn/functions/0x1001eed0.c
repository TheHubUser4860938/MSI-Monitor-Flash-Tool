// rea decompile_all
// name: FUN_1001eed0
// address: 0x1001eed0
// body: available
// range: 0x1001eed0-0x1001efe2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1001efbc) */
/* WARNING: Removing unreachable block (ram,0x1001ef27) */
/* WARNING: Removing unreachable block (ram,0x1001ef31) */
/* WARNING: Removing unreachable block (ram,0x1001ef3b) */
/* WARNING: Removing unreachable block (ram,0x1001efc5) */
/* WARNING: Removing unreachable block (ram,0x1001efcc) */

void FUN_1001eed0(void)

{
  int iVar1;
  undefined2 *in_ECX;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_1b;
  undefined4 uStack_17;
  undefined8 local_13;
  undefined1 local_b;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  uStack_1b = 0;
  uStack_17 = 0;
  local_b = 0;
  local_13 = 0;
  iVar1 = FUN_10017720();
  if ((((iVar1 == 0) && (iVar1 = FUN_10017780(), iVar1 == 0)) &&
      (iVar1 = FUN_10018120(), iVar1 == 0)) && (iVar1 = FUN_1001fed0(), iVar1 == 0)) {
    iVar1 = 2;
    *(undefined1 *)(in_ECX + 1) = 0;
    *(undefined1 *)((int)in_ECX + 3) = (undefined1)uStack_1b;
    *in_ECX = 0;
    *(undefined1 *)(in_ECX + 4) = 0;
    puVar2 = (undefined1 *)((int)in_ECX + 0xb);
    puVar3 = &uStack_1b;
    do {
      (puVar2 + 1)[(int)in_ECX + (8 - ((int)in_ECX + 0xb))] = *(byte *)((int)puVar3 + -1) & 0x3f;
      *puVar2 = *(undefined1 *)puVar3;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + 3);
    } while (iVar1 != 0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

