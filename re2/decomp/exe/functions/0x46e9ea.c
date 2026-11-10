// rea decompile_all
// name: SetText
// address: 0x46e9ea
// body: available
// range: 0x46e9ea-0x46ea8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCRibbonBaseElement::SetText(char const *)
    public: virtual void __thiscall CMFCRibbonBaseElement::SetText(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void SetText(undefined **param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46e9f6;
  if (param_1 == (undefined **)0x0) {
    param_1 = &PTR_005e8934;
  }
  FUN_00415ad0(param_1);
  iVar1 = FUN_004148c0(10,0);
  if (-1 < iVar1) {
    uVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (in_ECX + 0x60),(int)local_14);
    local_8 = 0;
    FUN_00415f50(uVar2);
    local_8 = 0xffffffff;
    FUN_0040efa0();
    uVar2 = FUN_004147d0(local_18,iVar1);
    local_8 = 1;
    FUN_00415f50(uVar2);
    local_8 = 0xffffffff;
    FUN_0040efa0();
  }
  FUN_00414ce0();
  FUN_00414d90();
  return;
}

