// rea decompile_all
// name: GetCaptionText
// address: 0x45ced4
// body: available
// range: 0x45ced4-0x45cf56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall CPaneFrameWnd::GetCaptionText(void)
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CPaneFrameWnd::GetCaptionText(void)
   
   Library: Visual Studio 2015 Release */

int * GetCaptionText(int *param_1)

{
  undefined4 uVar1;
  CWnd *this;
  int iVar2;
  int in_ECX;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x45cee0;
  if (*(int *)(in_ECX + 0xd4) == 0) {
    FUN_00415a10(&PTR_005e8934);
  }
  else {
    uVar1 = FUN_004295fe();
    FUN_0040eb30(uVar1);
    local_8 = 0;
    this = CWnd::FromHandlePermanent(*(HWND__ **)(in_ECX + 0xd4));
    if (this != (CWnd *)0x0) {
      CWnd::GetWindowTextW
                (this,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14
                );
    }
    iVar2 = FUN_00415ee0(local_14[0] + -0x10);
    *param_1 = iVar2 + 0x10;
    FUN_0040efa0();
  }
  return param_1;
}

