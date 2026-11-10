// rea decompile_all
// name: FUN_100315f0
// address: 0x100315f0
// body: available
// range: 0x100315f0-0x10031891 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100315f0(LPCWSTR param_1)

{
  DWORDLONG dwlConditionMask;
  BOOL BVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  size_t _MaxCount;
  bool bVar5;
  undefined8 uVar6;
  LPWSTR local_2c;
  wchar_t *local_20;
  int local_18 [5];
  
  local_18[4] = 0;
  local_20 = (wchar_t *)0x0;
  local_2c = (LPWSTR)0x0;
  bVar5 = false;
  local_18[0] = 0x24;
  local_18[1] = 0x26;
  local_18[2] = 0x2a;
  local_18[3] = 0;
  if (DAT_1020bc70 == 0) {
    uVar6 = VerSetConditionMask(0,0,2,3,1,3,0x20,3);
    uVar6 = VerSetConditionMask(uVar6);
    dwlConditionMask = (DWORDLONG)VerSetConditionMask(uVar6);
    DAT_1020bc70 = 0x11c;
    _DAT_1020bc74 = 6;
    _DAT_1020bc78 = 1;
    _DAT_1020bd84 = 0;
    BVar1 = VerifyVersionInfoW((LPOSVERSIONINFOEXW)&DAT_1020bc70,0x23,dwlConditionMask);
    DAT_102050a0 = (uint)(BVar1 == 0);
  }
  if (DAT_102050a0 == 0) {
    if (((param_1 != (LPCWSTR)0x0) &&
        (DVar2 = GetFullPathNameW(param_1,0,(LPWSTR)0x0,(LPWSTR *)0x0), DVar2 != 0)) &&
       (local_20 = LocalAlloc(0x40,DVar2 << 1), local_20 != (wchar_t *)0x0)) {
      local_18[4] = GetFullPathNameW(param_1,DVar2,local_20,(LPWSTR *)0x0);
      if ((uint)local_18[4] < DVar2) {
        for (local_18[3] = 0; local_2c = (LPWSTR)0x0, local_18[3] < 3; local_18[3] = local_18[3] + 1
            ) {
          if (local_18[local_18[3]] == 0x26) {
            DVar2 = ExpandEnvironmentStringsW(u__ProgramW6432__102050a4,(LPWSTR)0x0,0);
            if (((DVar2 == 0) ||
                (local_2c = LocalAlloc(0x40,DVar2 * 2 + 2), local_2c == (LPWSTR)0x0)) ||
               (DVar3 = ExpandEnvironmentStringsW(u__ProgramW6432__102050c4,local_2c,DVar2),
               DVar2 != DVar3)) break;
            iVar4 = lstrcmpW(u__ProgramW6432__102050e4,local_2c);
            if (iVar4 == 0) {
              LocalFree(local_2c);
              local_2c = (LPWSTR)FUN_100318a0(local_18[local_18[3]],&DAT_1020bd8c);
              goto joined_r0x100317e8;
            }
            if (local_2c[DVar2 - 2] != L'\\') {
              FUN_10032830(local_2c,DVar2 + 1,&DAT_10205104);
            }
          }
          else {
            local_2c = (LPWSTR)FUN_100318a0(local_18[local_18[3]],&DAT_1020bd90);
joined_r0x100317e8:
            if (local_2c == (LPWSTR)0x0) break;
          }
          _MaxCount = _wcslen(local_2c);
          iVar4 = __wcsnicmp(local_20,local_2c,_MaxCount);
          bVar5 = iVar4 == 0;
          if (bVar5) break;
          LocalFree(local_2c);
        }
      }
    }
    LocalFree(local_2c);
    LocalFree(local_20);
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}

