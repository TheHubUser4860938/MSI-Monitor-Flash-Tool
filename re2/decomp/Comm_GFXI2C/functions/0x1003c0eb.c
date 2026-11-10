// rea decompile_all
// name: AFX_MODULE_STATE::AFX_MODULE_STATE
// address: 0x1003c0eb
// body: available
// range: 0x1003c0eb-0x1003c15e inclusive
// range: 0x1003c180-0x1003c225 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall AFX_MODULE_STATE::AFX_MODULE_STATE(int)
   
   Library: Visual Studio 2008 Release */

AFX_MODULE_STATE * __thiscall AFX_MODULE_STATE::AFX_MODULE_STATE(AFX_MODULE_STATE *this,int param_1)

{
  void *pvVar1;
  CComCtlWrapper *this_00;
  undefined4 uVar2;
  CCommDlgWrapper *this_01;
  CShellWrapper *this_02;
  
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)(this + 0x34));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x28) = 0x20;
  *(undefined4 *)(this + 0x20) = 0x14;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x14] = param_1._0_1_;
  FID_conflict_PrepareWrite
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)(this + 0x34),
             0x1000);
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x44) = 0x18;
  pvVar1 = FUN_10038ad8(0xc);
  *(void **)(this + 0x78) = pvVar1;
  this_00 = CNoTrackObject::operator_new(0x188);
  if (this_00 == (CComCtlWrapper *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CComCtlWrapper::CComCtlWrapper(this_00);
  }
  **(undefined4 **)(this + 0x78) = uVar2;
  this_01 = CNoTrackObject::operator_new(100);
  if (this_01 == (CCommDlgWrapper *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CCommDlgWrapper::CCommDlgWrapper(this_01);
  }
  *(undefined4 *)(*(int *)(this + 0x78) + 4) = uVar2;
  this_02 = CNoTrackObject::operator_new(0x14);
  if (this_02 == (CShellWrapper *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CShellWrapper::CShellWrapper(this_02);
  }
  *(undefined4 *)(*(int *)(this + 0x78) + 8) = uVar2;
  *(undefined4 *)(this + 0x7c) = 1;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  return this;
}

