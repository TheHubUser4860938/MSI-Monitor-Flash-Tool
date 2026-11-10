// rea decompile_all
// name: CWinApp::SetCurrentHandles
// address: 0x10044024
// body: available
// range: 0x10044024-0x100441b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100440d2 to 0x10038df9 FUN_10038df9 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWinApp::SetCurrentHandles(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall CWinApp::SetCurrentHandles(CWinApp *this)

{
  AFX_MODULE_STATE *pAVar1;
  DWORD DVar2;
  LPWSTR pWVar3;
  uint uVar4;
  wchar_t *pwVar5;
  errno_t eVar6;
  wchar_t local_618 [256];
  wchar_t local_418 [260];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  pAVar1 = AfxGetModuleState();
  *(undefined4 *)(pAVar1 + 8) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(pAVar1 + 0xc) = *(undefined4 *)(this + 0x44);
  DVar2 = GetModuleFileNameW(*(HMODULE *)(this + 0x44),local_210,0x104);
  if ((DVar2 == 0) || (DVar2 == 0x104)) {
    FUN_10044786();
  }
  pWVar3 = PathFindExtensionW(local_210);
  if (pWVar3 == (LPWSTR)0x0) {
    FUN_10044786();
  }
  *pWVar3 = L'\0';
  uVar4 = AfxGetFileName(local_210,local_418,0x104);
  if (uVar4 != 0) {
    FUN_10044786();
  }
  if (*(int *)(this + 0x60) == 0) {
    pwVar5 = __wcsdup(local_418);
    *(wchar_t **)(this + 0x60) = pwVar5;
    if (pwVar5 == (wchar_t *)0x0) goto LAB_100440d2;
  }
  pwVar5 = *(wchar_t **)(this + 0x50);
  if (pwVar5 == (wchar_t *)0x0) {
    uVar4 = FUN_1003d692(0xe000,local_618,0x100);
    if (uVar4 == 0) {
      pwVar5 = *(wchar_t **)(this + 0x60);
    }
    else {
      pwVar5 = local_618;
    }
    pwVar5 = __wcsdup(pwVar5);
    *(wchar_t **)(this + 0x50) = pwVar5;
    if (pwVar5 == (wchar_t *)0x0) goto LAB_100440d2;
  }
  *(wchar_t **)(pAVar1 + 0x10) = pwVar5;
  if (*(int *)(this + 100) == 0) {
    if (*(int *)(this + 0x6c) == 1) {
      pwVar5 = L".CHM";
    }
    else {
      pwVar5 = L".HLP";
    }
    ATL::Checked::tcscpy_s(pWVar3,0x104 - ((int)pWVar3 - (int)local_210 >> 1),pwVar5);
    pwVar5 = __wcsdup(local_210);
    *(wchar_t **)(this + 100) = pwVar5;
    if (pwVar5 == (wchar_t *)0x0) goto LAB_100440d2;
    *pWVar3 = L'\0';
  }
  if (*(int *)(this + 0x68) == 0) {
    eVar6 = _wcscat_s(local_418,0x104,L".INI");
    FUN_10003f20(eVar6);
    pwVar5 = __wcsdup(local_418);
    *(wchar_t **)(this + 0x68) = pwVar5;
    if (pwVar5 == (wchar_t *)0x0) {
LAB_100440d2:
                    /* WARNING: Subroutine does not return */
      FUN_10038df9();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

