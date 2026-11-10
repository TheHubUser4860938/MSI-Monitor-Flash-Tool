// rea decompile_all
// name: FUN_1001aa50
// address: 0x1001aa50
// body: available
// range: 0x1001aa50-0x1001abfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001aa50(void)

{
  int iVar1;
  int in_ECX;
  int *in_EDX;
  undefined4 uVar2;
  wchar_t *pwVar3;
  undefined1 local_8c [67];
  byte local_49;
  undefined **local_48;
  undefined2 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1c58;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_49 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  if ((in_ECX == 0x36) || (in_ECX == 0x42)) {
    uVar2 = 0x104b;
LAB_1001ab05:
    iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(uVar2,&local_49);
    if (iVar1 != 0) goto LAB_1001abd9;
    iVar1 = ((local_49 & 0x80) != 0) + 1;
LAB_1001ab25:
    *in_EDX = iVar1;
  }
  else {
    if (in_ECX == 0x38) {
      uVar2 = 0x1057;
      goto LAB_1001ab05;
    }
    if (in_ECX == 0x3b) {
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(10,&local_49,local_14);
      if (iVar1 != 0) goto LAB_1001abd9;
      iVar1 = 2 - (uint)((local_49 & 0x10) != 0);
      goto LAB_1001ab25;
    }
  }
  if (*in_EDX == 1) {
    pwVar3 = L"Current is MCM Flash Mode!";
LAB_1001ab3f:
    FUN_10048350(&local_48,pwVar3);
    FUN_10016860();
  }
  else if (*in_EDX == 2) {
    pwVar3 = L"Current is External Flash Mode!";
    goto LAB_1001ab3f;
  }
  if (((((in_ECX == 0x36) || (in_ECX == 0x38)) || (in_ECX == 0x3b)) || (in_ECX == 0x42)) &&
     (DAT_1024dfe8 != 0)) {
    if (*in_EDX == 1) {
      if (DAT_1024dfec == 0) {
        FUN_10048350(&local_48,L"Flash mode is MCM, UI Setting is External!");
        FUN_10016860();
      }
    }
    else if ((*in_EDX == 2) && (iVar1 = FUN_100166b0(local_8c), *(int *)(iVar1 + 4) != 0)) {
      FUN_10048350(&local_48,L"Flash mode is External, UI Setting is MCM!");
      FUN_10016860();
    }
  }
LAB_1001abd9:
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

