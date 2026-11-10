// rea decompile_all
// name: CMFCVisualManager::OnFillRibbonEdit
// address: 0x100924a4
// body: available
// range: 0x100924a4-0x1009258b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnFillRibbonEdit(class CDC *,class
   CMFCRibbonRichEditCtrl *,class CRect,int,int,int,unsigned long &,unsigned long &,unsigned long &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnFillRibbonEdit
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,LONG param_4,LONG param_5,
          LONG param_6,LONG param_7,int param_8,undefined4 param_9,int param_10)

{
  AFX_GLOBAL_DATA *pAVar1;
  HBRUSH pHVar2;
  ulong uVar3;
  CDrawingManager local_20 [8];
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100924b0;
  if ((param_8 == 0) || (param_10 != 0)) {
    CDrawingManager::CDrawingManager(local_18,param_1);
    local_8 = 1;
    if (DAT_10245bb4 == 0) {
      pAVar1 = GetGlobalData();
      pHVar2 = (HBRUSH)0x0;
      if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff30) {
        pHVar2 = *(HBRUSH *)(pAVar1 + 0xd4);
      }
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_4,pHVar2);
      FUN_100b396e(param_4,param_5,param_6,param_7,0xffffffff,0xffffffff,0,0xffffffff);
    }
    else {
      uVar3 = 0xffffffff;
      pAVar1 = GetGlobalData();
      CDrawingManager::DrawRect(local_18,(CRect *)&param_4,*(ulong *)(pAVar1 + 0x54),uVar3);
    }
  }
  else {
    if (DAT_10245bb4 == 0) {
      pAVar1 = GetGlobalData();
      pHVar2 = (HBRUSH)0x0;
      if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff38) {
        pHVar2 = *(HBRUSH *)(pAVar1 + 0xcc);
      }
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_4,pHVar2);
      return;
    }
    CDrawingManager::CDrawingManager(local_20,param_1);
    local_8 = 0;
    uVar3 = 0xffffffff;
    pAVar1 = GetGlobalData();
    CDrawingManager::DrawRect(local_20,(CRect *)&param_4,*(ulong *)(pAVar1 + 0x6c),uVar3);
  }
  FUN_100b0b83();
  return;
}

