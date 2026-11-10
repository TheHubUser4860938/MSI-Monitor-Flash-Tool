// rea decompile_all
// name: FUN_00407d40
// address: 0x407d40
// body: available
// range: 0x407d40-0x407dd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407d40(wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint local_1c;
  mbstate_t local_18 [2];
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  uVar3 = (uint)((int)param_2 + (1 - (int)param_1)) >> 1;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    do {
      local_18[0] = 0;
      local_18[1] = 0;
      iVar2 = __Wcrtomb(local_10,*param_1,local_18,(_Cvtvec *)(in_ECX + 0x18));
      cVar1 = local_10[0];
      if (iVar2 != 1) {
        cVar1 = param_3;
      }
      local_1c = local_1c + 1;
      *param_4 = cVar1;
      param_1 = param_1 + 1;
      param_4 = param_4 + 1;
    } while (local_1c != uVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

