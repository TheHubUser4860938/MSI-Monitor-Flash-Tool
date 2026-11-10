//! The model card: `IspSetting.ini`.
//!
//! Observed in this pass (`WinIspPlugIn.dll`, settings ctor `FUN_1002f230`, 108
//! `GetPrivateProfileIntW` + 33 `GetPrivateProfileStringW` sites, all in section `"Settings"`):
//! the plugin is configured per monitor model by one INI file, and **with no INI present the whole
//! 0x2010-byte settings block is zero** — every key then keeps the default literal from its own
//! read site. That is why this struct carries per-key defaults rather than one built-in model.
//!
//! The spelling below is the binary's, typos included (`bSwitchFLag`, `Background_ISP_Settging`),
//! because those strings are the file format.

use std::collections::BTreeMap;
use std::fs;
use std::io;
use std::path::Path;

/// Parsed `[section] key = value` pairs, last write wins, keys kept verbatim.
#[derive(Debug, Default)]
pub struct Ini {
    pub sections: BTreeMap<String, BTreeMap<String, String>>,
}

impl Ini {
    pub fn parse(text: &str) -> Ini {
        let mut ini = Ini::default();
        let mut section = String::new();
        for line in text.lines() {
            let line = line.trim();
            if line.is_empty() || line.starts_with(';') {
                continue;
            }
            if line.starts_with('[') && line.ends_with(']') {
                section = line[1..line.len() - 1].trim().to_string();
                ini.sections.entry(section.clone()).or_default();
                continue;
            }
            if let Some((k, v)) = line.split_once('=') {
                ini.sections
                    .entry(section.clone())
                    .or_default()
                    .insert(k.trim().to_string(), v.trim().to_string());
            }
        }
        ini
    }

    pub fn load(path: impl AsRef<Path>) -> io::Result<Ini> {
        Ok(Ini::parse(&fs::read_to_string(path)?))
    }

    /// `GetPrivateProfileIntW` equivalent: parse as decimal, fall back to the default.
    fn int(&self, section: &str, key: &str, default: u32) -> u32 {
        self.sections
            .get(section)
            .and_then(|s| s.get(key))
            .and_then(|v| parse_int(v))
            .unwrap_or(default)
    }

    /// The string reader's behaviour: a missing key leaves the buffer zeroed, i.e. an empty string.
    fn str(&self, section: &str, key: &str) -> String {
        self.sections
            .get(section)
            .and_then(|s| s.get(key))
            .cloned()
            .unwrap_or_default()
    }
}

/// `GetPrivateProfileIntW` accepts decimal; the tool's own values are also written as hex
/// (`0x…`) in MSI's shipped cards, so accept both.
fn parse_int(v: &str) -> Option<u32> {
    let v = v.trim();
    if let Some(hex) = v.strip_prefix("0x").or_else(|| v.strip_prefix("0X")) {
        u32::from_str_radix(hex, 16).ok()
    } else {
        v.parse::<u32>().ok()
    }
}

/// One monitor model's configuration. Field order and defaults are the read sites' order and
/// literals; see `re2/findings-ini.md` for the address of each site and the global it fills.
#[derive(Debug, Clone, Default)]
pub struct Settings {
    // --- bool keys (nonzero = true), section "Settings" ---
    pub auto: bool,
    pub auto_detect_flash: bool,
    /// `ucSpecifiedSlave`: the slave the tool sets when it is not auto-detecting. The literal
    /// default is `0x94` — the 8-bit form of 0x4A, which is what the wire takes.
    pub specified_slave: u32,
    /// `enumEraseType` (`ISP_Erase`).
    pub erase_type: u32,
    /// `enumFlashMismatch`: what to do when the read ID selects no row.
    pub flash_mismatch: u32,
    /// `enumWPOptionIndex`: 0 = the per-scaler table, 1 = the 0x1021 pin, >1 = do nothing.
    pub wp_option_index: u32,
    /// `ucszFlag[HEAD4]`, the boot flag's leading word (`ISP_BootFlag`).
    pub boot_flag_head: u32,
    /// `ucszFlag[TAIL4]`, the boot flag's trailing word.
    pub boot_flag_tail: u32,
    /// `strDumpFileName`, the name `DumpFlash` writes when the CLI does not name one.
    pub dump_file_name: String,
    /// `usPacketLen`, the background-ISP burst length.
    pub packet_len: u32,
    /// `ulCmdRetryCount` (`Background_ISP_Settging`) — distinct from `command_retry_count`.
    pub cmd_retry_count: u32,
    /// `ulDelayTimeForReceiveCommand`, ms.
    pub delay_time_for_receive_command: u32,
    /// `ucSendDDCCICmdNum`, how many queued DDC/CI commands to send.
    pub send_ddcci_cmd_num: u32,
    pub auto_detect_slave: bool,
    pub auto_isp: bool,
    pub check_bin_file_and_ic: bool,
    pub check_chk: bool,
    pub check_return_value: bool,
    pub ddcci_read_not_return_0x6e: bool,
    pub enable_bb_background_update: bool,
    pub enable_bb_isp_crc_check: bool,
    pub enable_check_flash_mode: bool,
    pub enable_force_typec_vbus_off: bool,
    pub enable_isp_channel: bool,
    pub enable_set_background_flash_write_time: bool,
    pub enable_typec_usb_enter_isp_mode: bool,
    pub find_fw_ignore_capability_info: bool,
    pub find_fw_ignore_model_name: bool,
    pub find_fw_ignore_panel_name: bool,
    pub find_fw_ignore_si_name: bool,
    pub find_fw_ignore_version_name: bool,
    pub get_fp_setting_from_ic: bool,
    pub get_key_from_flash_prog_switch: bool,
    pub get_model_name_check_chk: bool,
    pub get_panel_name_check_chk: bool,
    pub get_si_name_check_chk: bool,
    pub get_version_check_chk: bool,
    pub hw_isp_speed_up: bool,
    pub isp_before_ac_on: bool,
    pub isp_finish_before_reset: bool,
    pub isp_check_typec_usb: bool,
    pub isp_rl6420_mcm_flash_mode: bool,
    pub isp_rl6703_check_flash_and_bin: bool,
    pub isp_scpu_flash: bool,
    pub isp_tts_flash: bool,
    pub mcm_flash_mode: bool,
    pub not_set_slave: bool,
    pub project_id_check: bool,
    pub qisda_factory: bool,
    pub release_device_after_reset: bool,
    pub reset_after_record_ver: bool,
    pub reset_mcu: bool,
    pub retry_isp: bool,
    pub retry_sector_isp: bool,
    pub send_ddcci_cmd: bool,
    pub set_packet_len: bool,
    pub smbus_block_read_write: bool,
    pub software_sign_verify_check_key: bool,
    /// The binary's own spelling, with the capital L.
    pub switch_flag: bool,
    pub wait_copy_bank: bool,
    pub write_protect_use_setting: bool,

    // --- int keys ---
    pub auto_isp_code: u32,
    pub boot_type: u32,
    pub delay_time: u32,
    pub dump_flash_addr: u32,
    pub dump_flash_len: u32,
    pub end_with_index_start_addr: u32,
    pub isp_speed: u32,
    pub len: u32,
    pub major_ver_len: u32,
    pub merge_fw_info_length: u32,
    pub pin_register: u32,
    pub pin_share: u32,
    pub polling_count: u32,
    pub prog_start_bank: u32,
    pub re_isp_delay_time: u32,
    pub retry_isp_count: u32,
    pub retry_isp_sleep_time: u32,
    pub retry_sector_isp_count: u32,
    pub retry_sector_isp_sleep_time: u32,
    pub send_cmd_retry_count: u32,
    pub send_cmd_sleep_time: u32,
    pub send_cmd_delay_time: u32,
    pub command_retry_count: u32,
    pub sub_ver_len: u32,
    pub switch_to_rom_code_delay: u32,
    pub time_after_command: u32,
    pub time_after_reset: u32,
    pub time_before_ac_on: u32,
    pub time_wait_copy_bank: u32,
    pub total_ver_len: u32,
    pub vid_pid_count: u32,
    pub addr: u32,
    pub wp_register: u32,
    pub wp_pin_register: u32,

    // --- string keys (0x208 WCHAR buffers in the binary) ---
    pub capability_info: String,
    pub chip_name: String,
    pub customer_code: String,
    pub factory_key: String,
    pub flash_name: String,
    pub fw_version: String,
    pub isp_setting: String,
    pub key: String,
    pub model_name: String,
    pub panel_name: String,
    pub project_id: String,
    pub scaler_name: String,
    pub si_name: String,
    pub check_sum: String,
}

/// The section name is `"Settings"` at all 141 read sites (observed).
pub const SECTION: &str = "Settings";

/// The filename the plugin appends to its setting path (observed: `IspSetting.ini`, probed
/// again as `IspSetting.INI`).
pub const FILENAME: &str = "IspSetting.ini";

impl Settings {
    /// The defaults the plugin applies key by key when a `[Settings]` section is read
    /// (observed: the second argument of each `GetPrivateProfileIntW`/`GetPrivateProfileStringW`).
    ///
    /// Distinct from [`Settings::default`], which is the *no INI at all* state: with no file the
    /// plugin zeroes its whole 0x2010-byte settings block and never reaches a read site.
    pub fn plugin_defaults() -> Settings {
        Settings::from_ini(&Ini::parse("[Settings]\n"))
    }

    /// Read a model card. A missing file is not an error: the defaults below are what the plugin
    /// uses for any key the file does not carry.
    pub fn load(path: impl AsRef<Path>) -> io::Result<Settings> {
        let path = path.as_ref();
        let ini = match Ini::load(path) {
            Ok(i) => i,
            Err(e) if e.kind() == io::ErrorKind::NotFound => Ini::default(),
            Err(e) => return Err(e),
        };
        Ok(Settings::from_ini(&ini))
    }

    /// Every key with the section and default literal the plugin's loader pushes.
    ///
    /// The card is not one flat namespace: the keys live in 19 sections (`ISP_Basic` alone
    /// carries 30 of them), so a read names its section. Values are base-0 — `0x…` is hex,
    /// a bare number is decimal (`_wcstoi64(buf, 0, 0)`).
    /// The card MSI's own GUI writes, then the vendor directory beside the shipped tool.
    pub fn default_card() -> &'static str {
        "IspSetting.ini"
    }

    pub fn from_ini(ini: &Ini) -> Settings {
        let i = |sec: &str, k: &str, d: u32| ini.int(sec, k, d);
        let n = |sec: &str, k: &str, d: u32| ini.int(sec, k, d);
        let s = |sec: &str, k: &str| ini.str(sec, k);
        Settings {
            auto: i("Settings", "bAuto", 0) != 0,
            auto_detect_flash: i("ISP_Flash", "bAutoDetectFlash", 1) != 0,
            auto_detect_slave: i("ISP_Basic", "bAutoDetectSlave", 1) != 0,
            auto_isp: i("ISP_Basic", "bAutoISP", 0) != 0,
            check_bin_file_and_ic: i("ISP_CHECK_SETTING", "bCheckBinFileAndIC", 0) != 0,
            check_chk: i("Send_User_Defined_Info", "bCheckCHK", 0) != 0,
            check_return_value: i("Send_User_Defined_Info", "bCheckReturnValue", 0) != 0,
            ddcci_read_not_return_0x6e: i("ISP_User_Defined", "bDDCCIReadNotReturn0x6E", 0) != 0,
            enable_bb_background_update: i("ISP_Basic", "bEnableBBBackgroundUpdate", 0) != 0,
            enable_bb_isp_crc_check: i("ISP_Basic", "bEnableBBISPCrcCheck", 0) != 0,
            enable_check_flash_mode: i("ISP_CHECK_SETTING", "bEnableCheckFlashMode", 0) != 0,
            enable_force_typec_vbus_off: i("ISP_CHECK_SETTING", "bEnableForceTypeCVBusOff", 0) != 0,
            enable_isp_channel: i("ISP_Basic", "bEnableISPChannel", 0) != 0,
            enable_set_background_flash_write_time: i(
                "ISP_Basic",
                "bEnableSetBackgroundFlashWriteTime",
                0,
            ) != 0,
            enable_typec_usb_enter_isp_mode: i("ISP_Basic", "bEnableTypeCUSBEnterISPMode", 1) != 0,
            find_fw_ignore_capability_info: i("ISP_User_Defined", "bFindFwIgnoreCapabilityInfo", 0)
                != 0,
            find_fw_ignore_model_name: i("ISP_User_Defined", "bFindFwIgnoreModelName", 0) != 0,
            find_fw_ignore_panel_name: i("ISP_User_Defined", "bFindFwIgnorePanelName", 0) != 0,
            find_fw_ignore_si_name: i("ISP_User_Defined", "bFindFwIgnoreSIName", 0) != 0,
            find_fw_ignore_version_name: i("ISP_User_Defined", "bFindFwIgnoreVersionName", 0) != 0,
            get_fp_setting_from_ic: i("ISP_DualBank", "bGetFPSettingFromIC", 0) != 0,
            get_key_from_flash_prog_switch: i("ISP_Basic", "bGetKeyFromFlashProgSwitch", 1) != 0,
            get_model_name_check_chk: i("ISP_User_Defined", "bGetModelNameCheckCHK", 1) != 0,
            get_panel_name_check_chk: i("ISP_User_Defined", "bGetPanelNameCheckCHK", 1) != 0,
            get_si_name_check_chk: i("ISP_User_Defined", "bGetSINameCheckCHK", 1) != 0,
            get_version_check_chk: i("ISP_User_Defined", "bGetVersionCheckCHK", 1) != 0,
            hw_isp_speed_up: i("Background_ISP_Settging", "bHWISPSpeedUp", 0) != 0,
            isp_before_ac_on: i("ISP_Basic", "bIspBeforeAcOn", 1) != 0,
            isp_finish_before_reset: i("ISP_DualBank", "bIspFinishBeforeReset", 0) != 0,
            isp_check_typec_usb: i("ISP_CHECK_SETTING", "bISPCheckTypecUsb", 1) != 0,
            isp_rl6420_mcm_flash_mode: i("ISP_CHECK_SETTING", "bISPRL6420MCMFlashMode", 0) != 0,
            isp_rl6703_check_flash_and_bin: i("ISP_CHECK_SETTING", "bISPRL6703CheckFlashAndBin", 0)
                != 0,
            isp_scpu_flash: i("ISP_Basic", "bIspSCPUFlash", 0) != 0,
            isp_tts_flash: i("ISP_Basic", "bIspTTSFlash", 0) != 0,
            mcm_flash_mode: i("ISP_CHECK_SETTING", "bMCMFlashMode", 0) != 0,
            not_set_slave: i("ISP_Basic", "bNotSetSlave", 0) != 0,
            project_id_check: i("Background_ISP_Settging", "bProjectIDCheck", 0) != 0,
            qisda_factory: i("ISP_Customized", "bQisdaFactory", 0) != 0,
            release_device_after_reset: i("ISP_DualBank", "bReleaseDeviceAfterReset", 0) != 0,
            reset_after_record_ver: i("ISP_Basic", "bResetAfterRecordVer", 1) != 0,
            reset_mcu: i("ISP_Basic", "bResetMcu", 1) != 0,
            retry_isp: i("ISP_Basic", "bRetryISP", 0) != 0,
            retry_sector_isp: i("ISP_Basic", "bRetrySectorISP", 0) != 0,
            send_ddcci_cmd: i("Send_User_Defined_Info", "bSendDDCCICmd", 0) != 0,
            set_packet_len: i("Background_ISP_Settging", "bSetPacketLen", 0) != 0,
            smbus_block_read_write: i("ISP_Basic", "bSmbusBlockReadWrite", 1) != 0,
            software_sign_verify_check_key: i(
                "Software_Sign_Verify_Check_Key",
                "bSoftwareSignVerifyCheckKey",
                0,
            ) != 0,
            switch_flag: i("ISP_DualBank", "bSwitchFLag", 0) != 0,
            wait_copy_bank: i("ISP_DualBank", "bWaitCopyBank", 0) != 0,
            write_protect_use_setting: i("Write_Protect", "bWriteProtectUseSetting", 0) != 0,
            auto_isp_code: n("Settings", "ulAutoIspCode", 0x35),
            boot_type: n("Settings", "ulBootType", 0),
            delay_time: n("Background_ISP_Settging", "ulDelayTime", 0),
            delay_time_for_receive_command: n(
                "Background_ISP_Settging",
                "ulDelayTimeForReceiveCommand",
                10,
            ),
            dump_flash_addr: n("ISP_Flash", "ulDumpFlashAddr", 0),
            dump_flash_len: n("ISP_Flash", "ulDumpFlashLen", 10),
            end_with_index_start_addr: n("User_Defined_Version", "ulEndWithIndexStartAddr", 0),
            erase_type: n("ISP_Erase", "enumEraseType", 1),
            flash_mismatch: n("ISP_Flash", "enumFlashMismatch", 0),
            isp_speed: n("ISP_Basic", "ulIspSpeed", 200),
            len: n("Settings", "ulLen", 0),
            major_ver_len: n("ISP_Basic", "ulMajorVerLen", 0),
            merge_fw_info_length: n("ISP_Basic", "ulMergeFwInfoLength", 4),
            packet_len: n("Background_ISP_Settging", "usPacketLen", 32),
            pin_register: n("Write_Protect", "ulPinRegister", 0),
            pin_share: n("Write_Protect", "ulPinShare", 0),
            polling_count: n("Background_ISP_Settging", "ulPollingCount", 4500),
            prog_start_bank: n("ISP_Fw", "ulProgStartBank", 0),
            re_isp_delay_time: n("ISP_Basic", "ulReISPDelayTime", 1000),
            retry_isp_count: n("ISP_Basic", "ulRetryISPCount", 10),
            retry_isp_sleep_time: n("ISP_Basic", "ulRetryISPSleepTime", 200),
            retry_sector_isp_count: n("ISP_Basic", "ulRetrySectorISPCount", 20),
            retry_sector_isp_sleep_time: n("ISP_Basic", "ulRetrySectorISPSleepTime", 10),
            send_cmd_retry_count: n("Send_User_Defined_Info", "ulSendCmdRetryCount", 10),
            send_cmd_sleep_time: n("Send_User_Defined_Info", "ulSendCmdSleepTime", 200),
            send_cmd_delay_time: n("Send_User_Defined_Info", "ulSendCmdDelayTime", 10),
            send_ddcci_cmd_num: n("Send_User_Defined_Info", "ucSendDDCCICmdNum", 1),
            cmd_retry_count: n("Background_ISP_Settging", "ulCmdRetryCount", 50),
            command_retry_count: n("ISP_DualBank", "ulCommandRetryCount", 10),
            specified_slave: n("ISP_Basic", "ucSpecifiedSlave", 0x94),
            sub_ver_len: n("ISP_Basic", "ulSubVerLen", 0),
            switch_to_rom_code_delay: n("ISP_Basic", "ulSwitchToRomCodeDelay", 800),
            time_after_command: n("ISP_DualBank", "ulTimeAfterCommand", 200),
            time_after_reset: n("ISP_DualBank", "ulTimeAfterReset", 1000),
            time_before_ac_on: n("ISP_Basic", "ulTimeBeforeAcOn", 2500),
            time_wait_copy_bank: n("ISP_DualBank", "ulTimeWaitCopyBank", 8000),
            total_ver_len: n("ISP_Basic", "ulTotalVerLen", 0),
            vid_pid_count: n("ISP_Basic", "ulVidPidCount", 0),
            wp_option_index: n("ISP_Flash", "enumWPOptionIndex", 0),
            addr: n("ISP_BootFlag", "ulAddr", 0x4f8fe),
            boot_flag_head: n("ISP_BootFlag", "ucszFlag[HEAD4]", 0xaa55_ffff),
            boot_flag_tail: n("ISP_BootFlag", "ucszFlag[TAIL4]", 0xffff_ffff),
            wp_register: n("Settings", "ulWPRegister", 0),
            wp_pin_register: n("Settings", "ulWPPinRegister", 0),
            capability_info: s("Settings", "CapabilityInfo"),
            chip_name: s("Settings", "ChipName"),
            customer_code: s("Settings", "CustomerCode"),
            dump_file_name: s("ISP_Flash", "strDumpFileName"),
            factory_key: s("Settings", "FactoryKey"),
            flash_name: s("ISP_Flash", "strSpecifiedFlashName"),
            fw_version: s("Settings", "FWVersion"),
            isp_setting: s("Settings", "IspSetting"),
            key: s("Settings", "Key"),
            model_name: s("Settings", "ModelName"),
            panel_name: s("Settings", "PanelName"),
            project_id: s("ISP_CHECK_SETTING", "strProjectIDInfo"),
            scaler_name: s("Settings", "ScalerName"),
            si_name: s("Settings", "SIName"),
            check_sum: s("Settings", "CheckSum"),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn defaults_are_the_read_site_literals() {
        let s = Settings::from_ini(&Ini::default());
        assert!(s.auto_detect_flash);
        assert!(s.reset_mcu);
        assert!(!s.check_chk);
        assert_eq!(s.dump_flash_len, 10);
        assert_eq!(s.polling_count, 4500);
        assert_eq!(s.retry_isp_sleep_time, 200);
        assert_eq!(s.auto_isp_code, 0x35);
        assert_eq!(s.command_retry_count, 10);
        assert!(!s.find_fw_ignore_model_name);
        assert!(!s.find_fw_ignore_version_name);
        assert!(!s.switch_flag);
        // The literals this pass pinned from the loader itself.
        assert_eq!(s.specified_slave, 0x94, "the 8-bit form of 0x4A");
        assert_eq!(s.isp_speed, 200);
        assert_eq!(s.switch_to_rom_code_delay, 800);
        assert_eq!(s.time_before_ac_on, 2500);
        assert_eq!(s.time_wait_copy_bank, 8000);
        assert_eq!(s.retry_sector_isp_count, 20);
        assert_eq!(s.addr, 0x4f8fe, "the boot-flag address");
        assert_eq!(s.boot_flag_head, 0xaa55_ffff);
        assert_eq!(s.boot_flag_tail, 0xffff_ffff);
        assert_eq!(s.erase_type, 1);
        assert_eq!(s.merge_fw_info_length, 4);
        assert_eq!(s.dump_file_name, "");
        assert!(
            s.get_version_check_chk,
            "the CheckCHK quartet defaults to on"
        );
        assert!(s.smbus_block_read_write);
        assert!(s.isp_before_ac_on);
        assert!(s.reset_after_record_ver);
        assert!(!s.not_set_slave);
    }

    #[test]
    fn a_card_overrides_only_what_it_names() {
        let ini = Ini::parse(
            "[ISP_Basic]\nbResetMcu=0\nulIspSpeed=0x258\n[Settings]\nModelName=MAG 341CQP\n",
        );
        let s = Settings::from_ini(&ini);
        assert!(!s.reset_mcu);
        assert_eq!(s.isp_speed, 600);
        assert_eq!(s.model_name, "MAG 341CQP");
        // untouched keys keep their defaults, in their own sections
        assert!(!s.auto_isp);
        assert_eq!(s.retry_isp_count, 10);
    }

    #[test]
    fn hex_and_decimal_both_parse() {
        assert_eq!(parse_int("0x1e0000"), Some(0x1e_0000));
        assert_eq!(parse_int("1966080"), Some(1_966_080));
        assert_eq!(parse_int("nope"), None);
    }

    #[test]
    fn a_missing_file_is_not_an_error() {
        let s = Settings::load("/nonexistent/IspSetting.ini").expect("defaults");
        assert!(s.reset_mcu);
    }

    #[test]
    fn section_and_comment_handling() {
        let ini = Ini::parse("; a comment\n[Settings]\nx=1\n[Other]\nx=2\n");
        assert_eq!(ini.int("Settings", "x", 9), 1);
        assert_eq!(ini.int("Other", "x", 9), 2);
        assert_eq!(ini.int("Missing", "x", 7), 7);
    }
}
