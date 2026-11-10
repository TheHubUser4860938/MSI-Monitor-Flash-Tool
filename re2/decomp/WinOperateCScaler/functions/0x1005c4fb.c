// rea decompile_all
// name: CMFCToolBarImages::Initialize
// address: 0x1005c4fb
// body: available
// range: 0x1005c4fb-0x1005c5e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCToolBarImages::Initialize(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarImages::Initialize(CMFCToolBarImages *this)

{
  if (*(int *)(this + 0x14) == 0) {
    if (DAT_10209c6c == 0) {
      DAT_10209c24 = CreateCompatibleDC((HDC)0x0);
      DAT_10209c28 = CreateCompatibleDC((HDC)0x0);
      if ((DAT_10209c24 == (HDC)0x0) || (DAT_10209c28 == (HDC)0x0)) {
        FUN_10033663();
      }
      DAT_10209c6c = 1;
    }
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0xa8) = 0xffffffff;
    *(undefined4 *)(this + 0xac) = 0xffffffff;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x34) = 1;
    *(undefined4 *)(this + 0x40) = 1;
    *(undefined8 *)(this + 0xb8) = 0x3ff0000000000000;
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x54) = 0x10;
    *(undefined4 *)(this + 0x58) = 0xf;
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x7c) = 0;
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x80) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0xa4) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x84) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x10) = 0x82;
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
    FUN_1005d639();
    *(undefined4 *)(this + 0x14) = 1;
  }
  return;
}

