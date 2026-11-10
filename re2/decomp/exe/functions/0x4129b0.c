// rea decompile_all
// name: FUN_004129b0
// address: 0x4129b0
// body: available
// range: 0x4129b0-0x4132b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00412e9d) */
/* WARNING: Removing unreachable block (ram,0x00412b87) */
/* WARNING: Removing unreachable block (ram,0x00412ed4) */

void FUN_004129b0(uint *param_1,uint param_2,undefined ***param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int in_ECX;
  char *******pppppppcVar6;
  uint uVar7;
  undefined4 local_208 [25];
  int local_1a4;
  undefined **local_190 [18];
  undefined1 local_148;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined4 local_108;
  undefined4 local_104;
  undefined **local_100;
  undefined4 local_fc;
  undefined4 local_ec;
  uint local_e8;
  undefined1 local_e4;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined **local_cc;
  undefined4 local_c8;
  undefined4 local_b8;
  uint local_b4;
  char ******local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059d1bc;
  local_10 = ExceptionList;
  local_18 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _memset(&local_98,0,0x80);
  local_134 = 0xf;
  local_138 = 0;
  local_148 = 0;
  local_11c = 0xf;
  local_120 = 0;
  local_130 = 0;
  local_104 = 0xf;
  local_108 = 0;
  local_118 = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  _memset(local_208,0,0xc0);
  FUN_0040a820();
  local_e8 = 7;
  local_ec = 0;
  local_fc = (uint)local_fc._2_2_ << 0x10;
  local_100 = CCpRsString::vftable;
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4 = 0;
  local_b4 = 7;
  local_b8 = 0;
  local_c8 = (uint)local_c8._2_2_ << 0x10;
  local_cc = CCpRsString::vftable;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = (char ******)((uint)local_b0[0] & 0xffffff00);
  local_8._0_1_ = 5;
  if ((&local_cc != param_3) &&
     (&local_c8 != (undefined4 *)(-(uint)(param_3 != (undefined ***)0x0) & (uint)(param_3 + 1)))) {
    FUN_004040c0();
  }
  local_8._0_1_ = 6;
  FUN_00406f40();
  FUN_00403450();
  FUN_004033e0();
  pppppppcVar6 = local_b0;
  if (0xf < local_9c) {
    pppppppcVar6 = (char *******)local_b0[0];
  }
  local_8._0_1_ = 5;
  cVar1 = *(char *)pppppppcVar6;
  while (cVar1 != '\0') {
    cVar1 = *(char *)pppppppcVar6;
    pppppppcVar6 = (char *******)((int)pppppppcVar6 + 1);
  }
  FUN_004043e0();
  iVar3 = FUN_00408750();
  if (iVar3 == 0) {
LAB_004131aa:
    local_cc = CCpRsString::vftable;
    FUN_004033e0();
    if (7 < local_b4) {
      FUN_004053c0();
    }
    local_b4 = 7;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffff0000;
    local_100 = CCpRsString::vftable;
    FUN_004033e0();
    if (7 < local_e8) {
      FUN_004053c0();
    }
    local_e8 = 7;
    local_ec = 0;
    local_fc = local_fc & 0xffff0000;
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_190);
    local_8 = CONCAT31(local_8._1_3_,0xd);
    local_190[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)local_190);
    FUN_004033e0();
    FUN_004033e0();
    FUN_004033e0();
  }
  else {
    local_8._0_1_ = 7;
    FUN_00406f40();
    FUN_00403450();
    FUN_004033e0();
    local_8._0_1_ = 5;
    FUN_0040cc10();
    FUN_00402a10();
    if (local_1a4 == 0) {
      FUN_00402f80();
      FUN_00408420();
      FUN_00402ed0();
      FUN_00402ed0();
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_190)
      ;
      local_8 = CONCAT31(local_8._1_3_,8);
      local_190[0] = std::ios_base::vftable;
      std::ios_base::_Ios_base_dtor((ios_base *)local_190);
      FUN_004033e0();
      FUN_004033e0();
      FUN_004033e0();
    }
    else {
      FUN_004144c0();
      piVar4 = (int *)FUN_004143e0();
      iVar3 = piVar4[2];
      iVar2 = *piVar4;
      FUN_004144c0();
      if ((uint)(iVar3 + iVar2) < param_2) {
        FUN_00402f80();
        FUN_00408420();
        FUN_00402ed0();
        FUN_00402ed0();
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_190);
        local_8 = CONCAT31(local_8._1_3_,9);
        local_190[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_190);
        FUN_004033e0();
        FUN_004033e0();
        FUN_004033e0();
      }
      else {
        FUN_004144c0();
        FUN_004145d0();
        iVar3 = FUN_0040cb50();
        if (iVar3 == 0) {
          FUN_00402a10();
        }
        uVar7 = 0;
        uVar5 = 0;
        do {
          if (*(char *)((int)&local_98 + uVar5) == -1) {
            if (0x7f < uVar5) {
              ___report_rangecheckfailure();
              goto LAB_004131aa;
            }
            *(undefined1 *)((int)&local_98 + uVar5) = 0;
            break;
          }
          uVar5 = uVar5 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar5 < 0x80);
        FUN_00402f80();
        FUN_004040c0(&local_fc,0,0xffffffff);
        FUN_00408380();
        FUN_00408520();
        if (uVar7 == *(byte *)(in_ECX + 0x178)) {
          if (uVar7 < 5) {
            uVar5 = 0;
            if (uVar7 != 0) {
              do {
                if (uVar5 == 0) {
                  *param_1 = local_98 & 0xff;
                }
                else if (uVar5 == 1) {
                  param_1[1] = local_98 >> 8 & 0xff;
                }
                else if (uVar5 == 2) {
                  param_1[2] = (uint)local_98._2_1_;
                }
                else if (uVar5 == 3) {
                  param_1[3] = CONCAT11(local_98._2_1_,local_98._3_1_) & 0xff;
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < uVar7);
            }
            local_cc = CCpRsString::vftable;
            FUN_004033e0();
            if (7 < local_b4) {
              FUN_004053c0();
            }
            local_b4 = 7;
            local_b8 = 0;
            local_c8 = local_c8 & 0xffff0000;
            local_100 = CCpRsString::vftable;
            FUN_004033e0();
            if (7 < local_e8) {
              FUN_004053c0();
            }
            local_e8 = 7;
            local_ec = 0;
            local_fc = local_fc & 0xffff0000;
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
            ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_190);
            local_8 = CONCAT31(local_8._1_3_,0xc);
            local_190[0] = std::ios_base::vftable;
            std::ios_base::_Ios_base_dtor((ios_base *)local_190);
            FUN_004033e0();
            FUN_004033e0();
            FUN_004033e0();
            goto LAB_00413298;
          }
          FUN_00403fc0();
          FUN_00408420();
          FUN_00402ed0();
          FUN_00402ed0();
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_190);
          local_8 = CONCAT31(local_8._1_3_,0xb);
        }
        else {
          FUN_00403fc0();
          FUN_00408420();
          local_cc = CCpRsString::vftable;
          FUN_004033e0();
          if (7 < local_b4) {
            FUN_004053c0();
          }
          local_b4 = 7;
          local_b8 = 0;
          local_c8 = local_c8 & 0xffff0000;
          local_100 = CCpRsString::vftable;
          FUN_004033e0();
          if (7 < local_e8) {
            FUN_004053c0();
          }
          local_e8 = 7;
          local_ec = 0;
          local_fc = local_fc & 0xffff0000;
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_190);
          local_8 = CONCAT31(local_8._1_3_,10);
        }
        local_190[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_190);
        FUN_004033e0();
        FUN_004033e0();
        FUN_004033e0();
      }
    }
  }
LAB_00413298:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

