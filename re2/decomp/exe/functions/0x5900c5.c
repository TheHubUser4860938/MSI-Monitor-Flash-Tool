// rea decompile_all
// name: FUN_005900c5
// address: 0x5900c5
// body: available
// range: 0x5900c5-0x590214 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x590214 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005900c5(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
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
      iVar6 = *(int *)(&DAT_005e1c50 + iVar5);
    }
    else {
      iVar6 = *(int *)(&DAT_005e1c1c + iVar5);
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
      iVar5 = (&DAT_005e1c20)[param_4];
    }
    else {
      iVar5 = *(int *)(&DAT_005e1c54 + iVar5);
    }
    if ((param_5 == 5) && (iVar5 < iVar6)) {
      iVar6 = iVar6 + -7;
    }
  }
  else {
    bVar2 = __crt_time_is_leap_year<int>(param_3);
    if (bVar2) {
      iVar6 = *(int *)(&DAT_005e1c50 + param_4 * 4);
    }
    else {
      iVar6 = *(int *)(&DAT_005e1c1c + param_4 * 4);
    }
    iVar6 = iVar6 + param_7;
  }
  param_11 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
  if (param_1 == 0) {
    DAT_0060d358 = param_3;
    DAT_0060d35c = iVar6;
    DAT_0060d360 = param_11;
  }
  else {
    DAT_0060d368 = iVar6;
    DAT_0060d36c = param_11;
    iVar6 = FUN_0058fc4c(&local_c);
    if (iVar6 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    DAT_0060d36c = DAT_0060d36c + local_c * 1000;
    DAT_0060d364 = param_3;
    if (DAT_0060d36c < 0) {
      DAT_0060d36c = DAT_0060d36c + 86400000;
      DAT_0060d368 = DAT_0060d368 + -1;
    }
    else if (86399999 < DAT_0060d36c) {
      DAT_0060d36c = DAT_0060d36c + -86400000;
      DAT_0060d368 = DAT_0060d368 + 1;
    }
  }
  return;
}

