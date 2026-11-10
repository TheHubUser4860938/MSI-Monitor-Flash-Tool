// rea decompile_all
// name: FUN_10007b80
// address: 0x10007b80
// body: available
// range: 0x10007b80-0x10007f7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007b80(void)

{
  int *piVar1;
  uint uVar2;
  void *_Dst;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined2 *puVar7;
  uint uVar8;
  int aiStack_118 [15];
  int aiStack_dc [9];
  int local_b8;
  undefined **local_a4 [19];
  undefined4 local_58;
  int *local_54;
  int *local_50;
  int local_4c;
  undefined **local_48;
  undefined2 local_44 [8];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c0d01;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = 0;
  local_14 = uVar2;
  FUN_10045540(&PTR_1020e6b0,0);
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  FUN_10009270();
  local_8._0_1_ = 1;
  local_50 = (int *)0x0;
  local_4c = 0;
  local_50 = (int *)FUN_1000c2b0(uVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_1000b550();
  FUN_1000c880(&DAT_1024a2cc,local_54);
  iVar3 = local_4c;
  if ((local_4c != 0) && ((uint)(*(int *)(*local_50 + 0x10) + local_4c) < 0x200)) {
    if (DAT_10249d28 != (void *)0x0) {
      FID_conflict__free(DAT_10249d28);
      DAT_10249d28 = (void *)0x0;
    }
    _Dst = (void *)FUN_100491e5();
    DAT_10249d28 = _Dst;
    if (_Dst != (void *)0x0) {
      _memset(_Dst,0xff,iVar3 << 0x10);
      local_54 = (int *)*local_50;
      if (local_54 != local_50) {
        do {
          piVar1 = local_54;
          iVar3 = FUN_10009010();
          if (iVar3 != 0) {
            if ((local_b8 != 0) && (iVar3 = FUN_1000b310(), iVar3 == 0)) {
              uVar2 = *(uint *)((int)aiStack_118 + *(int *)(aiStack_118[1] + 4) + 0x10);
              uVar8 = uVar2 | 6;
              if (*(int *)((int)aiStack_dc + *(int *)(aiStack_118[1] + 4)) != 0) {
                uVar8 = uVar2 | 2;
              }
              FUN_100071e0(uVar8,0);
            }
            uVar4 = FUN_100486d0();
            iVar5 = FUN_1000b3d0(uVar4,0x21,extraout_ECX);
            iVar3 = *(int *)(aiStack_118[1] + 4);
            if (iVar5 == 0) {
              uVar2 = *(uint *)((int)aiStack_118 + iVar3 + 0x10);
              uVar8 = uVar2 | 2;
              uVar2 = uVar2 | 6;
              iVar3 = *(int *)((int)aiStack_dc + iVar3);
            }
            else {
              uVar8 = 0;
              uVar2 = 4;
              iVar3 = *(int *)((int)aiStack_dc + iVar3);
            }
            if (iVar3 != 0) {
              uVar2 = uVar8;
            }
            FUN_100071e0(uVar2,0);
            if (local_b8 == 0) goto LAB_10007eb0;
            if ((&local_48 != (undefined ***)(piVar1 + 7)) &&
               (puVar7 = (undefined2 *)(-(uint)(piVar1 != (int *)0xffffffe4) & (uint)(piVar1 + 8)),
               local_44 != puVar7)) {
              FUN_10046260(puVar7,0,0xffffffff);
            }
          }
          FUN_10009c90(0,0,2);
          piVar6 = (int *)FUN_10009bb0();
          uVar2 = piVar6[2] + *piVar6;
          if (uVar2 <= (uint)(piVar1[6] << 0x10)) goto LAB_10007eb0;
          if (uVar2 < (uint)((piVar1[6] + 1) * 0x10000)) {
            iVar3 = uVar2 + piVar1[6] * -0x10000;
          }
          else {
            iVar3 = 0x10000;
          }
          FUN_10009da0(piVar1[6] << 0x10,0,0,0,0);
          piVar1[5] = (int)_Dst;
          FUN_10009ec0(_Dst,iVar3);
          _Dst = (void *)((int)_Dst + 0x10000);
          FUN_1000a700();
        } while (local_54 != local_50);
      }
      iVar3 = FUN_1000b310();
      if (iVar3 == 0) {
        uVar2 = *(uint *)((int)aiStack_118 + *(int *)(aiStack_118[1] + 4) + 0x10);
        uVar8 = uVar2 | 6;
        if (*(int *)((int)aiStack_dc + *(int *)(aiStack_118[1] + 4)) != 0) {
          uVar8 = uVar2 | 2;
        }
        FUN_100071e0(uVar8,0);
      }
      FUN_1000b550();
      FUN_1000c880(&local_50,local_58);
    }
  }
LAB_10007eb0:
  local_54 = (int *)*local_50;
  FUN_1000b550();
  FID_conflict__free(local_50);
  *(undefined ***)((int)aiStack_118 + *(int *)(aiStack_118[1] + 4) + 4) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_118 + *(int *)(aiStack_118[1] + 4)) = *(int *)(aiStack_118[1] + 4) + -0x70;
  FUN_10009b00();
  *(undefined ***)((int)aiStack_118 + *(int *)(aiStack_118[1] + 4) + 4) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_118 + *(int *)(aiStack_118[1] + 4)) = *(int *)(aiStack_118[1] + 4) + -0x18;
  local_8 = CONCAT31(local_8._1_3_,3);
  local_a4[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_a4);
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

