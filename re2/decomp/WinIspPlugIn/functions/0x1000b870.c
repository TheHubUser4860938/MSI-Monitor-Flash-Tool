// rea decompile_all
// name: FUN_1000b870
// address: 0x1000b870
// body: available
// range: 0x1000b870-0x1000b8fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000b870(void)

{
  uint uVar1;
  int *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101c1010;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *(int *)(*in_ECX + 4) + (int)in_ECX;
  if (*(int *)(iVar2 + 0xc) == 0) {
    if (*(int *)(iVar2 + 0x3c) != 0) {
      FUN_1000c0d0(DAT_1023dfec ^ (uint)&stack0xfffffffc);
    }
    iVar2 = *(int *)(*in_ECX + 4) + (int)in_ECX;
    if (*(int *)(iVar2 + 0xc) == 0) {
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)*in_ECX >> 8),1);
    }
  }
  uVar1 = *(uint *)(iVar2 + 0xc) | 6;
  if (*(int *)(iVar2 + 0x38) != 0) {
    uVar1 = *(uint *)(iVar2 + 0xc) | 2;
  }
  uVar1 = FUN_100071e0(uVar1,0);
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}

