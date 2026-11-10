// rea decompile_all
// name: xMonitorFromRect
// address: 0x1003dcf8
// body: available
// range: 0x1003dcf8-0x1003dd48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _xMonitorFromRect@8
   
   Library: Visual Studio 2008 Release
   __stdcall xMonitorFromRect,8 */

undefined4 xMonitorFromRect(int *param_1,byte param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = _InitMultipleMonitorStubs();
  if (CONCAT31(extraout_var,bVar1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1003dd07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*_DAT_10068588)();
    return uVar2;
  }
  if ((param_2 & 3) == 0) {
    if ((0 < param_1[2]) && (0 < param_1[3])) {
      iVar3 = GetSystemMetrics(0);
      if (*param_1 < iVar3) {
        iVar3 = GetSystemMetrics(1);
        if (param_1[1] < iVar3) goto LAB_1003dd3e;
      }
    }
    uVar2 = 0;
  }
  else {
LAB_1003dd3e:
    uVar2 = 0x12340042;
  }
  return uVar2;
}

