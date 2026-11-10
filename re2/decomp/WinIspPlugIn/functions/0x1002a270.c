// rea decompile_all
// name: FUN_1002a270
// address: 0x1002a270
// body: available
// range: 0x1002a270-0x1002a472 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a270(void)

{
  uint uVar1;
  int iVar2;
  byte in_CL;
  undefined4 in_EDX;
  int iVar3;
  code *pcVar4;
  char local_30;
  byte bStack_2f;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  undefined1 uStack_18;
  undefined1 local_17;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c2808;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = '\0';
  local_17 = 0;
  bStack_2f = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_18 = 0;
  local_8 = 0;
  local_14 = uVar1;
  if (0 < DAT_1024be74) {
    iVar3 = DAT_1024be74;
    pcVar4 = Sleep_exref;
    do {
      local_30 = '\v';
      bStack_2f = in_CL;
      FUN_10197c50(&uStack_2e,in_EDX,in_CL,uVar1);
      iVar2 = (**(code **)(*DAT_10249d10 + 0x54))(0x6a,0xca,in_CL + 2,&local_30);
      if (iVar2 == 0) {
        (*pcVar4)(DAT_1024be70);
        uStack_18 = 0;
        local_17 = 0;
        local_30 = '\0';
        bStack_2f = 0;
        uStack_2e = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1f = 0;
        iVar2 = (**(code **)(*DAT_10249d10 + 0x58))(0x6a,1,2,&local_30);
        FUN_10048350(&DAT_1024a13c,
                     L"Set Count:%d, IspMergeFwInDebugMode Read data Error:0x%X, data0:0x%X, data1: 0x%x"
                     ,(DAT_1024be74 - iVar3) + 1,iVar2,local_30,bStack_2f);
        FUN_10016860();
        if (iVar2 == 0) {
          pcVar4 = Sleep_exref;
          if ((local_30 == -0x36) && (bStack_2f != 0xee)) {
            FUN_10048350(&DAT_1024a13c,
                         L"Set Count:%d, IspMergeFwInDebugMode write merge fw info success!",
                         (DAT_1024be74 - iVar3) + 1);
            FUN_10016860();
            break;
          }
        }
        else {
          FUN_10048350(&DAT_1024a13c,
                       L"Set Count:%d, IspMergeFwInDebugMode write merge fw info fail!",
                       (DAT_1024be74 - iVar3) + 1);
          FUN_10016860();
          pcVar4 = Sleep_exref;
        }
      }
      else {
        FUN_10048350(&DAT_1024a13c,L"Set Count:%d, IspMergeFwInDebugMode Send Command Error:0x%X",
                     (DAT_1024be74 - iVar3) + 1,iVar2);
        FUN_10016860();
        (*pcVar4)(DAT_1024be70);
      }
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

