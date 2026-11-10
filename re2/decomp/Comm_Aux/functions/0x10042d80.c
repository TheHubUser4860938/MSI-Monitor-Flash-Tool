// rea decompile_all
// name: FUN_10042d80
// address: 0x10042d80
// body: available
// range: 0x10042d80-0x10042f15 inclusive
// range: 0x10042f20-0x100433fa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042d80(undefined4 param_1,
                 CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2,
                 int param_3,uint param_4)

{
  FARPROC pFVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_05;
  uint uVar6;
  int iVar7;
  int local_d8;
  undefined4 local_c4;
  undefined1 local_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a1468;
  local_10 = ExceptionList;
  local_14 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _memset(local_c0,0,0xac);
  local_c4 = 0xb0;
  local_bc = 2;
  local_b4 = param_1;
  local_a0 = 2;
  local_b8 = 2;
  local_9c = (undefined1)((uint)param_2 >> 8);
  local_9b = SUB41(param_2,0);
  if (*(int *)(in_ECX + 4) == 0) goto LAB_100433dd;
  if (((DAT_10212a08 == (HMODULE)0x0) ||
      (pFVar1 = GetProcAddress(DAT_10212a08,"ctlAUXAccess"), pFVar1 == (FARPROC)0x0)) ||
     (iVar2 = (*pFVar1)(), iVar2 != 0)) {
    if (DAT_1021ae54 != 1) goto LAB_100433dd;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (param_2,(wchar_t *)&DAT_1021ae14,
               L"m_hDisplayOutput 0x%X, ctlAUXAccess for I2C Over Aux R-writen Address: 0x%X subaddress 0x%X returned failure code: 0x%X\n"
               ,*(undefined4 *)(in_ECX + 4),param_1);
    FUN_10034a50();
    local_8 = 0;
  }
  else {
    if (DAT_1021ae54 == 1) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)&DAT_1021ae14,
                 L"m_hDisplayOutput 0x%X, ctlAUXAccess for I2C Over Aux R-write Address: 0x%X subaddress 0x%X returned Success code: 0x%X\n"
                 ,*(undefined4 *)(in_ECX + 4),param_1);
      FUN_10034a50();
      local_8 = 1;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = 0xffffffff;
      FUN_10033a90();
    }
    iVar7 = 0;
    iVar2 = (int)(param_4 + ((int)param_4 >> 0x1f & 0xfU)) >> 4;
    if (0 < iVar2) {
      uVar3 = param_4 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      local_d8 = param_3;
      do {
        _memset(&local_c4,0,0xb0);
        if ((uVar3 == 0) && (iVar7 == iVar2 + -1)) {
          local_b8 = 2;
          pCVar5 = extraout_ECX;
        }
        else {
          _memset(&local_c4,0,0xb0);
          local_b8 = 4;
          pCVar5 = extraout_ECX_00;
        }
        local_a0 = 0x10;
        local_b4 = param_1;
        local_bc = 1;
        local_c4 = 0xb0;
        if (((DAT_10212a08 == (HMODULE)0x0) ||
            (pFVar1 = GetProcAddress(DAT_10212a08,"ctlAUXAccess"), pCVar5 = extraout_ECX_01,
            pFVar1 == (FARPROC)0x0)) || (iVar4 = (*pFVar1)(), pCVar5 = this_00, iVar4 != 0)) {
          if (DAT_1021ae54 != 1) goto LAB_100433dd;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar5,(wchar_t *)&DAT_1021ae14,
                     L"m_hDisplayOutput 0x%X,ctlAUXAccess for I2C Over AUx Read 0x%X Read returned failure code: 0x%X\n"
                     ,*(undefined4 *)(in_ECX + 4));
          FUN_10034a50();
          local_8 = 2;
          goto LAB_100433b9;
        }
        if (DAT_1021ae54 != 0) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_00,(wchar_t *)&DAT_1021ae14,
                     L"m_hDisplayOutput 0x%X,ctlAUXAccess for I2C Over AUx Read 0x%X Read returned Success code: 0x%X\n"
                     ,*(undefined4 *)(in_ECX + 4));
          FUN_10034a50();
          local_8 = 3;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = 0xffffffff;
          FUN_10033a90();
          if ((DAT_1021ae54 != 0) && (local_a0 != 0)) {
            uVar6 = 0;
            pCVar5 = extraout_ECX_02;
            do {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (pCVar5,(wchar_t *)&DAT_1021ae14,L"Read data[%d] = : 0x%X\n");
              FUN_10034a50();
              local_8 = 4;
              FUN_10034a50(&DAT_1021ae10);
              local_8 = 0xffffffff;
              FUN_10033a90();
              uVar6 = uVar6 + 1;
              pCVar5 = extraout_ECX_03;
            } while (uVar6 < local_a0);
          }
        }
        FUN_10181570(local_d8);
        iVar7 = iVar7 + 1;
        local_d8 = local_d8 + 0x10;
      } while (iVar7 < iVar2);
    }
    param_4 = param_4 & 0x8000000f;
    if ((int)param_4 < 0) {
      param_4 = (param_4 - 1 | 0xfffffff0) + 1;
    }
    if (param_4 == 0) goto LAB_100433dd;
    _memset(&local_c4,0,0xb0);
    local_c4 = 0xb0;
    local_bc = 1;
    local_b4 = param_1;
    local_b8 = 2;
    local_a0 = param_4;
    if (((DAT_10212a08 != (HMODULE)0x0) &&
        (pFVar1 = GetProcAddress(DAT_10212a08,"ctlAUXAccess"), pFVar1 != (FARPROC)0x0)) &&
       (iVar2 = (*pFVar1)(), iVar2 == 0)) {
      if (DAT_1021ae54 != 0) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_01,(wchar_t *)&DAT_1021ae14,
                   L"m_hDisplayOutput 0x%X,ctlAUXAccess for I2C Over AUx Read 0x%X Read returned Success code: 0x%X\n"
                   ,*(undefined4 *)(in_ECX + 4));
        FUN_10034a50();
        local_8 = 6;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = 0xffffffff;
        FUN_10033a90();
        if ((DAT_1021ae54 != 0) && (uVar3 = 0, pCVar5 = extraout_ECX_04, local_a0 != 0)) {
          do {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (pCVar5,(wchar_t *)&DAT_1021ae14,L"Read data[%d] = : 0x%X\n");
            FUN_10034a50();
            local_8 = 7;
            FUN_10034a50(&DAT_1021ae10);
            local_8 = 0xffffffff;
            FUN_10033a90();
            uVar3 = uVar3 + 1;
            pCVar5 = extraout_ECX_05;
          } while (uVar3 < local_a0);
        }
      }
      FUN_10181570(iVar7 * 0x10 + param_3);
      goto LAB_100433dd;
    }
    if (DAT_1021ae54 != 1) goto LAB_100433dd;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (in_ECX,(wchar_t *)&DAT_1021ae14,
               L"m_hDisplayOutput 0x%X,ctlAUXAccess for I2C Over AUx Read 0x%X Read returned failure code: 0x%X\n"
               ,*(undefined4 *)(in_ECX + 4));
    FUN_10034a50();
    local_8 = 5;
  }
LAB_100433b9:
  FUN_10034a50(&DAT_1021ae10);
  local_8 = 0xffffffff;
  FUN_10033a90();
LAB_100433dd:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

