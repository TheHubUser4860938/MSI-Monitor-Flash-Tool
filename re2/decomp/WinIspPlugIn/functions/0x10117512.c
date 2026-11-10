// rea decompile_all
// name: AFX_GLOBAL_DATA::GetShellAutohideBars
// address: 0x10117512
// body: available
// range: 0x10117512-0x101175d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall AFX_GLOBAL_DATA::GetShellAutohideBars(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall AFX_GLOBAL_DATA::GetShellAutohideBars(AFX_GLOBAL_DATA *this)

{
  UINT_PTR UVar1;
  int iVar2;
  _AppBarData local_2c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x1a8) != 0) {
    *(undefined4 *)(this + 0x1a8) = 0;
    _memset(&local_2c,0,0x24);
    local_2c.cbSize = 0x24;
    local_2c.uEdge = 3;
    UVar1 = SHAppBarMessage(7,&local_2c);
    if (UVar1 != 0) {
      *(uint *)(this + 0x1c8) = *(uint *)(this + 0x1c8) | 8;
    }
    local_2c.uEdge = 1;
    UVar1 = SHAppBarMessage(7,&local_2c);
    if (UVar1 != 0) {
      *(uint *)(this + 0x1c8) = *(uint *)(this + 0x1c8) | 4;
    }
    local_2c.uEdge = 0;
    UVar1 = SHAppBarMessage(7,&local_2c);
    if (UVar1 != 0) {
      *(uint *)(this + 0x1c8) = *(uint *)(this + 0x1c8) | 1;
    }
    local_2c.uEdge = 2;
    UVar1 = SHAppBarMessage(7,&local_2c);
    if (UVar1 != 0) {
      *(uint *)(this + 0x1c8) = *(uint *)(this + 0x1c8) | 2;
    }
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

