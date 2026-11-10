// rea decompile_all
// name: FUN_10188453
// address: 0x10188453
// body: available
// range: 0x10188453-0x10188634 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10188634 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10188453(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                 int param_7)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  uVar8 = param_1 - 0x76c;
  if ((((0x45 < (int)uVar8) && (-1 < (int)uVar8)) && (uVar8 < 0x44d)) && (param_2 - 1U < 0xc)) {
    iVar6 = param_2 + -1;
    bVar4 = __crt_time_is_day_valid(uVar8,iVar6,param_3);
    if (((bVar4) && (param_4 < 0x18)) && ((param_5 < 0x3c && (param_6 < 0x3c)))) {
      param_3 = *(int *)(&DAT_101da2c0 + param_2 * 4) + param_3;
      bVar4 = __crt_time_is_leap_year<int>(uVar8);
      if ((bVar4) && (2 < param_2)) {
        param_3 = param_3 + 1;
      }
      ___tzset();
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      iVar5 = FUN_101894c6(&local_38);
      if (((iVar5 != 0) || (iVar5 = FUN_101894f2(&local_3c), iVar5 != 0)) ||
         (iVar5 = FUN_1018951e(&local_40), iVar5 != 0)) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = __crt_time_elapsed_leap_years<int>(uVar8);
      lVar3 = (longlong)param_3 * 0x15180 + (longlong)iVar5 * 0x15180 +
              (longlong)(int)uVar8 * 0x1e13380 + (longlong)(int)param_4 * 0xe10 +
              (longlong)(int)param_5 * 0x3c + (longlong)local_40 + (longlong)(int)param_6;
      uVar1 = (uint)lVar3;
      local_34 = uVar1 + 0x7c6beb00;
      local_30 = (int)((ulonglong)lVar3 >> 0x20) - (uint)(uVar1 < 0x83941500);
      iVar5 = ((int)local_3c >> 0x1f) + local_30 + (uint)CARRY4(local_3c,local_34);
      if (param_7 != 1) {
        local_2c.tm_hour = param_4;
        local_2c.tm_min = param_5;
        local_2c.tm_sec = param_6;
        local_2c.tm_mon = iVar6;
        local_2c.tm_year = uVar8;
        local_2c.tm_yday = param_3;
        if (((param_7 != -1) || (local_38 == 0)) || (iVar6 = __isindst(&local_2c), iVar6 == 0)) {
          iVar5 = local_30;
        }
      }
      goto LAB_10188619;
    }
  }
  piVar7 = __errno();
  *piVar7 = 0x16;
  iVar5 = -1;
LAB_10188619:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,iVar5);
  return;
}

