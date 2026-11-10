// rea decompile_all
// name: SetEditText
// address: 0x1011b261
// body: available
// range: 0x1011b261-0x1011b37a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CMFCRibbonEdit::SetEditText(class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >)
    public: void __thiscall CMFCRibbonEdit::SetEditText(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >)
   
   Library: Visual Studio 2015 Release */

void SetEditText(int param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  CMFCRibbonBar *this;
  undefined4 *puVar4;
  CMFCRibbonBaseElement *in_ECX;
  int iVar5;
  undefined **local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  iVar5 = 0;
  local_8 = 0;
  iVar3 = FUN_1004a623();
  if (iVar3 != 0) {
    FUN_10034940();
    if ((*(int *)(in_ECX + 0x1f0) != 0) && (*(int *)(*(int *)(in_ECX + 0x1f0) + 0x20) != 0)) {
      FUN_10056072();
    }
    pcVar1 = *(code **)(*(int *)in_ECX + 0x1b8);
    guard_check_icall();
    (*pcVar1)();
  }
  if (*(int *)(in_ECX + 0xb4) == 0) {
    this = CMFCRibbonBaseElement::GetTopLevelRibbonBar(in_ECX);
    if (this != (CMFCRibbonBar *)0x0) {
      local_2c = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
      local_28 = 0;
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_8 = CONCAT31(local_8._1_3_,1);
      CMFCRibbonBar::GetElementsByID
                (this,*(uint *)(in_ECX + 0xa4),
                 (CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_2c);
      if (0 < local_24) {
        do {
          puVar4 = (undefined4 *)FUN_10151a1d();
          local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonEdit_101caee0,
                                        (CObject *)*puVar4);
          if ((local_14 != (CObject *)0x0) && (local_14 != (CObject *)in_ECX)) {
            *(undefined4 *)(local_14 + 0xb4) = 1;
            local_18 = &stack0xffffffc0;
            FUN_100349e0(param_1 + -0x10);
            pCVar2 = local_14;
            SetEditText();
            *(undefined4 *)(pCVar2 + 0xb4) = 0;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_24);
      }
      CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
      ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
                ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_2c);
    }
  }
  FUN_10034f00();
  return;
}

