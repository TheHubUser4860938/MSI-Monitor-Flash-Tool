// rea decompile_all
// name: CMFCToolBar::AccGetButtonByChildId
// address: 0x450174
// body: available
// range: 0x450174-0x4501d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CMFCToolBarButton * __thiscall CMFCToolBar::AccGetButtonByChildId(long)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarButton * __thiscall CMFCToolBar::AccGetButtonByChildId(CMFCToolBar *this,long param_1)

{
  CMFCToolBarButton *pCVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = *(int *)(this + 0xc40);
  iVar5 = 1;
  while( true ) {
    do {
      if (local_8 == 0) {
        return (CMFCToolBarButton *)0x0;
      }
      puVar3 = (undefined4 *)FUN_004ead48(&local_8);
      pCVar1 = (CMFCToolBarButton *)*puVar3;
      pcVar2 = *(code **)(*(int *)pCVar1 + 0xbc);
      guard_check_icall();
      iVar4 = (*pcVar2)();
    } while (iVar4 < 1);
    if (iVar5 == param_1) break;
    iVar5 = iVar5 + 1;
  }
  return pCVar1;
}

