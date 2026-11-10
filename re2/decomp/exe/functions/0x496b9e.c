// rea decompile_all
// name: FID_conflict:WinHelpA
// address: 0x496b9e
// body: available
// range: 0x496b9e-0x496bbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x496bba to 0x4322c9 FID_conflict:WinHelpW (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: virtual void __thiscall CFrameWndEx::WinHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall CMDIFrameWndEx::WinHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall COleDocIPFrameWndEx::WinHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall COleIPFrameWndEx::WinHelpA(unsigned long,unsigned int)
     8 names - too many to list
   
   Library: Visual Studio 2015 Release */

BOOL FID_conflict_WinHelpA(HWND hWndMain,LPCSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  BOOL BVar1;
  int in_ECX;
  
  if ((hWndMain == (HWND)0x0) && (*(int *)(in_ECX + 0x124) != 0)) {
    BVar1 = OnContextHelp();
    return BVar1;
  }
  BVar1 = FID_conflict_WinHelpW(hWndMain,(LPCWSTR)lpszHelp,uCommand,dwData);
  return BVar1;
}

