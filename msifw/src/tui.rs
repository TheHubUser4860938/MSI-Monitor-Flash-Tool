//! The text UI: one screen that shows what is connected, what will be written, whether the two
//! match, and how far the write has got.
//!
//! It is deliberately a *thin* front end over the same calls the CLI makes — every field on screen
//! is a value the protocol layer produced, and the log pane carries the plugin's own phase names
//! (`prepare · erase · program · reset`). No hidden state: quitting and re-running re-probes.

use std::io;
use std::path::{Path, PathBuf};
use std::time::Instant;

use crossterm::event::{self, Event, KeyCode, KeyEvent, KeyEventKind};
use ratatui::layout::{Constraint, Layout, Rect};
use ratatui::style::{Color, Modifier, Style};
use ratatui::text::{Line, Span};
use ratatui::widgets::{Block, Borders, Gauge, List, ListItem, ListState, Paragraph};
use ratatui::Frame;

use crate::binfile::{self, Image};
use crate::bus::{self, Bus};
use crate::comm::AuxComm;
use crate::ddcci::Ddcci;
use crate::edid;
use crate::flashdat::FlashDat;
use crate::isp::{Isp, Phase, Progress};
use crate::model::Settings;

/// What the screen is doing at any moment.
#[derive(Debug, PartialEq, Eq, Clone, Copy)]
pub enum Job {
    Idle,
    Probing,
    Dumping,
    Flashing,
    Resetting,
}

impl Job {
    fn label(self) -> &'static str {
        match self {
            Job::Idle => "idle",
            Job::Probing => "probing",
            Job::Dumping => "reading flash",
            Job::Flashing => "flashing",
            Job::Resetting => "resetting",
        }
    }
}

/// The panel side of the screen: everything read from the monitor.
#[derive(Default, Clone)]
pub struct Panel {
    pub bus: u32,
    pub adapter: String,
    pub slave: String,
    pub isp_mode: String,
    pub boot_code: String,
    pub mcu_type: String,
    pub four_byte: String,
    pub mcm: String,
    pub start_bank: String,
    pub part: String,
    pub capacity: String,
    pub banks: String,
    pub edid_name: String,
    pub edid_summary: String,
    pub fw_info: String,
    pub error: Option<String>,
}

/// The image side: one `.bin` on disk.
#[derive(Clone)]
pub struct Selected {
    pub path: PathBuf,
    pub image: Image,
    pub tags: binfile::Tags,
}

/// Everything the draw needs.
pub struct App {
    pub job: Job,
    pub panel: Panel,
    pub buses: Vec<(u32, String)>,
    pub images: Vec<PathBuf>,
    pub image_index: usize,
    pub selected: Option<Selected>,
    pub phase: Phase,
    pub bank: u16,
    pub banks: usize,
    pub percent: u8,
    pub pro_len: u32,
    pub started: Option<Instant>,
    pub log: Vec<String>,
    pub log_state: ListState,
    pub compat: Vec<(bool, String)>,
}

impl App {
    pub fn new(bus: Option<u32>, image: Option<PathBuf>) -> App {
        let mut app = App {
            job: Job::Idle,
            panel: Panel::default(),
            buses: Vec::new(),
            images: Vec::new(),
            image_index: 0,
            selected: None,
            phase: Phase::Preparing,
            bank: 0,
            banks: 0,
            percent: 0,
            pro_len: 0,
            started: None,
            log: Vec::new(),
            log_state: ListState::default(),
            compat: Vec::new(),
        };
        app.buses = bus::present_buses()
            .into_iter()
            .filter(|(_, _, ok)| *ok)
            .map(|(n, label, _)| (n, label))
            .collect();
        if let Some(n) = bus {
            if !app.buses.iter().any(|(m, _)| *m == n) {
                app.buses.push((n, format!("i2c-{n}")));
            }
        }
        if let Some(n) = bus.or_else(|| app.buses.first().map(|(n, _)| *n)) {
            app.panel.bus = n;
        }
        app.images = discover_images();
        if let Some(p) = image {
            if let Some(i) = app.images.iter().position(|x| x == &p) {
                app.image_index = i;
            } else {
                app.images.insert(0, p);
                app.image_index = 0;
            }
        }
        app.load_image();
        app.note(format!(
            "{} link(s) with a display; {} image(s) found",
            app.buses.len(),
            app.images.len()
        ));
        app
    }

    fn note(&mut self, s: impl Into<String>) {
        self.log.push(s.into());
        let n = self.log.len();
        self.log_state.select(Some(n.saturating_sub(1)));
    }

    fn load_image(&mut self) {
        let Some(path) = self.images.get(self.image_index).cloned() else {
            self.selected = None;
            self.compat.clear();
            return;
        };
        match Image::open(&path) {
            Ok(image) => {
                let tags = image.tags();
                self.selected = Some(Selected {
                    path: path.clone(),
                    image,
                    tags,
                });
                self.note(format!("loaded {}", path.display()));
            }
            Err(e) => self.note(format!("cannot read {}: {e}", path.display())),
        }
        self.check_compat();
    }

    /// Does this image fit this panel? Each line is a check with a verdict, not a guess: a check
    /// that has no data on one side says so.
    fn check_compat(&mut self) {
        self.compat.clear();
        let Some(sel) = &self.selected else { return };
        let p = &self.panel;

        // 1. Capacity: the image's bank count against the part the panel selected.
        match p.capacity.parse::<u64>() {
            Ok(cap) if cap > 0 => {
                let need = sel.image.size() as u64;
                self.compat.push((
                    need <= cap,
                    format!(
                        "capacity: image {need} B, panel {} B ({})",
                        cap,
                        if need <= cap { "fits" } else { "too big" }
                    ),
                ));
            }
            _ => self.compat.push((false, "capacity: not probed yet".into())),
        }

        // 2. Model: the name MSI baked into the image against the name the panel's EDID reports.
        match (p.edid_name.as_str(), sel.tags.model.as_deref()) {
            ("", Some(img)) => self.compat.push((
                true,
                format!("model: image says {img:?}; panel name not read"),
            )),
            (live, Some(img)) => {
                // The image carries the short marketing name (`MAG 341CQ X28`), the EDID the full
                // one (`MAG 341CQP QD-OLED`), so compare the family token, not the whole string.
                let key = img.split_whitespace().next().unwrap_or_default();
                let hit = !key.is_empty()
                    && live
                        .to_ascii_uppercase()
                        .contains(&key.to_ascii_uppercase());
                self.compat
                    .push((hit, format!("model: panel {live:?} vs image {img:?}")));
            }
            (live, None) => self.compat.push((
                false,
                format!("model: image carries no identity block (panel {live:?})"),
            )),
        }

        // 3. Version: the version in the filename against the build stamp inside the image.
        match (sel.image.version.as_deref(), sel.tags.build.as_deref()) {
            (Some(v), Some(b)) => {
                let ok = b.contains(&format!("FW.{v}"));
                self.compat
                    .push((ok, format!("version: file {v} vs image {b:?}")));
            }
            _ => self.compat.push((false, "version: not stated".into())),
        }

        // 4. The panel's own checksum report, when the filename carries one.
        match sel.image.chk_ok() {
            Some(true) => self
                .compat
                .push((true, "checksum: matches filename".into())),
            Some(false) => self
                .compat
                .push((false, "checksum: DOES NOT MATCH filename".into())),
            None => self
                .compat
                .push((false, "checksum: not in the filename".into())),
        }

        // 5. Geometry: the image is a whole number of 64 KiB banks.
        self.compat.push((
            sel.image.size_ok(),
            format!(
                "geometry: {} bytes = {} banks of 0x10000{}",
                sel.image.size(),
                sel.image.banks(),
                if sel.image.size_ok() {
                    ""
                } else {
                    " — not a whole number"
                }
            ),
        ));
    }

    /// Read the panel: identity from the EDID, the ISP window, and the part its ID selects.
    pub fn probe(&mut self) {
        self.job = Job::Probing;
        self.note(format!("probing i2c-{}", self.panel.bus));
        let mut p = Panel {
            bus: self.panel.bus,
            ..Panel::default()
        };
        let out = std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| {
            let bus = Bus::open(p.bus).map_err(|e| e.to_string())?;
            p.adapter = format!("{bus}");
            let settings = Settings::load(Settings::default_card()).unwrap_or_default();
            let table = FlashDat::locate().and_then(|p| FlashDat::load(p).ok());
            let mut comm = AuxComm::new(&bus);
            let mut isp = Isp::new(&mut comm, &settings);
            isp.handshake().map_err(|e| e.to_string())?;
            let slave = isp.detect_slave().map_err(|e| e.to_string())?;
            p.slave = format!("{slave:#04x}");
            p.isp_mode = isp.isp_mode_acked().to_string();
            p.boot_code = format!("{:#04x}", isp.boot_code().map_err(|e| e.to_string())?);
            p.mcu_type = format!("{:#04x}", isp.mcu_type().map_err(|e| e.to_string())?);
            p.four_byte = isp
                .read_address_mode()
                .map_err(|e| e.to_string())?
                .to_string();
            p.mcm = isp
                .check_flash_mode()
                .map_err(|e| e.to_string())?
                .to_string();
            p.start_bank = isp
                .program_start_bank()
                .map_err(|e| e.to_string())?
                .to_string();
            if let Some(t) = &table {
                if let Ok(part) = isp.select_part(t) {
                    p.part = part.name.clone();
                    p.capacity = part.capacity().to_string();
                    p.banks = part.banks.to_string();
                }
            }
            let d = Ddcci::new(isp.comm());
            if let Ok(v) = d.fw_info() {
                p.fw_info = v
                    .iter()
                    .map(|b| format!("{b:02x}"))
                    .collect::<Vec<_>>()
                    .join(" ");
            }
            Ok::<(), String>(())
        }));
        let _ = &out;
        if let Err(e) = out {
            let msg = e
                .downcast_ref::<String>()
                .cloned()
                .unwrap_or_else(|| "probed".into());
            p.error = Some(msg);
        }
        // The EDID is a separate read: a panel can answer the register file and not the EDID.
        if let Ok(bus) = Bus::open(p.bus) {
            // Retried: the AUX read can NACK the first time the pointer moves.
            for _ in 0..3 {
                if let Some(e) = edid::read_edid(&bus, 1) {
                    p.edid_name = edid::product_name(&e).unwrap_or_default();
                    p.edid_summary = edid::summary(&e).unwrap_or_default();
                    if !p.edid_summary.is_empty() {
                        break;
                    }
                }
            }
            if p.edid_summary.is_empty() {
                // Measured: a panel in a low-power state answers 0x01 for the whole block, which
                // has no magic and no descriptors. The link is there; the data is not.
                p.edid_summary = "no block (panel asleep?)".into();
            }
        }
        self.panel = p;
        self.job = Job::Idle;
        self.check_compat();
    }

    pub fn dump(&mut self, out: &Path) {
        self.job = Job::Dumping;
        self.started = Some(Instant::now());
        let bus_no = self.panel.bus;
        let r = (|| -> Result<(), String> {
            let bus = Bus::open(bus_no).map_err(|e| e.to_string())?;
            let settings = Settings::load(Settings::default_card()).unwrap_or_default();
            let table = FlashDat::locate().ok_or("Flash.dat not found")?;
            let table = FlashDat::load(table).map_err(|e| e.to_string())?;
            let mut comm = AuxComm::new(&bus);
            let mut isp = Isp::new(&mut comm, &settings);
            isp.handshake().map_err(|e| e.to_string())?;
            isp.detect_slave().map_err(|e| e.to_string())?;
            isp.select_part(&table).map_err(|e| e.to_string())?;
            let mcm = isp.check_flash_mode().map_err(|e| e.to_string())?;
            let banks: usize = self.panel.banks.parse().unwrap_or(30);
            let mut image = vec![0xFFu8; banks * 0x1_0000];
            self.banks = banks;
            for b in 0..banks {
                if mcm {
                    isp.dump_flash_mcm(b as u16, 0, &mut image[b * 0x1_0000..(b + 1) * 0x1_0000])
                        .map_err(|e| e.to_string())?;
                } else {
                    isp.dump_flash_fast(
                        (b * 0x1_0000) as u32,
                        &mut image[b * 0x1_0000..(b + 1) * 0x1_0000],
                    )
                    .map_err(|e| e.to_string())?;
                }
                self.bank = b as u16;
                self.percent = Phase::Programming.percent(b as u16, banks);
                self.note(format!("bank {b:#x} read"));
            }
            std::fs::write(out, &image).map_err(|e| e.to_string())?;
            Ok(())
        })();
        self.note(match r {
            Ok(()) => format!("wrote {}", out.display()),
            Err(e) => format!("dump failed: {e}"),
        });
        self.job = Job::Idle;
        self.percent = 100;
    }

    pub fn flash(&mut self) {
        let Some(sel) = self.selected.as_ref().map(|s| s.path.clone()) else {
            self.note("no image selected");
            return;
        };
        self.job = Job::Flashing;
        self.started = Some(Instant::now());
        self.note(format!("flashing {}", sel.display()));
        let bus_no = self.panel.bus;
        let r = (|| -> Result<(), String> {
            let bus = Bus::open(bus_no).map_err(|e| e.to_string())?;
            let settings = Settings::load(Settings::default_card()).unwrap_or_default();
            let table = FlashDat::locate().ok_or("Flash.dat not found")?;
            let table = FlashDat::load(table).map_err(|e| e.to_string())?;
            let img = Image::open(&sel).map_err(|e| e.to_string())?;
            let mut comm = AuxComm::new(&bus);
            let mut isp = Isp::new(&mut comm, &settings);
            isp.flash_image(&table, &img.bytes, false, &mut |pr: Progress| {
                self.phase = pr.phase;
                self.bank = pr.bank;
                self.banks = pr.banks;
                self.pro_len = pr.pro_len;
                self.percent = pr.percent();
                self.note(format!(
                    "{} bank {}/{} prolen {:#x}",
                    pr.phase.label(),
                    pr.bank + 1,
                    pr.banks,
                    pr.pro_len
                ));
            })
            .map_err(|e| e.to_string())
        })();
        self.note(match r {
            Ok(()) => "flash complete".into(),
            Err(e) => format!("flash failed: {e}"),
        });
        self.job = Job::Idle;
    }

    pub fn reset(&mut self) {
        self.job = Job::Resetting;
        let bus_no = self.panel.bus;
        let r = (|| -> Result<(), String> {
            let bus = Bus::open(bus_no).map_err(|e| e.to_string())?;
            let settings = Settings::load(Settings::default_card()).unwrap_or_default();
            let mut comm = AuxComm::new(&bus);
            let mut isp = Isp::new(&mut comm, &settings);
            isp.handshake().map_err(|e| e.to_string())?;
            isp.detect_slave().map_err(|e| e.to_string())?;
            isp.comm.reset_firmware().map_err(|e| e.to_string())?;
            isp.comm.scaler_run().map_err(|e| e.to_string())
        })();
        self.note(match r {
            Ok(()) => "mcu reset".into(),
            Err(e) => format!("reset failed: {e}"),
        });
        self.job = Job::Idle;
    }

    fn cycle_image(&mut self, dir: i32) {
        if self.images.is_empty() {
            return;
        }
        let n = self.images.len() as i32;
        self.image_index = (((self.image_index as i32) + dir).rem_euclid(n)) as usize;
        self.load_image();
    }

    fn cycle_bus(&mut self, dir: i32) {
        if self.buses.is_empty() {
            return;
        }
        let pos = self
            .buses
            .iter()
            .position(|(n, _)| *n == self.panel.bus)
            .unwrap_or(0);
        let n = self.buses.len() as i32;
        self.panel.bus = self.buses[((pos as i32 + dir).rem_euclid(n)) as usize].0;
        self.probe();
    }

    pub fn on_key(&mut self, key: KeyEvent) -> bool {
        if key.kind != KeyEventKind::Press {
            return true;
        }
        match key.code {
            KeyCode::Char('q') | KeyCode::Esc => return false,
            KeyCode::Char('i') => self.probe(),
            KeyCode::Char('f') => self.flash(),
            KeyCode::Char('d') => self.dump(Path::new("dumpflash.bin")),
            KeyCode::Char('r') => self.reset(),
            KeyCode::Down | KeyCode::Char('j') => self.cycle_image(1),
            KeyCode::Up | KeyCode::Char('k') => self.cycle_image(-1),
            KeyCode::Right => self.cycle_bus(1),
            KeyCode::Left => self.cycle_bus(-1),
            _ => {}
        }
        true
    }
}

/// The images the tool can write: `MSI_*.bin` beside the tool, in `vendor/`, and in the vendor
/// directory of the repo this was built from. Sorted, because the vendor's own file names carry
/// the version and so sort by version.
pub fn discover_images() -> Vec<PathBuf> {
    let mut out = Vec::new();
    let mut dirs = vec![
        PathBuf::from("."),
        PathBuf::from("vendor"),
        PathBuf::from("../vendor"),
    ];
    dirs.push(
        PathBuf::from(env!("CARGO_MANIFEST_DIR"))
            .join("../vendor")
            .normalize(),
    );
    for dir in dirs {
        if let Ok(rd) = std::fs::read_dir(dir) {
            for e in rd.flatten() {
                let p = e.path();
                if p.extension().and_then(|s| s.to_str()) == Some("bin")
                    && p.file_stem()
                        .map(|s| s.to_string_lossy().starts_with("MSI_"))
                        .unwrap_or(false)
                {
                    out.push(p);
                }
            }
        }
    }
    // The same file can be reachable by two paths; the name is the identity the user reads.
    out.sort();
    out.dedup_by(|a, b| a.file_name() == b.file_name());
    out
}

/// `a/b/../c` -> `a/c`, without touching the filesystem.
trait Normalize {
    fn normalize(self) -> PathBuf;
}
impl Normalize for PathBuf {
    fn normalize(self) -> PathBuf {
        let mut parts: Vec<std::ffi::OsString> = Vec::new();
        for c in self.components() {
            match c {
                std::path::Component::CurDir => {}
                std::path::Component::ParentDir => {
                    parts.pop();
                }
                other => parts.push(other.as_os_str().to_os_string()),
            }
        }
        parts.iter().collect()
    }
}

pub fn draw(f: &mut Frame, app: &App) {
    let [top, mid, bar, log] = *Layout::vertical([
        Constraint::Length(11),
        Constraint::Min(9),
        Constraint::Length(4),
        Constraint::Length(8),
    ])
    .split(f.area()) else {
        return;
    };

    draw_panel(f, app, top);
    draw_image(f, app, mid);
    draw_bar(f, app, bar);
    draw_log(f, app, log);
}

fn row(label: &str, value: &str) -> Line<'static> {
    Line::from(vec![
        Span::styled(format!("{label:12}"), Style::default().fg(Color::DarkGray)),
        Span::raw(value.to_string()),
    ])
}

fn draw_panel(f: &mut Frame, app: &App, area: Rect) {
    let p = &app.panel;
    let title = format!(" Panel  [{}] ", app.job.label());
    let block = Block::default().borders(Borders::ALL).title(title);
    let inner = block.inner(area);
    f.render_widget(block, area);
    if inner.height < 6 {
        return;
    }
    let lines = vec![
        row("link", &p.adapter),
        row("slave", &format!("{}  isp mode {}", p.slave, p.isp_mode)),
        row(
            "identity",
            &format!(
                "boot {}  mcu {}  4-byte {}  mcm {}  start bank {}",
                p.boot_code, p.mcu_type, p.four_byte, p.mcm, p.start_bank
            ),
        ),
        row(
            "flash",
            &format!("{}  {} B  {} banks", p.part, p.capacity, p.banks),
        ),
        row("edid", &format!("{}  {}", p.edid_name, p.edid_summary)),
        row("fw info", &p.fw_info),
        row(
            "keys",
            "i probe  f flash  d dump  r reset  ↑↓ image  ←→ link  q quit",
        ),
    ];
    if let Some(e) = &p.error {
        f.render_widget(
            Paragraph::new(format!("probe: {e}")).style(Style::default().fg(Color::Red)),
            Rect::new(inner.x, inner.height + inner.y - 1, inner.width, 1),
        );
    }
    f.render_widget(Paragraph::new(lines), inner);
}

fn draw_image(f: &mut Frame, app: &App, area: Rect) {
    let block = Block::default()
        .borders(Borders::ALL)
        .title(" Image  ·  compatibility ");
    let inner = block.inner(area);
    f.render_widget(block, area);
    let Some(sel) = &app.selected else {
        f.render_widget(
            Paragraph::new("no .bin found (looking for MSI_*.bin)"),
            inner,
        );
        return;
    };

    let left_w = (inner.width / 2).max(24);
    let [left, right] =
        *Layout::horizontal([Constraint::Length(left_w), Constraint::Min(10)]).split(inner)
    else {
        return;
    };

    let items: Vec<ListItem> = app
        .images
        .iter()
        .enumerate()
        .map(|(i, p)| {
            let name = p
                .file_name()
                .map(|s| s.to_string_lossy().into_owned())
                .unwrap_or_default();
            let mut spans = vec![Span::raw(name)];
            if i == app.image_index {
                spans[0] = Span::styled(
                    spans[0].content.clone(),
                    Style::default()
                        .fg(Color::Cyan)
                        .add_modifier(Modifier::BOLD),
                );
            }
            if let Some(s) = app.selected.as_ref().filter(|s| s.path == *p) {
                let tag = match s.image.chk_ok() {
                    Some(true) => " chk",
                    Some(false) => " CHK!",
                    None => "",
                };
                spans.push(Span::styled(
                    format!(" v{} {}", s.image.version.as_deref().unwrap_or("-"), tag),
                    Style::default().fg(Color::DarkGray),
                ));
            }
            ListItem::new(Line::from(spans))
        })
        .collect();
    let mut state = ListState::default();
    state.select(Some(app.image_index));
    f.render_stateful_widget(List::new(items), left, &mut state);

    let mut lines = vec![row("build", sel.tags.build.as_deref().unwrap_or("-"))];
    for (ok, text) in &app.compat {
        lines.push(Line::from(vec![
            Span::styled(
                if *ok { " ok  " } else { " FAIL " },
                Style::default().fg(if *ok { Color::Green } else { Color::Red }),
            ),
            Span::raw(text.clone()),
        ]));
    }
    f.render_widget(
        Paragraph::new(lines).wrap(ratatui::widgets::Wrap { trim: true }),
        right,
    );
}

fn draw_bar(f: &mut Frame, app: &App, area: Rect) {
    let elapsed = app
        .started
        .map(|t| format!(" {:.0}s", t.elapsed().as_secs_f32()))
        .unwrap_or_default();
    let label = format!(
        "{}  bank {}/{}  {}%{elapsed}",
        app.phase.label(),
        app.bank + 1,
        app.banks.max(1),
        app.percent
    );
    let gauge = Gauge::default()
        .block(Block::default().borders(Borders::ALL).title(" Progress "))
        .gauge_style(Style::default().fg(Color::Green).bg(Color::Black))
        .ratio(app.percent as f64 / 100.0)
        .label(label);
    f.render_widget(gauge, area);
}

fn draw_log(f: &mut Frame, app: &App, area: Rect) {
    let items: Vec<ListItem> = app
        .log
        .iter()
        .map(|l| ListItem::new(Line::from(Span::raw(l.clone()))))
        .collect();
    let list = List::new(items)
        .block(Block::default().borders(Borders::ALL).title(" Log "))
        .highlight_style(Style::default().fg(Color::Yellow));
    let mut st = app.log_state;
    st.select(Some(app.log.len().saturating_sub(1)));
    f.render_stateful_widget(list, area, &mut st);
}

/// Run the UI until the user quits.
pub fn run(bus: Option<u32>, image: Option<PathBuf>) -> io::Result<()> {
    let mut terminal = ratatui::init();
    let mut app = App::new(bus, image);
    app.probe();
    let r = loop {
        terminal.draw(|f| draw(f, &app))?;
        if event::poll(std::time::Duration::from_millis(200))? {
            match event::read()? {
                Event::Key(k) => {
                    if !app.on_key(k) {
                        break Ok(());
                    }
                }
                Event::Resize(_, _) => {}
                _ => {}
            }
        }
    };
    ratatui::restore();
    r
}

#[cfg(test)]
mod tests {
    use super::*;
    use crossterm::event::KeyModifiers;
    use ratatui::backend::TestBackend;
    use ratatui::Terminal;

    fn app_with(image: &str) -> App {
        let mut app = App {
            job: Job::Idle,
            panel: Panel {
                bus: 4,
                adapter: "i2c-4 (NVIDIA i2c adapter 4 at 1:00.0)".into(),
                slave: "0x4a".into(),
                isp_mode: "true".into(),
                boot_code: "0x92".into(),
                mcu_type: "0xf8".into(),
                four_byte: "false".into(),
                mcm: "true".into(),
                start_bank: "3".into(),
                part: "GD25Q32C".into(),
                capacity: "4194304".into(),
                banks: "64".into(),
                edid_name: "MAG 341CQP".into(),
                edid_summary: "EDID 1.4  58x38 cm".into(),
                fw_info: "10 00 00 64".into(),
                error: None,
            },
            buses: vec![(4, "NVIDIA i2c adapter 4".into())],
            images: vec![PathBuf::from(image)],
            image_index: 0,
            selected: None,
            phase: Phase::Programming,
            bank: 11,
            banks: 28,
            percent: 42,
            pro_len: 0x7200,
            started: None,
            log: vec!["probe ok".into()],
            log_state: ListState::default(),
            compat: Vec::new(),
        };
        app.load_image();
        app
    }

    const FW012: &str = "../vendor/MSI_MAG_341CQP_QD-OLED_X28_FW.012_4023.bin";

    fn render(app: &App, w: u16, h: u16) -> String {
        let mut t = Terminal::new(TestBackend::new(w, h)).unwrap();
        t.draw(|f| draw(f, app)).unwrap();
        t.backend()
            .buffer()
            .content()
            .iter()
            .map(|c| c.symbol())
            .collect::<String>()
    }

    #[test]
    fn the_screen_shows_the_panel_the_image_and_the_meter() {
        let app = app_with(FW012);
        let s = render(&app, 100, 36);
        for want in [
            "i2c-4",                    // the link
            "0x4a",                     // the slave it settled on
            "GD25Q32C",                 // the part the ID selected
            "MAG 341CQP",               // the EDID's name
            "FW.012 20260612",          // the image's build stamp
            "capacity",                 // the gate
            "program  bank 12/28  42%", // the meter
        ] {
            assert!(s.contains(want), "missing {want:?} in:\n{s}");
        }
    }

    #[test]
    fn the_compatibility_gate_passes_the_shipped_image_against_this_panel() {
        let app = app_with(FW012);
        let fails: Vec<_> = app
            .compat
            .iter()
            .filter(|(ok, _)| !ok)
            .map(|(_, t)| t.clone())
            .collect();
        assert!(fails.is_empty(), "gate: {fails:#?}");
        // Five checks, all green: capacity, model, version, checksum, geometry.
        assert_eq!(app.compat.len(), 5);
    }

    #[test]
    fn an_image_too_big_for_the_part_fails_the_gate() {
        let mut app = app_with(FW012);
        app.panel.capacity = "1048576".into(); // a 1 MiB part
        app.check_compat();
        assert!(
            app.compat
                .iter()
                .any(|(ok, t)| !ok && t.contains("capacity") && t.contains("too big")),
            "{:#?}",
            app.compat
        );
    }

    #[test]
    fn a_model_that_does_not_match_the_edid_fails_the_gate() {
        let mut app = app_with(FW012);
        app.panel.edid_name = "MPG 274QRF".into();
        app.check_compat();
        assert!(app.compat.iter().any(|(ok, t)| !ok && t.contains("model")));
    }

    #[test]
    fn keys_do_the_things_the_screen_says() {
        let mut app = app_with(FW012);
        let key = |c: char| KeyEvent::new(KeyCode::Char(c), KeyModifiers::NONE);
        app.on_key(key('j'));
        assert_eq!(app.image_index, 0, "one image, so it stays");
        app.on_key(key('i'));
        assert_eq!(app.job, Job::Idle, "a probe finishes");
        assert!(app.on_key(key('q')) == false, "q quits");
    }

    #[test]
    fn a_probe_failure_shows_up_in_red_on_the_panel() {
        let mut app = app_with(FW012);
        app.panel.error = Some("no ack at 0x4a".into());
        let s = render(&app, 100, 36);
        assert!(s.contains("no ack at 0x4a"), "{s}");
    }
}
