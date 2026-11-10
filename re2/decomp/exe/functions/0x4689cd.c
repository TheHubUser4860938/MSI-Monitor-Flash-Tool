// rea decompile_all
// name: CDockingManager::FindDockSite
// address: 0x4689cd
// body: available
// range: 0x4689cd-0x468a55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CDockSite * __thiscall CDockingManager::FindDockSite(unsigned long,int)
   
   Library: Visual Studio 2015 Release */

CDockSite * __thiscall
CDockingManager::FindDockSite(CDockingManager *this,ulong param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  CObject *pCVar5;
  int local_8;
  
  if (param_2 == 0) {
    local_8 = *(int *)(this + 0x28);
  }
  else {
    local_8 = *(int *)(this + 0x24);
  }
  do {
    do {
      if (local_8 == 0) {
        return (CDockSite *)0x0;
      }
      if (param_2 == 0) {
        puVar2 = (undefined4 *)FUN_00434304(&local_8);
      }
      else {
        puVar2 = (undefined4 *)FUN_004ead48(&local_8);
      }
      pCVar5 = (CObject *)*puVar2;
      iVar3 = FUN_0043970d(&PTR_s_CDockSite_005bb9f0);
    } while (iVar3 == 0);
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x194);
    guard_check_icall();
    uVar4 = (*pcVar1)();
  } while (uVar4 != (param_1 & 0xf000));
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockSite_005bb9f0,pCVar5);
  return (CDockSite *)pCVar5;
}

