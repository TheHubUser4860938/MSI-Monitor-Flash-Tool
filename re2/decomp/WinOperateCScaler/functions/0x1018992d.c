// rea decompile_all
// name: FUN_1018992d
// address: 0x1018992d
// body: available
// range: 0x1018992d-0x10189a7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10189a7c with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1018992d(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  if (param_2 == 1) {
    bVar2 = __crt_time_is_leap_year<int>(param_3);
    iVar5 = param_4 * 4;
    if (bVar2) {
      iVar6 = *(int *)(&DAT_101da2f4 + iVar5);
    }
    else {
      iVar6 = *(int *)(&DAT_101da2c0 + iVar5);
    }
    uStack_8._3_1_ = bVar2;
    iVar3 = __crt_time_elapsed_leap_years<int>(param_3);
    iVar4 = (iVar3 + iVar6 + 1 + param_3 * 0x16d + -0x63ca) % 7;
    iVar3 = param_5 * 7 - iVar4;
    if (iVar4 <= param_6) {
      iVar3 = iVar3 + -7;
    }
    iVar6 = iVar6 + 1 + iVar3 + param_6;
    if (uStack_8._3_1_ == '\0') {
      iVar5 = (&DAT_101da2c4)[param_4];
    }
    else {
      iVar5 = *(int *)(&DAT_101da2f8 + iVar5);
    }
    if ((param_5 == 5) && (iVar5 < iVar6)) {
      iVar6 = iVar6 + -7;
    }
  }
  else {
    bVar2 = __crt_time_is_leap_year<int>(param_3);
    if (bVar2) {
      iVar6 = *(int *)(&DAT_101da2f4 + param_4 * 4);
    }
    else {
      iVar6 = *(int *)(&DAT_101da2c0 + param_4 * 4);
    }
    iVar6 = iVar6 + param_7;
  }
  param_11 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
  if (param_1 == 0) {
    DAT_10202348 = param_3;
    DAT_1020234c = iVar6;
    DAT_10202350 = param_11;
  }
  else {
    DAT_10202358 = iVar6;
    DAT_1020235c = param_11;
    iVar6 = FUN_101894f2(&local_c);
    if (iVar6 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    DAT_1020235c = DAT_1020235c + local_c * 1000;
    DAT_10202354 = param_3;
    if (DAT_1020235c < 0) {
      DAT_1020235c = DAT_1020235c + 86400000;
      DAT_10202358 = DAT_10202358 + -1;
    }
    else if (86399999 < DAT_1020235c) {
      DAT_1020235c = DAT_1020235c + -86400000;
      DAT_10202358 = DAT_10202358 + 1;
    }
  }
  return;
}

