// rea decompile_all
// name: CGlobalUtils::GetSystemBorders
// address: 0x44933d
// body: available
// range: 0x44933d-0x44938d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CSize __thiscall CGlobalUtils::GetSystemBorders(class CWnd *)
   
   Library: Visual Studio 2015 Release */

CWnd * __thiscall CGlobalUtils::GetSystemBorders(CGlobalUtils *this,CWnd *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  undefined4 *puVar2;
  CWnd *in_stack_00000008;
  CGlobalUtils *local_c;
  CGlobalUtils *pCStack_8;
  
  hWnd = (HWND)0x0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (in_stack_00000008 != (CWnd *)0x0) {
    hWnd = *(HWND *)(in_stack_00000008 + 0x20);
  }
  local_c = this;
  pCStack_8 = this;
  BVar1 = IsWindow(hWnd);
  if (BVar1 != 0) {
    CWnd::GetExStyle(in_stack_00000008);
    puVar2 = (undefined4 *)GetSystemBorders(this,(ulong)&local_c);
    *(undefined4 *)param_1 = *puVar2;
    *(undefined4 *)(param_1 + 4) = puVar2[1];
  }
  return param_1;
}

