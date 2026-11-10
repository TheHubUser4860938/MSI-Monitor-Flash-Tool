// rea decompile_all
// name: CWinApp::GetProfileStringW
// address: 0x10017a43
// body: available
// range: 0x10017a43-0x10017bc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CWinApp::GetProfileStringW(wchar_t const *,wchar_t const
   *,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CWinApp::GetProfileStringW(CWinApp *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  uint uVar1;
  HKEY__ *hKey;
  undefined4 uVar2;
  LPBYTE lpData;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  WCHAR *in_stack_00000010;
  undefined4 uVar4;
  int local_2028;
  DWORD local_2020;
  DWORD local_201c;
  int local_2018;
  WCHAR local_2014 [4096];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1016de03;
  local_10 = ExceptionList;
  uVar1 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_14 = uVar1;
  if (*(int *)(this + 0x58) == 0) {
    if (in_stack_00000010 == (WCHAR *)0x0) {
      in_stack_00000010 = L"";
    }
    GetPrivateProfileStringW
              (param_2,param_3,in_stack_00000010,local_2014,0x1000,*(LPCWSTR *)(this + 0x6c));
    in_stack_00000010 = local_2014;
  }
  else {
    hKey = GetSectionKey(this,param_2,(CAtlTransactionManager *)0x0);
    if (hKey != (HKEY__ *)0x0) {
      uVar2 = FUN_10013071(uVar1);
      FUN_10003190(uVar2);
      local_8 = 0;
      local_2020 = 0;
      local_201c = 0;
      local_2028 = RegQueryValueExW(hKey,param_3,(LPDWORD)0x0,&local_2020,(LPBYTE)0x0,&local_201c);
      if (local_2028 == 0) {
        lpData = (LPBYTE)FUN_100035b0(local_201c >> 1);
        local_2028 = RegQueryValueExW(hKey,param_3,(LPDWORD)0x0,&local_2020,lpData,&local_201c);
        ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_2018,-1);
      }
      RegCloseKey(hKey);
      if (local_2028 == 0) {
        iVar3 = FUN_10003060(local_2018 + -0x10);
        *(int *)param_1 = iVar3 + 0x10;
      }
      else {
        FUN_100037c0(in_stack_00000010);
      }
      FUN_10003460();
      uVar2 = extraout_EDX;
      goto LAB_10017ba9;
    }
  }
  FUN_100037c0(in_stack_00000010);
  uVar2 = extraout_EDX_00;
LAB_10017ba9:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar2,uVar4);
  return;
}

