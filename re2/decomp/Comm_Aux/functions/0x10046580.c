// rea decompile_all
// name: FUN_10046580
// address: 0x10046580
// body: available
// range: 0x10046580-0x10046b8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10046580(void)

{
  int iVar1;
  undefined4 *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_02;
  int iVar2;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_2dc;
  undefined4 local_2c4 [20];
  undefined4 local_274;
  undefined4 local_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  uint local_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  uint local_218;
  undefined4 local_214 [128];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a1769;
  local_10 = ExceptionList;
  local_14 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _memset(local_214,0,0x200);
  DAT_10212a0c = 0;
  _memset(&DAT_10212a10,0,0x8400);
  puVar4 = local_214;
  local_2dc = 0;
  pCVar3 = extraout_ECX;
  do {
    if (DAT_1021ae54 != 0) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (pCVar3,(wchar_t *)&DAT_1021ae14);
      FUN_10034a50();
      local_8 = 0;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = 0xffffffff;
      FUN_10033a90();
    }
    iVar1 = FUN_1000f570();
    pCVar3 = this;
    if (iVar1 == 0) {
      if (DAT_1021ae54 != 0) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this,(wchar_t *)&DAT_1021ae14);
        FUN_10034a50();
        local_8 = 1;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = 0xffffffff;
        FUN_10033a90();
      }
      iVar1 = FUN_100039a0(*puVar4);
      pCVar3 = this_00;
      if (iVar1 == 0) {
LAB_10046767:
        if (DAT_1021ae54 != 0) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (pCVar3,(wchar_t *)&DAT_1021ae14);
          FUN_10034a50();
          local_8 = 3;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = 0xffffffff;
          FUN_10033a90();
        }
      }
      else if (DAT_1021ae54 != 0) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_00,(wchar_t *)&DAT_1021ae14);
        FUN_10034a50();
        local_8 = 2;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = 0xffffffff;
        FUN_10033a90();
        pCVar3 = extraout_ECX_00;
        goto LAB_10046767;
      }
      iVar1 = FUN_10010470();
      if (iVar1 == 0) {
        if (DAT_1021ae54 != 0) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_01,(wchar_t *)&DAT_1021ae14);
          FUN_10034a50();
          local_8 = 5;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = 0xffffffff;
          FUN_10033a90();
        }
        iVar1 = FUN_1000fc50();
        if (iVar1 == 0) {
          if (DAT_1021ae54 != 0) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (this_02,(wchar_t *)&DAT_1021ae14);
            FUN_10034a50();
            local_8 = 7;
            goto LAB_1004692e;
          }
        }
        else {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_02,(wchar_t *)&DAT_1021ae14);
          FUN_10034a50();
          local_8 = 6;
LAB_1004692e:
          FUN_10034a50(&DAT_1021ae10);
          local_8 = 0xffffffff;
          FUN_10033a90();
        }
        _memset(&local_240,0,0x2c);
        local_240 = 0x1002c;
        iVar1 = FUN_100105d0(*puVar4,0,&local_240);
        pCVar3 = this_03;
        if (iVar1 == 0) {
          if (DAT_1021ae54 != 0) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (local_218 & 1),(wchar_t *)&DAT_1021ae14,
                       L"NvAPI_GetDisplayPortInfo Success :%d, %d\n");
            FUN_10034a50();
            local_8 = 9;
            goto LAB_10046a0d;
          }
        }
        else if (DAT_1021ae54 != 0) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_03,(wchar_t *)&DAT_1021ae14);
          FUN_10034a50();
          local_8 = 8;
LAB_10046a0d:
          FUN_10034a50(&DAT_1021ae10);
          local_8 = 0xffffffff;
          FUN_10033a90();
          pCVar3 = extraout_ECX_02;
        }
        if ((local_218 & 3) != 0) {
          local_2c4[1] = *puVar4;
          local_26c = local_240;
          uStack_268 = uStack_23c;
          uStack_264 = uStack_238;
          uStack_260 = uStack_234;
          in_ECX[1] = 0;
          *in_ECX = 0;
          in_ECX[2] = local_2c4[1];
          local_25c = local_230;
          uStack_258 = uStack_22c;
          uStack_254 = uStack_228;
          uStack_250 = uStack_224;
          local_2c4[0] = 0;
          local_274 = 0;
          local_24c = local_220;
          uStack_248 = uStack_21c;
          local_244 = local_218;
          if (DAT_1021ae54 != 0) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0,
                       (wchar_t *)&DAT_1021ae14,
                       L"Find display %d,  HGPU:0x%X m_unoutputID= %u m_hDisplay = 0x%X \n",
                       DAT_10212a0c,0);
            FUN_10034a50();
            local_8 = 10;
            FUN_10034a50(&DAT_1021ae10);
            local_8 = 0xffffffff;
            FUN_10033a90();
          }
          iVar2 = DAT_10212a0c;
          iVar1 = DAT_10212a0c * 0x21;
          _memset(&DAT_10212a10 + iVar1,0,0x84);
          DAT_10212a0c = iVar2 + 1;
          puVar5 = local_2c4;
          puVar6 = &DAT_10212a10 + iVar1;
          for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          pCVar3 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
        }
      }
      else {
        pCVar3 = this_01;
        if (DAT_1021ae54 != 0) {
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_01,(wchar_t *)&DAT_1021ae14);
          FUN_10034a50();
          local_8 = 4;
          FUN_10034a50(&DAT_1021ae10);
          local_8 = 0xffffffff;
          FUN_10033a90();
          pCVar3 = extraout_ECX_01;
        }
      }
    }
    local_2dc = local_2dc + 0x84;
    puVar4 = puVar4 + 1;
    if (0x41ff < local_2dc) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

