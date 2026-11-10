// rea decompile_all
// name: __Init_thread_wait
// address: 0x55b5e2
// body: available
// range: 0x55b5e2-0x55b646 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  
  if (DAT_006183d8 == (HANDLE)0x0) {
    uVar4 = DAT_0060cff4 ^ _DAT_006183dc;
    bVar3 = (byte)DAT_0060cff4 & 0x1f;
    guard_check_icall(&DAT_006183d4,&DAT_006183bc,param_1);
    iVar1 = (*(code *)(uVar4 >> bVar3 | uVar4 << 0x20 - bVar3))();
    bVar5 = iVar1 != 0;
  }
  else {
    FUN_0055b5d6();
    DVar2 = WaitForSingleObjectEx(DAT_006183d8,param_1,0);
    FUN_0055b589();
    bVar5 = DVar2 == 0;
  }
  return bVar5;
}

