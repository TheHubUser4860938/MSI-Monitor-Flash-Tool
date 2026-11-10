// rea decompile_all
// name: CFrameWnd::OnDropFiles
// address: 0x100bc953
// body: available
// range: 0x100bc953-0x100bc9fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnDropFiles(struct HDROP__ *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWnd::OnDropFiles(CFrameWnd *this,HDROP__ *param_1)

{
  int *piVar1;
  code *pcVar2;
  HWND pHVar3;
  UINT UVar4;
  AFX_MODULE_STATE *pAVar5;
  UINT iFile;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pHVar3 = SetActiveWindow(*(HWND *)(this + 0x20));
  CWnd::FromHandle(pHVar3);
  iFile = 0;
  UVar4 = DragQueryFileW(param_1,0xffffffff,(LPWSTR)0x0,0);
  pAVar5 = AfxGetModuleState();
  piVar1 = *(int **)(pAVar5 + 4);
  if (UVar4 != 0) {
    do {
      DragQueryFileW(param_1,iFile,local_210,0x104);
      pcVar2 = *(code **)(*piVar1 + 0xa4);
      guard_check_icall(local_210);
      (*pcVar2)();
      iFile = iFile + 1;
    } while (iFile < UVar4);
  }
  DragFinish(param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

