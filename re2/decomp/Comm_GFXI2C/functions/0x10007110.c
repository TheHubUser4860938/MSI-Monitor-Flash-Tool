// rea decompile_all
// name: FUN_10007110
// address: 0x10007110
// body: available
// range: 0x10007110-0x10007244 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_10007110(HMODULE param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
    DAT_10065a00 = GetProcAddress(param_1,"nvapi_QueryInterface");
    if (DAT_10065a00 == (FARPROC)0x0) {
      return -1;
    }
    pcVar1 = (code *)(*DAT_10065a00)(0x150e828,uVar3);
    if (pcVar1 == (code *)0x0) {
      DAT_10065a00 = (FARPROC)0x0;
      return -1;
    }
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      DAT_10065a00 = (FARPROC)0x0;
      return iVar2;
    }
    DAT_10065a08 = (*DAT_10065a00)(0x33c7358c);
    DAT_10065a0c = (*DAT_10065a00)(0x593e8644);
    if (((DAT_10065a08 != 0) && (DAT_10065a0c == 0)) || ((DAT_10065a08 != 0 && (DAT_10065a0c == 0)))
       ) {
      DAT_10065a08 = 0;
      DAT_10065a0c = 0;
    }
  }
  else if ((param_2 == 1) &&
          (DAT_10065a04 = GetProcAddress(param_1,"nvapi_pepQueryInterface"),
          DAT_10065a04 == (FARPROC)0x0)) {
    FreeLibrary(DAT_100659fc);
    return -1;
  }
  *(int *)(&DAT_10065a44 + param_2 * 4) = *(int *)(&DAT_10065a44 + param_2 * 4) + 1;
  return 0;
}

