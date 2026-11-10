// rea decompile_all
// name: FUN_1001f3d0
// address: 0x1001f3d0
// body: available
// range: 0x1001f3d0-0x1001f633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1001f3d0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined8 uVar5;
  int aiStack_e8 [24];
  int local_88;
  undefined **local_74 [20];
  undefined4 *local_24;
  int local_20;
  undefined1 local_1c;
  undefined2 local_1b;
  uint local_18;
  char local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1f39;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_1b = 0;
  local_18 = 0;
  local_11 = 0;
  FUN_10009270();
  local_8 = 0;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  local_24 = (undefined4 *)FUN_1000c2b0(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_12 = '\0';
  iVar2 = FUN_10017720();
  if ((iVar2 == 0) && (iVar2 = FUN_10017780(), iVar2 == 0)) {
    if (local_12 == 'j') {
      iVar2 = FUN_10017970();
      uVar1 = local_18;
    }
    else {
      uVar1 = 0;
      if (local_12 == 'n') {
        iVar2 = FUN_10017a90();
        uVar1 = local_18;
      }
    }
    FUN_10048350(&DAT_1024a13c,L"GetFwVerAddressByCmd Error:0x%X, ulAddress:0x%X, ucCount:%d",iVar2,
                 uVar1);
    FUN_10016860();
    if (iVar2 == 0) {
      FUN_1000b550();
      FUN_1000c880(&DAT_1024a2cc,local_18);
      if (local_20 == 0) {
        iVar2 = 0xd3a;
      }
      else {
        uVar5 = CONCAT44(extraout_ECX,0x20);
        uVar3 = FUN_100486d0(0x20);
        FUN_10009210(uVar3,uVar5);
        if (local_88 == 0) {
          iVar2 = 0xd00;
        }
        else {
          FUN_10009c90(0,0,2);
          piVar4 = (int *)FUN_10009bb0();
          if ((uint)(piVar4[2] + *piVar4) < uVar1) {
            iVar2 = 0xd52;
          }
          else {
            FUN_10009da0(uVar1,0,0,0,0);
            FUN_10009ec0(&local_1c,local_11);
            FUN_100091d0();
            iVar2 = 0;
            *(undefined1 *)(in_ECX + 2) = local_1c;
            *(undefined1 *)(in_ECX + 3) = (undefined1)local_1b;
          }
        }
      }
    }
  }
  local_18 = *local_24;
  FUN_1000b550();
  FID_conflict__free(local_24);
  *(undefined ***)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4) + 4) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4)) = *(int *)(aiStack_e8[1] + 4) + -0x70;
  FUN_10009b00();
  *(undefined ***)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4) + 4) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4)) = *(int *)(aiStack_e8[1] + 4) + -0x18;
  local_8 = 2;
  local_74[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_74);
  ExceptionList = local_10;
  return iVar2;
}

