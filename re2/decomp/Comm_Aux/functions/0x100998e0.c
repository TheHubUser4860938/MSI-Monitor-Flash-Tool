// rea decompile_all
// name: OnUserToolTip
// address: 0x100998e0
// body: available
// range: 0x100998e0-0x100999a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCToolBar::OnUserToolTip(class CMFCToolBarButton *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > &)const 
    public: virtual int __thiscall CMFCToolBar::OnUserToolTip(class CMFCToolBarButton *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)const 
   
   Library: Visual Studio 2015 Release */

undefined4 OnUserToolTip(undefined4 param_1,undefined4 param_2)

{
  CFrameWnd *pCVar1;
  undefined4 uVar2;
  CObject *pCVar3;
  CWnd *in_ECX;
  code *pcVar4;
  
  pCVar1 = AFXGetParentFrame(in_ECX);
  if ((pCVar1 == (CFrameWnd *)0x0) ||
     ((pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownFrame_10205fbc,
                                   (CObject *)pCVar1), pCVar3 != (CObject *)0x0 &&
      (pCVar1 = AFXGetParentFrame((CWnd *)pCVar3), pCVar1 == (CFrameWnd *)0x0)))) {
    uVar2 = 0;
  }
  else {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101c56b8,(CObject *)pCVar1);
    if (pCVar3 == (CObject *)0x0) {
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_101c5128,(CObject *)pCVar1);
      if (pCVar3 == (CObject *)0x0) {
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101c65bc,
                                    (CObject *)pCVar1);
        if (pCVar3 == (CObject *)0x0) {
          pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_101c5cc8,
                                      (CObject *)0x0);
          if (pCVar3 == (CObject *)0x0) {
            return 0;
          }
          pcVar4 = *(code **)(*(int *)pCVar3 + 0x200);
        }
        else {
          pcVar4 = *(code **)(*(int *)pCVar3 + 0x1d4);
        }
      }
      else {
        pcVar4 = *(code **)(*(int *)pCVar3 + 0x1e4);
      }
    }
    else {
      pcVar4 = *(code **)(*(int *)pCVar3 + 0x1f8);
    }
    guard_check_icall(param_1,param_2);
    uVar2 = (*pcVar4)();
  }
  return uVar2;
}

