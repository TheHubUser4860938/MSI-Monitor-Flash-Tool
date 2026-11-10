// rea decompile_all
// name: AFX_GLOBAL_DATA::GetColor
// address: 0x1007ddd2
// body: available
// range: 0x1007ddd2-0x1007de5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: unsigned long __thiscall AFX_GLOBAL_DATA::GetColor(int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall AFX_GLOBAL_DATA::GetColor(AFX_GLOBAL_DATA *this,int param_1)

{
  ulong uVar1;
  
  switch(param_1) {
  case 2:
    uVar1 = *(ulong *)(this + 0x7c);
    break;
  case 3:
    uVar1 = *(ulong *)(this + 0x80);
    break;
  default:
    uVar1 = GetSysColor(param_1);
    break;
  case 5:
    uVar1 = *(ulong *)(this + 0x6c);
    break;
  case 6:
    uVar1 = *(ulong *)(this + 0x2c);
    break;
  case 7:
    uVar1 = *(ulong *)(this + 0x78);
    break;
  case 8:
    uVar1 = *(ulong *)(this + 0x70);
    break;
  case 9:
    uVar1 = *(ulong *)(this + 0x74);
    break;
  case 10:
    uVar1 = *(ulong *)(this + 0x90);
    break;
  case 0xb:
    uVar1 = *(ulong *)(this + 0x94);
    break;
  case 0xd:
    uVar1 = *(ulong *)(this + 0x3c);
    break;
  case 0xe:
    uVar1 = *(ulong *)(this + 0x40);
    break;
  case 0xf:
    uVar1 = *(ulong *)(this + 0x1c);
    break;
  case 0x10:
    uVar1 = *(ulong *)(this + 0x20);
    break;
  case 0x11:
    uVar1 = *(ulong *)(this + 0x38);
    break;
  case 0x12:
    uVar1 = *(ulong *)(this + 0x28);
    break;
  case 0x13:
    uVar1 = *(ulong *)(this + 0x84);
    break;
  case 0x14:
    uVar1 = *(ulong *)(this + 0x24);
    break;
  case 0x15:
    uVar1 = *(ulong *)(this + 0x30);
    break;
  case 0x16:
    uVar1 = *(ulong *)(this + 0x34);
  }
  return uVar1;
}

