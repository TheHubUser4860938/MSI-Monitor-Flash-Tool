// rea decompile_all
// name: FUN_1001f0e0
// address: 0x1001f0e0
// body: available
// range: 0x1001f0e0-0x1001f359 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1001f0e0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  short *in_ECX;
  undefined4 extraout_ECX;
  uint uVar5;
  undefined4 uVar6;
  int aiStack_e0 [15];
  int aiStack_a4 [9];
  int local_80;
  undefined **local_6c [19];
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  byte local_14;
  undefined2 local_13;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1ef9;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  local_13 = 0;
  FUN_10009270();
  local_8 = 0;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_1c = (undefined4 *)FUN_1000c2b0(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_1000b550();
  FUN_1000c880(&DAT_1024a2cc,local_20);
  if (local_18 == 0) {
    uVar6 = 0xd3a;
  }
  else {
    uVar6 = FUN_100486d0();
    iVar2 = FUN_1000b3d0(uVar6,0x21,extraout_ECX);
    iVar4 = *(int *)(aiStack_e0[1] + 4);
    if (iVar2 == 0) {
      uVar1 = *(uint *)((int)aiStack_e0 + iVar4 + 0x10);
      uVar5 = uVar1 | 2;
      uVar1 = uVar1 | 6;
      iVar4 = *(int *)((int)aiStack_a4 + iVar4);
    }
    else {
      uVar5 = 0;
      uVar1 = 4;
      iVar4 = *(int *)((int)aiStack_a4 + iVar4);
    }
    if (iVar4 != 0) {
      uVar1 = uVar5;
    }
    FUN_100071e0(uVar1,0);
    if (local_80 == 0) {
      uVar6 = 0xd00;
    }
    else {
      FUN_10009c90(0,0,2);
      piVar3 = (int *)FUN_10009bb0();
      if ((uint)(piVar3[2] + *piVar3) < 0x7006) {
        uVar6 = 0xd52;
      }
      else {
        FUN_10009da0(0x7004,0,0,0,0);
        FUN_10009ec0(&local_14,3);
        iVar4 = FUN_1000b310();
        if (iVar4 == 0) {
          uVar1 = *(uint *)((int)aiStack_e0 + *(int *)(aiStack_e0[1] + 4) + 0x10);
          uVar5 = uVar1 | 6;
          if (*(int *)((int)aiStack_a4 + *(int *)(aiStack_e0[1] + 4)) != 0) {
            uVar5 = uVar1 | 2;
          }
          FUN_100071e0(uVar5,0);
        }
        *(byte *)(in_ECX + 1) = (byte)local_13 & 0x3f;
        uVar6 = 0;
        *in_ECX = (ushort)((byte)local_13 >> 6) + (ushort)local_14 * 4;
        *(undefined1 *)((int)in_ECX + 3) = local_13._1_1_;
      }
    }
  }
  local_20 = *local_1c;
  FUN_1000b550();
  FID_conflict__free(local_1c);
  *(undefined ***)((int)aiStack_e0 + *(int *)(aiStack_e0[1] + 4) + 4) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_e0 + *(int *)(aiStack_e0[1] + 4)) = *(int *)(aiStack_e0[1] + 4) + -0x70;
  FUN_10009b00();
  *(undefined ***)((int)aiStack_e0 + *(int *)(aiStack_e0[1] + 4) + 4) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_e0 + *(int *)(aiStack_e0[1] + 4)) = *(int *)(aiStack_e0[1] + 4) + -0x18;
  local_8 = 2;
  local_6c[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_6c);
  ExceptionList = local_10;
  return uVar6;
}

