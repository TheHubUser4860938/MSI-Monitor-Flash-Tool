// rea decompile_all
// name: ___scrt_initialize_onexit_tables
// address: 0x1017ed70
// body: available
// range: 0x1017ed70-0x1017ee06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1017ee06 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
    bVar2 = 0x20 - ((byte)DAT_10206460 & 0x1f) & 0x1f;
    DAT_102117c4 = (0xffffffffU >> bVar2 | -1 << 0x20 - bVar2) ^ DAT_10206460;
    uVar4 = CONCAT31((int3)(DAT_102117c4 >> 8),1);
    DAT_102117c8 = DAT_102117c4;
    DAT_102117cc = DAT_102117c4;
    DAT_102117d0 = DAT_102117c4;
    DAT_102117d4 = DAT_102117c4;
    DAT_102117d8 = DAT_102117c4;
  }
  else {
    uVar4 = __initialize_onexit_table(&DAT_102117c4);
    if (uVar4 == 0) {
      iVar3 = __initialize_onexit_table(&DAT_102117d0);
      uVar4 = CONCAT31((int3)((uint)-iVar3 >> 8),'\x01' - (iVar3 != 0));
    }
    else {
      uVar4 = uVar4 & 0xffffff00;
    }
  }
  return uVar4;
}

