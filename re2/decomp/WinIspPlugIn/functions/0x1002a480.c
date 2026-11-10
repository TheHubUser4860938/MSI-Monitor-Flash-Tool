// rea decompile_all
// name: FUN_1002a480
// address: 0x1002a480
// body: available
// range: 0x1002a480-0x1002a5fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a480(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined2 local_44;
  undefined1 local_42;
  char local_24;
  undefined7 uStack_23;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined1 local_17;
  undefined1 uStack_16;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c2838;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *(int *)(in_ECX + 8);
  local_24 = '\0';
  uStack_23 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  local_17 = 0;
  uStack_16 = 0;
  local_8 = 0;
  local_14 = uVar2;
  FUN_10045540(L"1.Chang To Background Fw Update Mode",0x24);
  FUN_10016860(uVar2);
  do {
    if (iVar4 < 1) {
LAB_1002a59d:
      FUN_10045540(L"Retry Change to background fw update fw mode fail!",0x32);
      FUN_10016860(uVar2);
LAB_1002a5b9:
      FUN_10048130();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    uVar1 = (ushort)local_44 >> 8;
    local_44 = CONCAT11((char)uVar1,2);
    (**(code **)(*DAT_10249d10 + 0x54))(0x6a,0x31,1,&local_44);
    local_44 = 0x3177;
    local_42 = 2;
    (**(code **)(*DAT_10249d10 + 0x13c))(0x6e,0x71,3,&local_44);
    uStack_1c = 0;
    local_24 = '\0';
    uStack_23 = 0;
    uStack_18 = 0;
    local_17 = 0;
    uStack_16 = 0;
    iVar3 = (**(code **)(*DAT_10249d10 + 0x58))(0x3a,0x31,1,&local_24);
    if ((iVar3 == 0) && (local_24 == '\x11')) {
      if (0 < iVar4) {
        FUN_10045540(L"Retry Change to background fw update fw mode success!",0x35);
        FUN_10016860();
        goto LAB_1002a5b9;
      }
      goto LAB_1002a59d;
    }
    Sleep(*(DWORD *)(in_ECX + 0xc));
    iVar4 = iVar4 + -1;
  } while( true );
}

