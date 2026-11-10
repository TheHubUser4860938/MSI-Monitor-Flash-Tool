//! The command line: the plugin's 19 entry points, as Linux verbs.
//!
//! The mapping is 1-for-1 with `PlugIn/WinIspPlugIn.dll`'s export table (observed, 19 exports;
//! `re2/JOURNAL.md` step 3 and `re2/findings-ini.md`). Verbs are named for what the Windows UI
//! calls them.

use std::fs;
use std::path::PathBuf;
use std::process::ExitCode;

use clap::{Parser, Subcommand};

use msifw::binfile::Image;
use msifw::bus::{self, Bus, ISP_DP, ISP_HDMI};
use msifw::comm::AuxComm;
use msifw::flashdat::FlashDat;
use msifw::isp::Isp;
use msifw::model::Settings;

/// MSI monitor firmware tool, Linux native.
///
/// Reconstructed from MSI Firmware Update Utility V1.0.6.
#[derive(Parser)]
#[command(name = "msifw", version, about, long_about = None)]
struct Cli {
    /// The i2c adapter to drive (a display link). Omit to use the only connected one.
    #[arg(short, long, global = true)]
    bus: Option<u32>,

    /// The model card (`IspSetting.ini`) for the connected monitor.
    #[arg(short, long, global = true, default_value = "IspSetting.ini")]
    setting: PathBuf,

    /// The flash-part table. Defaults to the shipped `PlugIn/Flash.dat` beside the tool.
    #[arg(long, global = true)]
    flash_dat: Option<PathBuf>,

    /// Override the ISP slave address, skipping the probe. Base 0 like the card: `0x6a` or `106`.
    #[arg(long, global = true, value_parser = parse_base0)]
    slave: Option<u8>,

    #[command(subcommand)]
    cmd: Cmd,
}

#[derive(Subcommand)]
enum Cmd {
    /// List display links that have an I2C adapter.
    Buses,
    /// Show a firmware .bin: size, payload, version, checksum.
    Inspect { bin: PathBuf },
    /// Show the model card in force, after defaults.
    Card,
    /// Show the flash-part table entry the connected monitor selects.
    Part,
    /// Read the firmware version the monitor reports (`GetFWInfo`).
    Info,
    /// Read the FW-info block over DDC/CI (`GetFwInfoInDDCCIMode`).
    Fwinfo,
    /// Read the user-defined version, paged, and write `ISPVersion.txt` (`RecordFWVersion`).
    Version {
        #[arg(short, long, default_value = "ISPVersion.txt")]
        out: PathBuf,
    },
    /// Ask the panel where its key lives and read the block (`GetKeyFromFlash`).
    Key,
    /// Read the boot code and scaler state (`EnterISPModeExport`).
    Status,
    /// Dump flash to a file (`DumpFlash`).
    Dump {
        #[arg(short, long, default_value = "dump.bin")]
        out: PathBuf,
        /// Bytes to read; defaults to the card's `ulDumpFlashLen`.
        #[arg(long)]
        len: Option<u32>,
        /// Start address; defaults to the card's `ulDumpFlashAddr`.
        #[arg(long)]
        addr: Option<u32>,
    },
    /// Erase one bank, every bank, or the chip (`BankEraseFlash` / `ChipEraseFlash`).
    Erase {
        /// Bank index; omit to erase the whole chip.
        #[arg(short, long)]
        bank: Option<u16>,
    },
    /// Flash a .bin (`IspFlash`).
    Flash {
        bin: PathBuf,
        /// Compare a CRC per written page, as the tool's background path does.
        #[arg(long)]
        verify: bool,
    },
    /// Reset the MCU (`ResetMCUExport`).
    Reset,
}

/// The card's own number grammar (`_wcstoi64(buf, 0, 0)`): `0x…` is hex, a bare run is decimal.
fn parse_base0(s: &str) -> Result<u8, String> {
    let t = s.trim();
    match t.strip_prefix("0x").or_else(|| t.strip_prefix("0X")) {
        Some(hex) => u8::from_str_radix(hex, 16).map_err(|e| e.to_string()),
        None => t.parse::<u8>().map_err(|e| e.to_string()),
    }
}

/// Lowercase hex, space separated — the form the Windows tool logs its buffers in.
fn hex(b: &[u8]) -> String {
    b.iter()
        .map(|c| format!("{c:02x}"))
        .collect::<Vec<_>>()
        .join(" ")
}

/// Printable form of a byte block: the ASCII where it is printable, dots where it is not.
fn ascii(b: &[u8]) -> String {
    b.iter()
        .map(|&c| {
            if c.is_ascii_graphic() || c == b' ' {
                c as char
            } else {
                '.'
            }
        })
        .collect::<String>()
        .trim_end_matches('.')
        .to_string()
}

fn main() -> ExitCode {
    let cli = Cli::parse();
    match run(&cli) {
        Ok(()) => ExitCode::SUCCESS,
        Err(e) => {
            eprintln!("msifw: {e}");
            ExitCode::FAILURE
        }
    }
}

fn run(cli: &Cli) -> Result<(), Box<dyn std::error::Error>> {
    match &cli.cmd {
        Cmd::Buses => {
            for (n, c, ok) in bus::present_buses() {
                println!("i2c-{n:<3} {c:12} {}", if ok { "connected" } else { "-" });
            }
            Ok(())
        }
        Cmd::Inspect { bin } => {
            let img = Image::open(bin)?;
            println!("{img}");
            match img.chk_ok() {
                Some(true) => println!("chk      OK (matches the filename)"),
                Some(false) => println!(
                    "chk      MISMATCH (filename says {:04X}, the bytes sum to {:04X})",
                    img.name_chk.unwrap_or(0),
                    img.chk()
                ),
                None => println!("chk      not in the filename, nothing to check"),
            }
            Ok(())
        }
        Cmd::Card => {
            let s = Settings::load(&cli.setting)?;
            println!("card                     {}", cli.setting.display());
            println!("model                    {}", nv(&s.model_name));
            println!("panel                    {}", nv(&s.panel_name));
            println!("flash name               {}", nv(&s.flash_name));
            println!("scaler name              {}", nv(&s.scaler_name));
            println!("fw version               {}", nv(&s.fw_version));
            println!("bResetMcu                {}", s.reset_mcu);
            println!("bAutoDetectFlash         {}", s.auto_detect_flash);
            println!("bAutoDetectSlave         {}", s.auto_detect_slave);
            println!(
                "bRetryISP                {} ({} x {} ms)",
                s.retry_isp, s.retry_isp_count, s.retry_isp_sleep_time
            );
            println!("ulIspSpeed               {}", s.isp_speed);
            println!("ucSpecifiedSlave         {:#x}", s.specified_slave);
            println!("strDumpFileName          {}", nv(&s.dump_file_name));
            println!("ulProgStartBank          {}", s.prog_start_bank);
            println!("ISP_BootFlag ulAddr      {:#x}", s.addr);
            println!("ucszFlag[HEAD4]          {:#010x}", s.boot_flag_head);
            println!("ucszFlag[TAIL4]          {:#010x}", s.boot_flag_tail);
            println!("ulDumpFlashAddr          {:#x}", s.dump_flash_addr);
            println!(
                "ulDumpFlashLen           {:#x} ({})",
                s.dump_flash_len, s.dump_flash_len
            );
            println!("ulPollingCount           {}", s.polling_count);
            println!("bCheckCHK                {}", s.check_chk);
            println!("bEnableISPChannel        {}", s.enable_isp_channel);
            println!("bWriteProtectUseSetting  {}", s.write_protect_use_setting);
            println!(
                "ulPinRegister / ulPinShare   {:#x} / {:#x}",
                s.pin_register, s.pin_share
            );
            Ok(())
        }
        Cmd::Part
        | Cmd::Info
        | Cmd::Fwinfo
        | Cmd::Version { .. }
        | Cmd::Key
        | Cmd::Status
        | Cmd::Dump { .. }
        | Cmd::Erase { .. }
        | Cmd::Flash { .. }
        | Cmd::Reset => {
            let settings = Settings::load(&cli.setting)?;
            let table = FlashDat::load(flash_dat_path(cli)?)?;
            let bus = open_bus(cli.bus)?;
            let mut comm = AuxComm::new(&bus);
            let mut isp = Isp::new(&mut comm, &settings);
            // One override, both sides: the transport's address and the probe list's head.
            isp.slave = cli.slave;
            match &cli.cmd {
                Cmd::Part => {
                    let p = isp.select_part(&table)?;
                    println!("part      {}", p.name);
                    println!("id        {}", p.key());
                    println!(
                        "capacity  {} bytes ({} banks of {:#x})",
                        p.capacity(),
                        p.banks,
                        0x1_0000u32
                    );
                    println!("class     {}  mode {}", p.part_class, p.sector_erase_mode);
                    println!(
                        "status    enable-wp {:#x}  disable-wp {:#x}",
                        p.status_enable_wp, p.status_disable_wp
                    );
                    if !p.commands.is_empty() {
                        println!("program   {} instructions", p.commands.matches(',').count());
                        if let Some(op) = p.erase_opcode() {
                            println!("erase     {op:#04x}");
                        }
                    }
                }
                Cmd::Info => {
                    isp.handshake()?;
                    isp.detect_slave()?;
                    println!("slave     {:#04x}", isp.slave());
                    println!("boot code {:#04x}", isp.boot_code()?);
                    println!("mcu type  {:#04x}", isp.mcu_type()?);
                    let id = isp.flash_id()?;
                    println!("flash id  {:02x},{:02x},{:02x}", id[0], id[1], id[2]);
                    if let Ok(p) = isp.select_part(&table) {
                        println!("part      {}", p.name);
                    }
                }
                Cmd::Fwinfo => {
                    let d = msifw::ddcci::Ddcci::new(isp.comm())
                        .with_settle(u64::from(settings.time_after_command));
                    match d.fw_info() {
                        Ok(v) => {
                            println!("fw info     {}", ascii(&v));
                            println!("bytes       {}", hex(&v));
                        }
                        // The debug arm is the fallback the tool takes in ISP mode.
                        Err(_) => {
                            let v = msifw::ddcci::fw_info_debug(
                                isp.comm(),
                                u64::from(settings.time_after_command),
                            )?;
                            println!("fw info     {} (debug mode)", ascii(&v));
                            println!("bytes       {}", hex(&v));
                        }
                    }
                }
                Cmd::Version { out } => {
                    let d = msifw::ddcci::Ddcci::new(isp.comm())
                        .with_settle(u64::from(settings.time_after_command));
                    let v = d.user_version()?;
                    println!("version     {v}");
                    fs::write(out, format!("{v}\n"))?;
                    println!("wrote       {}", out.display());
                }
                Cmd::Key => {
                    isp.handshake()?;
                    isp.detect_slave()?;
                    let m = msifw::ddcci::Mailbox::new(isp.comm()).with_timing(
                        u64::from(settings.time_after_command),
                        settings.command_retry_count,
                    );
                    let addr = m.key_addr()?;
                    println!("key addr    {addr:#x}");
                    // The block is a big-endian u32 length, then that many bytes, max 0x4C4.
                    let mut head = [0u8; 4];
                    isp.dump_flash(addr, &mut head)?;
                    let n = u32::from_be_bytes(head).min(msifw::binfile::KEY_MAX as u32) as usize;
                    println!("key len     {n}");
                    if n > 0 {
                        let mut body = vec![0u8; n];
                        isp.dump_flash(addr + 4, &mut body)?;
                        println!("key         {}", ascii(&body));
                    }
                }
                Cmd::Status => {
                    isp.handshake()?;
                    isp.detect_slave()?;
                    println!("slave       {:#04x}", isp.slave());
                    println!("boot code   {:#04x}", isp.boot_code()?);
                    println!("mcu type    {:#04x}", isp.mcu_type()?);
                    println!("4-byte addr {}", isp.read_address_mode()?);
                    println!("mcm flash   {}", isp.check_flash_mode()?);
                    println!("start bank  {}", isp.program_start_bank()?);
                }
                Cmd::Dump { out, len, addr } => {
                    isp.handshake()?;
                    isp.detect_slave()?;
                    isp.select_part(&table)?;
                    let addr = addr.unwrap_or(settings.dump_flash_addr);
                    let len = len.unwrap_or(settings.dump_flash_len);
                    let mut image = vec![0xFFu8; len as usize];
                    isp.dump_flash(addr, image.as_mut_slice())?;
                    std::fs::write(out, &image)?;
                    println!("wrote {} bytes to {}", len, out.display());
                }
                Cmd::Erase { bank } => {
                    isp.handshake()?;
                    isp.detect_slave()?;
                    isp.select_part(&table)?;
                    match bank {
                        Some(b) => {
                            isp.erase_bank(*b)?;
                            println!("erased bank {b}");
                        }
                        None => {
                            let part = isp.part.clone().ok_or("no part selected")?;
                            for b in 0..part.banks {
                                isp.erase_bank(b)?;
                                print!("\rbank {b}/{}", part.banks.saturating_sub(1));
                            }
                            println!();
                        }
                    }
                }
                Cmd::Flash { bin, verify } => {
                    let img = Image::open(bin)?;
                    match img.chk_ok() {
                        Some(false) => eprintln!(
                            "msifw: warning: {} carries {:04X} in its name but the bytes sum to {:04X}",
                            bin.display(),
                            img.name_chk.unwrap_or(0),
                            img.chk()
                        ),
                        None => eprintln!("msifw: note: {} has no checksum in its name", bin.display()),
                        _ => {}
                    }
                    isp.handshake()?;
                    isp.detect_slave()?;
                    isp.set_speed()?;
                    isp.set_isp_channel()?;
                    let part = isp.select_part(&table)?;
                    if part.capacity() < img.size() as u32 {
                        return Err(format!(
                            "{} is {} bytes; the {} part holds {}",
                            bin.display(),
                            img.size(),
                            part.name,
                            part.capacity()
                        )
                        .into());
                    }
                    isp.read_address_mode()?;
                    isp.disable_write_protect()?;
                    isp.scaler_stop()?;
                    let start = isp.program_start_bank()? as u16;
                    let banks = img.size().div_ceil(0x1_0000);
                    for b in 0..banks as u16 {
                        let plan = Isp::bank_plan(start + b, &img.bytes);
                        if plan.pro_len == 0 {
                            continue;
                        }
                        isp.erase_bank_plan(&plan)?;
                        isp.program_bank(&plan, &img.bytes, *verify)?;
                        print!("\rbank {}/{}  {} bytes", b + 1, banks, plan.pro_len);
                    }
                    println!();
                    if settings.reset_mcu {
                        isp.comm.reset_firmware()?;
                        isp.comm.scaler_run()?;
                        println!("mcu reset");
                    }
                }
                Cmd::Reset => {
                    isp.handshake()?;
                    isp.detect_slave()?;
                    isp.comm.reset_firmware()?;
                    isp.comm.scaler_run()?;
                    println!("mcu reset");
                }
                _ => unreachable!("handled above"),
            }
            Ok(())
        }
    }
}

/// Open one adapter: the one asked for, or the only connected one.
fn open_bus(want: Option<u32>) -> Result<Bus, Box<dyn std::error::Error>> {
    if let Some(n) = want {
        return Ok(Bus::open(n)?);
    }
    let live: Vec<_> = bus::present_buses()
        .into_iter()
        .filter(|(_, _, ok)| *ok)
        .collect();
    match live.len() {
        0 => Err(
            "no connected display link has an I2C adapter; check the cable and `msifw buses`"
                .into(),
        ),
        1 => Ok(Bus::open(live[0].0)?),
        n => Err(format!(
            "{n} connected links ({}); pick one with --bus",
            live.iter()
                .map(|(_, c, _)| c.as_str())
                .collect::<Vec<_>>()
                .join(", ")
        )
        .into()),
    }
}

fn flash_dat_path(cli: &Cli) -> Result<PathBuf, Box<dyn std::error::Error>> {
    if let Some(p) = &cli.flash_dat {
        return Ok(p.clone());
    }
    for cand in [
        PathBuf::from("PlugIn/Flash.dat"),
        PathBuf::from("vendor/PlugIn/Flash.dat"),
        PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../vendor/PlugIn/Flash.dat"),
    ] {
        if cand.exists() {
            return Ok(cand);
        }
    }
    Err("Flash.dat not found; pass --flash-dat".into())
}

fn nv(s: &str) -> String {
    if s.is_empty() {
        "(not set)".to_string()
    } else {
        s.to_string()
    }
}

/// The slave addresses the tool falls back to, named where the CLI prints them.
#[allow(dead_code)]
const _SLAVES: [u8; 2] = [ISP_DP, ISP_HDMI];
