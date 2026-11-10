// rea decompile_all
// name: CMFCToolBar::AccGetButtonsCount
// address: 0x100937a4
// body: available
// range: 0x100937a4-0x100937f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::AccGetButtonsCount(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::AccGetButtonsCount(CMFCToolBar *this)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = *(int *)(this + 0xc40);
  iVar4 = 0;
  while (local_8 != 0) {
    puVar2 = (undefined4 *)FUN_100c321b(&local_8);
    pcVar1 = *(code **)(*(int *)*puVar2 + 0xbc);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    iVar4 = iVar4 + iVar3;
  }
  return iVar4;
}

