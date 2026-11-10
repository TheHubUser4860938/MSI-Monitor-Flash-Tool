// rea decompile_all
// name: FUN_100111a0
// address: 0x100111a0
// body: available
// range: 0x100111a0-0x10011349 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100111a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined ***pppuVar7;
  int *in_ECX;
  char *pcVar8;
  uint local_44;
  undefined **local_40;
  uint local_3c;
  int local_38;
  undefined **local_2c [6];
  undefined1 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101955b6;
  local_10 = ExceptionList;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(*in_ECX + 4);
  uVar4 = *(uint *)(iVar1 + 0xc + (int)in_ECX) & 0xfffffffe;
  uVar5 = uVar4 | 4;
  if (*(int *)((int)in_ECX + iVar1 + 0x38) != 0) {
    uVar5 = uVar4;
  }
  *(uint *)((int)in_ECX + iVar1 + 0xc) = uVar5 & 0x17;
  uVar5 = *(uint *)((int)in_ECX + iVar1 + 0x10) & uVar5 & 0x17;
  if (uVar5 != 0) {
    if ((uVar5 & 4) == 0) {
      if ((uVar5 & 2) == 0) {
        uVar6 = FUN_100057f0(uVar3);
        pcVar8 = "ios_base::eofbit set";
      }
      else {
        uVar6 = FUN_100057f0(uVar3);
        pcVar8 = "ios_base::failbit set";
      }
    }
    else {
      uVar6 = FUN_100057f0(uVar3);
      pcVar8 = "ios_base::badbit set";
    }
    FUN_10006bd0(1,uVar6,pcVar8);
    local_40 = std::ios_base::failure::vftable;
    pppuVar7 = &local_40;
    goto LAB_100112b5;
  }
  piVar2 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = 0;
  local_14 = FUN_1000ee20(1);
  local_8 = 1;
  if ((*(byte *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) & 6) == 0) {
    (**(code **)(**(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX) + 0x28))
              (&local_44,param_1,param_2,param_3,1);
    if ((local_44 + local_3c == -1) &&
       ((int)local_40 + (uint)CARRY4(local_44,local_3c) + local_38 == -1)) {
      iVar1 = *(int *)(*in_ECX + 4);
      uVar5 = *(uint *)(iVar1 + 0xc + (int)in_ECX);
      uVar4 = uVar5 | 6;
      if (*(int *)((int)in_ECX + iVar1 + 0x38) != 0) {
        uVar4 = uVar5 | 2;
      }
      *(uint *)((int)in_ECX + iVar1 + 0xc) = uVar4 & 0x17;
      uVar5 = *(uint *)((int)in_ECX + iVar1 + 0x10) & uVar4 & 0x17;
      if (uVar5 != 0) {
        if ((uVar5 & 4) == 0) goto LAB_100112bb;
        uVar6 = FUN_100057f0(uVar3);
        pcVar8 = "ios_base::badbit set";
        do {
          while( true ) {
            FUN_10006bd0(1,uVar6,pcVar8);
            local_2c[0] = std::ios_base::failure::vftable;
            pppuVar7 = local_2c;
LAB_100112b5:
            uVar5 = __CxxThrowException_8(pppuVar7,&DAT_101ed1a0);
LAB_100112bb:
            if ((uVar5 & 2) == 0) break;
            uVar6 = FUN_100057f0(uVar3);
            pcVar8 = "ios_base::failbit set";
          }
          uVar6 = FUN_100057f0(uVar3);
          pcVar8 = "ios_base::eofbit set";
        } while( true );
      }
    }
  }
  local_8 = 2;
  piVar2 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = local_10;
  return;
}

