// rea decompile_all
// name: _AfxChildWindowFromPoint
// address: 0x1005bc0b
// body: available
// range: 0x1005bc0b-0x1005bcab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct HWND__ * __stdcall _AfxChildWindowFromPoint(struct HWND__ *,struct tagPOINT)
   
   Library: Visual Studio 2015 Release */

HWND__ * _AfxChildWindowFromPoint(HWND__ *param_1,tagPOINT param_2)

{
  POINT pt;
  HWND hWnd;
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  HWND__ *pHVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ClientToScreen(param_1,&param_2);
  for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    iVar1 = GetDlgCtrlID(hWnd);
    if ((iVar1 != 0xffff) && (uVar2 = GetWindowLongW(hWnd,-0x10), (uVar2 & 0x10000000) != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(hWnd,&local_18);
      pt.y = param_2.y;
      pt.x = param_2.x;
      BVar3 = PtInRect(&local_18,pt);
      if (BVar3 != 0) break;
    }
  }
  pHVar4 = (HWND__ *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pHVar4;
}

