// rea decompile_all
// name: CMFCRibbonBaseElement::GetToolTipText
// address: 0x100ff3d7
// body: available
// range: 0x100ff3d7-0x100ff58a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CMFCRibbonBaseElement::GetToolTipText(void)const 
   
   Library: Visual Studio 2015 Release */

int * __thiscall CMFCRibbonBaseElement::GetToolTipText(CMFCRibbonBaseElement *this)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  CFrameWnd *pCVar4;
  CFrameWnd *this_00;
  int iVar5;
  CWnd *pCVar6;
  int *in_stack_00000004;
  int local_18;
  int local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100ff3e3;
  pcVar1 = *(code **)(*(int *)this + 0xe4);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    FUN_100352e0(&DAT_101e24d0);
    return in_stack_00000004;
  }
  iVar2 = FUN_100349e0(*(int *)(this + 0x6c) + -0x10);
  local_14[0] = iVar2 + 0x10;
  local_8 = 0;
  if ((*(int *)(this + 0xc4) != 0) && (*(int *)(iVar2 + 4) == 0)) {
    FUN_10034940(this + 0x60);
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,L"&&",
               L"\x01\x01");
    FUN_10037b90(0x26);
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
               L"\x01\x01",L"&");
  }
  iVar2 = local_14[0];
  pCVar6 = *(CWnd **)(this + 0x84);
  if (((pCVar6 == (CWnd *)0x0) && (pCVar6 = *(CWnd **)(this + 0x94), pCVar6 == (CWnd *)0x0)) &&
     (pCVar6 = (CWnd *)0x0, *(int *)(this + 0x88) != 0)) {
    pCVar6 = *(CWnd **)(*(int *)(this + 0x88) + 0x53c);
  }
  if (*(int *)(this + 0x104) == 0) goto LAB_100ff568;
  uVar3 = FUN_10048e90();
  FUN_10034c30(uVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  pCVar4 = AFXGetParentFrame(pCVar6);
  if ((pCVar4 != (CFrameWnd *)0x0) &&
     ((this_00 = AFXGetParentFrame(pCVar6), pCVar4 = DAT_1020fa34, DAT_1020fa34 != (CFrameWnd *)0x0
      || (pCVar4 = CWnd::GetTopLevelFrame((CWnd *)this_00), pCVar4 != (CFrameWnd *)0x0)))) {
    iVar5 = CKeyboardManager::FindDefaultAccelerator
                      (*(uint *)(this + 0xa4),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_18,pCVar4,1);
    if (iVar5 == 0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x170);
      guard_check_icall();
      pCVar4 = (CFrameWnd *)(*pcVar1)();
      iVar5 = CKeyboardManager::FindDefaultAccelerator
                        (*(uint *)(this + 0xa4),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_18,pCVar4,iVar5);
      if (iVar5 == 0) goto LAB_100ff559;
    }
    FUN_10047a00(&DAT_101bb9c4);
    FUN_10034490(local_18,*(undefined4 *)(local_18 + -0xc));
    ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)local_14,L')');
    iVar2 = local_14[0];
  }
LAB_100ff559:
  local_8 = local_8 & 0xffffff00;
  FUN_10034f00();
LAB_100ff568:
  iVar2 = FUN_100349e0(iVar2 + -0x10);
  *in_stack_00000004 = iVar2 + 0x10;
  FUN_10034f00();
  return in_stack_00000004;
}

