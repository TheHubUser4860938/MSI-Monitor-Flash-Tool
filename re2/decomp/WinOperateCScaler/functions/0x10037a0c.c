// rea decompile_all
// name: CPropertySheet::CPropertySheet
// address: 0x10037a0c
// body: available
// range: 0x10037a0c-0x10037a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037a6e to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CPropertySheet::CPropertySheet(wchar_t const *,class CWnd *,unsigned int)
   
   Library: Visual Studio 2015 Release */

CPropertySheet * __thiscall
CPropertySheet::CPropertySheet(CPropertySheet *this,wchar_t *param_1,CWnd *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  CPtrArray::CPtrArray((CPtrArray *)(this + 0xb4));
  uVar1 = FUN_1001e20a();
  FUN_1001d224(uVar1);
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  iVar2 = AfxIsValidString(param_1,-1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)(this + 200),param_1);
  CommonConstruct(this,param_2,param_3);
  return this;
}

