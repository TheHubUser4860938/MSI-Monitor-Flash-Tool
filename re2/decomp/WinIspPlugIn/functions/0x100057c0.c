// rea decompile_all
// name: FUN_100057c0
// address: 0x100057c0
// body: available
// range: 0x100057c0-0x10006554 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100057c0(LPCWSTR param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 8))();
  hModule = LoadLibraryW(param_1);
  in_ECX[0xd] = (int)hModule;
  if (hModule == (HMODULE)0x0) {
    return 0;
  }
  pFVar1 = GetProcAddress(hModule,"GetI2CPageLength");
  in_ECX[0xe] = (int)pFVar1;
  if (pFVar1 != (FARPROC)0x0) {
    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"GetNativePageLength");
    in_ECX[0x21] = (int)pFVar1;
    if (pFVar1 != (FARPROC)0x0) {
      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"I2CWrite");
      in_ECX[0xf] = (int)pFVar1;
      if (pFVar1 != (FARPROC)0x0) {
        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"I2CRead");
        in_ECX[0x10] = (int)pFVar1;
        if (pFVar1 != (FARPROC)0x0) {
          pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"I2CWriteByte");
          in_ECX[0x22] = (int)pFVar1;
          if (pFVar1 != (FARPROC)0x0) {
            pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"I2CCurrentRead");
            in_ECX[0x23] = (int)pFVar1;
            if (pFVar1 != (FARPROC)0x0) {
              pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"I2CWordWrite");
              in_ECX[0x24] = (int)pFVar1;
              if (pFVar1 != (FARPROC)0x0) {
                pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"I2CWordRead");
                in_ECX[0x26] = (int)pFVar1;
                if (pFVar1 != (FARPROC)0x0) {
                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"I2CWriteEx");
                  in_ECX[0x28] = (int)pFVar1;
                  if (pFVar1 != (FARPROC)0x0) {
                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"I2CReadEx");
                    in_ECX[0x29] = (int)pFVar1;
                    if (pFVar1 != (FARPROC)0x0) {
                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"I2CCurrentReadEx");
                      in_ECX[0x2a] = (int)pFVar1;
                      if (pFVar1 != (FARPROC)0x0) {
                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"I2CWordWriteEx");
                        in_ECX[0x2b] = (int)pFVar1;
                        if (pFVar1 != (FARPROC)0x0) {
                          pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"I2CWordReadEx");
                          in_ECX[0x2d] = (int)pFVar1;
                          if (pFVar1 != (FARPROC)0x0) {
                            pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"AdjustOption");
                            in_ECX[0x2f] = (int)pFVar1;
                            if (pFVar1 != (FARPROC)0x0) {
                              pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"SetI2CSpeed");
                              in_ECX[0x30] = (int)pFVar1;
                              if (pFVar1 != (FARPROC)0x0) {
                                pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"GetI2CSpeed");
                                in_ECX[0x31] = (int)pFVar1;
                                if (pFVar1 != (FARPROC)0x0) {
                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"SetAuxMode");
                                  in_ECX[0x32] = (int)pFVar1;
                                  if (pFVar1 != (FARPROC)0x0) {
                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"SetWaitingMode");
                                    in_ECX[0x33] = (int)pFVar1;
                                    if (pFVar1 != (FARPROC)0x0) {
                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"GetWaitingMode")
                                      ;
                                      in_ECX[0x34] = (int)pFVar1;
                                      if (pFVar1 != (FARPROC)0x0) {
                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"Initiallize");
                                        in_ECX[0x11] = (int)pFVar1;
                                        if (pFVar1 != (FARPROC)0x0) {
                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                  "GetCommCount");
                                          in_ECX[0x12] = (int)pFVar1;
                                          if (pFVar1 != (FARPROC)0x0) {
                                            pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],"GetCommID"
                                                                   );
                                            in_ECX[0x14] = (int)pFVar1;
                                            if (pFVar1 != (FARPROC)0x0) {
                                              pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                      "GetCommName");
                                              in_ECX[0x15] = (int)pFVar1;
                                              if (pFVar1 != (FARPROC)0x0) {
                                                pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                        "GetAllCommName");
                                                in_ECX[0x13] = (int)pFVar1;
                                                if (pFVar1 != (FARPROC)0x0) {
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "SetCommByIndex");
                                                  in_ECX[0x17] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "SetCommByID");
                                                    in_ECX[0x18] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "GetCommFile");
                                                      in_ECX[0x16] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"SetDebugSlave");
                                                        in_ECX[0x19] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"SetIspSlave");
                                                  in_ECX[0x1a] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "SetIspContinuousSlave")
                                                    ;
                                                    in_ECX[0x1b] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "GetDebugSlave");
                                                      in_ECX[0x1c] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"GetIspSlave");
                                                        in_ECX[0x1d] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"GetIspContinuousSlave");
                                                  in_ECX[0x1e] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "SetDebugMode");
                                                    in_ECX[0x1f] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "GetDebugMode");
                                                      in_ECX[0x20] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"ReadReg");
                                                        in_ECX[0x35] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"WriteReg");
                                                  in_ECX[0x36] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "ReadRegs");
                                                    in_ECX[0x37] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "WriteRegs");
                                                      in_ECX[0x38] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"WriteRegBit");
                                                        in_ECX[0x39] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"WritePortRegBit");
                                                  in_ECX[0x3a] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "ReadRegEx");
                                                    in_ECX[0x3b] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "WriteRegEx");
                                                      in_ECX[0x3c] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"ReadRegsEx");
                                                        in_ECX[0x3d] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"WriteRegsEx");
                                                  in_ECX[0x3e] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "WriteRegBitEx");
                                                    in_ECX[0x3f] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "WritePortRegBitEx");
                                                      in_ECX[0x40] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"ReadSysDevice");
                                                        in_ECX[0x41] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"WriteSysDevice");
                                                  in_ECX[0x42] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "ReadWordSysDevice");
                                                    in_ECX[0x43] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "WriteWordSysDevice");
                                                      in_ECX[0x44] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"ScalerStop");
                                                        in_ECX[0x45] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"ScalerRun");
                                                  in_ECX[0x46] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "WriteMcuReg");
                                                    in_ECX[0x47] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "WriteMcuRegBit");
                                                      in_ECX[0x4a] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"ReadMcuReg");
                                                        in_ECX[0x49] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"WriteMcuRegs");
                                                  in_ECX[0x48] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "ReadMcuRegs");
                                                    in_ECX[0x4b] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                                                                                                            
                                                  "WriteContinuousMcuReg");
                                                  in_ECX[0x4c] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "ReadContinuousMcuReg");
                                                    in_ECX[0x4d] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "ReleaseDev");
                                                      in_ECX[0x4e] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"NativeWrite");
                                                        in_ECX[0x4f] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"NativeRead");
                                                  in_ECX[0x50] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "SetSettingFilePath");
                                                    in_ECX[0x51] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "GetDeviceHandler");
                                                      in_ECX[0x52] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"ResetFirmware");
                                                        in_ECX[0x53] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"EnterIspMode");
                                                  in_ECX[0x54] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "GetSMBUSDataType");
                                                    in_ECX[0x55] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "SetSMBUSDataType");
                                                      in_ECX[0x56] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"GetDeviceCount");
                                                        in_ECX[0x57] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"RemoveDevice");
                                                  in_ECX[0x58] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "AutoDetectSlaveAddr");
                                                    in_ECX[0x59] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "DDCCIWrite");
                                                      in_ECX[0x5a] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"DDCCIRead");
                                                        in_ECX[0x5b] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"SetFTDIGetAck");
                                                  in_ECX[0x5c] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "GetFTDIGetAckStatus");
                                                    in_ECX[0x5d] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "I2CMasterInitial");
                                                      in_ECX[0x5e] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,
                                                  "I2CMasterCurrentRead");
                                                  in_ECX[0x5f] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "I2CMasterCurrentReadEx"
                                                                           );
                                                    in_ECX[0x60] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "I2CMasterRead");
                                                      in_ECX[0x61] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"I2CMasterReadEx");
                                                        in_ECX[0x62] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"I2CMasterWordRead");
                                                  in_ECX[99] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "I2CMasterWordReadEx");
                                                    in_ECX[100] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                                                                                                            
                                                  "I2CMasterCurrentWrite");
                                                  in_ECX[0x65] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                                                                                                        
                                                  "I2CMasterCurrentWriteEx");
                                                  in_ECX[0x66] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "I2CMasterWrite");
                                                    in_ECX[0x67] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "I2CMasterWriteByte");
                                                      in_ECX[0x68] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"I2CMasterWriteEx")
                                                        ;
                                                        in_ECX[0x69] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"I2CMasterWordWrite");
                                                  in_ECX[0x6a] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "I2CMasterWordWriteEx");
                                                    in_ECX[0x6b] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "GetUsbDevicePath");
                                                      in_ECX[0x6c] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,
                                                  "SelectUsbByDevicePath");
                                                  in_ECX[0x6d] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "SelectUsbByIndex");
                                                    in_ECX[0x6e] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "ReadFlashData");
                                                      in_ECX[0x70] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"WriteFlashData");
                                                        in_ECX[0x6f] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"SetCmdLine");
                                                  in_ECX[0x79] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "Read32BitRegEx");
                                                    in_ECX[0x7c] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "Write32BitRegEx");
                                                      in_ECX[0x7d] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"Read32BitRegsEx");
                                                        in_ECX[0x7e] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"Write32BitRegsEx");
                                                  in_ECX[0x7f] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "ReadDDRRegEx");
                                                    in_ECX[0x80] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "WriteDDRRegEx");
                                                      in_ECX[0x81] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"ReadDDRRegsEx");
                                                        in_ECX[0x82] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"WriteDDRRegsEx");
                                                  in_ECX[0x83] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "ReadPWM2SPIReg");
                                                    in_ECX[0x84] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "WritePWM2SPIReg");
                                                      in_ECX[0x85] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"ReadPWM2SPIDev");
                                                        in_ECX[0x86] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"WritePWM2SPIDev");
                                                  in_ECX[0x87] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "ReadPWM2SPIWordReg");
                                                    in_ECX[0x88] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "WritePWM2SPIWordReg")
                                                      ;
                                                      in_ECX[0x89] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,
                                                  "ReadPWM2SPIWordDev");
                                                  in_ECX[0x8a] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "WritePWM2SPIWordDev");
                                                    in_ECX[0x8b] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "I2CWriteSegment");
                                                      in_ECX[0x8c] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"I2CWriteSegmentEx"
                                                                               );
                                                        in_ECX[0x8d] = (int)pFVar1;
                                                        if (pFVar1 != (FARPROC)0x0) {
                                                          pFVar1 = GetProcAddress((HMODULE)in_ECX[
                                                  0xd],"I2CReadSegment");
                                                  in_ECX[0x8e] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "I2CReadSegmentEx");
                                                    in_ECX[0x8f] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "AutoEnterIspMode");
                                                      in_ECX[0x90] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,
                                                  "SetSpecialCommType");
                                                  in_ECX[0x7b] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "GetSpecialCommType");
                                                    in_ECX[0x7a] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "SetIDevInComm");
                                                      in_ECX[0x91] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"SendUsbPacket");
                                                        in_ECX[0x92] = (int)pFVar1;
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,"ReceiveUsbPacket")
                                                        ;
                                                        in_ECX[0x93] = (int)pFVar1;
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,
                                                  "ConfigProgramFlash");
                                                  in_ECX[0x98] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "ReadAuxSniffer");
                                                    in_ECX[0x99] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "NeedSetMcuDefault");
                                                      in_ECX[0x9a] = (int)pFVar1;
                                                      if (pFVar1 != (FARPROC)0x0) {
                                                        pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd]
                                                                                ,
                                                  "CompleteIspFlowInISPBoard");
                                                  in_ECX[0x9b] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "AuxSnifferStart");
                                                    in_ECX[0x9c] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                                                                                                            
                                                  "GetAuxSnifferConfigPara");
                                                  in_ECX[0x9d] = (int)pFVar1;
                                                  if (pFVar1 != (FARPROC)0x0) {
                                                    pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                            "SetNewRealtekUSBMode");
                                                    in_ECX[0x9e] = (int)pFVar1;
                                                    if (pFVar1 != (FARPROC)0x0) {
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                              "SetI2CDebugPort");
                                                      in_ECX[0x9f] = (int)pFVar1;
                                                      pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                                                                                                            
                                                  "SetI2CoverAUXDebugPort");
                                                  in_ECX[0xa0] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "ReadDDRCPURegEx");
                                                  in_ECX[0x94] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "WriteDDRCPURegEx");
                                                  in_ECX[0x95] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "ReadDDRCPURegsEx");
                                                  in_ECX[0x96] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "WriteDDRCPURegsEx");
                                                  in_ECX[0x97] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                                                                                                    
                                                  "CheckSnifferBoardCustomerId");
                                                  in_ECX[0xa1] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "I2CSlaveWrite");
                                                  in_ECX[0xa2] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "I2CSlaveRead");
                                                  in_ECX[0xa3] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "Read32BitReg1Byte");
                                                  in_ECX[0xa4] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "I2CStretchRead");
                                                  in_ECX[0xa5] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "Write32BitReg1Byte");
                                                  in_ECX[0xa6] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "I2CWordSlaveWrite");
                                                  in_ECX[0xa7] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "I2CWordSlaveRead");
                                                  in_ECX[0xa8] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "I2CWordStretchRead");
                                                  in_ECX[0xa9] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "SetPortMode");
                                                  in_ECX[0xaa] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "BBIdentifyDevice");
                                                  in_ECX[0xab] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "DebugMessageEventStart");
                                                  in_ECX[0x73] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "DebugMessageEventFinish")
                                                  ;
                                                  in_ECX[0x74] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "DebugMessageStart");
                                                  in_ECX[0x75] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "DebugMessageEnd");
                                                  in_ECX[0x76] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "DebugMessageGetValue");
                                                  in_ECX[0x77] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "DebugMessageGetString");
                                                  in_ECX[0x78] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "GetDisplayCount");
                                                  in_ECX[0xac] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "SelectDisplayByIndex");
                                                  in_ECX[0xad] = (int)pFVar1;
                                                  pFVar1 = GetProcAddress((HMODULE)in_ECX[0xd],
                                                                          "GetQCDisplaySetting");
                                                  in_ECX[0xae] = (int)pFVar1;
                                                  return 1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  (**(code **)(*in_ECX + 8))();
  return 0;
}

