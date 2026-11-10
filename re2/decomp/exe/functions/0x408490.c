// rea decompile_all
// name: FUN_00408490
// address: 0x408490
// body: available
// range: 0x408490-0x408519 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408490(void)

{
  char cVar1;
  tm *_Tm;
  undefined1 *in_ECX;
  int iVar2;
  char *pcVar3;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  __time64_t local_50;
  char local_48 [64];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  FID_conflict___time64(&local_50);
  _Tm = FID_conflict_common_gmtime<long>((__time32_t *)&local_50);
  _strftime(local_48,0x40,"[%Y-%m-%d %H:%M:%S] ",_Tm);
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *in_ECX = 0;
  if (local_48[0] == '\0') {
    iVar2 = 0;
  }
  else {
    pcVar3 = local_48;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar3 - (int)(local_48 + 1);
  }
  FUN_004043e0(local_48,iVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar4);
  return;
}

