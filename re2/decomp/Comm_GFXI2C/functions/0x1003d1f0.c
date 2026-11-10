// rea decompile_all
// name: AfxDelRegTreeHelper
// address: 0x1003d1f0
// body: available
// range: 0x1003d1f0-0x1003d304 inclusive
// range: 0x1003d326-0x1003d36d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    long __stdcall AfxDelRegTreeHelper(struct HKEY__ *,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2008 Release */

long AfxDelRegTreeHelper(HKEY__ *param_1,
                        CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2)

{
  int iVar1;
  CSimpleStringT<char,0> *pCVar2;
  LSTATUS LVar3;
  long lVar4;
  HKEY local_234;
  HKEY local_230;
  LPCWSTR local_22c;
  int local_228;
  WCHAR local_224 [270];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x228;
  local_8 = 0x1003d1ff;
  local_234 = param_1;
  FUN_10003e50(&local_22c,(int *)param_2);
  local_8 = 0;
  if (param_1 == (HKEY__ *)0x80000000) {
    iVar1 = FUN_1003bb45();
    if (iVar1 == 1) {
      pCVar2 = ATL__operator_((CSimpleStringT<char,0> *)&local_228,L"Software\\Classes\\",
                              (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                              &local_22c);
      local_8._0_1_ = 1;
      FID_conflict_operator_(&local_22c,(undefined4 *)pCVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_100024a0((undefined4 *)(local_228 + -0x10));
      local_234 = (HKEY)0x80000001;
    }
  }
  LVar3 = RegOpenKeyW(local_234,local_22c,&local_230);
  if (LVar3 == 0) {
    while( true ) {
      LVar3 = RegEnumKeyW(local_230,0,local_224,0x104);
      if (LVar3 != 0) break;
      local_8._0_1_ = 2;
      FUN_100040f0(&local_228,local_224);
      local_8._0_1_ = 3;
      LVar3 = AfxDelRegTreeHelper(local_230,
                                  (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                   *)&local_228);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_100024a0((undefined4 *)(local_228 + -0x10));
      if (LVar3 != 0) break;
      local_8 = 0;
    }
    if ((LVar3 == 0x103) || (LVar3 == 0x3f2)) {
      RegDeleteKeyW(local_234,local_22c);
    }
    RegCloseKey(local_230);
  }
  FUN_100024a0((undefined4 *)(local_22c + -8));
  lVar4 = FUN_100484d9();
  return lVar4;
}

