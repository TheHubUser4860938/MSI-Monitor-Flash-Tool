// rea decompile_all
// name: CPaneContainerManager::DoesContainFloatingPane
// address: 0x1015ec21
// body: available
// range: 0x1015ec21-0x1015ec79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::DoesContainFloatingPane(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPaneContainerManager::DoesContainFloatingPane(CPaneContainerManager *this)

{
  code *pcVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int iVar4;
  int local_8;
  
  local_8 = *(int *)(this + 8);
  do {
    if (local_8 == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_10034920(&local_8);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101ba5bc,(CObject *)*puVar2);
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x1cc);
    guard_check_icall();
    iVar4 = (*pcVar1)();
  } while (iVar4 == 0);
  return 1;
}

