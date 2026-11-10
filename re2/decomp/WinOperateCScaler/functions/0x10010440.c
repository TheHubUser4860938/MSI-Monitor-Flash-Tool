// rea decompile_all
// name: FUN_10010440
// address: 0x10010440
// body: available
// range: 0x10010440-0x1001056c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010440(undefined4 param_1,char param_2)

{
  ios_base iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined ***pppuVar6;
  ios_base *in_ECX;
  uint extraout_ECX;
  char *pcVar7;
  undefined **local_40 [5];
  undefined **local_2c [5];
  undefined1 local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101954de;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1000ed50(DAT_10201fec ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  uVar2 = FUN_100103a0(local_18);
  local_8 = 0;
  piVar3 = (int *)FUN_10005f00(uVar2);
  local_8 = 1;
  if (local_14 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*local_14 + 8))();
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  local_8 = 0xffffffff;
  iVar1 = (ios_base)(**(code **)(*piVar3 + 0x20))(0x20);
  in_ECX[0x40] = iVar1;
  if (*(int *)(in_ECX + 0x38) == 0) {
    uVar5 = *(uint *)(in_ECX + 0xc) & 0x13 | 4;
    *(uint *)(in_ECX + 0xc) = uVar5;
    uVar5 = *(uint *)(in_ECX + 0x10) & uVar5;
    if (uVar5 != 0) {
      if ((uVar5 & 4) == 0) goto LAB_10010514;
      uVar2 = FUN_100057f0();
      pcVar7 = "ios_base::badbit set";
      do {
        FUN_10006bd0(1,uVar2,pcVar7);
        local_2c[0] = std::ios_base::failure::vftable;
        pppuVar6 = local_2c;
        while( true ) {
          __CxxThrowException_8(pppuVar6,&DAT_101ed1a0);
          uVar5 = extraout_ECX;
LAB_10010514:
          if ((uVar5 & 2) != 0) break;
          uVar2 = FUN_100057f0();
          FUN_10006bd0(1,uVar2,"ios_base::eofbit set");
          local_40[0] = std::ios_base::failure::vftable;
          pppuVar6 = local_40;
        }
        uVar2 = FUN_100057f0();
        pcVar7 = "ios_base::failbit set";
      } while( true );
    }
  }
  if (param_2 != '\0') {
    std::ios_base::_Addstd(in_ECX);
  }
  ExceptionList = local_10;
  return;
}

