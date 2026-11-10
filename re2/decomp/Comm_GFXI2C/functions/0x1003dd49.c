// rea decompile_all
// name: xMonitorFromWindow
// address: 0x1003dd49
// body: available
// range: 0x1003dd49-0x1003ddb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _xMonitorFromWindow@8
   
   Library: Visual Studio 2008 Release
   __stdcall xMonitorFromWindow,8 */

undefined4 xMonitorFromWindow(HWND param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  BOOL BVar3;
  int iVar4;
  WINDOWPLACEMENT local_30;
  
  bVar1 = _InitMultipleMonitorStubs();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((param_2 & 3) == 0) {
      BVar3 = IsIconic(param_1);
      if (BVar3 == 0) {
        iVar4 = GetWindowRect(param_1,&local_30.rcNormalPosition);
      }
      else {
        iVar4 = GetWindowPlacement(param_1,&local_30);
      }
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = xMonitorFromRect(&local_30.rcNormalPosition.left,(byte)param_2);
      }
    }
    else {
      uVar2 = 0x12340042;
    }
  }
  else {
    uVar2 = (*DAT_10068584)(param_1,param_2);
  }
  return uVar2;
}

