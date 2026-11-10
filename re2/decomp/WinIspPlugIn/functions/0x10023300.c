// rea decompile_all
// name: FUN_10023300
// address: 0x10023300
// body: available
// range: 0x10023300-0x100233cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10023300(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *in_ECX;
  undefined1 local_18;
  undefined1 uStack_17;
  char cStack_16;
  undefined1 uStack_15;
  undefined4 uStack_14;
  undefined1 uStack_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  undefined1 uStack_c;
  undefined2 uStack_b;
  undefined1 uStack_9;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  uVar2 = *(undefined4 *)(in_ECX + 1);
  uVar1 = *in_ECX;
  uStack_d = (undefined1)uVar2;
  uStack_c = (undefined1)((uint)uVar2 >> 8);
  uStack_b = (undefined2)((uint)uVar2 >> 0x10);
  uStack_9 = 0;
  local_18 = 0x77;
  uStack_17 = 0xcb;
  cStack_16 = '\x02';
  uStack_15 = (undefined1)uVar1;
  uStack_14 = (undefined4)((ulonglong)uVar1 >> 8);
  uStack_10 = (undefined1)((ulonglong)uVar1 >> 0x28);
  uStack_f = (undefined2)((ulonglong)uVar1 >> 0x30);
  iVar3 = (**(code **)(*DAT_10249d10 + 0x13c))(0x6e,0x71,0xf,&local_18);
  if (iVar3 == 0) {
    Sleep(DAT_1024be70);
    local_18 = 0;
    uStack_17 = 0;
    cStack_16 = '\0';
    uStack_15 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_f = 0;
    uStack_d = 0;
    uStack_c = 0;
    uStack_b = 0;
    uStack_9 = 0;
    iVar3 = (**(code **)(*DAT_10249d10 + 0x78))(0x6e,1,4,&local_18,0);
    if ((iVar3 == 0) && (Sleep(DAT_1024be70), cStack_16 != -0x35)) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

