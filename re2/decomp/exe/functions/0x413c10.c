// rea decompile_all
// name: FUN_00413c10
// address: 0x413c10
// body: available
// range: 0x413c10-0x413d46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00413c10(byte *param_1,LPCWSTR param_2)

{
  LPCWSTR pWVar1;
  int iVar2;
  byte extraout_AL;
  UINT UVar3;
  
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"BinVersionAddress",0x7005,param_2);
  *(UINT *)(param_1 + 8) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"BinVersionLength",3,param_2);
  extraout_AL = (byte)UVar3;
  *param_1 = extraout_AL;
  if ((4 < extraout_AL) || (extraout_AL < 2)) {
    *param_1 = 2;
  }
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"BinVersionMode",0,param_2);
  if (2 < (int)UVar3) {
    UVar3 = 0;
  }
  *(UINT *)(param_1 + 4) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"ulModelNamePosInBin",0xf80c,param_2);
  *(UINT *)(param_1 + 0x20) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"MajorVerionStartbit",0,param_2);
  param_1[0xc] = (byte)UVar3;
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"MajorVersionEndbit",7,param_2);
  param_1[0xd] = (byte)UVar3;
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"MinorVerionStartbit",0,param_2);
  param_1[0xe] = (byte)UVar3;
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"MinorVersionEndbit",7,param_2);
  param_1[0xf] = (byte)UVar3;
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"CheckModelName",1,param_2);
  *(UINT *)(param_1 + 0x14) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"CheckVersion",1,param_2);
  *(UINT *)(param_1 + 0x10) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"CheckChecksum",1,param_2);
  *(UINT *)(param_1 + 0x18) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"ScalerConfig",L"SaveDebugLog",0,param_2);
  *(UINT *)(param_1 + 0x1c) = UVar3;
  LOCK();
  pWVar1 = param_2 + -2;
  iVar2 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(param_2 + -8) + 4))(param_2 + -8);
  }
  return;
}

