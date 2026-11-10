// rea decompile_all
// name: FUN_10022ad0
// address: 0x10022ad0
// body: available
// range: 0x10022ad0-0x10022c2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022ad0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_24 [3];
  undefined1 local_21;
  undefined4 *local_20;
  char local_1c;
  undefined8 local_1b;
  undefined4 local_13;
  undefined2 local_f;
  undefined1 local_d;
  uint local_c;
  
  local_c = DAT_1023dfec ^ (uint)auStack_24;
  local_1c = '\0';
  local_1b = 0;
  local_13 = 0;
  local_f = 0;
  local_d = 0;
  local_21 = 0;
  for (iVar3 = DAT_1024be74; 0 < iVar3; iVar3 = iVar3 + -1) {
    local_21 = 8;
    iVar1 = (**(code **)(*DAT_10249d10 + 0x74))(0x6a,0xca,1,&local_21,0);
    if (iVar1 != 0) goto LAB_10022bc3;
    Sleep(DAT_1024be70);
    iVar1 = (**(code **)(*DAT_10249d10 + 0x78))(0x6a,0xca,5,&local_1c,0);
    FUN_10048350(&DAT_1024a13c,L"Ask for Current Key address enumError:0x%X data: 0x%02X",iVar1,
                 local_1c);
    FUN_10016860();
    if ((local_1c == -0x36) && (iVar1 == 0)) {
      uVar2 = CONCAT31(CONCAT21(CONCAT11((undefined1)local_1b,local_1b._1_1_),local_1b._2_1_),
                       local_1b._3_1_);
      *local_20 = uVar2;
      FUN_10048350(&DAT_1024a13c,L"Ask for Current Key Address: ulKeyAddr 0x%X",uVar2);
      FUN_10016860();
      __security_check_cookie(local_c ^ (uint)auStack_24);
      return;
    }
  }
  FUN_10048350(&DAT_1024a13c,L"Ask for Current Key Address: Fail !!!");
LAB_10022bc3:
  __security_check_cookie(local_c ^ (uint)auStack_24);
  return;
}

