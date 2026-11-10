// rea decompile_all
// name: CWinApp::ShowAppMessageBox
// address: 0x4286e2
// body: available
// range: 0x4286e2-0x42884d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __cdecl CWinApp::ShowAppMessageBox(class CWinApp *,wchar_t const *,unsigned
   int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __cdecl CWinApp::ShowAppMessageBox(CWinApp *param_1,wchar_t *param_2,uint param_3,uint param_4)

{
  HWND__ *hWnd;
  DWORD DVar1;
  CWinApp *pCVar2;
  LPCWSTR lpCaption;
  int iVar3;
  CWinApp *pCVar4;
  DWORD local_220;
  HWND__ *local_21c;
  CWinApp *local_218;
  WCHAR local_214 [259];
  undefined2 local_e;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_218 = param_1;
  DoEnableModeless(0);
  hWnd = CWnd::GetSafeOwner_((HWND__ *)0x0,&local_21c);
  if (hWnd != local_21c) {
    EnableWindow(hWnd,1);
  }
  local_220 = 0;
  GetWindowThreadProcessId(hWnd,&local_220);
  if ((((hWnd == (HWND__ *)0x0) || (DVar1 = GetCurrentProcessId(), local_220 != DVar1)) ||
      (pCVar2 = (CWinApp *)SendMessageW(hWnd,0x376,0,0), pCVar4 = local_218,
      pCVar2 == (CWinApp *)0x0)) &&
     (pCVar4 = local_218, pCVar2 = (CWinApp *)0x0, local_218 != (CWinApp *)0x0)) {
    pCVar2 = local_218 + 0x7c;
  }
  local_218 = (CWinApp *)0x0;
  if ((pCVar2 != (CWinApp *)0x0) && (local_218 = *(CWinApp **)pCVar2, param_4 != 0)) {
    *(uint *)pCVar2 = param_4 + 0x30000;
  }
  if ((param_3 & 0xf0) == 0) {
    if ((param_3 & 0xf) < 2) {
      param_3 = param_3 | 0x30;
    }
    else if ((param_3 & 0xf) - 3 < 2) {
      param_3 = param_3 | 0x20;
    }
  }
  local_214[0] = L'\0';
  if (pCVar4 == (CWinApp *)0x0) {
    DVar1 = GetModuleFileNameW((HMODULE)0x0,local_214,0x104);
    if (DVar1 == 0x104) {
      local_e = 0;
    }
    lpCaption = local_214;
  }
  else {
    lpCaption = *(LPCWSTR *)(pCVar4 + 0x50);
  }
  MessageBoxW(hWnd,param_2,lpCaption,param_3);
  if (pCVar2 != (CWinApp *)0x0) {
    *(CWinApp **)pCVar2 = local_218;
  }
  if (local_21c != (HWND)0x0) {
    EnableWindow(local_21c,1);
  }
  DoEnableModeless(1);
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

