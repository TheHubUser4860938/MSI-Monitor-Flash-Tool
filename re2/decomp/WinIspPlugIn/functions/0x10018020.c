// rea decompile_all
// name: FUN_10018020
// address: 0x10018020
// body: available
// range: 0x10018020-0x10018114 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10018020(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined4 local_10 [2];
  undefined1 local_5;
  
  local_10[0] = 0;
  local_5 = 0;
  if (in_ECX == 0) {
    local_10[0] = 0xff03;
    (**(code **)(*DAT_10249d10 + 0x13c))(0x6e,0x51,4,local_10);
    Sleep(500);
    local_10[0] = CONCAT13(local_10[0]._3_1_,0xcf0001);
    uVar2 = (**(code **)(*DAT_10249d10 + 0x74))(0x7c,0xce,3,local_10,0);
    Sleep(500);
    return uVar2;
  }
  iVar3 = DAT_1024be74;
  if (0 < DAT_1024be74) {
    while( true ) {
      local_10[0] = CONCAT13(local_10[0]._3_1_,0x78005a);
      (**(code **)(*DAT_10249d10 + 0x74))(0x7c,0x1e,3,local_10,0);
      Sleep(500);
      iVar1 = (**(code **)(*DAT_10249d10 + 0x58))(0x6e,0x23,1,&local_5);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + -1;
      Sleep(100);
      if (iVar3 < 1) {
        return 0xd41;
      }
    }
    if (0 < iVar3) {
      return 0;
    }
  }
  return 0xd41;
}

