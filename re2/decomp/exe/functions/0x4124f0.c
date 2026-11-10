// rea decompile_all
// name: FUN_004124f0
// address: 0x4124f0
// body: available
// range: 0x4124f0-0x4129a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004126bb) */

void FUN_004124f0(undefined4 param_1,int param_2,undefined ***param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *******pppppppcVar5;
  char *******pppppppcVar6;
  undefined4 local_1e0 [25];
  int local_17c;
  undefined **local_168 [18];
  undefined1 local_120;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined **local_c0;
  undefined4 local_bc;
  undefined4 local_ac;
  uint local_a8;
  undefined1 local_a4;
  undefined4 local_94;
  undefined4 local_90;
  undefined **local_8c;
  undefined4 local_88;
  undefined4 local_78;
  uint local_74;
  char ******local_70 [4];
  undefined4 local_60;
  uint local_5c;
  char local_58 [64];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059d109;
  local_10 = ExceptionList;
  local_18 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _memset(local_58,0,0x40);
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = 0;
  local_dc = 0xf;
  local_e0 = 0;
  local_f0 = 0;
  local_f4 = 0xf;
  local_f8 = 0;
  local_108 = 0;
  local_10c = 0xf;
  local_110 = 0;
  local_120 = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  _memset(local_1e0,0,0xc0);
  FUN_0040a820();
  local_a8 = 7;
  local_ac = 0;
  local_bc = (uint)local_bc._2_2_ << 0x10;
  local_c0 = CCpRsString::vftable;
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = 0;
  local_74 = 7;
  local_78 = 0;
  local_88 = (uint)local_88._2_2_ << 0x10;
  local_8c = CCpRsString::vftable;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = (char ******)((uint)local_70[0] & 0xffffff00);
  local_8._0_1_ = 6;
  if ((&local_8c != param_3) &&
     (&local_88 != (undefined4 *)(-(uint)(param_3 != (undefined ***)0x0) & (uint)(param_3 + 1)))) {
    FUN_004040c0();
  }
  local_8._0_1_ = 7;
  FUN_00406f40();
  FUN_00403450();
  FUN_004033e0();
  pppppppcVar6 = local_70;
  if (0xf < local_5c) {
    pppppppcVar6 = (char *******)local_70[0];
  }
  local_8._0_1_ = 6;
  if (*(char *)pppppppcVar6 == '\0') {
    iVar4 = 0;
  }
  else {
    pppppppcVar5 = pppppppcVar6;
    do {
      cVar1 = *(char *)pppppppcVar5;
      pppppppcVar5 = (char *******)((int)pppppppcVar5 + 1);
    } while (cVar1 != '\0');
    iVar4 = (int)pppppppcVar5 - (int)((int)pppppppcVar6 + 1);
  }
  FUN_004043e0(pppppppcVar6,iVar4);
  iVar4 = FUN_00408750();
  if (iVar4 != 0) {
    local_8._0_1_ = 8;
    FUN_00406f40();
    FUN_00403450();
    FUN_004033e0();
    local_8._0_1_ = 6;
    FUN_0040cc10();
    FUN_00402a10();
    if (local_17c == 0) {
      FUN_00402f80();
      FUN_00408420();
    }
    else {
      FUN_004144c0();
      piVar3 = (int *)FUN_004143e0();
      iVar4 = piVar3[2];
      iVar2 = *piVar3;
      FUN_004144c0();
      if ((uint)(iVar4 + iVar2) < param_2 + 0x40U) {
        FUN_00402f80();
        FUN_00408420();
      }
      else {
        FUN_004144c0();
        FUN_004145d0();
        iVar4 = FUN_0040cb50();
        if (iVar4 == 0) {
          FUN_00402a10();
        }
        iVar4 = 0;
        do {
          if (local_58[iVar4] == -1) break;
          FUN_00402f80();
          FUN_00406910();
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x40);
      }
    }
  }
  local_8c = CCpRsString::vftable;
  FUN_004033e0();
  if (7 < local_74) {
    FUN_004053c0();
  }
  local_74 = 7;
  local_78 = 0;
  local_88 = local_88 & 0xffff0000;
  local_c0 = CCpRsString::vftable;
  FUN_004033e0();
  if (7 < local_a8) {
    FUN_004053c0();
  }
  local_a8 = 7;
  local_ac = 0;
  local_bc = local_bc & 0xffff0000;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_168);
  local_8 = CONCAT31(local_8._1_3_,9);
  local_168[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_168);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

