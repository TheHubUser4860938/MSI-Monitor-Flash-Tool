// rea decompile_all
// name: CPaneContainerManager::EnableGrippers
// address: 0x10133d39
// body: available
// range: 0x10133d39-0x10133d90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainerManager::EnableGrippers(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneContainerManager::EnableGrippers(CPaneContainerManager *this,int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int local_8;
  
  local_8 = *(int *)(this + 8);
  while (local_8 != 0) {
    puVar2 = (undefined4 *)FUN_100972dc(&local_8);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,(CObject *)*puVar2);
    if (pCVar3 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x1f0);
      guard_check_icall(param_1);
      (*pcVar1)();
    }
  }
  return;
}

