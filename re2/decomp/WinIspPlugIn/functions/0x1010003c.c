// rea decompile_all
// name: CMFCRibbonBaseElement::GetKeyTipSize
// address: 0x1010003c
// body: available
// range: 0x1010003c-0x1010013b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x10100048;
  if (((*(int *)(this + 0xc4) == 0) && (*(int *)(this + 0x94) != 0)) &&
     (*(int *)(*(int *)(this + 100) + -0xc) < 2)) {
    iVar2 = FUN_10046b20(0x26,0);
    if ((-1 < iVar2) && (iVar2 < *(int *)(*(int *)(this + 0x60) + -0xc) + -1)) {
      local_18 = iVar2 + 1;
      sVar1 = FUN_10046cb0(local_18);
      if (sVar1 != 0x26) {
        uVar3 = FUN_10046a60(&local_20,local_18,1);
        local_8 = 0;
        FUN_100475f0(uVar3);
        local_8 = 0xffffffff;
        FUN_100476d0();
      }
    }
  }
  if (*(int *)(*(int *)(this + 100) + -0xc) == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    FUN_10047180(&DAT_101ed4c8);
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
    FUN_100476d0();
  }
  return param_1;
}

