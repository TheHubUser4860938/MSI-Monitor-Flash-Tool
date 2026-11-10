// rea decompile_all
// name: FUN_100164f0
// address: 0x100164f0
// body: available
// range: 0x100164f0-0x10016586 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100164f0(wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint local_1c;
  mbstate_t local_18 [2];
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
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

