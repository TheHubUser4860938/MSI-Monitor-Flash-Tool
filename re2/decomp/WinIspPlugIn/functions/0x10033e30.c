// rea decompile_all
// name: FUN_10033e30
// address: 0x10033e30
// body: available
// range: 0x10033e30-0x10033eb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_10033e30(undefined1 *param_1,undefined1 *param_2,wchar_t *param_3)

{
  int iVar1;
  wchar_t wVar2;
  int in_ECX;
  wchar_t *pwVar3;
  undefined1 *puVar4;
  int iVar5;
  mbstate_t local_14 [2];
  _Cvtvec *local_c;
  int local_8;
  
  iVar5 = (int)param_2 - (int)param_1;
  local_8 = 0;
  if (param_2 < param_1) {
    iVar5 = 0;
  }
  puVar4 = param_1;
  if (iVar5 != 0) {
    local_c = (_Cvtvec *)(in_ECX + 0x18);
    pwVar3 = param_3;
    do {
      param_2 = (undefined1 *)CONCAT31(param_2._1_3_,*puVar4);
      local_14[0] = 0;
      local_14[1] = 0;
      iVar1 = __Mbrtowc((wchar_t *)&param_1,(char *)&param_2,1,local_14,local_c);
      wVar2 = (wchar_t)param_1;
      if (iVar1 < 0) {
        wVar2 = L'\xffff';
      }
      local_8 = local_8 + 1;
      *pwVar3 = wVar2;
      puVar4 = puVar4 + 1;
      pwVar3 = pwVar3 + 1;
    } while (local_8 != iVar5);
  }
  return puVar4;
}

