// rea decompile_all
// name: FUN_00410270
// address: 0x410270
// body: available
// range: 0x410270-0x4108e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0041049e) */

void FUN_00410270(undefined4 param_1,undefined ***param_2)

{
  char cVar1;
  char ****ppppcVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  char ****ppppcVar5;
  undefined1 local_41c [120];
  undefined **local_3a4 [19];
  undefined1 local_358 [4];
  HMODULE local_354;
  code *local_350;
  undefined **local_31c;
  uint local_318;
  undefined4 local_308;
  uint local_304;
  undefined1 local_300;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined **local_2e8;
  uint local_2e4;
  undefined4 local_2d4;
  uint local_2d0;
  undefined1 local_2cc;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined **local_2b4;
  uint local_2b0;
  undefined4 local_2a0;
  uint local_29c;
  undefined1 local_298;
  undefined4 local_288;
  undefined4 local_284;
  undefined **local_280;
  uint local_27c [4];
  undefined4 local_26c;
  uint local_268;
  char ***local_264 [4];
  undefined4 local_254;
  uint local_250;
  undefined1 local_24c [520];
  wchar_t local_44 [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0059cdae;
  local_10 = ExceptionList;
  local_14 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  builtin_wcsncpy(local_44,L"UserDefinedInfo",0x10);
  local_304 = 7;
  local_308 = 0;
  local_318 = local_318 & 0xffff0000;
  local_31c = CCpRsString::vftable;
  local_2ec = 0xf;
  local_2f0 = 0;
  builtin_wcsncpy(local_44 + 0x10,L"Version",8);
  local_300 = 0;
  local_2d0 = 7;
  local_2d4 = 0;
  local_2e4 = local_2e4 & 0xffff0000;
  local_2e8 = CCpRsString::vftable;
  local_2b8 = 0xf;
  local_2bc = 0;
  local_2cc = 0;
  local_29c = 7;
  local_2a0 = 0;
  local_2b0 = local_2b0 & 0xffff0000;
  local_2b4 = CCpRsString::vftable;
  local_284 = 0xf;
  local_288 = 0;
  local_298 = 0;
  local_268 = 7;
  local_26c = 0;
  local_27c[0] = local_27c[0] & 0xffff0000;
  local_280 = CCpRsString::vftable;
  local_250 = 0xf;
  local_254 = 0;
  local_264[0] = (char ***)((uint)local_264[0] & 0xffffff00);
  local_8 = 3;
  uStack_7 = 0;
  _memset(local_24c,0,0x208);
  _memset(local_358,0,0x3c);
  FUN_0040e330();
  local_8 = 4;
  _memset(local_41c,0,0xc0);
  FUN_0040a820();
  local_8 = 5;
  if ((&local_280 != param_2) &&
     (local_27c != (uint *)(-(uint)(param_2 != (undefined ***)0x0) & (uint)(param_2 + 1)))) {
    FUN_004040c0();
  }
  local_8 = 6;
  FUN_00406f40();
  FUN_00403450();
  FUN_004033e0();
  ppppcVar2 = local_264;
  if (0xf < local_250) {
    ppppcVar2 = (char ****)local_264[0];
  }
  local_8 = 5;
                    /* WARNING: Ignoring partial resolution of indirect */
  if (*(char *)ppppcVar2 == '\0') {
    iVar4 = 0;
  }
  else {
    ppppcVar5 = ppppcVar2;
    do {
      cVar1 = *(char *)ppppcVar5;
      ppppcVar5 = (char ****)((int)ppppcVar5 + 1);
    } while (cVar1 != '\0');
    iVar4 = (int)ppppcVar5 - (int)((int)ppppcVar2 + 1);
  }
  FUN_004043e0(ppppcVar2,iVar4);
  iVar4 = FUN_00408750();
  if (iVar4 != 0) {
    local_8 = 7;
    FUN_00406f40();
    FUN_00403450();
    FUN_004033e0();
    ppppcVar2 = local_264;
    if (0xf < local_250) {
      ppppcVar2 = (char ****)local_264[0];
    }
    local_8 = 5;
    FID_conflict___rmdir((char *)ppppcVar2);
  }
  if (*(int *)(in_ECX + 0x188) != 0) {
    FUN_00402f80();
    cVar1 = FUN_0040e550();
    if (cVar1 == '\0') {
      FUN_00403fc0();
      FUN_00408420();
    }
    else {
      iVar4 = 0;
      if (local_350 != (code *)0x0) {
        iVar4 = (*local_350)();
      }
      if (local_354 != (HMODULE)0x0) {
        FreeLibrary(local_354);
        local_354 = (HMODULE)0x0;
      }
      local_350 = (code *)0x0;
      if (iVar4 == 0) {
        uVar3 = FUN_004030e0();
        FUN_00403580(uVar3);
        iVar4 = FUN_00408750();
        if (iVar4 == 0) {
          FUN_00402f20();
          FUN_00408420();
        }
        else {
          FUN_00408bc0();
          FUN_00402f20();
          uVar3 = FUN_004030e0();
          FUN_00403580(uVar3);
          iVar4 = FUN_004138f0(param_1,0);
          if (iVar4 == 0) {
            FUN_00402f20();
            FUN_00408420();
          }
          else {
            FUN_00402f80();
            FUN_00408520();
            cVar1 = FUN_00413ff0();
            if (cVar1 == '\0') {
              FUN_00402f20();
              FUN_00408420();
            }
            else {
              FUN_00402f80();
              FUN_00408420();
            }
          }
        }
      }
      else {
        FUN_00402f80();
        FUN_00408420();
      }
    }
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_3a4);
  _local_8 = CONCAT31(uStack_7,8);
  local_3a4[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_3a4);
  FUN_0040e4c0();
  local_280 = CCpRsString::vftable;
  FUN_004033e0();
  if (7 < local_268) {
    FUN_004053c0();
  }
  local_268 = 7;
  local_26c = 0;
  local_27c[0] = local_27c[0] & 0xffff0000;
  local_2b4 = CCpRsString::vftable;
  FUN_004033e0();
  if (7 < local_29c) {
    FUN_004053c0();
  }
  local_29c = 7;
  local_2a0 = 0;
  local_2b0 = local_2b0 & 0xffff0000;
  local_2e8 = CCpRsString::vftable;
  FUN_004033e0();
  if (7 < local_2d0) {
    FUN_004053c0();
  }
  local_2d0 = 7;
  local_2d4 = 0;
  local_2e4 = local_2e4 & 0xffff0000;
  local_31c = CCpRsString::vftable;
  FUN_004033e0();
  if (7 < local_304) {
    FUN_004053c0();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

