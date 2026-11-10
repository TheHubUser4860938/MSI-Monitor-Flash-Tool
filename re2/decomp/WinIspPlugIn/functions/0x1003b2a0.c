// rea decompile_all
// name: FUN_1003b2a0
// address: 0x1003b2a0
// body: available
// range: 0x1003b2a0-0x1003b3ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b2a0(void)

{
  int iVar1;
  int iVar2;
  char in_CL;
  undefined1 uVar3;
  undefined1 *in_EDX;
  undefined **local_58;
  undefined2 local_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  uint uStack_1f;
  undefined4 local_1b;
  undefined2 local_17;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c2128;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_CL == '\x04') {
    iVar1 = (**(code **)(*DAT_10249d10 + 0x14))(local_14);
    uVar3 = 0x6e;
    uStack_22 = *in_EDX;
    if (iVar1 == 1) {
      uVar3 = 0x4a;
    }
    uStack_21 = in_EDX[1];
    uStack_20 = in_EDX[2];
    uStack_1f = (uint)(byte)in_EDX[3];
    local_1b = 0;
    local_17 = 0;
    local_15 = 0;
    local_24 = 0x77;
    uStack_23 = 0xbb;
    local_40 = 7;
    local_44 = 0;
    local_54 = 0;
    local_58 = CCpRsString::vftable;
    local_28 = 0xf;
    local_2c = 0;
    local_3c = 0;
    local_8 = 0;
    iVar1 = DAT_1024be74;
    while ((0 < iVar1 &&
           (iVar2 = (**(code **)(*DAT_10249d10 + 0x13c))(uVar3,0x71,6,&local_24), iVar2 != 0))) {
      FUN_10048350(&local_58,L"Write Count:%d, IspMergeFwInfoGen1 Send Command Error:0x%X",
                   (DAT_1024be74 - iVar1) + 1,iVar2);
      FUN_10016860();
      Sleep(DAT_1024be70);
      iVar1 = iVar1 + -1;
    }
    FUN_10048130();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

