// rea decompile_all
// name: FUN_10007000
// address: 0x10007000
// body: available
// range: 0x10007000-0x10007507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10007503 to 0x10001e40 FUN_10001e40 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007000(void)

{
  int in_ECX;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(in_ECX + 0x2ec);
  if (0xf < *(uint *)(in_ECX + 0x300)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x300) + 1);
  }
  *(undefined4 *)(in_ECX + 0x300) = 0xf;
  *(undefined4 *)(in_ECX + 0x2fc) = 0;
  if (0xf < *(uint *)(in_ECX + 0x300)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x2b4);
  if (0xf < *(uint *)(in_ECX + 0x2c8)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x2c8) + 1);
  }
  *(undefined4 *)(in_ECX + 0x2c8) = 0xf;
  *(undefined4 *)(in_ECX + 0x2c4) = 0;
  if (0xf < *(uint *)(in_ECX + 0x2c8)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x29c);
  if (0xf < *(uint *)(in_ECX + 0x2b0)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x2b0) + 1);
  }
  *(undefined4 *)(in_ECX + 0x2b0) = 0xf;
  *(undefined4 *)(in_ECX + 0x2ac) = 0;
  if (0xf < *(uint *)(in_ECX + 0x2b0)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x27c);
  if (0xf < *(uint *)(in_ECX + 0x290)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x290) + 1);
  }
  *(undefined4 *)(in_ECX + 0x290) = 0xf;
  *(undefined4 *)(in_ECX + 0x28c) = 0;
  if (0xf < *(uint *)(in_ECX + 0x290)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x264);
  if (0xf < *(uint *)(in_ECX + 0x278)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x278) + 1);
  }
  *(undefined4 *)(in_ECX + 0x278) = 0xf;
  *(undefined4 *)(in_ECX + 0x274) = 0;
  if (0xf < *(uint *)(in_ECX + 0x278)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x238);
  if (0xf < *(uint *)(in_ECX + 0x24c)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x24c) + 1);
  }
  *(undefined4 *)(in_ECX + 0x24c) = 0xf;
  *(undefined4 *)(in_ECX + 0x248) = 0;
  if (0xf < *(uint *)(in_ECX + 0x24c)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x220);
  if (0xf < *(uint *)(in_ECX + 0x234)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x234) + 1);
  }
  *(undefined4 *)(in_ECX + 0x234) = 0xf;
  *(undefined4 *)(in_ECX + 0x230) = 0;
  if (0xf < *(uint *)(in_ECX + 0x234)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x208);
  if (0xf < *(uint *)(in_ECX + 0x21c)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x21c) + 1);
  }
  *(undefined4 *)(in_ECX + 0x21c) = 0xf;
  *(undefined4 *)(in_ECX + 0x218) = 0;
  if (0xf < *(uint *)(in_ECX + 0x21c)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x1f0);
  if (0xf < *(uint *)(in_ECX + 0x204)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x204) + 1);
  }
  *(undefined4 *)(in_ECX + 0x204) = 0xf;
  *(undefined4 *)(in_ECX + 0x200) = 0;
  if (0xf < *(uint *)(in_ECX + 0x204)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x1d8);
  if (0xf < *(uint *)(in_ECX + 0x1ec)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x1ec) + 1);
  }
  *(undefined4 *)(in_ECX + 0x1ec) = 0xf;
  *(undefined4 *)(in_ECX + 0x1e8) = 0;
  if (0xf < *(uint *)(in_ECX + 0x1ec)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x1c0);
  if (0xf < *(uint *)(in_ECX + 0x1d4)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x1d4) + 1);
  }
  *(undefined4 *)(in_ECX + 0x1d4) = 0xf;
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  if (0xf < *(uint *)(in_ECX + 0x1d4)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x1a8);
  if (0xf < *(uint *)(in_ECX + 0x1bc)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x1bc) + 1);
  }
  *(undefined4 *)(in_ECX + 0x1bc) = 0xf;
  *(undefined4 *)(in_ECX + 0x1b8) = 0;
  if (0xf < *(uint *)(in_ECX + 0x1bc)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 400);
  if (0xf < *(uint *)(in_ECX + 0x1a4)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x1a4) + 1);
  }
  *(undefined4 *)(in_ECX + 0x1a4) = 0xf;
  *(undefined4 *)(in_ECX + 0x1a0) = 0;
  if (0xf < *(uint *)(in_ECX + 0x1a4)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x178);
  if (0xf < *(uint *)(in_ECX + 0x18c)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x18c) + 1);
  }
  *(undefined4 *)(in_ECX + 0x18c) = 0xf;
  *(undefined4 *)(in_ECX + 0x188) = 0;
  if (0xf < *(uint *)(in_ECX + 0x18c)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x160);
  if (0xf < *(uint *)(in_ECX + 0x174)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x174) + 1);
  }
  *(undefined4 *)(in_ECX + 0x174) = 0xf;
  *(undefined4 *)(in_ECX + 0x170) = 0;
  if (0xf < *(uint *)(in_ECX + 0x174)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x148);
  if (0xf < *(uint *)(in_ECX + 0x15c)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x15c) + 1);
  }
  *(undefined4 *)(in_ECX + 0x15c) = 0xf;
  *(undefined4 *)(in_ECX + 0x158) = 0;
  if (0xf < *(uint *)(in_ECX + 0x15c)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x130);
  if (0xf < *(uint *)(in_ECX + 0x144)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x144) + 1);
  }
  *(undefined4 *)(in_ECX + 0x144) = 0xf;
  *(undefined4 *)(in_ECX + 0x140) = 0;
  if (0xf < *(uint *)(in_ECX + 0x144)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x118);
  if (0xf < *(uint *)(in_ECX + 300)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 300) + 1);
  }
  *(undefined4 *)(in_ECX + 300) = 0xf;
  *(undefined4 *)(in_ECX + 0x128) = 0;
  if (0xf < *(uint *)(in_ECX + 300)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x100);
  if (0xf < *(uint *)(in_ECX + 0x114)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x114) + 1);
  }
  *(undefined4 *)(in_ECX + 0x114) = 0xf;
  *(undefined4 *)(in_ECX + 0x110) = 0;
  if (0xf < *(uint *)(in_ECX + 0x114)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0xe8);
  if (0xf < *(uint *)(in_ECX + 0xfc)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0xfc) + 1);
  }
  *(undefined4 *)(in_ECX + 0xfc) = 0xf;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  if (0xf < *(uint *)(in_ECX + 0xfc)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0xd0);
  if (0xf < *(uint *)(in_ECX + 0xe4)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0xe4) + 1);
  }
  *(undefined4 *)(in_ECX + 0xe4) = 0xf;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  if (0xf < *(uint *)(in_ECX + 0xe4)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0xb8);
  if (0xf < *(uint *)(in_ECX + 0xcc)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0xcc) + 1);
  }
  *(undefined4 *)(in_ECX + 0xcc) = 0xf;
  *(undefined4 *)(in_ECX + 200) = 0;
  if (0xf < *(uint *)(in_ECX + 0xcc)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0xa0);
  if (0xf < *(uint *)(in_ECX + 0xb4)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0xb4) + 1);
  }
  *(undefined4 *)(in_ECX + 0xb4) = 0xf;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  if (0xf < *(uint *)(in_ECX + 0xb4)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x88);
  if (0xf < *(uint *)(in_ECX + 0x9c)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x9c) + 1);
  }
  *(undefined4 *)(in_ECX + 0x9c) = 0xf;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  if (0xf < *(uint *)(in_ECX + 0x9c)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x70);
  if (0xf < *(uint *)(in_ECX + 0x84)) {
    FUN_10003d70(*puVar1,*(uint *)(in_ECX + 0x84) + 1);
  }
  *(undefined4 *)(in_ECX + 0x84) = 0xf;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  if (0xf < *(uint *)(in_ECX + 0x84)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_10001e40();
  FUN_10001e40();
  FUN_10001e40();
  FUN_10001e40();
  return;
}

