# Findings — the ISP step sequence (worker pass, verified 2026-11-10)

Source: `WinIspPlugIn.dll` pseudocode, `re2/decomp/WinIspPlugIn/functions/`.
Evidence: the ISP flow `FUN_10034120` and the 19 functions it calls in order.

## The device interface (`DAT_10249d10` = the injected `IComm`)

| slot | name | args |
|---|---|---|
| 0x00 | Release | |
| 0x08 | Close | |
| 0x0c | Init | |
| 0x10 | SetIspSlave | byte slave |
| 0x14 | SetContinuousIspSlave | byte slave |
| 0x54 | Write | slave, addr_hi, addr_lo, buf |
| 0x58 | SetPacketLen | u16 |
| 0x5c | WriteSegment | slave, addr_hi, addr_lo, len, buf |
| 0x60 | Read | slave, addr_hi, addr_lo → byte |
| 0x64 | ReadSegment | slave, addr_hi, addr_lo, len, buf |
| 0x74 | WriteByte | slave, addr, value |
| 0x78 | ReadByte | slave, addr → byte |
| 0x94 | SetI2CSpeed | u16 (from `ulIspSpeed`) |
| 0xa0 | SectorErase | slave, sector_addr |
| 0xa4 | BankErase | slave, bank_addr |
| 0xa8 | ResetFirmware | |
| 0xac | NativeRead | |
| 0xb0 | NativeWrite | |
| 0xb8 | ScalerRun | |
| 0xbc | ScalerStop | |
| 0xc0 | SmbusVdCmdEnable | |
| 0xd8 | ReadMcuReg | slave, reg |
| 0xdc | WriteMcuReg | slave, reg, value |
| 0xe0 | WriteMcuRegBit | slave, reg, bit, value |
| 0xe8 | ReadMcuRegs | slave, reg, len, buf |
| 0xec | WriteContinuousMcuReg | slave, reg, len, buf |
| 0x10c | UnInitiallize | |
| 0x110 | GetI2CPageLength → u16 | |
| 0x114 | GetNativePageLength → u16 | |
| 0x13c | Write32BitRegEx | slave, addr, len, buf |
| 0x140 | Read32BitRegEx | slave, addr, len, buf |
| 0x148 | Write32BitReg1Byte | slave, addr, byte |

## The sequence

**1 `FUN_10023760` handshake** — slot 0xc0, u8@1024a418, 10 × (slot 0x10c + slot 0x08, 10 ms) →
slot 0x0c + slot 0x10, u16@1024a414; 10 × (0xa8 + 0xb8 + 0x60@0x00F4 + Sleep) → 0x60@0x000C.
`"HandShakeBeforeEnterIspModeByBootType fail, error code:0x%x"`

**2 `FUN_1000b550`** — 1024a430 := 0, 1024a418/1024a414 cleared.

**3 `FUN_1000c880`** — clears the bank vector at 10249d80.

**4 `FUN_1001bbd0` slave detect** — `bAutoDetectSlave`@1024a358. Fixed: slot 0x10 then
0x60@(0x01,0xF4). Probe: 0x60@0x00F4, `if !(v==0 && (bDDCCIReadNotReturn0x6E==0 || v==0x6E)) NACK`;
then 0x6A, then 0x7C. SlaveAddr is **7-bit** (Comm_Aux `FUN_1003b7e0`: 0x6A → wire 0xD4/0xD5,
0x7C → 0xF8/0xF9). Config slave @1024a41c.
`"All slave address 0x%x/0x6A/0x7C NACK! Read Count:%d"` · `"AutoDetectSlaveAddr:0x%X"`

**5 `FUN_10016b00` boot code** — slot 0x60 @ (0x01,0xF4); if `bAuto`@1024a2d9,
`code == ulAutoIspCode`@1024b4b8 (default 0x35) → set `bAutoISP`@1024a360.

**6 `FUN_1001aa50` MCU type** — slot 0x60 @ (0x00,0x0C) → 1024a424 (RL6xx_family).

**7 `FUN_10017300` ISP slave** — `bNotSetSlave`@1024a388 (default 1) skips; else slot 0x10.

**8 `FUN_1001a050` page length** — `bSetPacketLen`@1024a35c → slot 0x58(ulIspSpeed@1024a38c).

**9 slot 0x94** — `SetI2CSpeed(ulIspSpeed@1024a38c)`.

**10 `FUN_1001d560` flash ID + table select** — `bAutoDetectFlash`@1024a354:
ID = 3 × slot 0x60 @ (0x02,0xFD), (0x02,0xFE), (0x02,0xFF);
`key = (id3<<16)|(id2<<8)|id1` matched against Flash.dat (fallback key 0 = `Default`).
`"Flash ID1/2/3: 0x%X"` · `"Flash Name: %ls"`

**11 `FUN_1000da90`** → `"Flash Name: %ls"`

**12 `FUN_1001db90` ISP channel** — `bEnableISPChannel`@1024a31c: slot 0x14(1024a415) + 0x10(1024a41c).

**13 `FUN_1001db20` packet len** — slot 0x58(0x100) when 1024a1b4==1.

**14 `FUN_1001ad20` flash mode** — `bEnableCheckFlashMode`@1024a320: 0x60@0x000C,
`(v>>7)&1` = MCM/external vs `bMCMFlashMode`@1024a374.
`"Flash mode is External, UI Setting is MCM!"` / `"Flash mode is MCM, UI Setting is External!"`

**15 `FUN_1001e8f0` disable WP** — `bWriteProtectUseSetting`@1024a37c ? ulWPRegister/ulWPPinRegister
(default 0) : ulPinRegister@1024b498 + ulPinShare@1024b49c (default 0):
0x140(len 1) → set bit0 → 0x13c; then 0xd8(ucPinShareRegisterValue) → clear
ucPinShareControlBit → 0xdc. `" Disable WP Fail! "`

**16 `FUN_1001dfa0` scaler stop** — 0xbc, Sleep 1, 0xbc. `"ScalerStop,ErrorCode: 0x%x"`

**17 `FUN_100203d0` program start bank** — `bAutoDetectFlash` ? 0x60@0x016A : 0x60@0x0004;
0x64 into 1024a430 (4 banks of 4); `ulProgStartBank`@1024a394 overrides.
`"Current Start bank: 0x%x"` · `"Prog start bank: 0x%x"`

**18 `FUN_1002b8b0` erase** — sector (`ulLen`@1024a3bc sectors, slot 0xa0) / bank (slot 0xa4) / chip.
`"SectorErase Start! 0x%x"` · `"BankErase Start!"` · `"ChipErase Start!"`

**19 `FUN_1003be80` bank geometry** — slot 0x110/0x114, 0x140 @0x016A, `sector_addr = bank*0x10000`.
`"Bank: 0x%x, ProLen: 0x%x, SectorErase: 0x%x, SectorEraseCount: 0x%x"`
