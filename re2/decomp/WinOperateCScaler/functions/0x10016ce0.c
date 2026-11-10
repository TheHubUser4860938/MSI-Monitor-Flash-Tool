// rea decompile_all
// name: FUN_10016ce0
// address: 0x10016ce0
// body: available
// range: 0x10016ce0-0x10016e04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016ce0(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  char *pcVar6;
  undefined **local_30 [5];
  int *local_1c;
  char local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195ba4;
  local_10 = ExceptionList;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if (*(int *)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX) != 0) {
    FUN_10013590(in_ECX);
    local_8 = 0;
    if (local_18 != '\0') {
      iVar4 = (**(code **)(**(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX) + 0x34))(uVar3);
      if (iVar4 == -1) {
        iVar4 = *(int *)(*in_ECX + 4);
        uVar3 = *(uint *)((int)in_ECX + iVar4 + 0xc);
        if (*(int *)((int)in_ECX + iVar4 + 0x38) != 0) {
          uVar3 = *(uint *)((int)in_ECX + iVar4 + 0xc);
        }
        uVar3 = uVar3 & 0x13 | 4;
        *(uint *)((int)in_ECX + iVar4 + 0xc) = uVar3;
        uVar3 = *(uint *)(iVar4 + 0x10 + (int)in_ECX) & uVar3;
        if (uVar3 != 0) {
          if ((uVar3 & 4) == 0) goto LAB_10016d9c;
          uVar5 = FUN_100057f0();
          pcVar6 = "ios_base::badbit set";
          do {
            while( true ) {
              FUN_10006bd0(1,uVar5,pcVar6);
              local_30[0] = std::ios_base::failure::vftable;
              uVar3 = __CxxThrowException_8(local_30,&DAT_101ed1a0);
LAB_10016d9c:
              if ((uVar3 & 2) == 0) break;
              uVar5 = FUN_100057f0();
              pcVar6 = "ios_base::failbit set";
            }
            uVar5 = FUN_100057f0();
            pcVar6 = "ios_base::eofbit set";
          } while( true );
        }
      }
    }
    local_8 = 1;
    cVar2 = thunk_FUN_1016b1c8();
    if (cVar2 == '\0') {
      FUN_1000f1e0();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar1 = *(int **)(*(int *)(*local_1c + 4) + 0x38 + (int)local_1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

