// rea decompile_all
// name: AfxUnregisterWndClasses
// address: 0x10043ecf
// body: available
// range: 0x10043ecf-0x10043f6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall AfxUnregisterWndClasses(void)
   
   Library: Visual Studio 2008 Release */

void AfxUnregisterWndClasses(void)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  AFX_MODULE_STATE *pAVar1;
  undefined4 *puVar2;
  int local_1c [2];
  LPCWSTR local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10043edb;
  pAVar1 = AfxGetModuleState();
  AfxLockGlobals(1);
  this = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(pAVar1 + 0x34);
  local_1c[1] = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Tokenize
            (this,(wchar_t *)local_14,(int *)&DAT_1005af34);
  local_8 = 0;
  while (*(int *)(local_14[0] + -6) != 0) {
    pAVar1 = AfxGetModuleState();
    UnregisterClassW(local_14[0],*(HINSTANCE *)(pAVar1 + 8));
    puVar2 = (undefined4 *)
             ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Tokenize
                       (this,(wchar_t *)local_1c,(int *)&DAT_1005af34);
    local_8._0_1_ = 1;
    FID_conflict_operator_(local_14,puVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100024a0((undefined4 *)(local_1c[0] + -0x10));
  }
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)this);
  AfxUnlockGlobals(1);
  FUN_100024a0((undefined4 *)(local_14[0] + -8));
  return;
}

