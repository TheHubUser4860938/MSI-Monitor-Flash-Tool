// rea decompile_all
// name: CDockingManager::BringBarsToTop
// address: 0x4678fd
// body: available
// range: 0x4678fd-0x46798e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingManager::BringBarsToTop(unsigned long,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::BringBarsToTop(CDockingManager *this,ulong param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  
  local_8 = *(int *)(this + 0x28);
  while (local_8 != 0) {
    piVar2 = (int *)FUN_00434304(&local_8);
    piVar2 = (int *)*piVar2;
    if ((param_2 == 0) ||
       ((iVar3 = FUN_0043970d(&PTR_s_CPane_005b83cc), iVar3 == 0 &&
        (iVar3 = FUN_0043970d(&PTR_s_CPaneDivider_005c46c4), iVar3 == 0)))) {
      param_2 = 0;
      pcVar1 = *(code **)(*piVar2 + 0x194);
      guard_check_icall();
      uVar4 = (*pcVar1)();
      if ((uVar4 == (param_1 & 0xf000)) || ((param_1 & 0xf000) == 0)) {
        BringWindowToTop((HWND)piVar2[8]);
      }
    }
  }
  return;
}

