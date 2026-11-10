// rea decompile_all
// name: CPaneContainerManager::CanBeAttached
// address: 0x10133901
// body: available
// range: 0x10133901-0x10133959 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::CanBeAttached(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CPaneContainerManager::CanBeAttached(CPaneContainerManager *this)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)(this + 8);
  do {
    if (local_8 == 0) {
      return 1;
    }
    pCVar2 = (CObject *)FUN_1006a9f1(&local_8);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101b236c,pCVar2);
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x18c);
    guard_check_icall();
    iVar3 = (*pcVar1)();
  } while (iVar3 != 0);
  return 0;
}

