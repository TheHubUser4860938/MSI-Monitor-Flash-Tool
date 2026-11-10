// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonTabsFrame
// address: 0x41d697
// body: available
// range: 0x41d697-0x41d714 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d6cd to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnDrawRibbonTabsFrame(class CDC
   *,class CMFCRibbonBar *,class CRect)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManager::OnDrawRibbonTabsFrame
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,int param_4,int param_5,int param_6
          )

{
  AFX_GLOBAL_DATA *pAVar1;
  CPen *pCVar2;
  undefined1 local_20 [8];
  undefined **local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x41d6a3;
  pAVar1 = GetGlobalData();
  CPen::CPen((CPen *)local_18,0,1,*(ulong *)(pAVar1 + 0x58));
  local_8 = 0;
  pCVar2 = CDC::SelectObject(param_1,(CPen *)local_18);
  if (pCVar2 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  CDC::MoveTo(param_1,(int)local_20,param_4);
  CDC::LineTo(param_1,param_6,param_5);
  CDC::SelectObject(param_1,pCVar2);
  local_18[0] = CPen::vftable;
  FUN_0040ee80();
  return 0xffffffff;
}

