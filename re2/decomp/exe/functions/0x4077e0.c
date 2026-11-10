// rea decompile_all
// name: FUN_004077e0
// address: 0x4077e0
// body: available
// range: 0x4077e0-0x407883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004077e0(mbstate_t *param_1,char *param_2,char *param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int in_ECX;
  uint uVar4;
  mbstate_t local_14;
  mbstate_t local_10;
  wchar_t local_c [2];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_14 = *param_1;
  uVar4 = 0;
  local_10 = param_1[1];
  if (param_4 != 0) {
    while (param_2 != param_3) {
      pcVar2 = (char *)__Mbrtowc(local_c,param_2,(int)param_3 - (int)param_2,&local_14,
                                 (_Cvtvec *)(in_ECX + 8));
      if ((pcVar2 == (char *)0xfffffffe) || (pcVar2 == (char *)0xffffffff)) break;
      if ((pcVar2 == (char *)0x0) && (local_c[0] == L'\0')) {
        pcVar2 = param_2;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        pcVar2 = pcVar2 + (1 - (int)(param_2 + 1));
      }
      pcVar3 = (char *)0x0;
      if (pcVar2 != (char *)0xfffffffd) {
        pcVar3 = pcVar2;
      }
      uVar4 = uVar4 + 1;
      param_2 = param_2 + (int)pcVar3;
      if (param_4 <= uVar4) break;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

