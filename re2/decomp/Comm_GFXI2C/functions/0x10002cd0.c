// rea decompile_all
// name: BankErase
// address: 0x10002cd0
// body: available
// range: 0x10002cd0-0x10002cd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 BankErase(void)

{
                    /* 0x2cd0  2  BankErase
                       0x2cd0  3  DebugMessageEnd
                       0x2cd0  4  DebugMessageEventFinish
                       0x2cd0  5  DebugMessageEventStart
                       0x2cd0  6  DebugMessageGetString
                       0x2cd0  7  DebugMessageGetValue
                       0x2cd0  8  DebugMessageStart
                       0x2cd0  13  GetFTDIGetAckStatus
                       0x2cd0  18  GetUsbDevicePath
                       0x2cd0  31  IspEnable
                       0x2cd0  34  ReadFlashData
                       0x2cd0  36  RemoveDevice
                       0x2cd0  37  ResetFirmware
                       0x2cd0  38  SectorErase
                       0x2cd0  39  SelectUsbByDevicePath
                       0x2cd0  40  SelectUsbByIndex
                       0x2cd0  41  SetAuxMode
                       0x2cd0  43  SetFTDIGetAck
                       0x2cd0  45  SetSMBUSDataType
                       0x2cd0  47  SetWaitingMode
                       0x2cd0  48  TypeCUsbReadReg
                       0x2cd0  49  TypeCUsbReadSysDevice
                       0x2cd0  50  TypeCUsbWriteReg
                       0x2cd0  51  TypeCUsbWriteSysDevice
                       0x2cd0  52  WriteFlashData */
  return 0x2201;
}

