// rea decompile_all
// name: FUN_10043400
// address: 0x10043400
// body: available
// range: 0x10043400-0x100438f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10043400(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  FARPROC pFVar2;
  int iVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_03;
  uint uVar5;
  int iVar6;
  HMODULE hModule;
  undefined4 local_c8 [2];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_a4;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a14d2;
  local_10 = ExceptionList;
  local_18 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _memset(local_c8,0,0xb0);
  if (*(int *)(in_ECX + 4) != 0) {
    iVar6 = 0;
    iVar1 = (int)(param_3 + ((int)param_3 >> 0x1f & 0xfU)) >> 4;
    hModule = DAT_10212a08;
    if (0 < iVar1) {
      uVar5 = param_3 & 0x8000000f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
      }
      do {
        if ((uVar5 != 0) || (local_bc = 2, iVar6 != iVar1 + -1)) {
          local_bc = 4;
        }
        local_a4 = 0x10;
        local_b8 = param_1;
        local_c0 = 1;
        local_c8[0] = 0xb0;
        pCVar4 = in_ECX;
        if (((hModule != (HMODULE)0x0) &&
            (pFVar2 = GetProcAddress(hModule,"ctlAUXAccess"), pCVar4 = extraout_ECX,
            hModule = DAT_10212a08, pFVar2 != (FARPROC)0x0)) &&
           (iVar3 = (*pFVar2)(), pCVar4 = this, hModule = DAT_10212a08, iVar3 == 0)) {
          if (DAT_1021ae54 == 1) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (this,(wchar_t *)&DAT_1021ae14,
                       L"ctlAUXAccess for I2C Over AUx Read 0x%X Read returned Success code: 0x%X\n"
                      );
            FUN_10034a50();
            local_8 = 1;
            FUN_10034a50(&DAT_1021ae10);
            local_8 = 0xffffffff;
            FUN_10033a90();
            if ((DAT_1021ae54 == 1) && (uVar5 = 0, pCVar4 = extraout_ECX_00, local_a4 != 0)) {
              do {
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (pCVar4,(wchar_t *)&DAT_1021ae14,L"Read data[%d] = : 0x%X\n");
                FUN_10034a50();
                local_8 = 2;
                FUN_10034a50(&DAT_1021ae10);
                local_8 = 0xffffffff;
                FUN_10033a90();
                uVar5 = uVar5 + 1;
                pCVar4 = extraout_ECX_01;
              } while (uVar5 < local_a4);
            }
          }
          goto LAB_10043843;
        }
        if (DAT_1021ae54 == 1) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar4,(wchar_t *)&DAT_1021ae14,
                     L"ctlAUXAccess for I2C Over AUx Read 0x%X Read returned failure code: 0x%X\n");
          FUN_10034a50();
          local_8 = 0;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = 0xffffffff;
          FUN_10033a90();
          hModule = DAT_10212a08;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    param_3 = param_3 & 0x8000000f;
    if ((int)param_3 < 0) {
      param_3 = (param_3 - 1 | 0xfffffff0) + 1;
    }
    if (param_3 != 0) {
      _memset(local_c8,0,0xb0);
      local_c8[0] = 0xb0;
      local_c0 = 1;
      local_b8 = param_1;
      local_bc = 2;
      local_a4 = param_3;
      if (((hModule == (HMODULE)0x0) ||
          (pFVar2 = GetProcAddress(hModule,"ctlAUXAccess"), pFVar2 == (FARPROC)0x0)) ||
         (iVar1 = (*pFVar2)(), iVar1 != 0)) {
        if (DAT_1021ae54 == 1) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (in_ECX,(wchar_t *)&DAT_1021ae14,
                     L"m_hDisplayOutput 0x%X,ctlAUXAccess for I2C Over AUx Read 0x%X Read returned failure code: 0x%X\n"
                     ,*(undefined4 *)(in_ECX + 4));
          FUN_10034a50();
          local_8 = 3;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = 0xffffffff;
          FUN_10033a90();
        }
      }
      else {
        if (DAT_1021ae54 != 0) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_00,(wchar_t *)&DAT_1021ae14,
                     L"m_hDisplayOutput 0x%X,ctlAUXAccess for I2C Over AUx Read 0x%X Read returned Success code: 0x%X\n"
                     ,*(undefined4 *)(in_ECX + 4));
          FUN_10034a50();
          local_8 = 4;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = 0xffffffff;
          FUN_10033a90();
          if ((DAT_1021ae54 != 0) && (uVar5 = 0, pCVar4 = extraout_ECX_02, local_a4 != 0)) {
            do {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (pCVar4,(wchar_t *)&DAT_1021ae14,L"Read data[%d] = : 0x%X\n");
              FUN_10034a50();
              local_8 = 5;
              FUN_10034a50(&DAT_1021ae10);
              local_8 = 0xffffffff;
              FUN_10033a90();
              uVar5 = uVar5 + 1;
              pCVar4 = extraout_ECX_03;
            } while (uVar5 < local_a4);
          }
        }
LAB_10043843:
        FUN_10181570(iVar6 * 0x10 + param_2);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

