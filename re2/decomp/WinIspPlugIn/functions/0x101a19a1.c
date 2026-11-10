// rea decompile_all
// name: FUN_101a19a1
// address: 0x101a19a1
// body: available
// range: 0x101a19a1-0x101a1ac9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101a1ac9 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101a19a1(LPCWSTR param_1,uint *param_2)

{
  code *pcVar1;
  int *piVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  errno_t eVar5;
  __int64 _Var6;
  uint local_258;
  _FILETIME local_254;
  _FILETIME local_24c;
  _FILETIME local_244;
  uint local_238;
  wchar_t local_22c [274];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if ((param_2 == (uint *)0x0) || (param_1 == (LPCWSTR)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1019ab61();
    goto LAB_101a1a23;
  }
  pvVar3 = FindFirstFileExW(param_1,FindExInfoStandard,&local_258,FindExSearchNameMatch,(LPVOID)0x0,
                            0);
  if (pvVar3 != (HANDLE)0xffffffff) {
    *param_2 = -(uint)(local_258 != 0x80) & local_258;
    _Var6 = convert_file_time_to_time_t<__int64>(&local_254);
    *(__int64 *)(param_2 + 2) = _Var6;
    _Var6 = convert_file_time_to_time_t<__int64>(&local_24c);
    *(__int64 *)(param_2 + 4) = _Var6;
    _Var6 = convert_file_time_to_time_t<__int64>(&local_244);
    param_2[6] = (uint)_Var6;
    param_2[8] = local_238;
    param_2[7] = (uint)((ulonglong)_Var6 >> 0x20);
    eVar5 = _wcscpy_s((wchar_t *)(param_2 + 9),0x104,local_22c);
    if (eVar5 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_101a1a23;
  }
  DVar4 = GetLastError();
  if (DVar4 < 2) {
LAB_101a1a13:
    piVar2 = __errno();
    *piVar2 = 0x16;
  }
  else {
    if (3 < DVar4) {
      if (DVar4 == 8) {
        piVar2 = __errno();
        *piVar2 = 0xc;
        goto LAB_101a1a23;
      }
      if (DVar4 != 0x12) goto LAB_101a1a13;
    }
    piVar2 = __errno();
    *piVar2 = 2;
  }
LAB_101a1a23:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

