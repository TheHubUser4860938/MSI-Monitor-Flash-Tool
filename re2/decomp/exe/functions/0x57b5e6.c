// rea decompile_all
// name: FUN_0057b5e6
// address: 0x57b5e6
// body: available
// range: 0x57b5e6-0x57b86f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x57b86f with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0057b5e6(tm *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  tm *ptVar7;
  uint uVar8;
  bool bVar9;
  longlong lVar10;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  if (param_1 == (tm *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_0057662d();
    return 0x16;
  }
  ptVar7 = param_1;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    ptVar7->tm_sec = -1;
    ptVar7 = (tm *)&ptVar7->tm_min;
  }
  if (param_2 == (uint *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_0057662d();
    return 0x16;
  }
  if ((((int)param_2[1] < 1) && ((int)param_2[1] < 0)) ||
     ((6 < (int)param_2[1] && ((7 < (int)param_2[1] || (0x93406fff < *param_2)))))) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    return 0x16;
  }
  ___tzset();
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  iVar5 = FUN_0058fc20(&local_c);
  if (((iVar5 != 0) || (iVar5 = FUN_0058fc4c(&local_10), iVar5 != 0)) ||
     (iVar5 = FUN_0058fc78(&local_8), iVar5 != 0)) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar1 = param_2[1];
  uVar4 = *param_2;
  if ((((-1 < (int)uVar1) && ((0 < (int)uVar1 || (0x3f480 < uVar4)))) && ((int)uVar1 < 8)) &&
     (((int)uVar1 < 7 || (uVar4 < 0x933c7b7f)))) {
    local_18 = uVar4 - local_8;
    local_14 = (uVar1 - ((int)local_8 >> 0x1f)) - (uint)(uVar4 < local_8);
    iVar5 = FUN_0058fed3(param_1,&local_18);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (local_c == 0) {
      return 0;
    }
    iVar5 = __isindst(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    bVar9 = local_18 < local_10;
    local_18 = local_18 - local_10;
    local_14 = (local_14 - ((int)local_10 >> 0x1f)) - (uint)bVar9;
    iVar5 = FUN_0058fed3(param_1,&local_18);
    if (iVar5 == 0) {
      param_1->tm_isdst = 1;
      return 0;
    }
    return iVar5;
  }
  iVar5 = FUN_0058fed3(param_1,param_2);
  if (iVar5 != 0) {
    return iVar5;
  }
  uVar1 = param_1->tm_sec;
  uVar4 = local_8;
  if ((local_c != 0) && (iVar5 = __isindst(param_1), uVar4 = local_8, iVar5 != 0)) {
    param_1->tm_isdst = 1;
    uVar4 = local_8 + local_10;
  }
  uVar8 = uVar1 - uVar4;
  iVar6 = (((int)uVar1 >> 0x1f) - ((int)uVar4 >> 0x1f)) - (uint)(uVar1 < uVar4);
  iVar5 = __allrem(uVar8,iVar6,0x3c,0);
  param_1->tm_sec = iVar5;
  if (iVar5 < 0) {
    bVar9 = 0x3b < uVar8;
    uVar8 = uVar8 - 0x3c;
    param_1->tm_sec = iVar5 + 0x3c;
    iVar6 = iVar6 + -1 + (uint)bVar9;
  }
  lVar10 = __alldiv(uVar8,iVar6,0x3c,0);
  lVar10 = lVar10 + param_1->tm_min;
  iVar5 = __allrem(lVar10,0x3c,0);
  param_1->tm_min = iVar5;
  if (iVar5 < 0) {
    param_1->tm_min = iVar5 + 0x3c;
    lVar10 = lVar10 + -0x3c;
  }
  lVar10 = __alldiv(lVar10,0x3c,0);
  lVar10 = lVar10 + param_1->tm_hour;
  iVar5 = __allrem(lVar10,0x18,0);
  param_1->tm_hour = iVar5;
  if (iVar5 < 0) {
    param_1->tm_hour = iVar5 + 0x18;
    lVar10 = lVar10 + -0x18;
  }
  lVar10 = __alldiv(lVar10,0x18,0);
  iVar5 = (int)lVar10;
  if (-1 < lVar10) {
    if ((0xffffffff < lVar10) || (iVar5 != 0)) {
      param_1->tm_mday = param_1->tm_mday + iVar5;
      param_1->tm_wday = (param_1->tm_wday + iVar5) % 7;
      goto LAB_0057b81b;
    }
    if (0xffffffff < lVar10) {
      return 0;
    }
    if (-1 < lVar10) {
      return 0;
    }
  }
  param_1->tm_mday = param_1->tm_mday + iVar5;
  param_1->tm_wday = (param_1->tm_wday + 7 + iVar5) % 7;
  if (param_1->tm_mday < 1) {
    param_1->tm_mon = 0xb;
    param_1->tm_mday = param_1->tm_mday + 0x1f;
    param_1->tm_yday = param_1->tm_yday + iVar5 + 0x16d;
    param_1->tm_year = param_1->tm_year + -1;
    return 0;
  }
LAB_0057b81b:
  param_1->tm_yday = param_1->tm_yday + iVar5;
  return 0;
}

