// rea decompile_all
// name: GetErrorMessage
// address: 0x1003a947
// body: available
// range: 0x1003a947-0x1003a9e7 inclusive
// range: 0x1003a9ee-0x1003a9f7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CArchiveException::GetErrorMessage(char *,unsigned int,unsigned
   int *)const 
    public: virtual int __thiscall CArchiveException::GetErrorMessage(wchar_t *,unsigned
   int,unsigned int *)const 
   
   Library: Visual Studio 2008 Release */

undefined4 __thiscall GetErrorMessage(void *this,wchar_t *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  wchar_t *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  if (param_1 == (wchar_t *)0x0) {
    uVar2 = 0;
  }
  else {
    if (param_3 != (int *)0x0) {
      *param_3 = *(int *)((int)this + 8) + 0xf1b0;
    }
    local_8 = 0;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)local_18);
    local_8._0_1_ = 1;
    FUN_10003e50(&param_3,(int *)((int)this + 0xc));
    local_8 = CONCAT31(local_8._1_3_,2);
    if (param_3[-3] == 0) {
      FUN_10004080(&param_3,0xf006);
    }
    piVar1 = param_3;
    AfxFormatString1((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_18,
                     *(int *)((int)this + 8) + 0xf1b0);
    ATL::Checked::tcsncpy_s(param_1,param_2,local_18[0],0xffffffff);
    FUN_100024a0(piVar1 + -4);
    FUN_100024a0((undefined4 *)(local_18[0] + -8));
    uVar2 = 1;
  }
  return uVar2;
}

