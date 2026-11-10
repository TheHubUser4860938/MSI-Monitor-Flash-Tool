// rea decompile_all
// name: FUN_10041ed0
// address: 0x10041ed0
// body: available
// range: 0x10041ed0-0x100422df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041ed0(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  FARPROC pFVar2;
  int in_ECX;
  uint uVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_1cc [2];
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  uint local_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_11c;
  undefined4 auStack_118 [65];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a13dc;
  local_10 = ExceptionList;
  local_14 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar7 = param_4 + 1;
  _memset((void *)((int)&local_11c + 1),0,0x100);
  local_11c._0_1_ = param_2;
  FUN_10181570((int)&local_11c + 1);
  iVar5 = 0;
  iVar1 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 0xfU)) >> 4;
  if (0 < iVar1) {
    uVar3 = uVar7 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    puVar6 = &local_11c;
    do {
      if ((uVar3 == 0) && (iVar5 == iVar1 + -1)) {
        _memset(local_1cc,0,0xb0);
        local_1c0 = 2;
      }
      else {
        _memset(local_1cc,0,0xb0);
        local_1c0 = 4;
      }
      local_1a4 = *puVar6;
      uStack_1a0 = puVar6[1];
      uStack_19c = puVar6[2];
      uStack_198 = puVar6[3];
      pCVar4 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x40000001;
      local_1a8 = 0x10;
      local_1bc = param_1;
      local_1c4 = 2;
      local_1cc[0] = 0xb0;
      if (DAT_10212a08 == (HMODULE)0x0) {
LAB_1004222d:
        if (DAT_1021ae54 != 1) goto LAB_10042203;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (pCVar4,(wchar_t *)&DAT_1021ae14,
                   L"m_hDisplayOutput 0x%X, ctlAUXAccess for I2C Over Aux write 0x%X ucSubAddress:0x%x returned failure code: 0x%X\n"
                   ,*(undefined4 *)(in_ECX + 4),param_1);
        FUN_10034a50();
        local_8 = 0;
        goto LAB_10042271;
      }
      pFVar2 = GetProcAddress(DAT_10212a08,"ctlAUXAccess");
      if (pFVar2 == (FARPROC)0x0) {
        pCVar4 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x40000001;
        goto LAB_1004222d;
      }
      pCVar4 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(*pFVar2)();
      if (pCVar4 != (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0)
      goto LAB_1004222d;
      if (DAT_1021ae54 == 1) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0,
                   (wchar_t *)&DAT_1021ae14,
                   L"m_hDisplayOutput 0x%X, ctlAUXAccess for I2C Over Aux write 0x%X ucSubAddress:0x%x returned Success code: 0x%X\n"
                   ,*(undefined4 *)(in_ECX + 4),param_1);
        FUN_10034a50();
        local_8 = 1;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = 0xffffffff;
        FUN_10033a90();
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar5 < iVar1);
  }
  uVar7 = uVar7 & 0x8000000f;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
  }
  if (uVar7 != 0) {
    _memset(local_1cc,0,0xb0);
    local_1cc[0] = 0xb0;
    local_1c4 = 2;
    local_1bc = param_1;
    local_1c0 = 2;
    local_1a8 = uVar7;
    FUN_10181570(&local_1a4);
    pCVar4 = extraout_ECX;
    if (((DAT_10212a08 == (HMODULE)0x0) ||
        (pFVar2 = GetProcAddress(DAT_10212a08,"ctlAUXAccess"), pCVar4 = extraout_ECX_00,
        pFVar2 == (FARPROC)0x0)) || (iVar1 = (*pFVar2)(), pCVar4 = this, iVar1 != 0)) {
      if (DAT_1021ae54 == 1) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (pCVar4,(wchar_t *)&DAT_1021ae14,
                   L"m_hDisplayOutput 0x%X, ctlAUXAccess for I2C Over Aux write 0x%X ucSubAddress:0x%x returned failure code: 0x%X\n"
                   ,*(undefined4 *)(in_ECX + 4),param_1);
        FUN_10034a50();
        local_8 = 2;
LAB_10042271:
        FUN_10034a50(&DAT_1021ae10);
        local_8 = 0xffffffff;
        FUN_10033a90();
      }
    }
    else if (DAT_1021ae54 == 1) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)&DAT_1021ae14,
                 L"m_hDisplayOutput 0x%X, ctlAUXAccess for I2C Over Aux write 0x%X ucSubAddress:0x%x returned Success code: 0x%X\n"
                 ,*(undefined4 *)(in_ECX + 4),param_1);
      FUN_10034a50();
      local_8 = 3;
      FUN_10034a50(&DAT_1021ae10);
      local_8 = 0xffffffff;
      FUN_10033a90();
    }
  }
LAB_10042203:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

