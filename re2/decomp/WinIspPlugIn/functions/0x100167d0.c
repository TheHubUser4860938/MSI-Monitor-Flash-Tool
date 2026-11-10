// rea decompile_all
// name: FUN_100167d0
// address: 0x100167d0
// body: available
// range: 0x100167d0-0x10016859 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100167d0(void)

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
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
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
  FUN_1000aa60(local_48,iVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar4);
  return;
}

