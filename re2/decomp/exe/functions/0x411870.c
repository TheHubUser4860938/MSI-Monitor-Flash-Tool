// rea decompile_all
// name: FUN_00411870
// address: 0x411870
// body: available
// range: 0x411870-0x411995 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411904 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00411870(undefined4 *param_1)

{
  LPCWSTR pWVar1;
  uint uVar2;
  UINT UVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  LPCWSTR pWVar6;
  LPCWSTR local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059cc88;
  local_10 = ExceptionList;
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  SendMessageW(*(HWND *)(in_ECX + 0x1c8),0x14b,0,0);
  SendMessageW(*(HWND *)(in_ECX + 0x1c8),0x143,0,0x5e9618);
  UVar3 = GetPrivateProfileIntW(L"Communication",L"enumCommID",0,(LPCWSTR)*param_1);
  *(UINT *)(in_ECX + 0x19c) = UVar3;
  if (UVar3 != 1) {
    *(undefined4 *)(in_ECX + 0x19c) = 1;
    piVar4 = (int *)FUN_004295fe(uVar2);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ed80(0x80004005);
    }
    iVar5 = (**(code **)(*piVar4 + 0xc))();
    local_18 = (LPCWSTR)(iVar5 + 0x10);
    local_8 = 0;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&local_18,&DAT_005e9f80,*(undefined4 *)(in_ECX + 0x19c));
    pWVar1 = local_18;
    WritePrivateProfileStringW(L"Communication",L"enumCommID",local_18,(LPCWSTR)*param_1);
    local_8 = 0xffffffff;
    pWVar6 = pWVar1 + -8;
    LOCK();
    pWVar1 = pWVar1 + -2;
    iVar5 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar5 == 1 || iVar5 + -1 < 0) {
      (**(code **)(**(int **)pWVar6 + 4))(pWVar6);
    }
  }
  SendMessageW(*(HWND *)(in_ECX + 0x1c8),0x14e,0,0);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

