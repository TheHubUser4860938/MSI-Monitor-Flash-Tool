// rea decompile_all
// name: CWnd::GetSafeOwner_
// address: 0x100393b7
// body: available
// range: 0x100393b7-0x10039456 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static struct HWND__ * __stdcall CWnd::GetSafeOwner_(struct HWND__ *,struct HWND__ * *)
   
   Library: Visual Studio 2008 Release */

HWND__ * CWnd::GetSafeOwner_(HWND__ *param_1,HWND__ **param_2)

{
  HWND hWnd;
  CWnd *pCVar1;
  uint uVar2;
  HWND pHVar3;
  HWND hWnd_00;
  BOOL BVar4;
  HWND hWnd_01;
  
  hWnd_01 = param_1;
  if (param_1 != (HWND__ *)0x0) goto LAB_100393e7;
  pCVar1 = (CWnd *)FUN_100392c8();
  if ((pCVar1 == (CWnd *)0x0) && (pCVar1 = AfxGetMainWnd(), pCVar1 == (CWnd *)0x0)) {
    hWnd_01 = (HWND)0x0;
    pHVar3 = hWnd_01;
    hWnd_00 = hWnd_01;
  }
  else {
    for (hWnd_01 = *(HWND *)(pCVar1 + 0x20); pHVar3 = hWnd_01, hWnd_00 = hWnd_01,
        hWnd_01 != (HWND)0x0; hWnd_01 = GetParent(hWnd_01)) {
LAB_100393e7:
      uVar2 = GetWindowLongW(hWnd_01,-0x10);
      pHVar3 = hWnd_01;
      hWnd_00 = hWnd_01;
      if ((uVar2 & 0x40000000) == 0) break;
    }
  }
  while (hWnd = pHVar3, hWnd != (HWND)0x0) {
    pHVar3 = GetParent(hWnd);
    hWnd_01 = hWnd;
  }
  if ((param_1 == (HWND__ *)0x0) && (hWnd_00 != (HWND)0x0)) {
    hWnd_00 = GetLastActivePopup(hWnd_00);
  }
  if (param_2 != (HWND__ **)0x0) {
    if (((hWnd_01 == (HWND)0x0) || (BVar4 = ::IsWindowEnabled(hWnd_01), BVar4 == 0)) ||
       (hWnd_01 == hWnd_00)) {
      *param_2 = (HWND__ *)0x0;
    }
    else {
      *param_2 = hWnd_01;
      ::EnableWindow(hWnd_01,0);
    }
  }
  return hWnd_00;
}

