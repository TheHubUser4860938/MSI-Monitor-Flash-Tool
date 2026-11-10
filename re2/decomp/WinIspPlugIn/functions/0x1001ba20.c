// rea decompile_all
// name: FUN_1001ba20
// address: 0x1001ba20
// body: available
// range: 0x1001ba20-0x1001bb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1001ba20(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  int local_c;
  char local_5;
  
  local_5 = '\0';
  if (DAT_1024a380 == 0) {
    return 0;
  }
  if (DAT_1024a2f0 != 0) {
    if (DAT_1024a2f0 != 1) {
      return 0;
    }
    iVar1 = FUN_10019df0();
    if (iVar1 == 0) {
      return 0xd21;
    }
    if (local_5 == 'n') {
      iVar1 = FUN_100193a0();
      return iVar1;
    }
    if (local_5 != '|') {
      return 0;
    }
    iVar1 = FUN_100194f0();
    return iVar1;
  }
  iVar1 = FUN_10017720();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_10017780();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (local_5 == 'j') {
    iVar1 = FUN_10017ef0();
  }
  else {
    if (local_5 != '|') goto LAB_1001ba8d;
    iVar1 = FUN_10018020();
  }
  if (iVar1 != 0) {
    return iVar1;
  }
LAB_1001ba8d:
  iVar1 = FUN_10018120();
  if ((iVar1 == 0) && (iVar1 = FUN_100182d0(), iVar1 == 0)) {
    iVar1 = FUN_10017ed0();
    iVar2 = (**(code **)(*DAT_10249d10 + 0x14))();
    if (iVar2 == 0x13) {
      local_c = 1;
      local_10 = 0;
      iVar1 = (**(code **)(*DAT_10249d10 + 0x28c))(&local_c,&local_10);
      if (iVar1 != 0) {
        FUN_10048350(&DAT_1024a13c,L"GetQCDisplaySetting fail, error code:0x%x",iVar1);
        FUN_10016860();
      }
      if (local_c != 0) {
        FUN_10048350(&DAT_1024a13c,L"QCDisplay not check switch to user default mode error code");
        FUN_10016860();
        return iVar1;
      }
    }
  }
  return iVar1;
}

