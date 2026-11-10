// rea decompile_all
// name: CMFCRibbonButton::GetRegularSize
// address: 0x10103392
// body: available
// range: 0x10103392-0x101036a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCRibbonButton::GetRegularSize(class CDC *)
   
   Library: Visual Studio 2015 Release */

CDC * __thiscall CMFCRibbonButton::GetRegularSize(CMFCRibbonButton *this,CDC *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 in_stack_00000008;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(this + 0x1b8)) {
    do {
      puVar1 = (undefined4 *)FUN_10151a1d(local_8);
      pcVar4 = *(code **)(*(int *)*puVar1 + 0x164);
      guard_check_icall(*(undefined4 *)(this + 0x88));
      (*pcVar4)();
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(this + 0x1b8));
  }
  if ((*(int *)(this + 0xc4) == 0) && (*(int *)(this + 0xc0) == 0)) {
    pcVar4 = *(code **)(*(int *)this + 0x104);
    guard_check_icall();
    iVar2 = (*pcVar4)();
    if (iVar2 != 0) {
      pcVar4 = *(code **)(*(int *)this + 0x114);
      guard_check_icall(&local_18,0);
      (*pcVar4)();
      pcVar4 = *(code **)(*(int *)this + 0x114);
      guard_check_icall(&local_20,1);
      (*pcVar4)();
      pcVar4 = *(code **)(*(int *)this + 0x250);
      guard_check_icall();
      iVar2 = (*pcVar4)();
      if (iVar2 == 0) {
        local_8 = GetGroupButtonExtraWidth(this);
        if (((local_18 == 0) && (local_14 == 0)) || (*(int *)(this + 0xb0) != 0)) {
          if ((*(int *)(this + 0xb0) != 0) && ((local_18 != 0 || (local_14 != 0)))) {
            local_20 = local_18 + 2;
            *(undefined4 *)(this + 0x120) = 5;
            local_1c = local_14 + 2;
          }
          iVar3 = *(int *)(this + 0x11c);
          iVar2 = local_20 + iVar3 * 2;
          if (0 < *(int *)(this + 0x10c)) {
            iVar2 = iVar2 + iVar3 + *(int *)(this + 0x10c);
            if ((local_18 == 0) && (local_14 == 0)) {
              iVar3 = *(int *)(this + 0x11c);
            }
            else {
              iVar3 = *(int *)(this + 0x11c);
              if (*(int *)(this + 0xb0) != 0) {
                iVar2 = iVar2 + iVar3;
              }
            }
          }
          if (((local_18 != 0) || (local_14 != 0)) && (*(int *)(this + 0xb0) != 0)) {
            iVar2 = iVar2 + iVar3;
          }
          local_c = *(int *)(this + 0x110);
          if (*(int *)(this + 0x110) < local_1c) {
            local_c = local_1c;
          }
          local_c = local_c + *(int *)(this + 0x120) * 2;
          if (local_1c == 0) {
            local_c = local_c + *(int *)(this + 0x120) * 2;
          }
          pcVar4 = *(code **)(*(int *)this + 0x138);
          guard_check_icall();
          iVar3 = (*pcVar4)();
          if (iVar3 != 0) {
            pcVar4 = *(code **)(*(int *)this + 0x240);
            guard_check_icall();
            iVar3 = (*pcVar4)();
            iVar2 = iVar2 + iVar3;
            if (((*(int *)(this + 0x168) != 0) && (*(int *)(this + 0xa4) != -1)) &&
               ((*(int *)(this + 0xa4) != 0 && (0 < *(int *)(this + 0x10c))))) {
              iVar2 = iVar2 + *(int *)(this + 0x14c);
            }
          }
          if ((*(int *)(this + 0xec) != 0) && (*(int *)(this + 0xc4) == 0)) {
            iVar2 = iVar2 + 6;
          }
          *(int *)param_1 = local_8 + iVar2;
          local_14 = local_c;
        }
        else {
          puVar1 = &local_10;
          local_10 = 5;
          local_c = 1;
          pcVar4 = *(code **)(*(int *)this + 0x27c);
          guard_check_icall(puVar1);
          (*pcVar4)();
          pcVar4 = *(code **)(*(int *)this + 0x24c);
          guard_check_icall();
          iVar2 = (*pcVar4)();
          if (iVar2 != 0) {
            local_18 = local_18 + 2 + *(int *)(this + 0x11c) * 2;
          }
          iVar2 = local_18 + *(int *)(this + 0x11c) * 2;
          if (iVar2 <= *(int *)(this + 0x114) + 5) {
            iVar2 = *(int *)(this + 0x114) + 5;
          }
          pcVar4 = *(code **)(*(int *)this + 0x24c);
          guard_check_icall(puVar1);
          iVar3 = (*pcVar4)();
          if (iVar3 != 0) {
            iVar2 = iVar2 + 2;
          }
          if (*(int *)(this + 0xec) != 0) {
            iVar2 = iVar2 + 6;
          }
          iVar3 = *(int *)(this + 0x118);
          if (*(int *)(this + 0x118) <= local_14 + 1) {
            iVar3 = local_14 + 1;
          }
          *(int *)param_1 = local_8 + iVar2;
          local_14 = local_14 + 1 + iVar3;
        }
      }
      else {
        *(int *)param_1 = local_18;
      }
      *(int *)(param_1 + 4) = local_14;
      return param_1;
    }
    pcVar4 = *(code **)(*(int *)this + 0x100);
  }
  else {
    pcVar4 = *(code **)(*(int *)this + 0xfc);
  }
  guard_check_icall(param_1,in_stack_00000008);
  (*pcVar4)();
  return param_1;
}

