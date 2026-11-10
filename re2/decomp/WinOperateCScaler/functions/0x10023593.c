// rea decompile_all
// name: CWinApp::Unregister
// address: 0x10023593
// body: available
// range: 0x10023593-0x10023711 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10023603 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::Unregister(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWinApp::Unregister(CWinApp *this)

{
  code *pcVar1;
  int *piVar2;
  wchar_t *pwVar3;
  LSTATUS LVar4;
  int iVar5;
  LONG local_238;
  int local_234;
  __POSITION *local_230;
  LPCWSTR local_22c;
  HKEY local_228;
  LPCWSTR local_224;
  WCHAR local_220 [268];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x228;
  local_8 = 0x100235a2;
  local_228 = (HKEY)0x0;
  local_238 = 0;
  local_230 = GetFirstDocTemplatePosition(this);
  while (local_230 != (__POSITION *)0x0) {
    piVar2 = (int *)FUN_1002350a(&local_230);
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 0xc);
      guard_check_icall(0,0xfffffffc,0,0);
      (*pcVar1)();
    }
  }
  if (*(int *)(this + 0x58) != 0) {
    if (*(int *)(this + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    FUN_100185a0(L"Software\\");
    local_8 = 0;
    ATL::CSimpleStringT<wchar_t,0>::Append
              ((CSimpleStringT<wchar_t,0> *)&local_224,*(wchar_t **)(this + 0x58));
    pwVar3 = (wchar_t *)
             ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                             *)&local_234,(wchar_t *)&local_224);
    local_8._0_1_ = 1;
    ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> *
                   )&local_22c,pwVar3);
    local_8 = CONCAT31(local_8._1_3_,3);
    ATL::CStringData::Release((CStringData *)(local_234 + -0x10));
    AfxDelRegTreeHelper((HKEY__ *)0x80000001,
                        (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &local_22c,(CAtlTransactionManager *)0x0);
    LVar4 = RegOpenKeyExW((HKEY)0x80000001,local_224,0,8,&local_228);
    if (LVar4 == 0) {
      LVar4 = RegEnumKeyW(local_228,0,local_220,0x104);
      if (LVar4 == 0x103) {
        AfxDelRegTreeHelper((HKEY__ *)0x80000001,
                            (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_224,(CAtlTransactionManager *)0x0);
      }
      RegCloseKey(local_228);
    }
    RegQueryValueW((HKEY)0x80000001,local_22c,local_220,&local_238);
    ATL::CStringData::Release((CStringData *)(local_22c + -8));
    ATL::CStringData::Release((CStringData *)(local_224 + -8));
  }
  iVar5 = FUN_10154478();
  return iVar5;
}

