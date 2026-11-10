// rea decompile_all
// name: CMFCRibbonCategory::CopyFrom
// address: 0x100e1f32
// body: available
// range: 0x100e1f32-0x100e212c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonCategory::CopyFrom(class CMFCRibbonCategory &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonCategory::CopyFrom(CMFCRibbonCategory *this,CMFCRibbonCategory *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  int local_c;
  
  FUN_10018680(param_1 + 0x8c);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x564)) {
    do {
      piVar3 = (int *)FUN_1009f8c7(local_c);
      puVar1 = (undefined4 *)*piVar3;
      pcVar2 = *(code **)*puVar1;
      guard_check_icall();
      (*pcVar2)();
      piVar3 = (int *)FUN_1002505f();
      pcVar2 = *(code **)(*piVar3 + 0xb0);
      guard_check_icall(puVar1);
      (*pcVar2)();
      pcVar2 = *(code **)(piVar3[0xb8] + 0x168);
      guard_check_icall(puVar1 + 0xb8);
      (*pcVar2)();
      pcVar2 = *(code **)(piVar3[0xb8] + 0x170);
      guard_check_icall(puVar1 + 0xb8);
      (*pcVar2)();
      FUN_100d52cc(*(undefined4 *)(this + 0x564),piVar3);
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0x564));
  }
  *(undefined4 *)(this + 0x53c) = *(undefined4 *)(param_1 + 0x53c);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  pcVar2 = *(code **)(*(int *)(this + 0x90) + 0x168);
  guard_check_icall(param_1 + 0x90);
  (*pcVar2)();
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x540) = *(undefined4 *)(param_1 + 0x540);
  CMFCToolBarImages::CopyTo
            ((CMFCToolBarImages *)(param_1 + 0x578),(CMFCToolBarImages *)(this + 0x578));
  CMFCToolBarImages::CopyTo
            ((CMFCToolBarImages *)(param_1 + 0x690),(CMFCToolBarImages *)(this + 0x690));
  FUN_100d5586(0,0xffffffff);
  CArray<int,int>::Copy((CArray<int,int> *)(this + 0x548),(CArray<int,int> *)(param_1 + 0x548));
  pcVar2 = *(code **)(*(int *)(this + 0x1a8) + 0x168);
  guard_check_icall(param_1 + 0x1a8);
  (*pcVar2)();
  *(CMFCRibbonCategory **)(this + 0x230) = this;
  pcVar2 = *(code **)(*(int *)(this + 0x370) + 0x168);
  guard_check_icall(param_1 + 0x370);
  (*pcVar2)();
  *(CMFCRibbonCategory **)(this + 0x3f8) = this;
  *(undefined4 *)(this + 0x7bc) = *(undefined4 *)(param_1 + 0x7bc);
  *(undefined4 *)(this + 0x7c0) = *(undefined4 *)(param_1 + 0x7c0);
  return;
}

