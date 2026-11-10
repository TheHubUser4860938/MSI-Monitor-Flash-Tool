// rea decompile_all
// name: FUN_10017780
// address: 0x10017780
// body: available
// range: 0x10017780-0x10017969 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017780(void)

{
  int iVar1;
  undefined1 uVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  undefined1 *in_ECX;
  wchar_t *pwVar6;
  undefined1 local_49;
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
  
  puStack_c = &LAB_101c1b38;
  uVar4 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_49 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  local_14 = uVar4;
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  iVar1 = DAT_1024be74;
  if ((DAT_1024a2f0 == 0) && ((DAT_1024a1f8 == 1 || (DAT_1024a1f8 == 0x13)))) {
    uVar2 = 0x4a;
  }
  else {
    uVar2 = 0x6e;
  }
  do {
    ExceptionList = ppvVar3;
    if (iVar1 < 1) {
LAB_1001790d:
      FUN_10048130();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar5 = (**(code **)(*DAT_10249d10 + 0x58))(0x6a,0x23,1,&local_49,uVar4);
    if (iVar5 == 0) {
      *in_ECX = 0x6a;
LAB_10017942:
      if (0 < iVar1) {
        FUN_10048350(&DAT_1024a13c,L"DetectAckBySlave ucCurSlave:0x%X",*in_ECX);
        FUN_10016860();
      }
      goto LAB_1001790d;
    }
    FUN_10048350(&local_48,L"0x6A NACK, Error Code:0x%x, Read Count:%d",iVar5,
                 (DAT_1024be74 - iVar1) + 1);
    FUN_10016860();
    iVar5 = (**(code **)(*DAT_10249d10 + 0x58))(uVar2,0x23,1,&local_49);
    if (iVar5 == 0) {
      *in_ECX = uVar2;
      goto LAB_10017942;
    }
    FUN_10048350(&local_48,L"0x%x NACK, Error Code:0x%x, Read Count:%d",uVar2,iVar5,
                 (DAT_1024be74 - iVar1) + 1);
    FUN_10016860();
    if (DAT_1024be64 == 0) {
      iVar5 = DAT_1024be74 - iVar1;
      pwVar6 = L"All slave address 0x%x/0x6A NACK! Read Count:%d";
    }
    else {
      iVar5 = (**(code **)(*DAT_10249d10 + 0x58))(0x7c,0x23,1,&local_49);
      if (iVar5 == 0) {
        *in_ECX = 0x7c;
        goto LAB_10017942;
      }
      iVar5 = DAT_1024be74 - iVar1;
      pwVar6 = L"All slave address 0x%x/0x6A/0x7C NACK! Read Count:%d";
    }
    FUN_10048350(&local_48,pwVar6,uVar2,iVar5 + 1);
    FUN_10016860();
    *in_ECX = 0xff;
    Sleep(DAT_1024be70);
    ppvVar3 = ExceptionList;
    iVar1 = iVar1 + -1;
  } while( true );
}

