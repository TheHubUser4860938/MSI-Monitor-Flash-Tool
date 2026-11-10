// rea decompile_all
// name: FUN_10033b40
// address: 0x10033b40
// body: available
// range: 0x10033b40-0x10033bea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10033b40(int *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c2f7f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar4 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    iVar1 = FUN_100491ae(0x44,DAT_1023dfec ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 0) {
        puVar2 = &DAT_1020e404;
      }
      else {
        puVar2 = *(undefined1 **)(iVar1 + 0x18);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)(iVar1 + 0x1c);
        }
      }
      uVar3 = FUN_10006790(puVar2);
      bVar4 = true;
      iVar1 = FUN_10033ae0(uVar3,0);
    }
    *param_1 = iVar1;
    if (bVar4) {
      FUN_10006870();
    }
  }
  ExceptionList = local_10;
  return 2;
}

