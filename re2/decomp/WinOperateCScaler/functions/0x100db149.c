// rea decompile_all
// name: CMFCRibbonPanel::CopyFrom
// address: 0x100db149
// body: available
// range: 0x100db149-0x100db2cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::CopyFrom(class CMFCRibbonPanel &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::CopyFrom(CMFCRibbonPanel *this,CMFCRibbonPanel *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  
  FUN_10018680(param_1 + 0xfc);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  iVar4 = 0;
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x4d0)) {
    do {
      puVar2 = (undefined4 *)FUN_1009f8c7(iVar4);
      FUN_100d52cc(*(undefined4 *)(this + 0x4d0),*puVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x4d0));
  }
  if (0 < *(int *)(param_1 + 0x4e4)) {
    do {
      puVar2 = (undefined4 *)FUN_1009f8c7(local_8);
      puVar2 = (undefined4 *)*puVar2;
      pcVar1 = *(code **)*puVar2;
      guard_check_icall();
      (*pcVar1)();
      piVar3 = (int *)FUN_1002505f();
      pcVar1 = *(code **)(*piVar3 + 0x168);
      guard_check_icall(puVar2);
      (*pcVar1)();
      pcVar1 = *(code **)(*piVar3 + 0x170);
      guard_check_icall(puVar2);
      (*pcVar1)();
      FUN_100d52cc(*(undefined4 *)(this + 0x4e4),piVar3);
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x4e4));
  }
  pcVar1 = *(code **)(*(int *)(this + 0x114) + 0x168);
  guard_check_icall(param_1 + 0x114);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)(this + 0x114) + 0x170);
  guard_check_icall(param_1 + 0x114);
  (*pcVar1)();
  return;
}

