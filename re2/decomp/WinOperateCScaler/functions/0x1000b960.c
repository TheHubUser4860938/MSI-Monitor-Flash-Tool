// rea decompile_all
// name: FUN_1000b960
// address: 0x1000b960
// body: available
// range: 0x1000b960-0x1000bb3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b960(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined3 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  char *pcVar8;
  undefined1 local_c8 [64];
  undefined4 local_88 [5];
  uint local_74;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar2 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_101951b1;
  local_10 = ExceptionList;
  uVar4 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_68 = 0;
  local_64 = 0;
  local_14 = uVar4;
  FUN_100195f0(&DAT_101a63a8);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8._1_3_ = 0;
  uVar3 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 == '\0') {
      iVar7 = 0;
    }
    else {
      pcVar8 = pcVar2;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      iVar7 = (int)pcVar8 - (int)(pcVar2 + 1);
    }
    FUN_10003c70(pcVar2,iVar7);
    piVar5 = (int *)FUN_10010060(local_6c,&param_1);
    if (*piVar5 == *(int *)(in_ECX + 0x18)) {
      uVar6 = FUN_1001baf0(local_88,local_2c);
      local_8._0_1_ = 2;
      FUN_100198a0(uVar6);
      local_8._0_1_ = 1;
      if (7 < local_74) {
        FUN_1000fd20(local_88[0],local_74 + 1);
      }
      local_64 = 0;
      uVar6 = FUN_10005d10(local_c8,&param_1,&local_68);
      local_8._0_1_ = 3;
      iVar7 = FUN_10005680(uVar6);
      FUN_10005a10(local_70,0,iVar7 + 0x10,iVar7);
      FUN_100196a0();
      uVar3 = local_8._1_3_;
    }
    else if (*(int *)(*piVar5 + 0x30) == 0) {
      uVar6 = FUN_1001baf0(local_88,local_2c);
      local_8._0_1_ = 4;
      FUN_100198a0(uVar6);
      FUN_10006d90();
      uVar3 = local_8._1_3_;
    }
    else {
      FUN_10003e70("Parameter has been detected two or more times! --fw%d \n",param_1,uVar4);
      uVar3 = local_8._1_3_;
    }
  }
  local_8._1_3_ = uVar3;
  if (0xf < local_18) {
    FUN_10003d70(local_2c[0],local_18 + 1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_100196a0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

