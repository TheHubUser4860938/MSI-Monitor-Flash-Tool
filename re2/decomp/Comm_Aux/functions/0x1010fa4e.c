// rea decompile_all
// name: FUN_1010fa4e
// address: 0x1010fa4e
// body: available
// range: 0x1010fa4e-0x1010fbf2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1010fa4e(int *param_1,CDC *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_34 [4];
  int local_30;
  int *local_2c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_28 [4];
  CDC *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  local_24 = param_2;
  local_20 = *param_3;
  local_1c = (int *)param_3[1];
  if (param_4 == 0) {
    FUN_100352e0(&DAT_101ca668);
    piVar1 = (int *)CDC::GetTextExtent(param_2,local_34);
    iVar6 = *piVar1;
    FUN_10034f00();
    local_10 = *param_3 - iVar6;
    local_18 = 0;
    local_14 = 0;
    local_c = (int *)0x1;
    if (*(int *)(in_ECX + 0x18) == 0) {
      iVar2 = 0;
    }
    else {
      iVar6 = *(int *)local_24;
      guard_check_icall(*(int *)(in_ECX + 0x2c),*(undefined4 *)(*(int *)(in_ECX + 0x2c) + -0xc),
                        &local_18,0x410);
      iVar2 = (**(code **)(iVar6 + 0x68))();
    }
    piVar5 = (int *)(local_10 - local_18);
    iVar2 = iVar2 + param_3[1] + 10;
    local_1c = piVar5;
    if (*param_3 < (int)piVar5) {
      local_1c = (int *)*param_3;
    }
    piVar1 = (int *)(*(int *)(in_ECX + 0x74) + 4);
    if (((int)piVar1 <= (int)local_1c) && (piVar1 = piVar5, *param_3 < (int)piVar5)) {
      piVar1 = (int *)*param_3;
    }
    *(uint *)(in_ECX + 0x7c) = (uint)((int)piVar5 <= *param_3);
  }
  else {
    local_18 = 0;
    local_14 = 0;
    iVar6 = 0;
    local_c = local_1c;
    if (*(int *)(in_ECX + 0x18) != 0) {
      local_10 = 0;
      local_30 = in_ECX;
      local_1c = (int *)(in_ECX + 0x2c);
      do {
        local_10 = local_10 + 1;
        iVar6 = *(int *)param_2;
        guard_check_icall(*local_1c,*(undefined4 *)(*local_1c + -0xc),&local_18,0x410);
        iVar3 = (**(code **)(iVar6 + 0x68))();
        iVar4 = CDC::GetTextExtent(param_2,local_28);
        in_ECX = local_30;
        iVar6 = local_10;
        if (*(int *)(iVar4 + 4) <= iVar3) break;
      } while (param_3[1] < (int)local_c - local_14);
    }
    iVar4 = (int)local_c - local_14;
    iVar3 = param_3[1];
    piVar1 = (int *)((*param_3 - local_18) + 10 + iVar6);
    iVar6 = iVar3;
    if (iVar4 <= iVar3) {
      iVar6 = iVar4;
    }
    iVar2 = *(int *)(in_ECX + 0x78);
    if ((*(int *)(in_ECX + 0x78) <= iVar6) && (iVar2 = iVar3, iVar4 <= iVar3)) {
      iVar2 = iVar4;
    }
    *(undefined4 *)(in_ECX + 0x7c) = 1;
  }
  *local_2c = (int)piVar1;
  local_2c[1] = iVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

