// rea decompile_all
// name: CTooltipManager::CreateToolTipObject
// address: 0x10089117
// body: available
// range: 0x10089117-0x100891a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CTooltipManager::CreateToolTipObject(class CToolTipCtrl * &,unsigned
   int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CTooltipManager::CreateToolTipObject(CTooltipManager *this,CToolTipCtrl **param_1,uint param_2)

{
  CToolTipCtrl *this_00;
  CObject *pCVar1;
  
  if (param_2 < 0xb) {
    if (*(int *)(this + param_2 * 4 + 0x240) == 0) {
      this_00 = (CToolTipCtrl *)FUN_1001cfa0(0xa0);
      pCVar1 = (CObject *)0x0;
      if (this_00 != (CToolTipCtrl *)0x0) {
        pCVar1 = (CObject *)CToolTipCtrl::CToolTipCtrl(this_00);
      }
    }
    else {
      pCVar1 = (CObject *)FUN_1002505f();
      pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CToolTipCtrl_101b68c0,pCVar1);
    }
    *param_1 = (CToolTipCtrl *)pCVar1;
    if (pCVar1 != (CObject *)0x0) {
      pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolTipCtrl_101c6dd4,pCVar1);
      if (pCVar1 != (CObject *)0x0) {
        CMFCToolTipCtrl::SetParams
                  ((CMFCToolTipCtrl *)pCVar1,(CMFCToolTipInfo *)(this + param_2 * 0x34 + 4));
      }
      return 1;
    }
  }
  return 0;
}

