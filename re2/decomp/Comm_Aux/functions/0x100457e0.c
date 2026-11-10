// rea decompile_all
// name: FUN_100457e0
// address: 0x100457e0
// body: available
// range: 0x100457e0-0x10045908 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100457e0(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_84;
  undefined4 *local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  uint local_c;
  
  local_c = DAT_10206460 ^ (uint)&local_84;
  local_80 = param_2;
  _memset(&local_74,0,100);
  local_7c = (int)(param_3 + ((int)param_3 >> 0x1f & 0xfU)) >> 4;
  param_3 = param_3 & 0x8000000f;
  if ((int)param_3 < 0) {
    param_3 = (param_3 - 1 | 0xfffffff0) + 1;
  }
  iVar3 = 0;
  local_78 = 0x20068;
  local_70 = 1;
  local_74 = *(undefined4 *)(local_84 + 4);
  local_58 = 0x10;
  if (0 < local_7c) {
    iVar2 = param_1 - (int)param_2;
    do {
      local_6c = iVar2 + (int)param_2;
      iVar1 = FUN_10014c00(*(undefined4 *)(local_84 + 8),&local_78,0);
      *param_2 = local_68;
      param_2[1] = uStack_64;
      param_2[2] = uStack_60;
      param_2[3] = uStack_5c;
      if (iVar1 != 0) goto LAB_100458f0;
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 4;
    } while (iVar3 < local_7c);
  }
  if (param_3 != 0) {
    local_6c = param_1 + iVar3 * 0x10;
    local_58 = param_3;
    iVar2 = FUN_10014c00(*(undefined4 *)(local_84 + 8),&local_78,0);
    FUN_10181570(local_80 + iVar3 * 4,&local_68,param_3);
    if (iVar2 != 0) {
LAB_100458f0:
      __security_check_cookie(local_c ^ (uint)&local_84);
      return;
    }
  }
  __security_check_cookie(local_c ^ (uint)&local_84);
  return;
}

