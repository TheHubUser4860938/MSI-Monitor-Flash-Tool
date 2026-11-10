// rea decompile_all
// name: FUN_10103c0a
// address: 0x10103c0a
// body: available
// range: 0x10103c0a-0x10103d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_10103c0a(undefined4 *param_1,int param_2)

{
  double dVar1;
  code *pcVar2;
  CMFCRibbonButtonsGroup *this;
  CMFCRibbonCategory *this_00;
  CObject *pCVar3;
  undefined4 *puVar4;
  AFX_GLOBAL_DATA *pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_101ed4dc,
                              *(CObject **)(in_ECX + 0x8c));
  if (pCVar3 == (CObject *)0x0) {
    if (*(int *)(in_ECX + 0x15c) == 0) {
      if (param_2 == 0) {
        iVar8 = *(int *)(in_ECX + 0x148);
      }
      else {
        iVar8 = *(int *)(in_ECX + 0x144);
      }
      if (-1 < iVar8) {
        this = *(CMFCRibbonButtonsGroup **)(in_ECX + 0x90);
        if ((this != (CMFCRibbonButtonsGroup *)0x0) && (0 < *(int *)(this + 0x124))) {
          CMFCRibbonButtonsGroup::GetImageSize(this);
          return param_1;
        }
        this_00 = *(CMFCRibbonCategory **)(in_ECX + 0x88);
        if (this_00 != (CMFCRibbonCategory *)0x0) {
          if (param_2 == 0) {
            iVar9 = *(int *)(this_00 + 0x694);
          }
          else {
            iVar9 = *(int *)(this_00 + 0x57c);
          }
          if (iVar8 < iVar9) {
            CMFCRibbonCategory::GetImageSize(this_00,(int)param_1);
            return param_1;
          }
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (param_2 == 0) {
        local_14 = 0x20;
        local_10 = 0x20;
        puVar4 = &local_14;
      }
      else {
        local_1c = 0x10;
        local_18 = 0x10;
        puVar4 = &local_1c;
      }
      uVar6 = *puVar4;
      uVar7 = puVar4[1];
      local_c = uVar6;
      local_8 = uVar7;
      pAVar5 = GetGlobalData();
      if (*(int *)(pAVar5 + 0x1e8) == 0) {
        dVar1 = 1.0;
      }
      else {
        dVar1 = *(double *)(pAVar5 + 0x1e0);
      }
      if (dVar1 != 1.0) {
        GetGlobalData();
        uVar6 = FUN_101804f0();
        GetGlobalData();
        uVar7 = FUN_101804f0();
      }
      *param_1 = uVar6;
      param_1[1] = uVar7;
    }
  }
  else {
    pcVar2 = *(code **)(*(int *)pCVar3 + 0x114);
    guard_check_icall(param_1,param_2);
    (*pcVar2)();
  }
  return param_1;
}

