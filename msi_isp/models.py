"""Model cards: what changes when you point this tool at another MSI monitor.

Nothing in the flash path is X28-specific except a handful of numbers, and the
Windows tool keeps every one of them in one file - `IspSetting.ini`, which it
writes at startup and hands to `WinIspPlugIn`. So the card below is that INI as
data: read a vendor INI, get a card; emit a card, get a vendor INI. A new
monitor is a card, not a code change.

The five things a card carries, each with where the X28's value came from:

    identity   the model string the gate compares, and the panel name beside it
               (16i, read from the record block at 0xF806 of FW.012)
    record     where the version and model live INSIDE the .bin - the gate's
               coordinates: BinVersionAddress 0xF800 len 3, ulModelNamePosInBin
               0xF806. These are per-image: FW.009 keeps its record at 0x2F7AA
               (16i, BIN_RECORD_16W), which is why they belong to a card.
    transport  the ISP slave (the INI's 0x6F -> 7-bit 0x37), the page length
               (AUX_I2CPageLen = 32, corroborated by GetI2CPageLength() 16n),
               the device type that picks the branch in IspFlash (16z: 8 is our
               panel, 0x1a/0x1b are the background/foreground update paths)
    timing     ulTimeAfterCommand 200 ms, ulCommandRetryCount 10,
               ulTimeAfterReset 10000 ms, ulDelayTimeAfterDdcciWrite 3000 ms
               (16w: the last untested axis was timing; 16z measured it mute)
    checks     CheckModelName=1, CheckVersion=0, CheckChecksum=1 - the version
               is NOT checked, which is why FW.009 hardware takes FW.012

The flash chip is deliberately NOT a card field: it is a question you ask
(`isp.identify()`, 16z), because the same model ships with parts from different
vendors and `Flash.dat` keys the script off the RDID answer, not the monitor.
"""
from __future__ import annotations

import configparser
from dataclasses import dataclass, field, replace

__all__ = ["MODELS", "X28", "ModelCard", "card_for_panel", "from_ini",
           "from_ini_file", "lookup"]

#: the INI sections the plugin reads, in the order it writes them
SECTIONS = ("Communication", "ScalerConfig", "ISP_User_Defined", "ISP_Basic",
            "ISP_DualBank", "Comm_AUX")


@dataclass(frozen=True)
class ModelCard:
    """One monitor's flash contract - the vendor's INI, typed."""
    model: str                         # what the gate compares ("MAG 341CQ X28")
    panel: str = ""                    # the panel beside it ("TPO340QH1-")
    scaler: str = "RTD2711"
    device_type: int = 8               # IspFlash's branch selector (16z)
    slave7: int = 0x37                 # the INI's 0x6F, 7-bit
    page: int = 32                     # AUX_I2CPageLen == GetI2CPageLength()
    banks: int = 2
    capacity_bytes: int = 4 * 1024 * 1024
    version_addr: int = 0xF800         # BinVersionAddress
    version_len: int = 3               # BinVersionLength
    model_pos: int = 0xF806            # ulModelNamePosInBin
    check_model: bool = True           # CheckModelName
    check_version: bool = False        # CheckVersion
    check_checksum: bool = True        # CheckChecksum
    version_cmd: tuple = (0x6E, 0x51, 0x84, 0x01, 0xFE, 0xE1, 0xE6)
    version_index: int = 6             # ucVersionStartIndex
    version_read: int = 20             # ucVersionReadLength
    retry_count: int = 10              # ucRetryCount / ulCommandRetryCount
    after_command_ms: int = 200        # ulTimeAfterCommand
    after_reset_ms: int = 10000        # ulTimeAfterReset
    after_ddcci_ms: int = 3000         # ulDelayTimeAfterDdcciWrite
    switch_flag: bool = True           # bSwitchFLag - the dual-bank switch
    isp_mode: int = 1                  # enumIspMode
    boot_code_type: int = 1            # enumBootCodeType
    comm_id: int = 1                   # enumCommID
    aux_detect_type: int = 1           # AUX_DetctType
    graphics_type: int = 1             # AUX_GraphicsType (1 = NVIDIA)
    extra: dict = field(default_factory=dict)   # keys we pass through untouched

    @property
    def contract(self) -> tuple:
        """The fields that decide a flash - not the names. Two cards with the
        same contract flash the same way, which is what a vendor INI can
        actually tell us (it names no panel)."""
        return (self.version_addr, self.version_len, self.model_pos,
                self.check_model, self.check_version, self.check_checksum,
                self.slave7, self.page, self.device_type, self.banks,
                self.capacity_bytes, self.after_command_ms, self.retry_count,
                self.after_reset_ms, self.after_ddcci_ms, self.switch_flag,
                self.isp_mode, self.boot_code_type, self.version_cmd,
                self.version_index, self.version_read)

    @property
    def bank_size(self) -> int:
        return self.capacity_bytes // self.banks

    @property
    def inactive_base(self) -> int:
        """The bank a flash writes today (16r): the X28's 4 MiB part is two
        2 MiB banks, so the inactive one starts at 0x200000."""
        return self.bank_size

    def ini_text(self) -> str:
        """The vendor's own file format, so a card can be dropped in for the
        Windows tool to read - and read back from."""
        cp = configparser.ConfigParser()
        cp.optionxform = str
        cp["Communication"] = {"enumCommID": str(self.comm_id)}
        cp["ScalerConfig"] = {
            "BinVersionAddress": f"0x{self.version_addr:X}",
            "BinVersionLength": str(self.version_len),
            "ulModelNamePosInBin": f"0x{self.model_pos:X}",
            "CheckModelName": _b(self.check_model),
            "CheckVersion": _b(self.check_version),
            "CheckChecksum": _b(self.check_checksum)}
        cp["ISP_User_Defined"] = {
            "ucRetryCount": str(self.retry_count), "bGetVersion": "1",
            "ucVersionStartIndex": str(self.version_index),
            "ucVersionReadLength": str(self.version_read),
            "enumVersionRecordMode": "2",
            "strVersionDdcciCmd": ",".join(f"0x{b:02X}" for b in self.version_cmd),
            "ulDelayTimeAfterDdcciWrite": str(self.after_ddcci_ms),
            "bDDCCIReadNotReturn0x6E": "0", "enumFindBinUseVerMode": "0"}
        cp["ISP_Basic"] = {"bSaveResult": "0", "bSaveDebugLog": "1",
                           "bSaveProgress": "1"}
        cp["ISP_DualBank"] = {
            "enumDigitalSignatureType": "0", "enumSWDigitalSignatureMode": "0",
            "enumBootCodeType": str(self.boot_code_type),
            "enumIspMode": str(self.isp_mode), "bWaitCopyBank": "0",
            "ulTimeWaitCopyBank": "8000",
            "ulTimeAfterCommand": str(self.after_command_ms),
            "ulCommandRetryCount": str(self.retry_count),
            "ulTimeAfterReset": str(self.after_reset_ms),
            "bReleaseDeviceAfterReset": "1", "bSwitchFLag": _b(self.switch_flag),
            "bIspFinishBeforeReset": "0", "bGetFPSettingFromIC": "0"}
        cp["Comm_AUX"] = {
            "AUX_DetctType": str(self.aux_detect_type),
            "AUX_GraphicsType": str(self.graphics_type),
            "AUX_I2CPageLen": str(self.page), "AUX_CheckSlaveAddress": "1",
            "AUX_NvidiaIICAuxAccess": "1"}
        for section, kv in self.extra.items():
            cp[section] = {k: str(v) for k, v in kv.items()}
        import io
        buf = io.StringIO()
        cp.write(buf)
        return buf.getvalue()


def _b(flag: bool) -> str:
    return "1" if flag else "0"


def _i(value: str, default: int = 0) -> int:
    try:
        return int(value, 0)
    except (TypeError, ValueError):
        return default


def from_ini(text: str, model: str | None = None) -> ModelCard:
    """Read a vendor `IspSetting.ini` (or `IspUserDefined.txt`) into a card."""
    cp = configparser.ConfigParser()
    cp.optionxform = str
    cp.read_string(text)
    g = lambda sec, key, default=None: cp.get(sec, key, fallback=default)  # noqa: E731
    cmd = g("ISP_User_Defined", "strVersionDdcciCmd", "")
    version_cmd = tuple(int(x, 0) for x in cmd.split(",") if x.strip())
    name = model or g("UserDefinedInfo", "ModelName", None) or X28.model
    extra = {s: dict(cp.items(s)) for s in SECTIONS
             if s not in ("Communication", "ScalerConfig", "ISP_User_Defined",
                          "ISP_Basic", "ISP_DualBank", "Comm_AUX")}
    return ModelCard(
        model=name,
        comm_id=_i(g("Communication", "enumCommID", "1"), 1),
        version_addr=_i(g("ScalerConfig", "BinVersionAddress", "0xF800"), 0xF800),
        version_len=_i(g("ScalerConfig", "BinVersionLength", "3"), 3),
        model_pos=_i(g("ScalerConfig", "ulModelNamePosInBin", "0xF806"), 0xF806),
        check_model=g("ScalerConfig", "CheckModelName", "1") == "1",
        check_version=g("ScalerConfig", "CheckVersion", "0") == "1",
        check_checksum=g("ScalerConfig", "CheckChecksum", "1") == "1",
        retry_count=_i(g("ISP_User_Defined", "ucRetryCount", "10"), 10),
        version_index=_i(g("ISP_User_Defined", "ucVersionStartIndex", "6"), 6),
        version_read=_i(g("ISP_User_Defined", "ucVersionReadLength", "20"), 20),
        version_cmd=version_cmd or X28.version_cmd,
        after_ddcci_ms=_i(g("ISP_User_Defined", "ulDelayTimeAfterDdcciWrite",
                            "3000"), 3000),
        boot_code_type=_i(g("ISP_DualBank", "enumBootCodeType", "1"), 1),
        isp_mode=_i(g("ISP_DualBank", "enumIspMode", "1"), 1),
        after_command_ms=_i(g("ISP_DualBank", "ulTimeAfterCommand", "200"), 200),
        after_reset_ms=_i(g("ISP_DualBank", "ulTimeAfterReset", "10000"), 10000),
        switch_flag=g("ISP_DualBank", "bSwitchFLag", "1") == "1",
        page=_i(g("Comm_AUX", "AUX_I2CPageLen", "32"), 32),
        aux_detect_type=_i(g("Comm_AUX", "AUX_DetctType", "1"), 1),
        graphics_type=_i(g("Comm_AUX", "AUX_GraphicsType", "1"), 1),
        extra=extra)


def from_ini_file(path: str) -> ModelCard:
    with open(path, encoding="utf-8", errors="replace") as fh:
        text = fh.read()
    card = from_ini(text)
    udf = path.replace("IspSetting.ini", "IspUserDefined.txt")
    try:
        with open(udf, encoding="utf-8", errors="replace") as fh:
            cp = configparser.ConfigParser()
            cp.optionxform = str
            cp.read_string(fh.read())
            name = cp.get("UserDefinedInfo", "ModelName", fallback=None)
    except OSError:
        name = None
    return replace(card, model=name) if name else card


#: the X28, as measured on this box: the INI the tool writes (16w), the record
#: block of FW.012 (BIN_RECORD_16W), the slave and page of the ladder (16n/16c),
#: and the gate's own checks.
X28 = ModelCard(
    model="MAG 341CQ X28", panel="TPO340QH1-", scaler="RTD2711",
    device_type=8, slave7=0x37, page=32, banks=2, capacity_bytes=4 * 1024 * 1024,
    version_addr=0xF800, version_len=3, model_pos=0xF806,
    check_model=True, check_version=False, check_checksum=True,
    version_cmd=(0x6E, 0x51, 0x84, 0x01, 0xFE, 0xE1, 0xE6),
    version_index=6, version_read=20, retry_count=10,
    after_command_ms=200, after_reset_ms=10000, after_ddcci_ms=3000,
    switch_flag=True, isp_mode=1, boot_code_type=1, comm_id=1,
    aux_detect_type=1, graphics_type=1)

#: the registry. A new monitor is an entry here, or an INI on disk.
MODELS: dict[str, ModelCard] = {
    X28.model: X28,
    "MAG 341CQP QD-OLED X28": X28,        # the marketing name, same contract
}


def lookup(name: str) -> ModelCard:
    """Find a card by model string, tolerating the EDID's trailing padding."""
    want = (name or "").strip().strip("\x00").upper()
    for key, card in MODELS.items():
        if key.upper() == want:
            return card
    raise KeyError(f"no model card for {name!r}")


def card_for_panel(bus=None, default: ModelCard = X28) -> ModelCard:
    """Ask the attached monitor who it is and hand back its card.

    The card is a default, never an assumption: the flash chip still comes from
    `isp.identify()`, because one model ships with parts from several vendors.
    """
    if bus is None:
        return default
    from . import record
    from .isp import IspError
    try:
        rec = record.read_panel_record(bus)
        return lookup(getattr(rec, "model", "") or "")
    except (KeyError, OSError, IspError):
        return default          # an unknown model still flashes on the defaults
