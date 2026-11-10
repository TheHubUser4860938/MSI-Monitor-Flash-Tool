// rea decompile_all
// name: FUN_10023140
// address: 0x10023140
// body: available
// range: 0x10023140-0x1002321a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10023140(void)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined1 *in_EDX;
  undefined1 local_18;
  undefined1 uStack_17;
  char cStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_f = 0;
  local_b = 0;
  local_9 = 0;
  uStack_15 = 0;
  uStack_14 = 0;
  uStack_13 = 0;
  uStack_12 = 0;
  uStack_11 = 0;
  uStack_10 = 0;
  local_18 = 0x77;
  uStack_17 = 0xcb;
  cStack_16 = '\x01';
  iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))(0x6e,0x71,3,&local_18);
  if (iVar1 == 0) {
    Sleep(DAT_1024be70);
    iVar1 = (**(code **)(*DAT_10249d10 + 0x78))(0x6e,1,9,&local_18,0);
    if (iVar1 == 0) {
      Sleep(DAT_1024be70);
      if (cStack_16 != -0x35) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      *in_ECX = CONCAT31(CONCAT21(CONCAT11(uStack_15,uStack_14),uStack_13),uStack_12);
      *in_EDX = uStack_11;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

