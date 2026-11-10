// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonCategory
// address: 0x41c180
// body: available
// range: 0x41c180-0x41c2b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c1f0 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonCategory(class CDC *,class
   CMFCRibbonCategory *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonCategory
          (undefined4 param_1_00,CDC *param_1,int param_2,int param_4,int param_5,int param_6,
          int param_7)

{
  int iVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  HBRUSH hbr;
  CPen *pCVar4;
  undefined1 local_2c [8];
  CDrawingManager local_24 [8];
  undefined **local_1c [2];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x41c18c;
  param_6 = param_6 + -2;
  param_7 = param_7 + -2;
  pAVar3 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar3 != (AFX_GLOBAL_DATA *)0xffffff30) {
    hbr = *(HBRUSH *)(pAVar3 + 0xd4);
  }
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_4,hbr);
  iVar1 = *(int *)(param_2 + 0x104);
  iVar2 = *(int *)(param_2 + 0x10c);
  pAVar3 = GetGlobalData();
  CPen::CPen((CPen *)local_1c,0,1,*(ulong *)(pAVar3 + 0x58));
  local_8 = 0;
  pCVar4 = CDC::SelectObject(param_1,(CPen *)local_1c);
  if (pCVar4 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  CDC::MoveTo(param_1,(int)local_2c,param_4);
  CDC::LineTo(param_1,iVar1 + 1,param_5);
  CDC::MoveTo(param_1,(int)local_2c,iVar2 + -2);
  CDC::LineTo(param_1,param_6,param_5);
  CDC::LineTo(param_1,param_6,param_7);
  CDC::LineTo(param_1,param_4,param_7);
  CDC::LineTo(param_1,param_4,param_5);
  CDC::SelectObject(param_1,pCVar4);
  CDrawingManager::CDrawingManager(local_24,param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  CDrawingManager::DrawShadow
            (local_24,param_4,param_5,param_6,param_7,2,100,0x4b,0,0,
             *(undefined4 *)(local_14 + 0xa8),1);
  FUN_00461ef9();
  local_1c[0] = CPen::vftable;
  FUN_0040ee80();
  return;
}

