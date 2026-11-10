// rea decompile_all
// name: FUN_100234a0
// address: 0x100234a0
// body: available
// range: 0x100234a0-0x10023750 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100234a0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  byte *in_EDX;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bStack_100;
  int aiStack_f8 [15];
  int aiStack_bc [9];
  int local_98;
  undefined **local_84 [20];
  undefined4 local_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = uRam1024e01c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c2279;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_34 = _DAT_1024e018;
  uStack_30 = uRam1024e01c;
  iStack_2c = iRam1024e020;
  iStack_28 = iRam1024e024;
  aiStack_f8[0] = iRam1024e024;
  local_24 = in_ECX;
  FUN_10009270();
  local_8 = 0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_20 = (undefined4 *)FUN_1000c2b0(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (iStack_2c == 0) {
    bStack_100 = (byte)uVar2;
    *in_EDX = bStack_100;
    iVar7 = aiStack_f8[0];
  }
  else {
    local_11 = '\0';
    FUN_10017780();
    if (local_11 == 'n') {
      iVar6 = FUN_10023140();
    }
    else {
      iVar6 = FUN_10023220();
    }
    in_ECX = local_24;
    iVar7 = local_18;
    if (iVar6 != 0) goto LAB_100236ae;
  }
  FUN_1000b550();
  FUN_1000c880(&DAT_1024a2cc,local_24);
  if (local_1c == 0) {
    iVar6 = 0xd3a;
  }
  else {
    uVar2 = FUN_100486d0();
    iVar3 = FUN_1000b3d0(uVar2,0x21,extraout_ECX);
    iVar6 = *(int *)(aiStack_f8[1] + 4);
    if (iVar3 == 0) {
      uVar1 = *(uint *)((int)aiStack_f8 + iVar6 + 0x10);
      uVar5 = uVar1 | 2;
      uVar1 = uVar1 | 6;
      iVar6 = *(int *)((int)aiStack_bc + iVar6);
    }
    else {
      uVar5 = 0;
      uVar1 = 4;
      iVar6 = *(int *)((int)aiStack_bc + iVar6);
    }
    if (iVar6 != 0) {
      uVar1 = uVar5;
    }
    FUN_100071e0(uVar1,0);
    if (local_98 == 0) {
      iVar6 = 0xd00;
    }
    else {
      FUN_10009c90(0,0,2);
      piVar4 = (int *)FUN_10009bb0();
      if ((uint)(piVar4[2] + *piVar4) < (uint)*in_EDX + iVar7) {
        iVar6 = 0xd52;
      }
      else {
        FUN_10009da0(iVar7,0,0,0,0);
        FUN_10009ec0(in_ECX,*in_EDX);
        FUN_100091d0();
        iVar6 = 0;
      }
    }
  }
LAB_100236ae:
  local_18 = *local_20;
  FUN_1000b550();
  FID_conflict__free(local_20);
  *(undefined ***)((int)aiStack_f8 + *(int *)(aiStack_f8[1] + 4) + 4) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_f8 + *(int *)(aiStack_f8[1] + 4)) = *(int *)(aiStack_f8[1] + 4) + -0x70;
  FUN_10009b00();
  *(undefined ***)((int)aiStack_f8 + *(int *)(aiStack_f8[1] + 4) + 4) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_f8 + *(int *)(aiStack_f8[1] + 4)) = *(int *)(aiStack_f8[1] + 4) + -0x18;
  local_8 = 2;
  local_84[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_84);
  ExceptionList = local_10;
  return iVar6;
}

