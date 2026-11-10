// rea decompile_all
// name: FUN_10017a90
// address: 0x10017a90
// body: available
// range: 0x10017a90-0x10017bba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017a90(void)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined1 *in_EDX;
  undefined1 local_2c;
  undefined4 local_2b;
  undefined4 uStack_27;
  undefined4 uStack_23;
  undefined4 uStack_1f;
  undefined8 local_1b;
  undefined1 local_13;
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined2 uStack_d;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  uStack_d = 0;
  local_2c = 0;
  local_13 = 0;
  local_2b = 0;
  uStack_27 = 0;
  uStack_23 = 0;
  uStack_1f = 0;
  local_10 = 0x77;
  uStack_f = 0xc9;
  local_1b = 0;
  uStack_e = 2;
  iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))(0x6e,0x71,3,&local_10);
  if (iVar1 == 0) {
    Sleep(DAT_1024be70);
    iVar1 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x51,9,&local_2c);
    FUN_10048350(&DAT_1024a13c,L"GetCurrentFwVersionInDDCCIMode Read data Error:0x%X, data2:0x%X",
                 iVar1,local_2b >> 8 & 0xff);
    FUN_10016860();
    if (iVar1 == 0) {
      if (local_2b._1_1_ != -0x37) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      *in_ECX = CONCAT31(CONCAT21(CONCAT11(local_2b._2_1_,local_2b._3_1_),(undefined1)uStack_27),
                         uStack_27._1_1_);
      *in_EDX = uStack_27._2_1_;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else {
    FUN_10048350(&DAT_1024a13c,L"GetCurrentFwVersionInDDCCIMode Send Command Error:0x%X",iVar1);
    FUN_10016860();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

