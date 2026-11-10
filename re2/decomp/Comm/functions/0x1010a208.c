// rea decompile_all
// name: CDockState::CDockState
// address: 0x1010a208
// body: available
// range: 0x1010a208-0x1010a2b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall CDockState::CDockState(void)
   
   Library: Visual Studio 2015 Release */

CDockState * __thiscall CDockState::CDockState(CDockState *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined ***)this = vftable;
  CPtrArray::CPtrArray((CPtrArray *)(this + 4));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  iVar1 = GetSystemMetrics(0);
  *(int *)(this + 0x24) = iVar1;
  iVar1 = GetSystemMetrics(1);
  *(int *)(this + 0x28) = iVar1;
  iVar1 = GetSystemMetrics(0x4c);
  *(int *)(this + 0x2c) = iVar1;
  iVar1 = GetSystemMetrics(0x4d);
  *(int *)(this + 0x30) = iVar1;
  iVar1 = GetSystemMetrics(0x4e);
  *(int *)(this + 0x34) = iVar1;
  iVar1 = GetSystemMetrics(0x4f);
  *(int *)(this + 0x38) = iVar1;
  iVar1 = GetSystemMetrics(0xb);
  *(int *)(this + 0x34) = *(int *)(this + 0x34) - iVar1;
  iVar2 = GetSystemMetrics(0xc);
  iVar1 = *(int *)(this + 0x38);
  iVar3 = GetSystemMetrics(0x33);
  *(int *)(this + 0x38) = (iVar1 - iVar2) - iVar3;
  return this;
}

