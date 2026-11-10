// rea decompile_all
// name: CMFCRibbonButtonsGroup::GetRegularSize
// address: 0x5017a0
// body: available
// range: 0x5017a0-0x501876 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCRibbonButtonsGroup::GetRegularSize(class CDC *)
   
   Library: Visual Studio 2015 Release */

CDC * __thiscall CMFCRibbonButtonsGroup::GetRegularSize(CMFCRibbonButtonsGroup *this,CDC *param_1)

{
  int *piVar1;
  code *pcVar2;
  CObject *pCVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 in_stack_00000008;
  int local_1c;
  int local_18;
  uint local_14;
  CMFCRibbonButtonsGroup *local_10;
  CMFCRibbonButtonsGroup *local_c;
  int local_8;
  
  local_c = this;
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonStatusBar_005bd48c,
                              *(CObject **)(this + 0x84));
  local_14 = (uint)(pCVar3 != (CObject *)0x0);
  local_8 = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (0 < *(int *)(this + 0x114)) {
    local_10 = this + 0x10c;
    do {
      puVar4 = (undefined4 *)FUN_004ab4cd(local_8);
      piVar1 = (int *)*puVar4;
      pcVar2 = *(code **)(*piVar1 + 0x110);
      guard_check_icall(1);
      (*pcVar2)();
      pcVar2 = *(code **)(*piVar1 + 0x180);
      guard_check_icall(in_stack_00000008);
      (*pcVar2)();
      pcVar2 = *(code **)(*piVar1 + 0xf4);
      guard_check_icall(&local_1c,in_stack_00000008);
      (*pcVar2)();
      *(int *)param_1 = *(int *)param_1 + local_1c;
      iVar5 = *(int *)(param_1 + 4);
      if (*(int *)(param_1 + 4) <= local_18) {
        iVar5 = local_18;
      }
      *(int *)(param_1 + 4) = iVar5;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(local_c + 0x114));
  }
  if (local_14 != 0) {
    *(int *)param_1 = *(int *)param_1 + 2;
  }
  return param_1;
}

