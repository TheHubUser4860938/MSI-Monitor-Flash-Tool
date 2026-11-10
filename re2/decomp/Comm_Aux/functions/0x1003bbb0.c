// rea decompile_all
// name: FUN_1003bbb0
// address: 0x1003bbb0
// body: available
// range: 0x1003bbb0-0x1003c157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003bbe5 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bbb0(void)

{
  LPCWSTR pWVar1;
  int *piVar2;
  int iVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_05;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_06;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_07;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_08;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_09;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_10;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_11;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_12;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_13;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_14;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_15;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_16;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_17;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_18;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_19;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_20;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_21;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_22;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_23;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_24;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_25;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_26;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_27;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_28;
  LPCWSTR pWVar4;
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0c58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_10048e90(DAT_10206460 ^ (uint)&stack0xfffffffc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0(0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  local_14 = (LPCWSTR)(iVar3 + 0x10);
  local_8 = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae18);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_DetctType",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_00,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae1c);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_GraphicsType",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_01,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae20);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_NeedRetry",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_02,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae24);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_RetryLimit",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_03,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae28);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_DelayTime",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_04,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae2c);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_MutiMonitorSelect",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_05,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae30);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_MutiRTMonitorSelect",local_14,&DAT_10212800);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_06,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae38);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_RecordSelectDevice",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_07,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae3c);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_CheckDpcdTable",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_08,(wchar_t *)&local_14,&DAT_101e3bc8,(uint)DAT_1021ae40);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_I2CPageLen",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_09,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae44);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_CheckSlaveAddress",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_10,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae54);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_EnableDebugLog",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_11,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae5c);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_StopIsp",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_12,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae60);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_WaitDelayTimeAfterSendData",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_13,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae64);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_bAutoDetectIntelSDK",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_14,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae68);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_IntelSDKType",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_15,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae70);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_CheckSpecificDPCD",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_16,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae8c);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SPDPCDStartAddr",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_17,(wchar_t *)&local_14,&DAT_101e228c,DAT_1021ae88);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SPDPCDData",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_18,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae6c);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_CheckBranchOUIOnly",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_19,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae74);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_CheckOnBoardDevice",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_20,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae78);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SendCmdToFirstBranchForAMD",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_21,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae7c);
  WritePrivateProfileStringW
            (L"Comm_AUX",L"AUX_UseNameLoadIntelDriverControlDll",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_22,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae58);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_RecordI2CData",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_23,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae48);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_CheckExtarSlaveAddress",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_24,(wchar_t *)&local_14,&DAT_101e3bc8,(uint)DAT_1021ae50);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_ExtarSlaveAddress",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_25,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae4c);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_OnlyUseExtarSlaveAddress",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_26,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae80);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_IncompleteWriteNeedRetry",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_27,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae84);
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_NvidiaMSTSupport",local_14,&DAT_10212800);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_28,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae90);
  pWVar1 = local_14;
  WritePrivateProfileStringW(L"Comm_AUX",L"AUX_NvidiaIICAuxAccess",local_14,&DAT_10212800);
  local_8 = 0xffffffff;
  pWVar4 = pWVar1 + -8;
  LOCK();
  pWVar1 = pWVar1 + -2;
  iVar3 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)pWVar4 + 4))(pWVar4);
  }
  ExceptionList = local_10;
  return;
}

