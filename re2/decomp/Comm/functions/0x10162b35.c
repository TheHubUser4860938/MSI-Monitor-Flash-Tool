// rea decompile_all
// name: FUN_10162b35
// address: 0x10162b35
// body: available
// range: 0x10162b35-0x10162c2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10162c2c with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10162b35(int param_1,byte param_2,char *param_3,uint param_4,char param_5)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  errno_t eVar4;
  uint uVar5;
  char *pcVar6;
  undefined *local_48 [4];
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  char *local_28;
  undefined *local_24;
  char *local_20;
  undefined *local_1c;
  char *local_18;
  undefined *local_14;
  char *local_10;
  undefined *local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (param_4 < param_2 + 4) {
    *param_3 = '\0';
  }
  else {
    if (param_2 != 0) {
      *param_3 = '-';
      param_3 = param_3 + 1;
      param_4 = param_4 - 1;
      *param_3 = '\0';
    }
    local_28 = "NAN(SNAN)";
    local_48[0] = &DAT_101ae858;
    local_48[1] = &DAT_101ae858;
    local_48[2] = &DAT_101ae85c;
    local_48[3] = &DAT_101ae85c;
    local_20 = "nan(snan)";
    local_30 = &DAT_101ae864;
    uVar5 = (param_5 != '\0') - 1 & 2;
    local_2c = &DAT_101ae864;
    local_1c = &DAT_101ae864;
    local_c = &DAT_101ae864;
    local_18 = "NAN(IND)";
    local_38 = &DAT_101ae860;
    local_34 = &DAT_101ae860;
    local_24 = &DAT_101ae860;
    local_14 = &DAT_101ae860;
    local_10 = "nan(ind)";
    pcVar6 = local_48[param_1 * 4 + -4 + uVar5];
    pcVar1 = pcVar6 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    eVar4 = _strcpy_s(param_3,param_4,
                      local_48[((param_1 * 4 + -3) -
                               (uint)((uint)((int)pcVar6 - (int)pcVar1) < param_4)) + uVar5]);
    if (eVar4 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

