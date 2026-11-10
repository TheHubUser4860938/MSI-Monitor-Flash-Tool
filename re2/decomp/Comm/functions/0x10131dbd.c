// rea decompile_all
// name: CMFCRibbonUndoButton::OnShowPopupMenu
// address: 0x10131dbd
// body: available
// range: 0x10131dbd-0x10131f24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonUndoButton::OnShowPopupMenu(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonUndoButton::OnShowPopupMenu(CMFCRibbonUndoButton *this)

{
  CSize *this_00;
  int iVar1;
  CMFCRibbonBar *this_01;
  CFont *pCVar2;
  int iVar3;
  int *piVar4;
  CSize *pCVar5;
  CClientDC local_58 [20];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_44 [8];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_3c [8];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_34 [8];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_2c [8];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_24 [8];
  int local_1c;
  int local_18;
  CPen *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x10131dc9;
  CMFCRibbonBaseElement::OnShowPopupMenu((CMFCRibbonBaseElement *)this);
  this_00 = (CSize *)(this + 0x37c);
  *(undefined4 *)(this + 0x358) = 0;
  iVar1 = CSize::operator==(this_00,(tagSIZE)0x0);
  if (iVar1 != 0) {
    this_01 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
    CClientDC::CClientDC(local_58,(CWnd *)this_01);
    local_8 = 0;
    pCVar2 = CWnd::GetFont((CWnd *)this_01);
    local_14 = CDC::SelectObject((CDC *)local_58,(CPen *)pCVar2);
    if (0 < *(int *)(this + 0x398)) {
      iVar1 = 0;
      do {
        FUN_100d7168(iVar1);
        CDC::GetTextExtent((CDC *)local_58,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_1c);
        iVar3 = *(int *)this_00;
        if (*(int *)this_00 <= local_1c) {
          iVar3 = local_1c;
        }
        *(int *)this_00 = iVar3;
        iVar3 = *(int *)(this + 0x380);
        if (*(int *)(this + 0x380) <= local_18) {
          iVar3 = local_18;
        }
        *(int *)(this + 0x380) = iVar3;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x398));
    }
    piVar4 = (int *)CDC::GetTextExtent((CDC *)local_58,
                                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                        *)&local_1c);
    pCVar5 = this_00;
    if (*(int *)this_00 <= *piVar4) {
      pCVar5 = (CSize *)CDC::GetTextExtent((CDC *)local_58,local_24);
    }
    *(undefined4 *)this_00 = *(undefined4 *)pCVar5;
    piVar4 = (int *)CDC::GetTextExtent((CDC *)local_58,local_2c);
    pCVar5 = this_00;
    if (*(int *)this_00 <= *piVar4) {
      pCVar5 = (CSize *)CDC::GetTextExtent((CDC *)local_58,local_34);
    }
    *(undefined4 *)this_00 = *(undefined4 *)pCVar5;
    piVar4 = (int *)CDC::GetTextExtent((CDC *)local_58,local_3c);
    pCVar5 = this_00;
    if (*(int *)this_00 <= *piVar4) {
      pCVar5 = (CSize *)CDC::GetTextExtent((CDC *)local_58,local_44);
    }
    *(int *)this_00 = *(int *)pCVar5 + 10;
    CDC::SelectObject((CDC *)local_58,local_14);
    local_8 = 0xffffffff;
    CClientDC::~CClientDC(local_58);
  }
  *(undefined4 *)(this + 0x378) = 0xffffffff;
  CMFCRibbonGallery::OnShowPopupMenu((CMFCRibbonGallery *)this);
  return;
}

