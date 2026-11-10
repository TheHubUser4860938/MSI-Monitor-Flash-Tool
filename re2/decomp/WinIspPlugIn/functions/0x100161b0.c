// rea decompile_all
// name: FUN_100161b0
// address: 0x100161b0
// body: available
// range: 0x100161b0-0x10016517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100161b0(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  void *_Dst;
  void *_Dst_00;
  void *_Memory;
  int in_ECX;
  int iVar6;
  short *psVar7;
  undefined4 extraout_ECX;
  undefined4 *puVar8;
  uint uVar9;
  size_t _Size;
  short *psVar10;
  int local_11c [14];
  int aiStack_e4 [9];
  int local_c0;
  undefined **local_ac [18];
  size_t local_64;
  undefined4 local_60 [5];
  uint local_4c;
  undefined **local_48;
  undefined4 local_44;
  uint local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1a01;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  FUN_10009270(in_ECX);
  local_30 = 7;
  local_34 = 0;
  local_44 = (undefined4 *)((uint)local_44._2_2_ << 0x10);
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  psVar10 = (short *)(in_ECX + 0x214);
  local_8 = 1;
  if (*psVar10 == 0) {
    iVar6 = 0;
  }
  else {
    psVar7 = psVar10;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    iVar6 = (int)psVar7 - (in_ECX + 0x216) >> 1;
  }
  FUN_10045540(psVar10,iVar6);
  uVar3 = FUN_100486d0(uVar2);
  iVar4 = FUN_1000b3d0(uVar3,1,extraout_ECX);
  iVar6 = *(int *)(local_11c[0] + 4);
  if (iVar4 == 0) {
    uVar2 = *(uint *)((int)local_11c + iVar6 + 0xc);
    uVar9 = uVar2 | 2;
    uVar2 = uVar2 | 6;
    iVar6 = *(int *)((int)aiStack_e4 + iVar6);
  }
  else {
    uVar9 = 0;
    uVar2 = 4;
    iVar6 = *(int *)((int)aiStack_e4 + iVar6);
  }
  if (iVar6 != 0) {
    uVar2 = uVar9;
  }
  FUN_100071e0(uVar2,0);
  if (local_c0 != 0) {
    FUN_10009c90(0,0,2);
    piVar5 = (int *)FUN_10009bb0(local_60);
    _Size = piVar5[2] + *piVar5;
    local_64 = _Size;
    FUN_10009c90(0,0,0);
    _Dst = (void *)FUN_100491e5(_Size);
    if (_Dst != (void *)0x0) {
      _memset(_Dst,0,_Size);
      FUN_10009ec0(_Dst,_Size,0);
      iVar6 = FUN_1000b310();
      if (iVar6 == 0) {
        uVar2 = *(uint *)((int)local_11c + *(int *)(local_11c[0] + 4) + 0xc);
        uVar9 = uVar2 | 6;
        if (*(int *)((int)aiStack_e4 + *(int *)(local_11c[0] + 4)) != 0) {
          uVar9 = uVar2 | 2;
        }
        FUN_100071e0(uVar9,0);
      }
      _Dst_00 = (void *)FUN_100491e5(0x200);
      _memset(_Dst_00,0xff,0x200);
      FUN_10009140(_Dst);
      local_8._0_1_ = 2;
      FUN_100482a0(local_60);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_4c) {
        FUN_1000b630(local_60[0],local_4c + 1);
      }
      _Memory = (void *)FUN_100491e5(-(uint)((int)((ulonglong)local_34 * 2 >> 0x20) != 0) |
                                     (uint)((ulonglong)local_34 * 2));
      if (_Memory == (void *)0x0) {
        FID_conflict__free(_Dst);
        _Memory = _Dst_00;
        if (_Dst_00 == (void *)0x0) goto LAB_10016477;
      }
      else {
        puVar8 = &local_44;
        if (7 < local_30) {
          puVar8 = local_44;
        }
        FUN_10197c50(_Memory,puVar8,local_34 * 2);
        uVar2 = FUN_10041160(_Dst_00);
        if ((((uVar2 != 0) && ((uVar2 & 0x7f) == 0)) &&
            (((*(byte *)(param_1 + 1) >> 6) + 1) * 0x80 == uVar2)) &&
           (uVar2 = FUN_10041090(), *(byte *)(param_1 + 5) == uVar2)) {
          FID_conflict__free(_Dst);
          if (_Dst_00 != (void *)0x0) {
            FID_conflict__free(_Dst_00);
          }
          FID_conflict__free(_Memory);
          goto LAB_10016477;
        }
        FID_conflict__free(_Dst);
        if (_Dst_00 != (void *)0x0) {
          FID_conflict__free(_Dst_00);
        }
      }
      FID_conflict__free(_Memory);
    }
  }
LAB_10016477:
  FUN_10048130();
  *(undefined ***)((int)local_11c + *(int *)(local_11c[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)local_11c + *(int *)(local_11c[0] + 4) + -4) = *(int *)(local_11c[0] + 4) + -0x70;
  FUN_10009b00();
  *(undefined ***)((int)local_11c + *(int *)(local_11c[0] + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)local_11c + *(int *)(local_11c[0] + 4) + -4) = *(int *)(local_11c[0] + 4) + -0x18;
  local_8 = 3;
  local_ac[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_ac);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

