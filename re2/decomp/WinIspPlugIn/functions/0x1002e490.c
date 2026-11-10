// rea decompile_all
// name: FUN_1002e490
// address: 0x1002e490
// body: available
// range: 0x1002e490-0x1002e6ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e490(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  size_t _Size;
  undefined4 uVar6;
  uint *puVar7;
  undefined1 local_fc [20];
  int aiStack_e8 [15];
  int aiStack_ac [9];
  int local_88;
  undefined **local_74 [18];
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c2b09;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar7 = local_2c;
  uVar6 = 0x1002e4cd;
  puVar2 = (undefined4 *)FUN_10048680(puVar7);
  local_8 = 0;
  if (0xf < (uint)puVar2[5]) {
    puVar2 = (undefined4 *)*puVar2;
  }
  FUN_1000d0a0(puVar2,1,uVar6,puVar7);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_18) {
    FUN_1000b630(local_2c[0],local_18 + 1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (local_88 != 0) {
    FUN_10009c90(0,0,2);
    piVar3 = (int *)FUN_10009bb0(local_fc);
    _Size = piVar3[2] + *piVar3;
    FUN_10009c90(0,0,0);
    if (_Size == 0) {
      iVar4 = FUN_1000b310();
      if (iVar4 == 0) {
        uVar1 = *(uint *)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4) + 0x10);
        uVar5 = uVar1 | 6;
        if (*(int *)((int)aiStack_ac + *(int *)(aiStack_e8[1] + 4)) != 0) {
          uVar5 = uVar1 | 2;
        }
        FUN_100071e0(uVar5,0);
      }
    }
    else {
      _Dst = (void *)FUN_100491e5(_Size);
      _memset(_Dst,0,_Size);
      FUN_10009ec0(_Dst,_Size,0);
      iVar4 = FUN_1000b310();
      if (iVar4 == 0) {
        uVar1 = *(uint *)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4) + 0x10);
        uVar5 = uVar1 | 6;
        if (*(int *)((int)aiStack_ac + *(int *)(aiStack_e8[1] + 4)) != 0) {
          uVar5 = uVar1 | 2;
        }
        FUN_100071e0(uVar5,0);
      }
      FUN_1002e7f0(_Dst,param_2);
      if (_Dst != (void *)0x0) {
        FID_conflict__free(_Dst);
      }
    }
  }
  *(undefined ***)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4) + 4) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4)) = *(int *)(aiStack_e8[1] + 4) + -0x70;
  FUN_10009b00();
  *(undefined ***)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4) + 4) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_e8 + *(int *)(aiStack_e8[1] + 4)) = *(int *)(aiStack_e8[1] + 4) + -0x18;
  local_8 = 3;
  local_74[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_74);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

