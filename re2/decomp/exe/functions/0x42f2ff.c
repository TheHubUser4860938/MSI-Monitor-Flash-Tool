// rea decompile_all
// name: CWnd::GetParentOwner
// address: 0x42f2ff
// body: available
// range: 0x42f2ff-0x42f342 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::GetParentOwner(void)const 
   
   Library: Visual Studio 2015 Release */

CWnd * __thiscall CWnd::GetParentOwner(CWnd *this)

{
  uint uVar1;
  HWND hWnd;
  CWnd *pCVar2;
  HWND hWnd_00;
  
  if ((this == (CWnd *)0x0) || (hWnd_00 = *(HWND *)(this + 0x20), hWnd_00 == (HWND)0x0)) {
    return (CWnd *)0x0;
  }
  uVar1 = GetWindowLongW(hWnd_00,-0x10);
  while ((uVar1 & 0x40000000) != 0) {
    hWnd = GetParent(hWnd_00);
    if (hWnd == (HWND)0x0) break;
    uVar1 = GetWindowLongW(hWnd,-0x10);
    hWnd_00 = hWnd;
  }
  pCVar2 = FromHandle(hWnd_00);
  return pCVar2;
}

