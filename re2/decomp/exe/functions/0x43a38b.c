// rea decompile_all
// name: _AFX_D2D_STATE::ReleaseD2DRefs
// address: 0x43a38b
// body: available
// range: 0x43a38b-0x43a418 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall _AFX_D2D_STATE::ReleaseD2DRefs(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall _AFX_D2D_STATE::ReleaseD2DRefs(_AFX_D2D_STATE *this)

{
  int *piVar1;
  code *pcVar2;
  
  if (*(int *)(this + 0x1c) != 0) {
    piVar1 = *(int **)(this + 0xc);
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      guard_check_icall(piVar1);
      (*pcVar2)();
      *(undefined4 *)(this + 0xc) = 0;
    }
    piVar1 = *(int **)(this + 0x10);
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      guard_check_icall(piVar1);
      (*pcVar2)();
      *(undefined4 *)(this + 0x10) = 0;
    }
    piVar1 = *(int **)(this + 0x14);
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      guard_check_icall(piVar1);
      (*pcVar2)();
      *(undefined4 *)(this + 0x14) = 0;
    }
    if (*(int *)(this + 4) != 0) {
      FreeLibrary(*(HMODULE *)(this + 4));
      *(undefined4 *)(this + 4) = 0;
    }
    if (*(int *)(this + 8) != 0) {
      FreeLibrary(*(HMODULE *)(this + 8));
      *(undefined4 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    CoUninitialize();
    *(undefined4 *)(this + 0x20) = 0;
  }
  return;
}

