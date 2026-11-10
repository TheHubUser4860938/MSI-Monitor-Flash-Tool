// rea decompile_all
// name: FUN_100083e0
// address: 0x100083e0
// body: available
// range: 0x100083e0-0x10008a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100084fd) */
/* WARNING: Removing unreachable block (ram,0x10008657) */

void FUN_100083e0(int param_1,uint param_2)

{
  char cVar1;
  wchar_t ****_Source;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int in_stack_00000018;
  uint in_stack_0000001c;
  wchar_t *local_34c;
  wchar_t *pwStack_348;
  undefined *puStack_344;
  undefined1 local_2e8 [20];
  uint local_2d4;
  undefined4 *local_2d0;
  wchar_t ***local_294 [4];
  size_t local_284;
  uint local_280;
  uint local_264;
  uint local_254;
  uint local_250;
  uint local_24c [4];
  undefined4 local_23c;
  uint local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_21c [520];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10194e18;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10019660();
  local_8._0_1_ = 1;
  FUN_10019660();
  local_250 = 0xf;
  local_254 = 0;
  local_264 = local_264 & 0xffffff00;
  local_238 = 0xf;
  local_23c = 0;
  local_24c[0] = local_24c[0] & 0xffffff00;
  puStack_344 = (undefined *)0x10008483;
  _memset(local_21c,0,0x208);
  local_228 = 0;
  local_220 = 0;
  local_234 = 0;
  local_22c = 0;
  local_2d0 = &local_34c;
  local_8._0_1_ = 6;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_34c._0_1_ = 0;
  FUN_10003c70();
  local_8._0_1_ = 7;
  FUN_10008b10();
  local_8._0_1_ = 9;
  FUN_100146d0();
  local_8._0_1_ = 6;
  if (0xf < local_2d4) {
    FUN_10003d70();
  }
  if ((int)local_228 == local_228._4_4_) {
    FUN_10003e70();
  }
  else {
    FUN_10008b10();
    local_8._0_1_ = 10;
    FUN_100197e0();
    local_8._0_1_ = 6;
    if (0xf < local_2d4) {
      FUN_10003d70();
    }
    if (in_stack_00000018 == 0) {
      FUN_10014a10();
    }
    else {
      GetModuleHandleW(L"WinOperateCScaler.dll");
      FUN_10018b20();
      local_8._0_1_ = 0xb;
      FUN_10019720();
      local_8._0_1_ = 6;
      FUN_100196a0();
      thunk_FUN_10019d70();
      local_2d0 = &local_34c;
      FUN_10001dc0();
      local_8._0_1_ = 0xc;
      FUN_10003b40(&param_2,0,0xffffffff);
      local_8 = CONCAT31(local_8._1_3_,6);
      local_2d0 = (undefined4 *)FUN_10014b00(local_2e8);
      if (&param_2 != local_2d0) {
        if (0xf < in_stack_0000001c) {
          FUN_10003d70();
        }
        in_stack_0000001c = 0xf;
        in_stack_00000018 = 0;
        param_2 = param_2 & 0xffffff00;
        FUN_100035d0();
      }
      local_8._0_1_ = 6;
      if (0xf < local_2d4) {
        FUN_10003d70();
      }
      FUN_1001baf0();
      local_8._0_1_ = 0xe;
      FUN_100198a0();
      local_8._0_1_ = 6;
      if (7 < local_2d4) {
        FUN_1000fd20();
      }
      _Source = local_294;
      if (7 < local_280) {
        _Source = (wchar_t ****)local_294[0];
      }
      puStack_344 = (undefined *)0x1000874d;
      _wcsncpy((wchar_t *)(in_ECX + 0x4307c),(wchar_t *)_Source,local_284);
    }
    FUN_100198c0();
    FUN_10019e50();
    puStack_344 = &DAT_101a63a8;
    pwStack_348 = L"strFwPrefix";
    local_34c = L"ISP_Fw";
    FUN_10013ca0();
    FUN_100198c0();
    cVar1 = FUN_10019e80();
    if (cVar1 == '\0') {
      pcVar2 = (char *)thunk_FUN_10019d70();
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      }
      FUN_10003c70();
      iVar4 = 0;
      iVar5 = (int)local_228;
      iVar6 = 0;
      if ((int)local_228 != local_228._4_4_) {
        do {
          if (local_254 < *(uint *)(iVar5 + 0x10)) {
            puStack_344 = (undefined *)0x10008830;
            puVar3 = (uint *)FUN_10011650();
            if (local_24c != puVar3) {
              if (0xf < local_238) {
                FUN_10003d70();
              }
              local_238 = 0xf;
              local_23c = 0;
              local_24c[0] = local_24c[0] & 0xffffff00;
              FUN_100035d0();
            }
            local_8._0_1_ = 6;
            if (0xf < local_2d4) {
              FUN_10003d70();
            }
            iVar4 = FUN_1000fc00();
            if (iVar4 == 0) {
              FUN_10010a60();
            }
          }
          iVar5 = iVar5 + 0x18;
        } while (iVar5 != local_228._4_4_);
        iVar4 = (int)local_234;
        iVar6 = local_234._4_4_;
      }
      if ((iVar6 - iVar4) - 0x18U < 0x18) {
        if (param_1 != iVar4) {
          puStack_344 = (undefined *)0x10008938;
          FUN_10003b40();
        }
      }
      else {
        puStack_344 = (undefined *)0x1000891b;
        FUN_10003e70();
      }
    }
    else {
      FUN_10003e70();
    }
  }
  FUN_10006df0();
  FUN_10006df0();
  if (0xf < local_238) {
    FUN_10003d70();
  }
  local_238 = 0xf;
  local_23c = 0;
  local_24c[0] = local_24c[0] & 0xffffff00;
  if (0xf < local_250) {
    FUN_10003d70();
  }
  local_250 = 0xf;
  local_254 = 0;
  local_264 = local_264 & 0xffffff00;
  FUN_100196a0();
  FUN_100196a0();
  if (0xf < in_stack_0000001c) {
    FUN_10003d70();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

