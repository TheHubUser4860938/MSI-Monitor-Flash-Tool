// rea decompile_all
// name: ___scrt_initialize_onexit_tables
// address: 0x55b716
// body: available
// range: 0x55b716-0x55b7ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x55b7ac with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___scrt_initialize_onexit_tables
   
   Library: Visual Studio 2015 Release */

uint ___scrt_initialize_onexit_tables(int param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != 0) && (param_1 != 1)) {
    ___scrt_fastfail(5);
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  iVar3 = ___scrt_is_ucrt_dll_in_use();
  if ((iVar3 == 0) || (param_1 != 0)) {
    bVar2 = 0x20 - ((byte)DAT_0060cff4 & 0x1f) & 0x1f;
    DAT_006183ec = (0xffffffffU >> bVar2 | -1 << 0x20 - bVar2) ^ DAT_0060cff4;
    uVar4 = CONCAT31((int3)(DAT_006183ec >> 8),1);
    DAT_006183f0 = DAT_006183ec;
    DAT_006183f4 = DAT_006183ec;
    DAT_006183f8 = DAT_006183ec;
    DAT_006183fc = DAT_006183ec;
    DAT_00618400 = DAT_006183ec;
  }
  else {
    uVar4 = __initialize_onexit_table(&DAT_006183ec);
    if (uVar4 == 0) {
      iVar3 = __initialize_onexit_table(&DAT_006183f8);
      uVar4 = CONCAT31((int3)((uint)-iVar3 >> 8),'\x01' - (iVar3 != 0));
    }
    else {
      uVar4 = uVar4 & 0xffffff00;
    }
  }
  return uVar4;
}

