// rea decompile_all
// name: CMFCShellListCtrl::DisplayParentFolder
// address: 0x521b80
// body: available
// range: 0x521b80-0x521c38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CMFCShellListCtrl::DisplayParentFolder(void)
   
   Library: Visual Studio 2015 Release */

long __thiscall CMFCShellListCtrl::DisplayParentFolder(CMFCShellListCtrl *this)

{
  code *pcVar1;
  _func_12949 *p_Var2;
  int iVar3;
  HRESULT HVar4;
  IShellFolder *local_14;
  undefined4 local_10;
  undefined4 local_c;
  IShellFolder *local_8;
  
  if (*(int *)(this + 0x158) != 0) {
    local_14 = (IShellFolder *)0x0;
    local_10 = 0;
    local_c = 0;
    iVar3 = FUN_00418a3f(*(int *)(this + 0x158),&local_10);
    if (-1 < iVar3) {
      if (iVar3 == 0) {
        pcVar1 = *(code **)(*(int *)this + 0x188);
        guard_check_icall(&local_14);
        HVar4 = (*pcVar1)();
      }
      else {
        HVar4 = SHGetDesktopFolder(&local_8);
        if (-1 < HVar4) {
          local_14 = local_8;
          local_c = local_10;
          pcVar1 = *(code **)(*(int *)this + 0x188);
          guard_check_icall(&local_14);
          HVar4 = (*pcVar1)();
          p_Var2 = local_8->lpVtbl->Release;
          guard_check_icall();
          (*p_Var2)(local_8);
        }
      }
      FUN_0041899a(local_10);
      return HVar4;
    }
  }
  return -0x7fffbffb;
}

