// rea decompile_all
// name: FUN_10045f36
// address: 0x10045f36
// body: available
// range: 0x10045f36-0x10046132 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10045f36(void)

{
  AFX_GLOBAL_DATA *in_ECX;
  
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined ***)(in_ECX + 0x98) = CBrush::vftable;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined ***)(in_ECX + 0xa0) = CBrush::vftable;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined ***)(in_ECX + 0xa8) = CBrush::vftable;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  *(undefined ***)(in_ECX + 0xb0) = CBrush::vftable;
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  *(undefined ***)(in_ECX + 0xb8) = CBrush::vftable;
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined ***)(in_ECX + 0xc0) = CBrush::vftable;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined ***)(in_ECX + 200) = CBrush::vftable;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined ***)(in_ECX + 0xd0) = CBrush::vftable;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined ***)(in_ECX + 0xd8) = CPen::vftable;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  *(undefined ***)(in_ECX + 0xe0) = CPen::vftable;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined ***)(in_ECX + 0xe8) = CPen::vftable;
  *(undefined4 *)(in_ECX + 0x114) = 0;
  *(undefined4 *)(in_ECX + 0x118) = 0;
  *(undefined4 *)(in_ECX + 0x120) = 0;
  *(undefined ***)(in_ECX + 0x11c) = CFont::vftable;
  *(undefined4 *)(in_ECX + 0x128) = 0;
  *(undefined ***)(in_ECX + 0x124) = CFont::vftable;
  *(undefined4 *)(in_ECX + 0x130) = 0;
  *(undefined ***)(in_ECX + 300) = CFont::vftable;
  *(undefined4 *)(in_ECX + 0x138) = 0;
  *(undefined ***)(in_ECX + 0x134) = CFont::vftable;
  *(undefined4 *)(in_ECX + 0x140) = 0;
  *(undefined ***)(in_ECX + 0x13c) = CFont::vftable;
  *(undefined4 *)(in_ECX + 0x148) = 0;
  *(undefined ***)(in_ECX + 0x144) = CFont::vftable;
  *(undefined4 *)(in_ECX + 0x150) = 0;
  *(undefined ***)(in_ECX + 0x14c) = CFont::vftable;
  *(undefined4 *)(in_ECX + 0x158) = 0;
  *(undefined ***)(in_ECX + 0x154) = CFont::vftable;
  *(undefined4 *)(in_ECX + 0x160) = 0;
  *(undefined ***)(in_ECX + 0x15c) = CFont::vftable;
  *(undefined4 *)(in_ECX + 0x168) = 0;
  *(undefined ***)(in_ECX + 0x164) = CFont::vftable;
  *(undefined4 *)(in_ECX + 0x16c) = 0;
  *(undefined4 *)(in_ECX + 0x170) = 0;
  *(undefined4 *)(in_ECX + 0x174) = 0;
  *(undefined4 *)(in_ECX + 0x178) = 0;
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 0x1e8) = 1;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x1c4) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x18c) = 1;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0x110) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x198) = 0;
  *(undefined4 *)(in_ECX + 0x1ec) = 0;
  *(undefined4 *)(in_ECX + 0x1b0) = 4;
  *(undefined4 *)(in_ECX + 0x1b4) = 3;
  *(undefined4 *)(in_ECX + 0x1b8) = 0xe;
  *(undefined4 *)(in_ECX + 0x1bc) = 4;
  *(undefined4 *)(in_ECX + 0x1c0) = 0x32;
  *(undefined4 *)(in_ECX + 0x184) = 0;
  *(undefined4 *)(in_ECX + 0x188) = 0;
  AFX_GLOBAL_DATA::Initialize(in_ECX);
  return;
}

