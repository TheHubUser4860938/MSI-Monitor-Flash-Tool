// rea decompile_all
// name: CPaneFrameWnd::OnSetCursor
// address: 0x460405
// body: available
// range: 0x460405-0x460464 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CPaneFrameWnd::OnSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release */

int __thiscall
CPaneFrameWnd::OnSetCursor(CPaneFrameWnd *this,CWnd *param_1,uint param_2,uint param_3)

{
  HCURSOR hCursor;
  int iVar1;
  LPCWSTR lpCursorName;
  
  switch(param_2) {
  case 10:
  case 0xb:
    AfxGetModuleState();
    lpCursorName = (LPCWSTR)0x7f84;
    break;
  case 0xc:
  case 0xf:
    AfxGetModuleState();
    lpCursorName = (LPCWSTR)0x7f85;
    break;
  case 0xd:
  case 0x11:
    AfxGetModuleState();
    lpCursorName = (LPCWSTR)0x7f82;
    break;
  case 0xe:
  case 0x10:
    AfxGetModuleState();
    lpCursorName = (LPCWSTR)0x7f83;
    break;
  default:
    iVar1 = FUN_0042ec70();
    return iVar1;
  }
  hCursor = LoadCursorW((HINSTANCE)0x0,lpCursorName);
  SetCursor(hCursor);
  return 1;
}

