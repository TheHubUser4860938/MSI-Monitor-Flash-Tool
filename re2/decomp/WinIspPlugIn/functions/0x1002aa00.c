// rea decompile_all
// name: FUN_1002aa00
// address: 0x1002aa00
// body: available
// range: 0x1002aa00-0x1002abcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002aa00(void)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  DWORD DVar4;
  DWORD *in_ECX;
  int in_EDX;
  char cVar5;
  uint uVar6;
  undefined2 local_4c [2];
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
  
  puStack_c = &LAB_101c20f8;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c[0] = 0;
  uVar6 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  cVar5 = '\0';
  local_14 = uVar1;
  DVar2 = GetTickCount();
LAB_1002aa70:
  do {
    if (in_ECX[1] < uVar6) {
      DVar4 = GetTickCount();
      if (in_EDX != 0) {
        FUN_10048350(&local_48,L"Plling Status : time %d",DVar4 - DVar2,uVar1);
        FUN_10016860();
      }
      goto LAB_1002aba6;
    }
    local_4c[0] = 0;
    iVar3 = (**(code **)(*DAT_10249d10 + 0x58))(0x3a,0x31,1,local_4c);
    if ((char)local_4c[0] == -0x45) {
      cVar5 = '\x01';
    }
    Sleep(*in_ECX);
    if (in_EDX != 0) {
      FUN_10048350(&local_48,
                   L"Plling Status : Error Code 0x%X,  count:%d: Read Code 0x%X ucCmdReceived:%d",
                   iVar3,uVar6,(char)local_4c[0],cVar5);
      FUN_10016860();
    }
    uVar6 = uVar6 + 1;
    if (cVar5 == '\0') {
      if ((char)local_4c[0] == -0x45) goto LAB_1002aa70;
    }
    else if (((cVar5 == '\x01') && ((char)local_4c[0] != '\x11')) && ((char)local_4c[0] != '\x12'))
    goto LAB_1002aa70;
    if (iVar3 == 0) {
      if (((in_ECX[7] == 1) && (((char)local_4c[0] == '\x11' || ((char)local_4c[0] == '\x10')))) ||
         ((in_ECX[7] == 0 && ((char)local_4c[0] == '\x11')))) {
        FUN_10048350(&local_48,
                     L"Plling Status : Error Code 0x%X,  count:%d: Read Code 0x%X ucCmdReceived:%d success!"
                     ,0,uVar6,(char)local_4c[0],cVar5);
        FUN_10016860();
      }
      else {
        FUN_10048350(&local_48,
                     L"Plling Status : Error Code 0x%X,  count:%d: Read Code 0x%X ucCmdReceived:%d fail!"
                     ,0,uVar6,(char)local_4c[0],cVar5);
        FUN_10016860();
      }
LAB_1002aba6:
      FUN_10048130();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

