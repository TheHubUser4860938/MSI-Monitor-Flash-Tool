// rea decompile_all
// name: AfxDelRegTreeHelper
// address: 0x1004f157
// body: available
// range: 0x1004f157-0x1004f2c5 inclusive
// range: 0x1004f2f9-0x1004f31e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    long __stdcall AfxDelRegTreeHelper(struct HKEY__ *,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class ATL::CAtlTransactionManager
   *)
   
   Library: Visual Studio 2015 Release */

long AfxDelRegTreeHelper(HKEY__ *param_1,
                        CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2,
                        CAtlTransactionManager *param_3)

{
  int iVar1;
  undefined4 uVar2;
  LSTATUS LVar3;
  long lVar4;
  LPCWSTR lpSubKey;
  HKEY local_234;
  HKEY__ *local_230;
  LPCWSTR local_22c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_228 [4];
  WCHAR local_224 [270];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x230;
  local_8 = 0x1004f166;
  local_230 = param_1;
  iVar1 = FUN_10047580(*(int *)param_2 + -0x10);
  lpSubKey = (LPCWSTR)(iVar1 + 0x10);
  local_8 = 0;
  local_22c = lpSubKey;
  if ((param_1 == (HKEY__ *)0x80000000) && (iVar1 = FUN_100504bd(), iVar1 == 1)) {
    uVar2 = ATL::operator+((wchar_t *)local_228,
                           (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                            *)L"Software\\Classes\\");
    local_8._0_1_ = 1;
    FUN_100475f0(uVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100476d0();
    param_1 = (HKEY)0x80000001;
    local_230 = (HKEY__ *)0x80000001;
    lpSubKey = local_22c;
  }
  if (param_3 == (CAtlTransactionManager *)0x0) {
    iVar1 = RegOpenKeyExW(param_1,lpSubKey,0,0x2001f,&local_234);
  }
  else {
    iVar1 = FID_conflict_RegOpenKeyExA(param_1,(LPCSTR)lpSubKey,0,0x2001f,&local_234);
  }
  if (iVar1 == 0) {
    while (LVar3 = RegEnumKeyW(local_234,0,local_224,0x104), LVar3 == 0) {
      local_8._0_1_ = 2;
      FUN_10047180(local_224);
      local_8._0_1_ = 3;
      LVar3 = AfxDelRegTreeHelper(local_234,local_228,param_3);
      FUN_100476d0();
      if (LVar3 != 0) {
        local_8 = (uint)local_8._1_3_ << 8;
        break;
      }
      local_8 = 0;
    }
    if ((LVar3 == 0x103) || (LVar3 == 0x3f2)) {
      if (param_3 == (CAtlTransactionManager *)0x0) {
        RegDeleteKeyW(local_230,lpSubKey);
      }
      else {
        FID_conflict_RegDeleteKeyA(local_230,(LPCSTR)lpSubKey);
      }
    }
    RegCloseKey(local_234);
  }
  FUN_100476d0();
  lVar4 = FUN_1018016e();
  return lVar4;
}

