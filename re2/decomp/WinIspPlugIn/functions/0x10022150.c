// rea decompile_all
// name: FUN_10022150
// address: 0x10022150
// body: available
// range: 0x10022150-0x100226db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1002223c) */
/* WARNING: Removing unreachable block (ram,0x100222be) */
/* WARNING: Removing unreachable block (ram,0x100222f8) */
/* WARNING: Removing unreachable block (ram,0x10022327) */
/* WARNING: Removing unreachable block (ram,0x10022334) */
/* WARNING: Removing unreachable block (ram,0x1002236d) */
/* WARNING: Removing unreachable block (ram,0x1002239a) */
/* WARNING: Removing unreachable block (ram,0x100223a2) */
/* WARNING: Removing unreachable block (ram,0x100223ec) */
/* WARNING: Removing unreachable block (ram,0x1002241f) */
/* WARNING: Removing unreachable block (ram,0x10022468) */
/* WARNING: Removing unreachable block (ram,0x1002250e) */
/* WARNING: Removing unreachable block (ram,0x1002255d) */
/* WARNING: Removing unreachable block (ram,0x100225c0) */
/* WARNING: Removing unreachable block (ram,0x100225e4) */
/* WARNING: Removing unreachable block (ram,0x10022655) */
/* WARNING: Removing unreachable block (ram,0x1002269b) */
/* WARNING: Removing unreachable block (ram,0x10022579) */
/* WARNING: Removing unreachable block (ram,0x10022596) */
/* WARNING: Removing unreachable block (ram,0x100222a7) */
/* WARNING: Removing unreachable block (ram,0x10022356) */
/* WARNING: Removing unreachable block (ram,0x10022363) */

void FUN_10022150(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_101c21d3;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (*in_ECX < 0x4c5) {
    uStack_7 = 0xffffff;
    local_8 = 0xff;
    puStack_c = &LAB_101c21d3;
  }
  else {
    ExceptionList = &local_10;
    FUN_10048350();
    FUN_10016860();
    pcVar3 = (char *)FUN_100486d0();
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    }
    FUN_1000aa60();
    local_8 = 1;
    uStack_7 = 0;
    FUN_1000aa60(&DAT_10212d54,4);
    FUN_10040cf0();
    FUN_10048350(&DAT_1024a13c,L"Bin file count in cur dir:%d",0);
    FUN_10016860();
    FUN_1002bfa0();
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

