// rea decompile_all
// name: CDockingManager::FixupVirtualRects
// address: 0x100acd1e
// body: available
// range: 0x100acd1e-0x100acd8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingManager::FixupVirtualRects(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::FixupVirtualRects(CDockingManager *this)

{
  code *pcVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int local_8;
  
  local_8 = *(int *)(this + 0x24);
  while (local_8 != 0) {
    puVar2 = (undefined4 *)FUN_1002466e(&local_8);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockSite_101954d4,(CObject *)*puVar2);
    if (pCVar3 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x29c);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x38);
  guard_check_icall(0);
  (*pcVar1)();
  return;
}

