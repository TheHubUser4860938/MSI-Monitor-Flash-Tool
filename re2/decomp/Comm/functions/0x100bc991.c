// rea decompile_all
// name: CDockingPanesRow::ExpandStretchedPanesRect
// address: 0x100bc991
// body: available
// range: 0x100bc991-0x100bca19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingPanesRow::ExpandStretchedPanesRect(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingPanesRow::ExpandStretchedPanesRect(CDockingPanesRow *this)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  CDockingPanesRow *local_c;
  CDockingPanesRow *local_8;
  
  if (*(int *)(this + 0x30) != 0) {
    local_c = this;
    local_8 = this;
    BeginTrans(this);
    iVar2 = GetAvailableLengthRect(this);
    local_c = *(CDockingPanesRow **)(this + 0x28);
    do {
      do {
        if (local_c == (CDockingPanesRow *)0x0) goto LAB_100bca04;
        puVar3 = (undefined4 *)FUN_1002466e(&local_c);
        local_8 = (CDockingPanesRow *)*puVar3;
        pcVar1 = *(code **)(*(int *)local_8 + 0x17c);
        guard_check_icall();
        iVar4 = (*pcVar1)();
      } while ((iVar4 == 0) && (*(int *)(this + 4) == 0));
      iVar4 = StretchPaneRect(this,(CPane *)local_8,iVar2);
      iVar2 = iVar2 - iVar4;
    } while (0 < iVar2);
LAB_100bca04:
    ArrangePanesRect(this,(CPane *)0x0);
    CommitTrans(this);
  }
  return;
}

