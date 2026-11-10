// rea decompile_all
// name: FUN_1003c3f0
// address: 0x1003c3f0
// body: available
// range: 0x1003c3f0-0x1003c5bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c3f0(void)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  FARPROC pFVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  undefined4 extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  undefined4 extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  undefined4 extraout_ECX_01;
  undefined4 uVar5;
  undefined1 auStack_41c [4];
  int local_418;
  WCHAR local_410 [514];
  uint local_c;
  
  local_c = DAT_10206460 ^ (uint)auStack_41c;
  if (DAT_10212a08 == (HMODULE)0x0) {
    _memset(local_410,0,0x400);
    iVar2 = FUN_1003c370();
    if (DAT_1021ae54 != 0) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)&DAT_1021ae14,L"Get Dll Path%s Result:%d",local_410,iVar2);
      FUN_10034a50(&DAT_1021ae14);
      uVar5 = extraout_ECX;
      FUN_10034a50(&DAT_1021ae10);
      FUN_10033a90(uVar5);
    }
    if (iVar2 == 0) {
      DAT_10212a08 = LoadLibraryW(local_410);
      if (DAT_10212a08 == (HMODULE)0x0) {
        if (DAT_1021ae54 != 0) {
          DVar3 = GetLastError();
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_00,(wchar_t *)&DAT_1021ae14,L"LoadLibraryW Fail Result:%d",DVar3);
          FUN_10034a50(&DAT_1021ae14);
          uVar5 = extraout_ECX_00;
          FUN_10034a50(&DAT_1021ae10);
          FUN_10033a90(uVar5);
        }
      }
      else if (DAT_102127fc != 0) {
        FUN_1003c5c0();
      }
    }
    if (DAT_10212a08 == (HMODULE)0x0) goto LAB_1003c5a7;
  }
  if ((DAT_1021ae54 != 0) && (DAT_1021ae7c != 0)) {
    FUN_10033640();
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_01,(wchar_t *)&DAT_1021ae14,L"LoadLibrary Path: %ls",local_418);
    FUN_10034a50(&DAT_1021ae14);
    uVar5 = extraout_ECX_01;
    FUN_10034a50(&DAT_1021ae10);
    FUN_10033a90(uVar5);
    LOCK();
    piVar1 = (int *)(local_418 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_418 + -0x10) + 4))((undefined4 *)(local_418 + -0x10));
    }
  }
  pFVar4 = GetProcAddress(DAT_10212a08,"ctlInit");
  if (pFVar4 != (FARPROC)0x0) {
    (*pFVar4)();
    __security_check_cookie(local_c ^ (uint)auStack_41c);
    return;
  }
LAB_1003c5a7:
  __security_check_cookie(local_c ^ (uint)auStack_41c);
  return;
}

