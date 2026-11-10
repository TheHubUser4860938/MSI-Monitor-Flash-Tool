// rea decompile_all
// name: FUN_00407720
// address: 0x407720
// body: available
// range: 0x407720-0x4077d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407720(mbstate_t *param_1,int param_2,int param_3,int *param_4)

{
  mbstate_t mVar1;
  mbstate_t mVar2;
  int iVar3;
  int in_ECX;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  *param_4 = param_2;
  mVar1 = *param_1;
  mVar2 = param_1[1];
  iVar3 = __Wcrtomb(local_10,L'\0',param_1,(_Cvtvec *)(in_ECX + 8));
  if (iVar3 < 1) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar3 = iVar3 + -1;
  if (param_3 - *param_4 < iVar3) {
    *param_1 = mVar1;
    param_1[1] = mVar2;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (0 < iVar3) {
    FUN_005734b0(*param_4,local_10,iVar3);
    *param_4 = *param_4 + iVar3;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

