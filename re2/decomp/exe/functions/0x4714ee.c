// rea decompile_all
// name: CMFCRibbonButton::GetIntermediateSize
// address: 0x4714ee
// body: available
// range: 0x4714ee-0x471661 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCRibbonButton::GetIntermediateSize(class CDC *)
   
   Library: Visual Studio 2015 Release */

CDC * __thiscall CMFCRibbonButton::GetIntermediateSize(CMFCRibbonButton *this,CDC *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_stack_00000008;
  int *piVar6;
  undefined4 uVar7;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(this + 0x1b8)) {
    do {
      puVar2 = (undefined4 *)FUN_004ab4cd(local_8);
      pcVar1 = *(code **)(*(int *)*puVar2 + 0x164);
      guard_check_icall(*(undefined4 *)(this + 0x88));
      (*pcVar1)();
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(this + 0x1b8));
  }
  if ((*(int *)(this + 0xc4) == 0) && (*(int *)(this + 0xc0) == 0)) {
    local_c = 3;
    puVar2 = &local_c;
    local_8 = 3;
    pcVar1 = *(code **)(*(int *)this + 0x27c);
    guard_check_icall(puVar2);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x138);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x240);
      guard_check_icall(puVar2);
      iVar3 = (*pcVar1)();
    }
    piVar6 = &local_14;
    uVar7 = 1;
    pcVar1 = *(code **)(*(int *)this + 0x114);
    guard_check_icall(piVar6,1);
    (*pcVar1)();
    if (local_10 < 0x10) {
      local_10 = 0x10;
    }
    local_8 = local_10;
    if (local_10 <= *(int *)(this + 0x110)) {
      local_8 = *(int *)(this + 0x110);
    }
    local_8 = local_8 + *(int *)(this + 0x120) * 2;
    pcVar1 = *(code **)(*(int *)this + 0x278);
    guard_check_icall(piVar6,uVar7);
    iVar4 = (*pcVar1)();
    iVar5 = GetGroupButtonExtraWidth(this);
    iVar3 = *(int *)(this + 0x11c) * 2 + 1 + *(int *)(this + 0x10c) + iVar4 + iVar5 + local_14 +
            iVar3;
    if (*(int *)(this + 0xec) != 0) {
      iVar3 = iVar3 + 6;
    }
    *(int *)param_1 = iVar3;
    *(int *)(param_1 + 4) = local_8;
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0xfc);
    guard_check_icall(param_1,in_stack_00000008);
    (*pcVar1)();
  }
  return param_1;
}

