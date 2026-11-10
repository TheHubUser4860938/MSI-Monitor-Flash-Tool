// rea decompile_all
// name: COleClientItem::Close
// address: 0x10145dc4
// body: available
// range: 0x10145dc4-0x10145e68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall COleClientItem::Close(enum tagOLECLOSE)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleClientItem::Close(COleClientItem *this,tagOLECLOSE param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (this[0x48] == (COleClientItem)0x0) {
    piVar3 = *(int **)(this + 0x24);
    this[0x48] = (COleClientItem)0x1;
    pcVar1 = *(code **)(*piVar3 + 0x18);
    guard_check_icall(piVar3,param_1);
    uVar2 = (*pcVar1)();
    *(undefined4 *)(this + 0x34) = uVar2;
    if (this[0x46] != (COleClientItem)0x0) {
      OleLockRunning(*(LPUNKNOWN *)(this + 0x24),0,1);
      this[0x46] = (COleClientItem)0x0;
    }
    if (*(int *)(this + 0x50) != 1) {
      if (*(int *)(this + 0x50) == 4) {
        pcVar1 = *(code **)(*(int *)this + 0x80);
        guard_check_icall(0);
        (*pcVar1)();
      }
      if (*(int *)(this + 0x50) == 3) {
        pcVar1 = *(code **)(*(int *)this + 0x98);
        guard_check_icall(piVar3,param_1);
        (*pcVar1)();
      }
      if (*(int *)(this + 0x50) != 1) {
        pcVar1 = *(code **)(*(int *)this + 0x6c);
        guard_check_icall(4,1);
        (*pcVar1)();
        *(undefined4 *)(this + 0x50) = 1;
      }
    }
    this[0x48] = (COleClientItem)0x0;
  }
  return;
}

