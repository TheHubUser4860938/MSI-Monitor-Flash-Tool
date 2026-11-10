// rea decompile_all
// name: FUN_100d7be7
// address: 0x100d7be7
// body: available
// range: 0x100d7be7-0x100d7e42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d7be7(int *param_1)

{
  double dVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  AFX_GLOBAL_DATA *pAVar5;
  CMFCRibbonButton *in_ECX;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0x1b8)) {
    do {
      puVar3 = (undefined4 *)FUN_1009f8c7(local_8);
      pcVar2 = *(code **)(*(int *)*puVar3 + 0x164);
      guard_check_icall(*(undefined4 *)(in_ECX + 0x88));
      (*pcVar2)();
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(in_ECX + 0x1b8));
  }
  iVar6 = 0;
  piVar7 = &local_14;
  uVar8 = 1;
  pcVar2 = *(code **)(*(int *)in_ECX + 0x114);
  guard_check_icall(piVar7,1);
  (*pcVar2)();
  pcVar2 = *(code **)(*(int *)in_ECX + 0x250);
  guard_check_icall();
  iVar4 = (*pcVar2)();
  if (iVar4 == 0) {
    pcVar2 = *(code **)(*(int *)in_ECX + 0x240);
    guard_check_icall(piVar7,uVar8);
    local_c = (*pcVar2)();
    local_8 = 0;
    if ((*(int *)(in_ECX + 0xc4) == 0) && (*(int *)(in_ECX + 0xc0) == 0)) {
      local_1c = 3;
      pcVar2 = *(code **)(*(int *)in_ECX + 0x27c);
      local_18 = 3;
      puVar3 = &local_1c;
      guard_check_icall(puVar3);
      (*pcVar2)();
      local_8 = CMFCRibbonButton::GetGroupButtonExtraWidth(in_ECX);
      if (*(int *)(in_ECX + 0xec) != 0) {
        local_8 = local_8 + 6;
      }
    }
    else {
      pAVar5 = GetGlobalData();
      if (*(int *)(pAVar5 + 0x1e8) == 0) {
        dVar1 = 1.0;
      }
      else {
        dVar1 = *(double *)(pAVar5 + 0x1e0);
      }
      if (dVar1 == 1.0) {
        local_2c = 3;
        local_28 = 3;
        puVar3 = &local_2c;
      }
      else {
        local_24 = 3;
        puVar3 = &local_24;
        local_20 = 2;
      }
      pcVar2 = *(code **)(*(int *)in_ECX + 0x27c);
      guard_check_icall(puVar3);
      (*pcVar2)();
      if ((local_14 == 0) && (local_10 == 0)) {
        local_14 = 0x10;
        local_10 = 0x10;
        pAVar5 = GetGlobalData();
        if (*(int *)(pAVar5 + 0x1e8) == 0) {
          dVar1 = 1.0;
        }
        else {
          dVar1 = *(double *)(pAVar5 + 0x1e0);
        }
        if (dVar1 != 1.0) {
          GetGlobalData();
          local_14 = FUN_101548f0();
          GetGlobalData();
          local_10 = FUN_101548f0();
        }
      }
    }
    pcVar2 = *(code **)(*(int *)in_ECX + 0x138);
    guard_check_icall(puVar3);
    iVar4 = (*pcVar2)();
    if (iVar4 != 0) {
      if (*(int *)(in_ECX + 0x168) == 0) {
        iVar6 = (local_c - *(int *)(in_ECX + 0x11c) / 2) + -1;
      }
      else {
        iVar6 = local_c + 1 + *(int *)(in_ECX + 0x11c) / 2;
      }
    }
    iVar4 = *(int *)(in_ECX + 0x120);
    *param_1 = iVar6 + *(int *)(in_ECX + 0x11c) * 2 + local_14 + local_8;
    local_10 = local_10 + iVar4 * 2;
  }
  else {
    *param_1 = local_14;
  }
  param_1[1] = local_10;
  return;
}

