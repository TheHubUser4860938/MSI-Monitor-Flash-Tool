// rea decompile_all
// name: __Init_thread_wait
// address: 0x1017fbb3
// body: available
// range: 0x1017fbb3-0x1017fc17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __Init_thread_wait
   
   Library: Visual Studio 2015 Release */

bool __Init_thread_wait(DWORD param_1)

{
  int iVar1;
  DWORD DVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  
  if (DAT_10248c84 == (HANDLE)0x0) {
    uVar4 = DAT_1023dfec ^ _DAT_10248c88;
    bVar3 = (byte)DAT_1023dfec & 0x1f;
    guard_check_icall(&DAT_10248c80,&DAT_10248c68,param_1);
    iVar1 = (*(code *)(uVar4 >> bVar3 | uVar4 << 0x20 - bVar3))();
    bVar5 = iVar1 != 0;
  }
  else {
    FUN_1017fba7();
    DVar2 = WaitForSingleObjectEx(DAT_10248c84,param_1,0);
    FUN_1017fb5a();
    bVar5 = DVar2 == 0;
  }
  return bVar5;
}

