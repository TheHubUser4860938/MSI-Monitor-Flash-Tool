// rea decompile_all
// name: FUN_10014a10
// address: 0x10014a10
// body: available
// range: 0x10014a10-0x10014af9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014a10(undefined2 *param_1,uint param_2)

{
  short sVar1;
  HMODULE pHVar2;
  undefined4 uVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  undefined1 local_7c [52];
  undefined1 local_48 [52];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195928;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10019660(local_14);
  local_8 = 0;
  pHVar2 = GetModuleHandleW(L"WinOperateCScaler.dll");
  uVar3 = FUN_10018b20(local_7c,pHVar2);
  local_8._0_1_ = 1;
  FUN_10019720(uVar3);
  local_8._0_1_ = 0;
  FUN_100196a0();
  uVar3 = FUN_10019ad0(local_7c,local_48,L"IspSetting.ini");
  local_8._0_1_ = 2;
  FUN_10019720(uVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100196a0();
  uVar4 = FUN_10019e60();
  if (uVar4 < param_2) {
    psVar5 = (short *)FUN_10019e50();
    psVar6 = psVar5;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
      *(short *)((int)param_1 + (-2 - (int)psVar5) + (int)psVar6) = sVar1;
    } while (sVar1 != 0);
  }
  else {
    *param_1 = 0;
  }
  FUN_100196a0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

