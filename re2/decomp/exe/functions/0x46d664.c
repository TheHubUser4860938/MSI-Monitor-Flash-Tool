// rea decompile_all
// name: CMFCRibbonBaseElement::GetKeyTipSize
// address: 0x46d664
// body: available
// range: 0x46d664-0x46d763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCRibbonBaseElement::GetKeyTipSize(class CDC *)
   
   Library: Visual Studio 2015 Release */

CDC * __thiscall CMFCRibbonBaseElement::GetKeyTipSize(CMFCRibbonBaseElement *this,CDC *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  CDC *in_stack_00000008;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x46d670;
  if (((*(int *)(this + 0xc4) == 0) && (*(int *)(this + 0x94) != 0)) &&
     (*(int *)(*(int *)(this + 100) + -0xc) < 2)) {
    iVar2 = FUN_004148c0(0x26,0);
    if ((-1 < iVar2) && (iVar2 < *(int *)(*(int *)(this + 0x60) + -0xc) + -1)) {
      local_18 = iVar2 + 1;
      sVar1 = FUN_00414b20(local_18);
      if (sVar1 != 0x26) {
        uVar3 = FUN_00415920(&local_20,local_18,1);
        local_8 = 0;
        FUN_00415f50(uVar3);
        local_8 = 0xffffffff;
        FUN_0040efa0();
      }
    }
  }
  if (*(int *)(*(int *)(this + 100) + -0xc) == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    FUN_00415a10(&DAT_005b7298);
    CDC::GetTextExtent(in_stack_00000008,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_24);
    CDC::GetTextExtent(in_stack_00000008,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_1c);
    if (local_1c <= local_24) {
      local_1c = local_24;
    }
    iVar2 = local_18;
    if (local_18 <= local_20) {
      iVar2 = local_20;
    }
    *(int *)param_1 = local_1c + 10;
    *(int *)(param_1 + 4) = iVar2 + 2;
    FUN_0040efa0();
  }
  return param_1;
}

