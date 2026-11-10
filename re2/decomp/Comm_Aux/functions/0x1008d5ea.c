// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonProgressBar
// address: 0x1008d5ea
// body: available
// range: 0x1008d5ea-0x1008d6a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonProgressBar(class CDC *,class
   CMFCRibbonProgressBar *,class CRect,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnDrawRibbonProgressBar(undefined4 param_1_00,CDC *param_1)

{
  BOOL BVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HBRUSH hbr;
  ulong uVar3;
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1008d5f6;
  if (DAT_1020e40c == 0) {
    BVar1 = IsRectEmpty((RECT *)&stack0x0000001c);
    if (BVar1 == 0) {
      pAVar2 = GetGlobalData();
      hbr = (HBRUSH)0x0;
      if (pAVar2 != (AFX_GLOBAL_DATA *)0xffffff60) {
        hbr = *(HBRUSH *)(pAVar2 + 0xa4);
      }
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x0000001c,hbr);
    }
    pAVar2 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar2 + 0x5c);
    pAVar2 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,*(ulong *)(pAVar2 + 0x58),uVar3);
  }
  else {
    CDrawingManager::CDrawingManager(local_18,param_1);
    local_8 = 0;
    BVar1 = IsRectEmpty((RECT *)&stack0x0000001c);
    if (BVar1 == 0) {
      uVar3 = 0xffffffff;
      pAVar2 = GetGlobalData();
      CDrawingManager::DrawRect(local_18,(CRect *)&stack0x0000001c,*(ulong *)(pAVar2 + 0x3c),uVar3);
    }
    pAVar2 = GetGlobalData();
    CDrawingManager::DrawRect
              (local_18,(CRect *)&stack0x0000000c,0xffffffff,*(ulong *)(pAVar2 + 0x58));
    FUN_100afd36();
  }
  return;
}

