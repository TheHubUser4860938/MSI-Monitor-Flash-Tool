// rea decompile_all
// name: FUN_1001bbd0
// address: 0x1001bbd0
// body: available
// range: 0x1001bbd0-0x1001bf82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1001bf18) */
/* WARNING: Removing unreachable block (ram,0x1001bf23) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001bbd0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  uint uVar6;
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
  
  iVar3 = iRam1024dffc;
  puStack_c = &LAB_101c1c88;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  uVar6 = 0;
  (**(code **)(*DAT_10249d10 + 0x94))(200,local_14);
  iVar2 = (**(code **)(*DAT_10249d10 + 0x14))();
  if (iVar2 == 8) {
    if ((DAT_1024a3b0 == 0) ||
       (iVar3 = (**(code **)(*DAT_10249d10 + 0x21c))(0x45,0xc,DAT_1024a3b4,0,0), iVar3 == 0)) {
      if ((DAT_1024a3ac == 0) || (iVar2 = (**(code **)(*DAT_10249d10 + 0x124))(1), iVar2 == 0))
      goto LAB_1001bf5d;
LAB_1001bcf6:
      FUN_10048350(&local_48,L"Enter ISP mode fail! Error code:0x%X.",iVar2);
      FUN_1003fc00();
    }
    else {
      FUN_10048350(&local_48,L"Set Background Flash Write Time fail! Error code:0x%X.",iVar3);
      FUN_1003fc00();
    }
  }
  else {
    (**(code **)(*DAT_10249d10 + 0x44))(2);
    iVar2 = (**(code **)(*DAT_10249d10 + 0x14))();
    if (((iVar2 == 3) || (iVar2 = (**(code **)(*DAT_10249d10 + 0x14))(), iVar2 == 0xe)) &&
       (iVar2 = (**(code **)(*DAT_10249d10 + 0xa0))(0,0), iVar2 != 0)) {
      FUN_10048350(&local_48,L"RealtekUsb Set Waiting Mode Before Enter ISP Fail! Error Code:0x%X.",
                   iVar2);
      FUN_1003fc00();
    }
    else {
      if (DAT_1024a354 == 0) {
        if (DAT_1024a348 == 0) {
          if (DAT_1024a34c != 0) {
            iVar2 = (**(code **)(*DAT_10249d10 + 0x214))(1);
            goto LAB_1001bea2;
          }
          (**(code **)(*DAT_10249d10 + 0x30))(DAT_1024a350);
        }
        iVar2 = (**(code **)(*DAT_10249d10 + 0x124))(1);
      }
      else {
        DVar4 = GetTickCount();
        bVar1 = false;
        do {
          if (DAT_1024a348 == 0) {
            if (DAT_1024a34c == 0) {
              (**(code **)(*DAT_10249d10 + 0x30))(DAT_1024a350);
              goto LAB_1001bdd8;
            }
            iVar2 = (**(code **)(*DAT_10249d10 + 0x214))(1);
          }
          else {
LAB_1001bdd8:
            iVar2 = (**(code **)(*DAT_10249d10 + 0x124))(1);
          }
          if ((1000 < uVar6) && (!bVar1)) {
            bVar1 = true;
            FUN_10048350(&local_48,L"Trying into ISP mode...");
            FUN_1003fc00();
            FUN_10016860();
          }
          if (iVar2 == 0) {
            if (bVar1) {
              FUN_10048350(&local_48,L" Success");
              FUN_1003fc00();
              FUN_10016860();
            }
            goto LAB_1001beaa;
          }
          DVar5 = GetTickCount();
          uVar6 = DVar5 - DVar4;
        } while (uVar6 < DAT_1024a358);
      }
LAB_1001bea2:
      if (iVar2 != 0) goto LAB_1001bcf6;
LAB_1001beaa:
      if ((iVar3 == 0) || (iVar3 = FUN_10016b00(), iVar3 == 0)) {
        FUN_10048350(&local_48,L"Enter ISP mode Success!");
      }
      else {
        FUN_10048350(&local_48,L"Read scaler type fail! Error code:0x%X.",iVar3);
        FUN_1003fc00();
      }
    }
  }
  FUN_10016860();
LAB_1001bf5d:
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

