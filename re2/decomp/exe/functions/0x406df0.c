// rea decompile_all
// name: FUN_00406df0
// address: 0x406df0
// body: available
// range: 0x406df0-0x406f31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00406df0(undefined4 *param_1,LPCSTR param_2)

{
  WCHAR WVar1;
  undefined4 *puVar2;
  LPCSTR lpMultiByteStr;
  int iVar3;
  WCHAR *pWVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 uVar6;
  WCHAR local_5014;
  undefined1 local_5012 [20478];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0059c222;
  local_10 = ExceptionList;
  local_14 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[5] = 7;
  param_1[4] = 0;
  puVar2 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  *(undefined2 *)puVar2 = 0;
  local_8 = 0;
  uVar6 = 1;
  param_1[4] = 0;
  puVar2 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  *(undefined2 *)puVar2 = 0;
  _memset(&local_5014,0,0x5000);
  lpMultiByteStr = param_2;
  if (0xf < *(uint *)(param_2 + 0x14)) {
    lpMultiByteStr = *(LPCSTR *)param_2;
  }
  iVar3 = MultiByteToWideChar(0xfde9,0,lpMultiByteStr,-1,(LPWSTR)0x0,0);
  uVar5 = extraout_EDX;
  if (iVar3 != 0) {
    if (0xf < *(uint *)(param_2 + 0x14)) {
      param_2 = *(LPCSTR *)param_2;
    }
    MultiByteToWideChar(0xfde9,0,param_2,-1,&local_5014,iVar3);
    if (local_5014 == L'\0') {
      iVar3 = 0;
    }
    else {
      pWVar4 = &local_5014;
      do {
        WVar1 = *pWVar4;
        pWVar4 = pWVar4 + 1;
      } while (WVar1 != L'\0');
      iVar3 = (int)pWVar4 - (int)local_5012 >> 1;
    }
    FUN_00403fc0(&local_5014,iVar3);
    uVar5 = extraout_EDX_00;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar5,param_1,uVar6);
  return;
}

