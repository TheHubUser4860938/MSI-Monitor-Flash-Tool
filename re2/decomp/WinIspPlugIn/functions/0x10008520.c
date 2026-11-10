// rea decompile_all
// name: IspFlash
// address: 0x10008520
// body: available
// range: 0x10008520-0x100086f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IspFlash(void)

{
  undefined *puVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined **local_74;
  undefined2 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [52];
  uint local_c;
  
                    /* 0x8520  12  IspFlash */
  local_c = DAT_1023dfec ^ (uint)&local_74;
  local_5c = 7;
  local_60 = 0;
  local_70 = 0;
  local_74 = CCpRsString::vftable;
  local_44 = 0xf;
  local_48 = 0;
  local_58 = 0;
  FUN_100080f0();
  if ((((DAT_1024a2d4 != 4) && (DAT_1024a2d4 != 5)) && (DAT_1024a2d4 != 6)) &&
     (((DAT_1024a2d4 != 7 && (DAT_1024a2d4 != 0x11)) &&
      ((DAT_1024a2d4 != 0x1a && (DAT_1024a2d4 != 0x1b)))))) goto LAB_100086df;
  puVar1 = (undefined *)FUN_100075b0(local_40);
  if (puVar1 != &DAT_1024a1c4) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = puVar1 + 4;
      if (puVar1 == &DAT_1024a1c8) goto LAB_100085d0;
    }
    FUN_10046260(puVar1,0,0xffffffff);
  }
LAB_100085d0:
  FUN_10048130();
  DAT_1024a1a8 = 0;
  puVar1 = (undefined *)FUN_100075b0(local_40);
  if (puVar1 != &DAT_1023e9a8) {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = puVar1 + 4;
      if (puVar1 == &DAT_1023e9ac) goto LAB_10008615;
    }
    FUN_10046260(puVar1,0,0xffffffff);
  }
LAB_10008615:
  FUN_10048130();
  DAT_1023e9a4 = DAT_1024a368;
  iVar2 = FUN_10007b80();
  if (iVar2 == 0) {
    iVar2 = FUN_1001f750();
    if (iVar2 == 0) {
      if (DAT_1024a2d4 == 0x1a) {
        iVar2 = FUN_1003bcb0();
        pwVar3 = L" Fw update fw of background enumError :0x%X ";
      }
      else if (DAT_1024a2d4 == 0x1b) {
        iVar2 = 0;
        pwVar3 = L" Fw update fw of foreground enumError :0x%X ";
      }
      else {
        iVar2 = FUN_10034000();
        pwVar3 = L" DoIsp enumError :0x%X ";
      }
      FUN_10048350(&local_74,pwVar3,iVar2);
      FUN_10016860();
      FUN_10008010();
      if (iVar2 == 0) {
        iVar2 = FUN_1001fa90();
      }
      else {
        FUN_1001fa90();
      }
      FUN_1003fab0(iVar2);
    }
    else {
      FUN_10048350(&local_74,L"InitCommunication Fail, Error Code: 0x%x",iVar2);
      FUN_10016860();
      FUN_10008010();
    }
  }
  else {
    FUN_1003fab0(iVar2);
    FUN_10008010();
  }
LAB_100086df:
  FUN_10048130();
  __security_check_cookie(local_c ^ (uint)&local_74);
  return;
}

