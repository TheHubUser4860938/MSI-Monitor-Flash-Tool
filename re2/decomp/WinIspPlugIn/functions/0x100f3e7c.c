// rea decompile_all
// name: CDockingPanesRow::GetAvailableLengthRect
// address: 0x100f3e7c
// body: available
// range: 0x100f3e7c-0x100f3f46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDockingPanesRow::GetAvailableLengthRect(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDockingPanesRow::GetAvailableLengthRect(CDockingPanesRow *this)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  GetClientRect(this,(CRect *)&local_18);
  local_20 = *(int *)(this + 0x28);
  local_1c = 0;
  while (local_20 != 0) {
    piVar2 = (int *)FUN_100c321b(&local_20);
    piVar2 = (int *)*piVar2;
    pcVar1 = *(code **)(*piVar2 + 0x17c);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if ((iVar3 != 0) || (*(int *)(this + 4) != 0)) {
      if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
        iVar3 = piVar2[0x2d] - piVar2[0x2b];
      }
      else {
        iVar3 = piVar2[0x2c] - piVar2[0x2a];
      }
      local_1c = local_1c + iVar3;
    }
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

