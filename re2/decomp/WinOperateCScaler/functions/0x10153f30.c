// rea decompile_all
// name: __Init_thread_notify
// address: 0x10153f30
// body: available
// range: 0x10153f30-0x10153f70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __Init_thread_notify
   
   Library: Visual Studio 2015 Release */

void __Init_thread_notify(void)

{
  byte bVar1;
  uint uVar2;
  
  if (DAT_1020cccc == (HANDLE)0x0) {
    uVar2 = DAT_10201fec ^ _DAT_1020ccd4;
    bVar1 = (byte)DAT_10201fec & 0x1f;
    guard_check_icall(&DAT_1020ccc8);
    (*(code *)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1))();
    return;
  }
  SetEvent(DAT_1020cccc);
  ResetEvent(DAT_1020cccc);
  return;
}

