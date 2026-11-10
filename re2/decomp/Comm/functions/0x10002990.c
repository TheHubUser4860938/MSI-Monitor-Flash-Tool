// rea decompile_all
// name: FUN_10002990
// address: 0x10002990
// body: available
// range: 0x10002990-0x10002cb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002990(void)

{
  if (DAT_101def1c != (HMODULE)0x0) {
    if (DAT_101def14 != (code *)0x0) {
      (*DAT_101def14)();
    }
    FreeLibrary(DAT_101def1c);
    DAT_101def18 = 0;
    DAT_101def14 = (code *)0x0;
    DAT_101def10 = 0;
    DAT_101def0c = 0;
    DAT_101def00 = 0;
    DAT_101deefc = 0;
    _DAT_101deef8 = 0;
    DAT_101deef4 = 0;
    DAT_101deef0 = 0;
    DAT_101deeec = 0;
    DAT_101deee8 = 0;
    DAT_101deee4 = 0;
    DAT_101deee0 = 0;
    DAT_101deedc = 0;
    DAT_101deed8 = 0;
    DAT_101deed4 = 0;
    DAT_101deecc = 0;
    DAT_101deed0 = 0;
    DAT_101deec8 = 0;
    DAT_101deec4 = 0;
    DAT_101deec0 = 0;
    DAT_101deebc = 0;
    DAT_101deeb8 = 0;
    DAT_101deeb0 = 0;
    DAT_101deeb4 = 0;
    DAT_101deeac = 0;
    DAT_101deea8 = 0;
    _DAT_101dee98 = 0;
    DAT_101dee94 = 0;
    DAT_101dee90 = 0;
    DAT_101dee88 = 0;
    DAT_101dee8c = 0;
    DAT_101dee84 = 0;
    DAT_101dee80 = 0;
    DAT_101dee7c = 0;
    DAT_101dee78 = 0;
    DAT_101dee74 = 0;
    DAT_101dee70 = 0;
    DAT_101dee6c = 0;
    DAT_101dee68 = 0;
    DAT_101dee64 = 0;
    DAT_101dee60 = 0;
    DAT_101dee5c = 0;
    DAT_101dee58 = 0;
    DAT_101dee54 = 0;
    DAT_101dee50 = 0;
    _DAT_101dee48 = 0;
    _DAT_101dee4c = 0;
    DAT_101dee44 = 0;
    _DAT_101dee40 = 0;
    _DAT_101dee3c = 0;
    _DAT_101dee38 = 0;
    _DAT_101dee34 = 0;
    _DAT_101dee30 = 0;
    _DAT_101dee2c = 0;
    _DAT_101dee28 = 0;
    _DAT_101dee24 = 0;
    DAT_101dee20 = 0;
    DAT_101dee1c = 0;
    DAT_101dee18 = 0;
    DAT_101dee14 = 0;
    DAT_101dee10 = 0;
    DAT_101dee0c = 0;
    DAT_101dee08 = 0;
    DAT_101dee04 = 0;
    DAT_101dee00 = 0;
    DAT_101dedfc = 0;
    DAT_101dedf8 = 0;
    DAT_101dedf4 = 0;
    DAT_101dedf0 = 0;
    DAT_101dedec = 0;
    DAT_101dede8 = 0;
    DAT_101dede4 = 0;
    DAT_101dede0 = 0;
    DAT_101deddc = 0;
    DAT_101dedd8 = 0;
    DAT_101dedd4 = 0;
  }
  return;
}

