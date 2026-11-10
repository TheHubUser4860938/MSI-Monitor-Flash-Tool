// rea decompile_all
// name: FUN_10012180
// address: 0x10012180
// body: available
// range: 0x10012180-0x10012240 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10012180(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar5 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_100491ae(0x18,DAT_1023dfec ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 0) {
        puVar3 = &DAT_1020e404;
      }
      else {
        puVar3 = *(undefined1 **)(iVar1 + 0x18);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = (undefined1 *)(iVar1 + 0x1c);
        }
      }
      uVar4 = FUN_10006790(puVar3);
      bVar5 = true;
      puVar2[1] = 0;
      local_8 = 2;
      *puVar2 = std::numpunct<char>::vftable;
      FUN_10012490(uVar4,1);
    }
    *param_1 = (int)puVar2;
    if (bVar5) {
      FUN_10006870();
    }
  }
  ExceptionList = local_10;
  return 4;
}

