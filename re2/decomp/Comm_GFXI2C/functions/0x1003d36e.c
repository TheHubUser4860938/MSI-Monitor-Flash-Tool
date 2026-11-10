// rea decompile_all
// name: CWinApp::Unregister
// address: 0x1003d36e
// body: available
// range: 0x1003d36e-0x1003d4e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d3d7 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::Unregister(void)
   
   Library: Visual Studio 2008 Release */

int __thiscall CWinApp::Unregister(CWinApp *this)

{
  CDocTemplate *pCVar1;
  CSimpleStringT<char,0> *pCVar2;
  LSTATUS LVar3;
  int iVar4;
  int local_238;
  LONG local_234;
  __POSITION *local_230;
  LPCWSTR local_22c;
  HKEY local_228;
  LPCWSTR local_224;
  WCHAR local_220 [268];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x228;
  local_8 = 0x1003d37d;
  local_228 = (HKEY)0x0;
  local_234 = 0;
  local_230 = GetFirstDocTemplatePosition(this);
  while (local_230 != (__POSITION *)0x0) {
    pCVar1 = GetNextDocTemplate(this,&local_230);
    if (pCVar1 != (CDocTemplate *)0x0) {
      (**(code **)(*(int *)pCVar1 + 0xc))(0,0xfffffffc,0,0);
    }
  }
  if (*(int *)(this + 0x54) != 0) {
    if (*(int *)(this + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10038e31();
    }
    FUN_100040f0(&local_224,L"Software\\");
    local_8 = 0;
    Append(&local_224,*(wchar_t **)(this + 0x54));
    pCVar2 = FUN_10003b10((CSimpleStringT<char,0> *)&local_238,(int *)&local_224,
                          (short *)&DAT_1005a2cc);
    local_8._0_1_ = 1;
    FUN_10003b10((CSimpleStringT<char,0> *)&local_22c,(int *)pCVar2,*(short **)(this + 0x68));
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_100024a0((undefined4 *)(local_238 + -0x10));
    AfxDelRegTreeHelper((HKEY__ *)0x80000001,
                        (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &local_22c);
    LVar3 = RegOpenKeyW((HKEY)0x80000001,local_224,&local_228);
    if (LVar3 == 0) {
      LVar3 = RegEnumKeyW(local_228,0,local_220,0x104);
      if (LVar3 == 0x103) {
        AfxDelRegTreeHelper((HKEY__ *)0x80000001,
                            (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_224);
      }
      RegCloseKey(local_228);
    }
    RegQueryValueW((HKEY)0x80000001,local_22c,local_220,&local_234);
    FUN_100024a0((undefined4 *)(local_22c + -8));
    FUN_100024a0((undefined4 *)(local_224 + -8));
  }
  iVar4 = FUN_100484ca();
  return iVar4;
}

