// rea decompile_all
// name: CMFCRibbonCategory::ShowElements
// address: 0x1011010d
// body: available
// range: 0x1011010d-0x1011019a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonCategory::ShowElements(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonCategory::ShowElements(CMFCRibbonCategory *this,int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  CFrameWnd *pCVar3;
  int local_8;
  
  *(uint *)(*(int *)(this + 0x53c) + 0x330) = (uint)(param_1 == 0);
  local_8 = 0;
  if (0 < *(int *)(this + 0x564)) {
    do {
      puVar2 = (undefined4 *)FUN_100efaed(local_8);
      pcVar1 = *(code **)(*(int *)*puVar2 + 0x104);
      guard_check_icall(param_1);
      (*pcVar1)();
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(this + 0x564));
  }
  pCVar3 = CWnd::GetParentFrame(*(CWnd **)(this + 0x53c));
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x178);
  guard_check_icall(1);
  (*pcVar1)();
  return;
}

