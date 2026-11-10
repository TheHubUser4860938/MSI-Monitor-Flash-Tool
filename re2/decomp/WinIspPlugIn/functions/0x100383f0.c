// rea decompile_all
// name: FUN_100383f0
// address: 0x100383f0
// body: available
// range: 0x100383f0-0x1003874f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003874f with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100383f0(void)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  undefined ***pppuVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 ****ppppuVar9;
  undefined1 local_160 [104];
  undefined **local_f8;
  undefined2 local_f4;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined **local_c4;
  undefined4 ***local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  undefined **local_78;
  undefined4 ***local_74 [4];
  undefined4 local_64;
  uint local_60;
  undefined1 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  char local_44;
  undefined4 local_43;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  undefined4 uStack_37;
  undefined8 local_33;
  undefined4 local_2b;
  undefined1 local_27;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_101c33b7;
  local_1c = ExceptionList;
  uVar3 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_44 = '\0';
  local_2b = 0;
  local_43 = 0;
  uStack_3f = 0;
  uStack_3b = 0;
  uStack_37 = 0;
  local_27 = 0;
  local_33 = 0;
  local_e0 = 7;
  local_e4 = 0;
  local_f4 = 0;
  local_f8 = CCpRsString::vftable;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = 0;
  local_ac = 7;
  local_b0 = 0;
  local_c0[0] = (undefined4 ***)((uint)local_c0[0] & 0xffff0000);
  local_c4 = CCpRsString::vftable;
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = 0;
  local_60 = 7;
  local_64 = 0;
  local_74[0] = (undefined4 ***)((uint)local_74[0] & 0xffff0000);
  local_78 = CCpRsString::vftable;
  local_48 = 0xf;
  local_4c = 0;
  local_5c = 0;
  local_14 = 2;
  uStack_13 = 0;
  local_24 = uVar3;
  FUN_100075b0(local_160);
  _local_14 = CONCAT31(uStack_13,3);
  pppuVar4 = (undefined ***)FUN_10047dc0(L"ISPVersion.txt",uVar3);
  if (&local_78 != pppuVar4) {
    if (pppuVar4 == (undefined ***)0x0) {
      ppppuVar9 = (undefined4 ****)0x0;
    }
    else {
      ppppuVar9 = (undefined4 ****)(pppuVar4 + 1);
    }
    if (local_74 != ppppuVar9) {
      if (7 < local_60) {
        FUN_1000b5d0(local_74[0],local_60 + 1);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (undefined4 ***)((uint)local_74[0] & 0xffff0000);
      FUN_10045640(ppppuVar9);
    }
  }
  FUN_10048130();
  _local_14 = CONCAT31(uStack_13,2);
  FUN_10048130();
  uVar3 = DAT_1024bed8 & 0xffff;
  uVar7 = DAT_1024bed8 >> 0x10;
  FUN_10048350(&local_f8,L"Read User Defined End With 0xFF");
  FUN_10016860();
  (**(code **)(*DAT_10249d10 + 0x10c))();
  iVar5 = FUN_1001bbd0();
  if ((iVar5 == 0) && (iVar5 = FUN_1003eda0(uVar7 & 0xff,uVar3,0x1e,&local_44), iVar5 == 0)) {
    if (DAT_1024a3dc != 0) {
      FUN_1001b860();
    }
    iVar5 = (**(code **)(*DAT_10249d10 + 0x10c))();
    if (iVar5 == 0) {
      uVar3 = 0;
      do {
        if ((&local_44)[uVar3] == -1) {
          if (0x1d < uVar3) {
            ___report_rangecheckfailure();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (&local_44)[uVar3] = '\0';
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x1e);
      if (uVar3 == 0x1e) {
        FUN_10048130();
        FUN_10048130();
        FUN_10048130();
      }
      else {
        local_7c = 0xf;
        local_80 = 0;
        local_90[0] = local_90[0] & 0xffffff00;
        if (local_44 == '\0') {
          iVar5 = 0;
        }
        else {
          pcVar8 = &local_44;
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          iVar5 = (int)pcVar8 - (int)&local_43;
        }
        FUN_1000aa60(&local_44,iVar5);
        local_14 = 5;
        FUN_100482a0(local_90);
        _local_14 = CONCAT31(uStack_13,2);
        if (0xf < local_7c) {
          FUN_1000b630(local_90[0],local_7c + 1);
        }
        ppppuVar9 = local_74;
        if (7 < local_60) {
          ppppuVar9 = (undefined4 ****)local_74[0];
        }
        ppppuVar6 = local_c0;
        if (7 < local_ac) {
          ppppuVar6 = (undefined4 ****)local_c0[0];
        }
        FUN_10042360(ppppuVar6,ppppuVar9);
        FUN_10048130();
        FUN_10048130();
        FUN_10048130();
      }
      goto LAB_100385e1;
    }
  }
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
LAB_100385e1:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

