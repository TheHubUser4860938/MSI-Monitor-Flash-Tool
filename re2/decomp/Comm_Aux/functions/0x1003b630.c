// rea decompile_all
// name: AuxSnifferStart
// address: 0x1003b630
// body: available
// range: 0x1003b630-0x1003b635 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 AuxSnifferStart(void)

{
                    /* 0x3b630  2  AuxSnifferStart
                       0x3b630  3  BankErase
                       0x3b630  5  ConfigProgramFlash
                       0x3b630  6  DebugMessageEnd
                       0x3b630  7  DebugMessageEventFinish
                       0x3b630  8  DebugMessageEventStart
                       0x3b630  9  DebugMessageGetString
                       0x3b630  10  DebugMessageGetValue
                       0x3b630  11  DebugMessageStart
                       0x3b630  12  GetAuxSnifferConfigPara
                       0x3b630  23  GetUsbDevicePath
                       0x3b630  29  I2CReadSegment
                       0x3b630  34  I2CWriteSegment
                       0x3b630  36  IspEnable
                       0x3b630  40  ReadAuxSniffer
                       0x3b630  41  ReadFlashData
                       0x3b630  43  RemoveDevice
                       0x3b630  44  ResetFirmware
                       0x3b630  45  SectorErase
                       0x3b630  47  SelectUsbByDevicePath
                       0x3b630  48  SelectUsbByIndex
                       0x3b630  49  SetAuxMode
                       0x3b630  53  SetNewRealtekUSBMode
                       0x3b630  54  SetSMBUSDataType
                       0x3b630  56  SetWaitingMode
                       0x3b630  57  TypeCUsbReadReg
                       0x3b630  58  TypeCUsbReadSysDevice
                       0x3b630  59  TypeCUsbWriteReg
                       0x3b630  60  TypeCUsbWriteSysDevice
                       0x3b630  61  WriteFlashData */
  return 0x804;
}

