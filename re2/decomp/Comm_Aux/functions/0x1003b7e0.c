// rea decompile_all
// name: FUN_1003b7e0
// address: 0x1003b7e0
// body: available
// range: 0x1003b7e0-0x1003bbaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b7e0(void)

{
  WCHAR WVar1;
  UINT UVar2;
  WCHAR *pWVar3;
  WCHAR local_210;
  undefined1 local_20e [518];
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  _memset(&local_210,0,0x208);
  DAT_1021ae18 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_DetctType",0,&DAT_10212800);
  if ((DAT_1021ae18 == 0) || (2 < DAT_1021ae18)) {
    DAT_1021ae18 = 1;
  }
  DAT_1021ae1c = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_GraphicsType",0,&DAT_10212800);
  if ((DAT_1021ae1c == 0) || (3 < DAT_1021ae1c)) {
    DAT_1021ae1c = 1;
  }
  DAT_1021ae20 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_NeedRetry",1,&DAT_10212800);
  DAT_1021ae24 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_RetryLimit",10,&DAT_10212800);
  DAT_1021ae28 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_DelayTime",5,&DAT_10212800);
  DAT_1021ae2c = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_MutiMonitorSelect",1,&DAT_10212800);
  if (2 < DAT_1021ae2c) {
    DAT_1021ae2c = 1;
  }
  DAT_1021ae30 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_MutiRTMonitorSelect",0,&DAT_10212800);
  if (1 < DAT_1021ae30) {
    DAT_1021ae30 = 0;
  }
  GetPrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",L"",&local_210,0x104,&DAT_10212800);
  pWVar3 = &local_210;
  do {
    WVar1 = *pWVar3;
    pWVar3 = pWVar3 + 1;
  } while (WVar1 != L'\0');
  FUN_100351f0(&local_210,(int)pWVar3 - (int)local_20e >> 1);
  DAT_1021ae38 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_RecordSelectDevice",1,&DAT_10212800);
  DAT_1021ae3c = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_CheckDpcdTable",1,&DAT_10212800);
  UVar2 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_I2CPageLen",0x20,&DAT_10212800);
  DAT_1021ae40 = (char)UVar2;
  DAT_1021ae44 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_CheckSlaveAddress",1,&DAT_10212800);
  DAT_1021ae54 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_EnableDebugLog",1,&DAT_10212800);
  DAT_1021ae5c = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_StopIsp",0,&DAT_10212800);
  DAT_1021ae60 = GetPrivateProfileIntW
                           (L"Comm_AUX",L"AUX_WaitDelayTimeAfterSendData",0,&DAT_10212800);
  DAT_1021ae64 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_bAutoDetectIntelSDK",1,&DAT_10212800);
  DAT_1021ae68 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_IntelSDKType",1,&DAT_10212800);
  DAT_1021ae6c = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_CheckBranchOUIOnly",0,&DAT_10212800);
  DAT_1021ae70 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_CheckSpecificDPCD",0,&DAT_10212800);
  DAT_1021ae8c = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_SPDPCDStartAddr",0,&DAT_10212800);
  GetPrivateProfileStringW(L"Comm_AUX",L"AUX_SPDPCDData",L"",&local_210,0x104,&DAT_10212800);
  pWVar3 = &local_210;
  do {
    WVar1 = *pWVar3;
    pWVar3 = pWVar3 + 1;
  } while (WVar1 != L'\0');
  FUN_100351f0(&local_210,(int)pWVar3 - (int)local_20e >> 1);
  DAT_1021ae74 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_CheckOnBoardDevice",0,&DAT_10212800);
  DAT_1021ae78 = GetPrivateProfileIntW
                           (L"Comm_AUX",L"AUX_SendCmdToFirstBranchForAMD",1,&DAT_10212800);
  DAT_1021ae7c = GetPrivateProfileIntW
                           (L"Comm_AUX",L"AUX_UseNameLoadIntelDriverControlDll",0,&DAT_10212800);
  DAT_1021ae58 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_RecordI2CData",0,&DAT_10212800);
  DAT_1021ae48 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_CheckExtarSlaveAddress",0,&DAT_10212800);
  UVar2 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_ExtarSlaveAddress",0,&DAT_10212800);
  DAT_1021ae50 = (char)UVar2;
  DAT_1021ae4c = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_OnlyUseExtarSlaveAddress",0,&DAT_10212800);
  DAT_1021ae80 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_IncompleteWriteNeedRetry",1,&DAT_10212800);
  DAT_1021ae84 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_NvidiaMSTSupport",0,&DAT_10212800);
  DAT_1021ae90 = GetPrivateProfileIntW(L"Comm_AUX",L"AUX_NvidiaIICAuxAccess",0,&DAT_10212800);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

