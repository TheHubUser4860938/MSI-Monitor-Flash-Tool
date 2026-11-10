// rea decompile_all
// name: FUN_10018890
// address: 0x10018890
// body: available
// range: 0x10018890-0x100189f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10018890(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_3c;
  undefined1 uStack_3b;
  undefined2 uStack_3a;
  undefined1 uStack_38;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined2 uStack_23;
  undefined1 uStack_21;
  uint local_14;
  
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  local_30 = 0;
  uStack_2f = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_23 = 0;
  uStack_21 = 0;
  local_31 = 1;
  if ((DAT_1024a2f0 == 0) && ((DAT_1024a1f8 == 1 || (DAT_1024a1f8 == 0x13)))) {
    local_3c = 0x4a;
    uStack_3b = 0x72;
  }
  else {
    local_3c = 0x6e;
    uStack_3b = 0x71;
  }
  bVar3 = DAT_1024be74 < 0;
  iVar2 = DAT_1024be74;
  if (!bVar3) {
    do {
      local_31 = 1;
      (**(code **)(*DAT_10249d10 + 0x74))
                (0x6a,CONCAT13(uStack_38,CONCAT21(uStack_3a,uStack_3b)),1,&local_31,0);
      Sleep(100);
      local_30 = 0x77;
      uStack_2f = 0x11;
      (**(code **)(*DAT_10249d10 + 0x13c))
                (CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c)),0x71,2,&local_30);
      Sleep(DAT_1024be70);
      local_30 = 0;
      uStack_2f = 0;
      uStack_2e = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_23 = 0;
      uStack_21 = 0;
      iVar1 = (**(code **)(*DAT_10249d10 + 0x140))
                        (CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c)),0x71,6,&local_30);
      if ((iVar1 == 0) && ((char)uStack_2c == -0x70)) break;
      Sleep(100);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    bVar3 = iVar2 < 0;
  }
  if (iVar2 != 0 && !bVar3) {
    FUN_10048350(&DAT_1024a13c,L"Check DDCCI mode success after sign/copy.\r\n");
    FUN_10016860();
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
    return;
  }
  FUN_10048350(&DAT_1024a13c,L"Check DDCCI mode time out after sign/copy.\r\n");
  FUN_10016860();
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

