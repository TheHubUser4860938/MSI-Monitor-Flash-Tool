// rea decompile_all
// name: FUN_10019cd0
// address: 0x10019cd0
// body: available
// range: 0x10019cd0-0x10019d6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019cd0(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  short local_808;
  undefined1 local_806 [2046];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  _memset(&local_808,0,0x800);
  puVar2 = (undefined4 *)FUN_10003e60(&local_808,0x400,param_2,0,&stack0x0000000c);
  ___stdio_common_vswprintf(*puVar2,puVar2[1]);
  if (local_808 == 0) {
    iVar3 = 0;
  }
  else {
    psVar4 = &local_808;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar4 - (int)local_806 >> 1;
  }
  FUN_100160a0(&local_808,iVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

