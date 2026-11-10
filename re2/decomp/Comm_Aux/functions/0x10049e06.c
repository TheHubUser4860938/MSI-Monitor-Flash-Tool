// rea decompile_all
// name: _IsolationAwarePrivatenPgViNgRzlnPgpgk@4
// address: 0x10049e06
// body: available
// range: 0x10049e06-0x10049e75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _IsolationAwarePrivatenPgViNgRzlnPgpgk@4
   
   Library: Visual Studio 2015 Release */

undefined4 _IsolationAwarePrivatenPgViNgRzlnPgpgk_4(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (DAT_1020bdb0 != 0) {
    OutputDebugStringA("IsolationAware function called after IsolationAwareCleanup\n");
  }
  if (DAT_1020bda8 == 0) {
    if (DAT_1020bdb0 == 0) {
      iVar1 = _WinbaseIsolationAwarePrivatetRgzlnPgpgk_0();
      if (iVar1 != 0) goto LAB_10049e3a;
    }
    else {
LAB_10049e3a:
      iVar1 = _IsolationAwareActivateActCtx_8(DAT_102057d8,param_1);
      if (iVar1 != 0) goto LAB_10049e4c;
    }
    DVar2 = GetLastError();
    if (((DVar2 == 0x7f) || (DVar2 == 0x7e)) || (DVar2 == 0x78)) {
      uVar3 = 1;
      DAT_1020bda8 = 1;
    }
  }
  else {
LAB_10049e4c:
    uVar3 = 1;
  }
  return uVar3;
}

