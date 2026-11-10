// rea decompile_all
// name: FUN_10017bc0
// address: 0x10017bc0
// body: available
// range: 0x10017bc0-0x10017d31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017bc0(void)

{
  int iVar1;
  undefined2 *in_ECX;
  int iVar2;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 local_14;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_25 = 1;
  iVar2 = DAT_1024be74;
  do {
    if (iVar2 < 1) {
LAB_10017cd6:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_c = 0;
    local_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    local_14 = 0;
    iVar1 = (**(code **)(*DAT_10249d10 + 0x54))(0x6a,0xc9,1,&local_25);
    if (iVar1 == 0) {
      Sleep(DAT_1024be70);
      iVar1 = (**(code **)(*DAT_10249d10 + 0x58))(0x6a,1,3,&local_24);
      FUN_10048350(&DAT_1024a13c,
                   L"Get Count:%d, GetCurrentFwVersionInDebugMode Read data Error:0x%X, data2:0x%X",
                   (DAT_1024be74 - iVar2) + 1,iVar1,local_24 >> 0x10 & 0xff);
      FUN_10016860();
      if (iVar1 == 0) {
        if ((char)local_24 == -0x37) {
          FUN_10048350(&DAT_1024a13c,
                       L"Get Count:%d, GetCurrentFwVersionInDebugMode Read fw version success!",
                       (DAT_1024be74 - iVar2) + 1);
          FUN_10016860();
          if (0 < iVar2) {
            *in_ECX = local_24._1_2_;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          goto LAB_10017cd6;
        }
      }
      else {
        FUN_10048350(&DAT_1024a13c,
                     L"Get Count:%d, GetCurrentFwVersionInDebugMode Read fw version fail!",
                     (DAT_1024be74 - iVar2) + 1);
        FUN_10016860();
      }
    }
    else {
      FUN_10048350(&DAT_1024a13c,
                   L"Get Count:%d, GetCurrentFwVersionInDebugMode Send Command Error:0x%X",
                   (DAT_1024be74 - iVar2) + 1,iVar1);
      FUN_10016860();
      Sleep(DAT_1024be70);
    }
    iVar2 = iVar2 + -1;
  } while( true );
}

