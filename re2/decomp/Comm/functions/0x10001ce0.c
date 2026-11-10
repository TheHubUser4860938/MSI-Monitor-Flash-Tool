// rea decompile_all
// name: FUN_10001ce0
// address: 0x10001ce0
// body: available
// range: 0x10001ce0-0x10002986 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10001d66 to 0x10003680 FUN_10003680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10001d8d to 0x10003680 FUN_10003680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10001e87 to 0x10003680 FUN_10003680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10002029 to 0x10003680 FUN_10003680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001ce0(void)

{
  LPCWSTR pWVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int *piVar4;
  LPCWSTR pWVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  LPCWSTR in_ECX;
  wchar_t *pwVar9;
  LPCWSTR pWVar10;
  wchar_t *pwVar11;
  wchar_t *local_23c;
  wchar_t *local_238;
  int *local_22c;
  int local_228;
  int local_224;
  LPCWSTR local_220;
  WCHAR local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1016d589;
  local_10 = ExceptionList;
  local_14 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10002990(local_14);
  FUN_100037c0(L"Comm_GLHubI2C.dll");
  local_8 = 0;
  FUN_100037c0(L"Comm_GLHubGen2.dll");
  local_8._0_1_ = 1;
  FUN_100037c0(in_ECX);
  local_8._0_1_ = 2;
  piVar4 = (int *)FUN_10013071();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003680(0x80004005);
  }
  pWVar5 = (LPCWSTR)(**(code **)(*piVar4 + 0xc))();
  pwVar11 = pWVar5 + 8;
  local_8._0_1_ = 3;
  piVar4 = (int *)FUN_10013071();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003680(0x80004005);
  }
  piVar4 = (int *)(**(code **)(*piVar4 + 0xc))();
  pwVar9 = (wchar_t *)(piVar4 + 4);
  local_8._0_1_ = 4;
  _memset(local_21c,0,0x208);
  piVar6 = (int *)FUN_10002e00(&local_22c,*(undefined4 *)(local_23c + -6));
  local_8._0_1_ = 5;
  local_228 = *piVar6;
  pWVar10 = (LPCWSTR)(local_228 + -0x10);
  local_220 = pWVar5;
  if (pWVar10 != pWVar5) {
    pWVar1 = pWVar5 + 6;
    if ((*(int *)(pWVar5 + 6) < 0) || (*(int *)pWVar10 != *(int *)pWVar5)) {
      FUN_100036d0(local_228,*(undefined4 *)(local_228 + -0xc));
    }
    else {
      local_228 = FUN_10003060(pWVar10);
      LOCK();
      iVar7 = *(int *)pWVar1;
      *(int *)pWVar1 = *(int *)pWVar1 + -1;
      UNLOCK();
      if (iVar7 == 1 || iVar7 + -1 < 0) {
        (**(code **)(**(int **)local_220 + 4))(local_220);
      }
      pwVar11 = (wchar_t *)(local_228 + 0x10);
    }
  }
  local_8._0_1_ = 4;
  LOCK();
  piVar6 = local_22c + -1;
  iVar7 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar7 == 1 || iVar7 + -1 < 0) {
    (**(code **)(*(int *)local_22c[-4] + 4))(local_22c + -4);
  }
  if (local_23c == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10003680(0x80004005);
  }
  iVar7 = __wcsicmp(pwVar11,local_23c);
  if (iVar7 == 0) {
    iVar7 = FUN_1014b2f4(local_224,0x5c);
    if (iVar7 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar7 - local_224 >> 1;
    }
    FUN_10002d90(&local_220,iVar7);
    local_8._0_1_ = 6;
    uVar8 = FUN_10002cc0(&local_22c,&local_220,L"\\GLHub\\");
    local_8._0_1_ = 7;
    FUN_100030d0(uVar8);
    local_8._0_1_ = 6;
    LOCK();
    piVar6 = local_22c + -1;
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(*(int *)local_22c[-4] + 4))(local_22c + -4);
    }
    GetCurrentDirectoryW(0x104,local_21c);
    pWVar10 = local_220;
    SetCurrentDirectoryW(local_220);
    pWVar5 = pWVar10 + -8;
    local_8._0_1_ = 4;
    LOCK();
    pWVar10 = pWVar10 + -2;
    iVar7 = *(int *)pWVar10;
    *(int *)pWVar10 = *(int *)pWVar10 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(**(int **)pWVar5 + 4))(pWVar5);
    }
  }
  piVar6 = (int *)FUN_10002e00(&local_220,*(undefined4 *)(local_238 + -6));
  local_8._0_1_ = 8;
  local_228 = *piVar6;
  piVar6 = (int *)(local_228 + -0x10);
  local_22c = piVar4;
  if (piVar6 != piVar4) {
    piVar2 = piVar4 + 3;
    if ((piVar4[3] < 0) || (*piVar6 != *piVar4)) {
      FUN_100036d0(local_228,*(undefined4 *)(local_228 + -0xc));
    }
    else {
      local_228 = FUN_10003060(piVar6);
      LOCK();
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1 || iVar7 + -1 < 0) {
        (**(code **)(*(int *)*local_22c + 4))(local_22c);
      }
      pwVar9 = (wchar_t *)(local_228 + 0x10);
    }
  }
  local_8._0_1_ = 4;
  LOCK();
  pWVar5 = local_220 + -2;
  iVar7 = *(int *)pWVar5;
  *(int *)pWVar5 = *(int *)pWVar5 + -1;
  UNLOCK();
  if (iVar7 == 1 || iVar7 + -1 < 0) {
    (**(code **)(**(int **)(local_220 + -8) + 4))(local_220 + -8);
  }
  if (local_238 != (wchar_t *)0x0) {
    iVar7 = __wcsicmp(pwVar9,local_238);
    if (iVar7 == 0) {
      iVar7 = FUN_1014b2f4(local_224,0x5c);
      if (iVar7 == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = iVar7 - local_224 >> 1;
      }
      FUN_10002d90(&local_220,iVar7);
      local_8._0_1_ = 9;
      uVar8 = FUN_10002cc0(&local_22c,&local_220,L"\\GLHubGen2\\");
      local_8._0_1_ = 10;
      FUN_100030d0(uVar8);
      local_8._0_1_ = 9;
      LOCK();
      piVar4 = local_22c + -1;
      iVar7 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar7 == 1 || iVar7 + -1 < 0) {
        (**(code **)(*(int *)local_22c[-4] + 4))(local_22c + -4);
      }
      GetCurrentDirectoryW(0x104,local_21c);
      pWVar5 = local_220;
      SetCurrentDirectoryW(local_220);
      local_8._0_1_ = 4;
      pWVar10 = pWVar5 + -8;
      LOCK();
      pWVar5 = pWVar5 + -2;
      iVar7 = *(int *)pWVar5;
      *(int *)pWVar5 = *(int *)pWVar5 + -1;
      UNLOCK();
      if (iVar7 == 1 || iVar7 + -1 < 0) {
        (**(code **)(**(int **)pWVar10 + 4))(pWVar10);
      }
    }
    DAT_101def1c = LoadLibraryW(in_ECX);
    if (DAT_101def1c != (HMODULE)0x0) {
      DAT_101def18 = GetProcAddress(DAT_101def1c,"InitialDev");
      if (((((DAT_101def18 == (FARPROC)0x0) ||
            (DAT_101def14 = GetProcAddress(DAT_101def1c,"ReleaseDev"), DAT_101def14 == (FARPROC)0x0)
            ) || (DAT_101def10 = GetProcAddress(DAT_101def1c,"GetCommID"),
                 DAT_101def10 == (FARPROC)0x0)) ||
          (((((DAT_101def0c = GetProcAddress(DAT_101def1c,"GetCommName"),
              DAT_101def0c == (FARPROC)0x0 ||
              (DAT_101def08 = GetProcAddress(DAT_101def1c,"GetI2CPageLength"),
              DAT_101def08 == (FARPROC)0x0)) ||
             ((DAT_101def04 = GetProcAddress(DAT_101def1c,"GetNativePageLength"),
              DAT_101def04 == (FARPROC)0x0 ||
              ((DAT_101def00 = GetProcAddress(DAT_101def1c,"I2CWrite"), DAT_101def00 == (FARPROC)0x0
               || (DAT_101deefc = GetProcAddress(DAT_101def1c,"I2CRead"),
                  DAT_101deefc == (FARPROC)0x0)))))) ||
            (_DAT_101deef8 = GetProcAddress(DAT_101def1c,"I2CWriteByte"),
            _DAT_101deef8 == (FARPROC)0x0)) ||
           (((((DAT_101deef4 = GetProcAddress(DAT_101def1c,"I2CCurrentRead"),
               DAT_101deef4 == (FARPROC)0x0 ||
               (DAT_101deef0 = GetProcAddress(DAT_101def1c,"I2CWordWrite"),
               DAT_101deef0 == (FARPROC)0x0)) ||
              (DAT_101deeec = GetProcAddress(DAT_101def1c,"I2CWordRead"),
              DAT_101deeec == (FARPROC)0x0)) ||
             ((DAT_101deee8 = GetProcAddress(DAT_101def1c,"AdjustOption"),
              DAT_101deee8 == (FARPROC)0x0 ||
              (DAT_101deee4 = GetProcAddress(DAT_101def1c,"SetI2CSpeed"),
              DAT_101deee4 == (FARPROC)0x0)))) ||
            ((DAT_101deee0 = GetProcAddress(DAT_101def1c,"GetI2CSpeed"),
             DAT_101deee0 == (FARPROC)0x0 ||
             ((DAT_101deedc = GetProcAddress(DAT_101def1c,"SetAuxMode"),
              DAT_101deedc == (FARPROC)0x0 ||
              (DAT_101deed8 = GetProcAddress(DAT_101def1c,"SetWaitingMode"),
              DAT_101deed8 == (FARPROC)0x0)))))))))) ||
         ((((DAT_101deed4 = GetProcAddress(DAT_101def1c,"GetWaitingMode"),
            DAT_101deed4 == (FARPROC)0x0 ||
            (((((DAT_101deed0 = GetProcAddress(DAT_101def1c,"NativeWrite"),
                DAT_101deed0 == (FARPROC)0x0 ||
                (DAT_101deecc = GetProcAddress(DAT_101def1c,"NativeRead"),
                DAT_101deecc == (FARPROC)0x0)) ||
               (DAT_101deec8 = GetProcAddress(DAT_101def1c,"SetSettingFilePath"),
               DAT_101deec8 == (FARPROC)0x0)) ||
              ((DAT_101deec4 = GetProcAddress(DAT_101def1c,"GetDeviceHandler"),
               DAT_101deec4 == (FARPROC)0x0 ||
               (DAT_101deec0 = GetProcAddress(DAT_101def1c,"ResetFirmware"),
               DAT_101deec0 == (FARPROC)0x0)))) ||
             (DAT_101deebc = GetProcAddress(DAT_101def1c,"GetSMBUSDataType"),
             DAT_101deebc == (FARPROC)0x0)))) ||
           (((((DAT_101deeb8 = GetProcAddress(DAT_101def1c,"SetSMBUSDataType"),
               DAT_101deeb8 == (FARPROC)0x0 ||
               (DAT_101deeb4 = GetProcAddress(DAT_101def1c,"GetDeviceCount"),
               DAT_101deeb4 == (FARPROC)0x0)) ||
              ((DAT_101deeb0 = GetProcAddress(DAT_101def1c,"RemoveDevice"),
               DAT_101deeb0 == (FARPROC)0x0 ||
               (((DAT_101deeac = GetProcAddress(DAT_101def1c,"SetFTDIGetAck"),
                 DAT_101deeac == (FARPROC)0x0 ||
                 (DAT_101deea8 = GetProcAddress(DAT_101def1c,"GetFTDIGetAckStatus"),
                 DAT_101deea8 == (FARPROC)0x0)) ||
                (DAT_101deea4 = GetProcAddress(DAT_101def1c,"GetUsbDevicePath"),
                DAT_101deea4 == (FARPROC)0x0)))))) ||
             (((DAT_101deea0 = GetProcAddress(DAT_101def1c,"SelectUsbByDevicePath"),
               DAT_101deea0 == (FARPROC)0x0 ||
               (DAT_101dee9c = GetProcAddress(DAT_101def1c,"SelectUsbByIndex"),
               DAT_101dee9c == (FARPROC)0x0)) ||
              (_DAT_101dee98 = GetProcAddress(DAT_101def1c,"SetCmdLine"),
              _DAT_101dee98 == (FARPROC)0x0)))) ||
            (((DAT_101dee94 = GetProcAddress(DAT_101def1c,"I2CWriteSegment"),
              DAT_101dee94 == (FARPROC)0x0 ||
              (DAT_101dee90 = GetProcAddress(DAT_101def1c,"I2CReadSegment"),
              DAT_101dee90 == (FARPROC)0x0)) ||
             ((DAT_101dee54 = GetProcAddress(DAT_101def1c,"WriteFlashData"),
              DAT_101dee54 == (FARPROC)0x0 ||
              (((DAT_101dee50 = GetProcAddress(DAT_101def1c,"ReadFlashData"),
                DAT_101dee50 == (FARPROC)0x0 ||
                (_DAT_101dee48 = GetProcAddress(DAT_101def1c,"TypeCUsbWriteSysDevice"),
                _DAT_101dee48 == (FARPROC)0x0)) ||
               (_DAT_101dee4c = GetProcAddress(DAT_101def1c,"TypeCUsbReadSysDevice"),
               _DAT_101dee4c == (FARPROC)0x0)))))))))) ||
          (((DAT_101dee44 = GetProcAddress(DAT_101def1c,"SectorErase"), DAT_101dee44 == (FARPROC)0x0
            || (_DAT_101dee40 = GetProcAddress(DAT_101def1c,"BankErase"),
               _DAT_101dee40 == (FARPROC)0x0)) ||
           ((_DAT_101dee3c = GetProcAddress(DAT_101def1c,"IspEnable"), _DAT_101dee3c == (FARPROC)0x0
            || (((_DAT_101dee38 = GetProcAddress(DAT_101def1c,"DebugMessageEventStart"),
                 _DAT_101dee38 == (FARPROC)0x0 ||
                 (_DAT_101dee34 = GetProcAddress(DAT_101def1c,"DebugMessageEventFinish"),
                 _DAT_101dee34 == (FARPROC)0x0)) ||
                ((_DAT_101dee30 = GetProcAddress(DAT_101def1c,"DebugMessageStart"),
                 _DAT_101dee30 == (FARPROC)0x0 ||
                 (((_DAT_101dee2c = GetProcAddress(DAT_101def1c,"DebugMessageEnd"),
                   _DAT_101dee2c == (FARPROC)0x0 ||
                   (_DAT_101dee28 = GetProcAddress(DAT_101def1c,"DebugMessageGetValue"),
                   _DAT_101dee28 == (FARPROC)0x0)) ||
                  (_DAT_101dee24 = GetProcAddress(DAT_101def1c,"DebugMessageGetString"),
                  _DAT_101dee24 == (FARPROC)0x0)))))))))))))) {
        FUN_10002990();
      }
      else {
        DAT_101dee8c = GetProcAddress(DAT_101def1c,"ReceiveUsbPacket");
        DAT_101dee88 = GetProcAddress(DAT_101def1c,"SendUsbPacket");
        DAT_101dee84 = GetProcAddress(DAT_101def1c,"SetIDev");
        DAT_101dee80 = GetProcAddress(DAT_101def1c,"ConfigProgramFlash");
        DAT_101dee7c = GetProcAddress(DAT_101def1c,"ReadAuxSniffer");
        DAT_101dee78 = GetProcAddress(DAT_101def1c,"NeedSetMcuDefault");
        DAT_101dee74 = GetProcAddress(DAT_101def1c,"CompleteIspFlowInISPBoard");
        DAT_101dee70 = GetProcAddress(DAT_101def1c,"AuxSnifferStart");
        DAT_101dee6c = GetProcAddress(DAT_101def1c,"GetAuxSnifferConfigPara");
        DAT_101dee68 = GetProcAddress(DAT_101def1c,"SetNewRealtekUSBMode");
        DAT_101dee64 = GetProcAddress(DAT_101def1c,"SetI2CDebugPort");
        DAT_101dee60 = GetProcAddress(DAT_101def1c,"SetI2CoverAUXDebugPort");
        DAT_101dee5c = GetProcAddress(DAT_101def1c,"I2C2SubWrite");
        DAT_101dee58 = GetProcAddress(DAT_101def1c,"I2C2SubRead");
        DAT_101dee20 = GetProcAddress(DAT_101def1c,"CheckSnifferBoardCustomerId");
        DAT_101dee1c = GetProcAddress(DAT_101def1c,"ExtMcuReadByte");
        DAT_101dee18 = GetProcAddress(DAT_101def1c,"ExtMcuWriteByte");
        DAT_101dee14 = GetProcAddress(DAT_101def1c,"ExtMcuReadDword");
        DAT_101dee10 = GetProcAddress(DAT_101def1c,"ExtMcuWriteDword");
        GetProcAddress(DAT_101def1c,"GetNewRtUsbDebugMode");
        DAT_101dee0c = GetProcAddress(DAT_101def1c,"SmbusWritePhy");
        DAT_101dee08 = GetProcAddress(DAT_101def1c,"SmbusReadPhy");
        DAT_101dee04 = GetProcAddress(DAT_101def1c,"U4SmbusWriteMemory");
        DAT_101dee00 = GetProcAddress(DAT_101def1c,"U4SmbusReadMemory");
        DAT_101dedfc = GetProcAddress(DAT_101def1c,"SmbusVdCmdEnable");
        DAT_101dedf8 = GetProcAddress(DAT_101def1c,"I2CSlaveWrite");
        DAT_101dedf4 = GetProcAddress(DAT_101def1c,"I2CSlaveRead");
        DAT_101dedf0 = GetProcAddress(DAT_101def1c,"I2CStretchRead");
        DAT_101dedec = GetProcAddress(DAT_101def1c,"I2CWordSlaveWrite");
        DAT_101dede8 = GetProcAddress(DAT_101def1c,"I2CWordSlaveRead");
        DAT_101dede4 = GetProcAddress(DAT_101def1c,"I2CWordStretchRead");
        DAT_101dede0 = GetProcAddress(DAT_101def1c,"cpiSetPortMode");
        DAT_101deddc = GetProcAddress(DAT_101def1c,"cpiBBIdentifyDevice");
        DAT_101dedd8 = GetProcAddress(DAT_101def1c,"GetDisplayCount");
        DAT_101dedd4 = GetProcAddress(DAT_101def1c,"SelectDisplayByIndex");
        DAT_101dedd0 = GetProcAddress(DAT_101def1c,"GetQCDisplaySetting");
        iVar7 = FUN_10002e80(local_23c);
        if (iVar7 == 0) {
          SetCurrentDirectoryW(local_21c);
        }
        iVar7 = FUN_10002e80(local_238);
        if (iVar7 == 0) {
          SetCurrentDirectoryW(local_21c);
        }
      }
    }
    local_8._0_1_ = 3;
    LOCK();
    pwVar3 = pwVar9 + -2;
    iVar7 = *(int *)pwVar3;
    *(int *)pwVar3 = *(int *)pwVar3 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(**(int **)(pwVar9 + -8) + 4))(pwVar9 + -8);
    }
    local_8._0_1_ = 2;
    LOCK();
    pwVar9 = pwVar11 + -2;
    iVar7 = *(int *)pwVar9;
    *(int *)pwVar9 = *(int *)pwVar9 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(**(int **)(pwVar11 + -8) + 4))(pwVar11 + -8);
    }
    local_8._0_1_ = 1;
    LOCK();
    piVar4 = (int *)(local_224 + -4);
    iVar7 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(**(int **)(local_224 + -0x10) + 4))((undefined4 *)(local_224 + -0x10));
    }
    local_8 = (uint)local_8._1_3_ << 8;
    LOCK();
    pwVar11 = local_238 + -2;
    iVar7 = *(int *)pwVar11;
    *(int *)pwVar11 = *(int *)pwVar11 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(**(int **)(local_238 + -8) + 4))(local_238 + -8);
    }
    local_8 = 0xffffffff;
    LOCK();
    pwVar11 = local_23c + -2;
    iVar7 = *(int *)pwVar11;
    *(int *)pwVar11 = *(int *)pwVar11 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(**(int **)(local_23c + -8) + 4))(local_23c + -8);
    }
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10003680(0x80004005);
}

