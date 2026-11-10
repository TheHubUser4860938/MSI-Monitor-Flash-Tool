// rea decompile_all
// name: FUN_10036e70
// address: 0x10036e70
// body: available
// range: 0x10036e70-0x10036ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_10036e70(LPCWSTR param_1,short *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  LPCWSTR local_18;
  wchar_t *local_14;
  DWORD local_c;
  
  local_14 = (wchar_t *)0x0;
  local_c = 0;
  SetLastError(0);
  local_18 = param_1;
  if (param_1 == (LPCWSTR)0x0) {
    if (param_2 == (short *)0x0) {
      SetLastError(0x57);
      return 0;
    }
    iVar2 = FUN_10047adf(param_2);
    uVar4 = iVar2 * 2 + 2;
    local_14 = LocalAlloc(0x40,uVar4);
    if (local_14 == (wchar_t *)0x0) {
      return 0;
    }
    pwVar5 = local_14;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pwVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 2;
      pwVar5 = pwVar5 + 2;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)pwVar5 = (char)*param_2;
      param_2 = (short *)((int)param_2 + 1);
      pwVar5 = (wchar_t *)((int)pwVar5 + 1);
    }
    iVar2 = FUN_10037580(local_14,0x22);
    if (iVar2 == 0) {
      local_18 = _wcstok(local_14,(wchar_t *)&DAT_10063004);
    }
    else {
      local_18 = _wcstok(local_14,(wchar_t *)&DAT_10063000);
    }
  }
  if (local_18 == (LPCWSTR)0x0) {
    LocalFree(local_14);
    SetLastError(0x57);
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_10037510((ushort *)local_18);
    if (iVar2 == 0) {
      LocalFree(local_14);
      SetLastError(0xa0);
      iVar2 = 0;
    }
    else {
      bVar1 = FUN_100375b0(local_18);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        iVar2 = FUN_10037000(local_18,param_3);
        if (iVar2 == 0) {
          local_c = GetLastError();
        }
        LocalFree(local_14);
        if (iVar2 == 0) {
          SetLastError(local_c);
        }
      }
      else {
        LocalFree(local_14);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}

