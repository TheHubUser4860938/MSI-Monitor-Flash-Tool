// rea decompile_all
// name: CCmdTarget::GetInterface
// address: 0x1005b23c
// body: available
// range: 0x1005b23c-0x1005b306 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct IUnknown * __thiscall CCmdTarget::GetInterface(void const *)
   
   Library: Visual Studio 2015 Release */

IUnknown * __thiscall CCmdTarget::GetInterface(CCmdTarget *this,void *param_1)

{
  code *pcVar1;
  IUnknown *pIVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  
  pcVar1 = *(code **)(*(int *)this + 0x44);
  pvVar7 = param_1;
  guard_check_icall(param_1);
  pIVar2 = (IUnknown *)(*pcVar1)();
  if (pIVar2 != (IUnknown *)0x0) {
    return pIVar2;
  }
  pcVar1 = *(code **)(*(int *)this + 0x38);
  guard_check_icall(pvVar7);
  piVar3 = (int *)(*pcVar1)();
  iVar5 = *(int *)param_1;
  if (((iVar5 == 0) && (*(int *)((int)param_1 + 4) == 0)) && (*(int *)((int)param_1 + 8) == 0xc0)) {
    if (*(int *)((int)param_1 + 0xc) == 0x46000000) {
      do {
        for (piVar4 = (int *)piVar3[1]; *piVar4 != 0; piVar4 = piVar4 + 2) {
          if (*(IUnknownVtbl **)(this + piVar4[1]) != (IUnknownVtbl *)0x0) {
            return (IUnknown *)(this + piVar4[1]);
          }
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
      return (IUnknown *)0x0;
    }
    iVar5 = *(int *)param_1;
  }
  do {
    for (puVar6 = (undefined4 *)piVar3[1]; piVar4 = (int *)*puVar6, piVar4 != (int *)0x0;
        puVar6 = puVar6 + 2) {
      if (*piVar4 == iVar5) {
        if (((piVar4[1] == *(int *)((int)param_1 + 4)) && (piVar4[2] == *(int *)((int)param_1 + 8)))
           && ((piVar4[3] == *(int *)((int)param_1 + 0xc) &&
               (*(IUnknownVtbl **)(this + puVar6[1]) != (IUnknownVtbl *)0x0)))) {
          return (IUnknown *)(this + puVar6[1]);
        }
        iVar5 = *(int *)param_1;
      }
    }
    piVar3 = (int *)*piVar3;
    if (piVar3 == (int *)0x0) {
      return (IUnknown *)0x0;
    }
  } while( true );
}

