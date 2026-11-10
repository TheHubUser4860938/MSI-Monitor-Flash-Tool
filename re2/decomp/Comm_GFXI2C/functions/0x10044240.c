// rea decompile_all
// name: CCmdTarget::GetInterface
// address: 0x10044240
// body: available
// range: 0x10044240-0x100442f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct IUnknown * __thiscall CCmdTarget::GetInterface(void const *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

IUnknown * __thiscall CCmdTarget::GetInterface(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  pIVar1 = (IUnknown *)(**(code **)(*(int *)this + 0x44))(param_1);
  if (pIVar1 == (IUnknown *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0x38))();
    if ((((*(int *)param_1 == 0) && (*(int *)((int)param_1 + 4) == 0)) &&
        (*(int *)((int)param_1 + 8) == 0xc0)) && (*(int *)((int)param_1 + 0xc) == 0x46000000)) {
      do {
        for (piVar3 = (int *)piVar2[1]; *piVar3 != 0; piVar3 = piVar3 + 2) {
          if (*(IUnknownVtbl **)(this + piVar3[1]) != (IUnknownVtbl *)0x0) {
            return (IUnknown *)(this + piVar3[1]);
          }
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
    else {
      do {
        for (puVar4 = (undefined4 *)piVar2[1]; piVar3 = (int *)*puVar4, piVar3 != (int *)0x0;
            puVar4 = puVar4 + 2) {
          if (((*piVar3 == *(int *)param_1) && (piVar3[1] == *(int *)((int)param_1 + 4))) &&
             ((piVar3[2] == *(int *)((int)param_1 + 8) &&
              ((piVar3[3] == *(int *)((int)param_1 + 0xc) &&
               (*(IUnknownVtbl **)(this + puVar4[1]) != (IUnknownVtbl *)0x0)))))) {
            return (IUnknown *)(this + puVar4[1]);
          }
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
    pIVar1 = (IUnknown *)0x0;
  }
  return pIVar1;
}

