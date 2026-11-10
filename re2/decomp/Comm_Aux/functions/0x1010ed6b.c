// rea decompile_all
// name: CMFCRibbonCategory::ReposPanels
// address: 0x1010ed6b
// body: available
// range: 0x1010ed6b-0x1010eee8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonCategory::ReposPanels(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonCategory::ReposPanels(CMFCRibbonCategory *this,CDC *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_18.left = *(LONG *)(this + 0x7c);
  local_18.top = *(LONG *)(this + 0x80);
  iVar1 = *(int *)(this + 0x84);
  local_18.bottom = *(LONG *)(this + 0x88);
  iVar7 = local_18.top + 3;
  iVar8 = local_18.bottom + -4;
  iVar2 = *(int *)(this + 0x544);
  iVar10 = (iVar1 + -4) - (local_18.left + 4);
  iVar9 = 0;
  local_20 = (local_18.left + 4) - *(int *)(this + 0x538);
  local_18.right = iVar1;
  if (0 < *(int *)(this + 0x564)) {
    iVar4 = local_18.left + 8;
    do {
      piVar5 = (int *)FUN_10151a1d(iVar9);
      piVar5 = (int *)*piVar5;
      if (iVar10 <= iVar2) {
        piVar5[0x19] = 1;
        piVar5[0x29] = piVar5[0x134] + -1;
      }
      piVar6 = (int *)FUN_10151a1d(piVar5[0x29]);
      local_18.right = *piVar6 + piVar5[0x2c] * 2 + local_20;
      local_18.left = local_20;
      pcVar3 = *(code **)(*piVar5 + 0xec);
      local_18.top = iVar7;
      local_18.bottom = iVar8;
      guard_check_icall(param_1,&local_18);
      (*pcVar3)();
      local_20 = piVar5[0x35] + 2;
      if ((local_18.right <= iVar4) || (iVar1 + -8 <= local_18.left)) {
        SetRectEmpty(&local_18);
        pcVar3 = *(code **)(*piVar5 + 0xec);
        guard_check_icall(param_1,&local_18);
        (*pcVar3)();
      }
      if (iVar10 <= iVar2) {
        piVar5[0x19] = 1;
      }
      pcVar3 = *(code **)(*piVar5 + 0x100);
      guard_check_icall(param_1);
      (*pcVar3)();
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(this + 0x564));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

