// rea decompile_all
// name: CArchive::Abort
// address: 0x10025b8b
// body: available
// range: 0x10025b8b-0x10025c1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CArchive::Abort(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CArchive::Abort(CArchive *this)

{
  code *pcVar1;
  int iVar2;
  CArchive *local_8;
  
  *(undefined4 *)(this + 0x24) = 0;
  local_8 = this;
  if (*(int *)(this + 0x1c) == 0) {
    FID_conflict__free(*(void **)(this + 0x30));
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(CMapPtrToPtr **)(this + 0x3c) != (CMapPtrToPtr *)0x0) {
    iVar2 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,&local_8);
    if ((iVar2 != 0) && (local_8 != (CArchive *)0x0)) {
      pcVar1 = *(code **)(*(int *)local_8 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x3c) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  *(undefined4 *)(this + 0x3c) = 0;
  if (*(int **)(this + 0x38) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x38) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  *(undefined4 *)(this + 0x38) = 0;
  return;
}

