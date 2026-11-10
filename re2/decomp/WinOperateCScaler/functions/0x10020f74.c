// rea decompile_all
// name: AfxInternalPreTranslateMessage
// address: 0x10020f74
// body: available
// range: 0x10020f74-0x10020fee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl AfxInternalPreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __cdecl AfxInternalPreTranslateMessage(tagMSG *param_1)

{
  code *pcVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  int iVar3;
  CWnd *pCVar4;
  CWnd *pCVar5;
  HWND__ *pHVar6;
  
  pAVar2 = AfxGetModuleThreadState();
  pHVar6 = (HWND__ *)0x0;
  if (((*(CWinThread **)(pAVar2 + 4) == (CWinThread *)0x0) || (param_1->hwnd != (HWND)0x0)) ||
     (iVar3 = CWinThread::DispatchThreadMessageEx(*(CWinThread **)(pAVar2 + 4),param_1), iVar3 == 0)
     ) {
    pCVar4 = AfxGetMainWnd();
    if (pCVar4 != (CWnd *)0x0) {
      pHVar6 = *(HWND__ **)(pCVar4 + 0x20);
    }
    iVar3 = CWnd::WalkPreTranslateTree(pHVar6,param_1);
    if (iVar3 == 0) {
      if (pCVar4 != (CWnd *)0x0) {
        pCVar5 = CWnd::FromHandle(param_1->hwnd);
        pCVar5 = CWnd::GetTopLevelParent(pCVar5);
        if (pCVar5 != pCVar4) {
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x10c);
          guard_check_icall(param_1);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 1;
  }
  return iVar3;
}

