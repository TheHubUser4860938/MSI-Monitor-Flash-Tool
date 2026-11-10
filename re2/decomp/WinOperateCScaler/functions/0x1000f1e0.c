// rea decompile_all
// name: FUN_1000f1e0
// address: 0x1000f1e0
// body: available
// range: 0x1000f1e0-0x1000f2f0 inclusive
// range: 0x1000f2f7-0x1000f308 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000f2ec to 0x1016b754 __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f1e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  uint uVar3;
  uint uStack_60;
  undefined **local_50 [5];
  undefined **local_3c [5];
  undefined **local_28 [5];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10195450;
  local_10 = ExceptionList;
  uStack_60 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_60;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(*in_ECX + 4);
  if ((*(int *)(iVar1 + 0xc + (int)in_ECX) == 0) &&
     ((*(byte *)(iVar1 + 0x14 + (int)in_ECX) & 2) != 0)) {
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x38 + (int)in_ECX) + 0x34))();
    if (iVar1 == -1) {
      iVar1 = *(int *)(*in_ECX + 4);
      uVar3 = *(uint *)((int)in_ECX + iVar1 + 0xc);
      if (*(int *)((int)in_ECX + iVar1 + 0x38) != 0) {
        uVar3 = *(uint *)((int)in_ECX + iVar1 + 0xc);
      }
      uVar3 = uVar3 & 0x13 | 4;
      *(uint *)((int)in_ECX + iVar1 + 0xc) = uVar3;
      uVar3 = *(uint *)(iVar1 + 0x10 + (int)in_ECX) & uVar3;
      if (uVar3 != 0) {
        if ((uVar3 & 4) != 0) {
          uVar2 = FUN_100057f0();
          FUN_10006bd0(1,uVar2,"ios_base::badbit set");
          local_28[0] = std::ios_base::failure::vftable;
          uVar3 = __CxxThrowException_8(local_28,&DAT_101ed1a0);
        }
        if ((uVar3 & 2) != 0) {
          uVar2 = FUN_100057f0();
          FUN_10006bd0(1,uVar2,"ios_base::failbit set");
          local_3c[0] = std::ios_base::failure::vftable;
          __CxxThrowException_8(local_3c,&DAT_101ed1a0);
        }
        uVar2 = FUN_100057f0();
        FUN_10006bd0(1,uVar2,"ios_base::eofbit set");
        local_50[0] = std::ios_base::failure::vftable;
        __CxxThrowException_8(local_50,&DAT_101ed1a0);
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

