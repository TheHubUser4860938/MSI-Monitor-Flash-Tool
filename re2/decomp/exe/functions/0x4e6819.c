// rea decompile_all
// name: CMFCToolBarButton::GetClipboardFormat
// address: 0x4e6819
// body: available
// range: 0x4e6819-0x4e6893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4e687b to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static unsigned short __stdcall CMFCToolBarButton::GetClipboardFormat(void)
   
   Library: Visual Studio 2015 Release */

ushort CMFCToolBarButton::GetClipboardFormat(void)

{
  ushort extraout_AX;
  int iVar1;
  CWnd *pCVar2;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  UINT UVar3;
  
  uStack_4 = 4;
  local_8 = 0x4e6825;
  if (DAT_00616fd4 == 0) {
    iVar1 = FUN_00415ee0(DAT_00617010 + -0x10);
    local_14[0] = (LPCWSTR)(iVar1 + 0x10);
    local_8 = 0;
    if (*(int *)(iVar1 + 4) == 0) {
      pCVar2 = AfxGetMainWnd();
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this,(wchar_t *)local_14,L"ToolbarButton%p",pCVar2);
    }
    UVar3 = RegisterClipboardFormatW(local_14[0]);
    extraout_AX = (ushort)UVar3;
    DAT_00616fd4 = extraout_AX;
    if (extraout_AX == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    FUN_0040efa0();
  }
  return DAT_00616fd4;
}

