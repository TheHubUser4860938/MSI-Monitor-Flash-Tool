// rea decompile_all
// name: CMFCRibbonButtonsGroup::OnAfterChangeRect
// address: 0x1016753f
// body: available
// range: 0x1016753f-0x10167852 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonButtonsGroup::OnAfterChangeRect(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonButtonsGroup::OnAfterChangeRect(CMFCRibbonButtonsGroup *this,CDC *param_1)

{
  code *pcVar1;
  bool bVar2;
  CObject *pCVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  BOOL BVar9;
  int *piVar10;
  int *piVar11;
  CDC *pCVar12;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  local_2c = 1;
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonStatusBar_101f647c,
                              *(CObject **)(this + 0x84));
  pcVar1 = *(code **)(*(int *)this + 0x250);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if ((iVar4 == 0) ||
     (iVar4 = CMFCRibbonBar::IsQuickAccessToolbarOnTop(*(CMFCRibbonBar **)(this + 0x84)), iVar4 != 0
     )) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  pcVar1 = *(code **)(*(int *)this + 0x250);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  local_28 = (int *)(-(uint)(iVar4 != 0) & 2);
  local_10 = 2;
  if (local_18 == 0) {
    local_10 = (uint)(pCVar3 != (CObject *)0x0);
  }
  pcVar1 = *(code **)(*(int *)this + 0x250);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if ((iVar4 != 0) || (iVar4 = 0, (pCVar3 != (CObject *)0x0) != 0)) {
    iVar4 = 1;
  }
  local_1c = ((*(int *)(this + 0x80) - *(int *)(this + 0x78)) - iVar4) - local_10;
  local_14 = (int *)0xffffffff;
  iVar4 = *(int *)(this + 0x78);
  iVar8 = *(int *)(this + 0x7c);
  local_18 = *(int *)(this + 0x74) + (int)local_28;
  pcVar1 = *(code **)(*(int *)this + 0x250);
  guard_check_icall();
  iVar5 = (*pcVar1)();
  local_20 = iVar8;
  if ((iVar5 != 0) && (0 < *(int *)(this + 0x114))) {
    local_14 = (int *)(*(int *)(this + 0x114) + -1);
    puVar6 = (undefined4 *)FUN_100efaed(local_14);
    pcVar1 = *(code **)(*(int *)*puVar6 + 0xf4);
    guard_check_icall(&local_38,param_1);
    (*pcVar1)();
    local_20 = iVar8 - local_38;
  }
  local_24 = 0;
  local_8 = (int *)0x0;
  if (0 < *(int *)(this + 0x114)) {
    do {
      piVar7 = (int *)FUN_100efaed(local_8);
      piVar7 = (int *)*piVar7;
      local_28 = (int *)piVar7[0x21];
      piVar7[0x39] = 1;
      local_c = piVar7;
      if (local_28 != (int *)0x0) {
        pcVar1 = *(code **)(*local_28 + 0x344);
        guard_check_icall(this);
        iVar8 = (*pcVar1)();
        if (iVar8 == 0) {
          piVar7[0x39] = 0;
        }
      }
      BVar9 = IsRectEmpty((RECT *)(this + 0x74));
      if (BVar9 == 0) {
        local_28 = (int *)(*(int *)(this + 0x114) + -1);
        pcVar1 = *(code **)(*piVar7 + 0x164);
        guard_check_icall(*(undefined4 *)(this + 0x88));
        (*pcVar1)();
        piVar11 = &local_38;
        pcVar1 = *(code **)(*piVar7 + 0xf4);
        pCVar12 = param_1;
        guard_check_icall(piVar11,param_1);
        (*pcVar1)();
        piVar10 = local_c;
        if (local_8 == local_14) {
          local_34 = local_1c + -1;
          iVar8 = iVar4;
        }
        else {
          iVar8 = iVar4 + local_10;
          local_34 = local_1c;
        }
        local_30 = piVar7 + 0x1d;
        *local_30 = local_18;
        piVar7[0x1e] = iVar8;
        piVar7[0x1f] = local_38 + local_18;
        piVar7[0x20] = iVar8 + local_34;
        if (local_24 == 0) {
LAB_101677b0:
          bVar2 = false;
        }
        else {
          pcVar1 = *(code **)(*local_c + 0x118);
          guard_check_icall(piVar11,pCVar12);
          iVar8 = (*pcVar1)();
          if (iVar8 == 0) goto LAB_101677b0;
          bVar2 = true;
        }
        if (((local_20 < piVar10[0x1f]) || (bVar2)) && (local_8 != local_14)) {
          local_24 = 1;
          *local_30 = 0;
          local_30[1] = 0;
          local_30[2] = 0;
          local_30[3] = 0;
          piVar10 = local_c;
        }
        else {
          local_18 = local_18 + local_38;
        }
        pcVar1 = *(code **)(*piVar10 + 0x124);
        guard_check_icall(param_1);
        (*pcVar1)();
        if (local_2c == 0) {
          iVar8 = (local_8 != local_28) + 3;
        }
        else {
          iVar8 = (local_8 != local_28) + 1;
        }
        local_2c = 0;
        piVar10[0x26] = iVar8;
      }
      else {
        piVar7[0x1d] = 0;
        piVar7[0x1e] = 0;
        piVar7[0x1f] = 0;
        piVar7[0x20] = 0;
        pcVar1 = *(code **)(*local_c + 0x124);
        guard_check_icall(param_1);
        (*pcVar1)();
      }
      local_8 = (int *)((int)local_8 + 1);
    } while ((int)local_8 < *(int *)(this + 0x114));
  }
  return;
}

