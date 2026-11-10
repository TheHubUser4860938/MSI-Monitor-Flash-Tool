// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawRibbonButtonsGroup
// address: 0x10149e9a
// body: available
// range: 0x10149e9a-0x10149f70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10149f0d to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerOffice2003::OnDrawRibbonButtonsGroup(class CDC *,class CMFCRibbonButtonsGroup
   *,class CRect)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2003::OnDrawRibbonButtonsGroup
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,CObject *param_2)

{
  code *pcVar1;
  CObject *pCVar2;
  CPen *pCVar3;
  CPen *pCVar4;
  undefined **local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10149ea6;
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonQuickAccessToolBar_101f67dc,param_2)
  ;
  if ((pCVar2 == (CObject *)0x0) && (*(int *)(param_2 + 0x114) != 0)) {
    if (0 < *(int *)(param_2 + 0x114)) {
      if (*(int *)(**(int **)(param_2 + 0x110) + 0xe4) == 0) {
        return 0xffffffff;
      }
      CPen::CPen((CPen *)local_18,0,1,*(ulong *)(this + 0x164));
      local_8 = 0;
      pCVar3 = CDC::SelectObject(param_1,(CPen *)local_18);
      if (pCVar3 != (CPen *)0x0) {
        pcVar1 = *(code **)(*(int *)param_1 + 0x24);
        guard_check_icall(5);
        pCVar4 = (CPen *)(*pcVar1)();
        if (pCVar4 != (CPen *)0x0) {
          InflateRect((LPRECT)&stack0x0000000c,-1,-1);
          CDC::RoundRect(param_1,(tagRECT *)&stack0x0000000c,(tagPOINT)0x200000002);
          CDC::SelectObject(param_1,pCVar3);
          CDC::SelectObject(param_1,pCVar4);
          local_18[0] = CPen::vftable;
          CImageList::~CImageList((CImageList *)local_18);
          return 0xffffffff;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  return 0xffffffff;
}

