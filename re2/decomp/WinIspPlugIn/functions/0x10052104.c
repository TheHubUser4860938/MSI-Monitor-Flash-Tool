// rea decompile_all
// name: CCmdTarget::QueryAggregates
// address: 0x10052104
// body: available
// range: 0x10052104-0x10052181 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct IUnknown * __thiscall CCmdTarget::QueryAggregates(void const *)
   
   Library: Visual Studio 2015 Release */

IUnknown * __thiscall CCmdTarget::QueryAggregates(CCmdTarget *this,void *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  CCmdTarget *pCVar7;
  CCmdTarget *local_c;
  CCmdTarget *local_8;
  
  pcVar1 = *(code **)(*(int *)this + 0x38);
  local_c = this;
  local_8 = this;
  guard_check_icall();
  piVar4 = (int *)(*pcVar1)();
  do {
    for (piVar6 = (int *)piVar4[1]; *piVar6 != 0; piVar6 = piVar6 + 2) {
    }
    piVar6 = piVar6 + 1;
    iVar5 = *piVar6;
    pCVar7 = local_8;
    while (iVar5 != -1) {
      puVar2 = *(undefined4 **)(pCVar7 + *piVar6);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)*puVar2;
        local_c = (CCmdTarget *)0x0;
        guard_check_icall(puVar2,param_1,&local_c);
        iVar5 = (*(code *)*puVar3)();
        pCVar7 = local_8;
        if ((iVar5 == 0) && (local_c != (CCmdTarget *)0x0)) {
          return (IUnknown *)local_c;
        }
      }
      piVar6 = piVar6 + 2;
      iVar5 = *piVar6;
    }
    piVar4 = (int *)*piVar4;
    if (piVar4 == (int *)0x0) {
      return (IUnknown *)0x0;
    }
  } while( true );
}

