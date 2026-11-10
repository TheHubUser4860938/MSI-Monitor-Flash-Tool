// rea decompile_all
// name: CMFCToolBarButton::GetClipboardFormat
// address: 0x100f24f0
// body: available
// range: 0x100f24f0-0x100f256a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f2552 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static unsigned short __stdcall CMFCToolBarButton::GetClipboardFormat(void)
   
   Library: Visual Studio 2015 Release */

ushort CMFCToolBarButton::GetClipboardFormat(void)

{
  LPCWSTR pWVar1;
  ushort extraout_AX;
  int iVar2;
  CWnd *pCVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  UINT UVar4;
  
  uStack_4 = 4;
  local_8 = 0x100f24fc;
  if (DAT_1020bbf8 == 0) {
    iVar2 = FUN_100187a0(DAT_1020bc34 + -0x10);
    local_14[0] = (LPCWSTR)(iVar2 + 0x10);
    local_8 = 0;
    if (*(int *)(iVar2 + 4) == 0) {
      pCVar3 = AfxGetMainWnd();
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)local_14,L"ToolbarButton%p",pCVar3);
    }
    pWVar1 = local_14[0];
    UVar4 = RegisterClipboardFormatW(local_14[0]);
    extraout_AX = (ushort)UVar4;
    DAT_1020bbf8 = extraout_AX;
    if (extraout_AX == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    ATL::CStringData::Release((CStringData *)(pWVar1 + -8));
  }
  return DAT_1020bbf8;
}

