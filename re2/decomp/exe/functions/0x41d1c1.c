// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonQuickAccessToolBarSeparator
// address: 0x41d1c1
// body: available
// range: 0x41d1c1-0x41d228 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonQuickAccessToolBarSeparator(class
   CDC *,class CMFCRibbonSeparator *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonQuickAccessToolBarSeparator(undefined4 param_1_00,CDC *param_1)

{
  AFX_GLOBAL_DATA *pAVar1;
  ulong uVar2;
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x41d1cd;
  if (DAT_00614e28 == 0) {
    pAVar1 = GetGlobalData();
    uVar2 = *(ulong *)(pAVar1 + 0x5c);
    pAVar1 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,*(ulong *)(pAVar1 + 0x58),uVar2);
  }
  else {
    CDrawingManager::CDrawingManager(local_18,param_1);
    local_8 = 0;
    pAVar1 = GetGlobalData();
    CDrawingManager::DrawRect
              (local_18,(CRect *)&stack0x0000000c,0xffffffff,*(ulong *)(pAVar1 + 0x20));
    FUN_00461ef9();
  }
  return;
}

