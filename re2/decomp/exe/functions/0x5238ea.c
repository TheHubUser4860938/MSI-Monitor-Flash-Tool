// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawAutoHideButtonBorder
// address: 0x5238ea
// body: available
// range: 0x5238ea-0x5239dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawAutoHideButtonBorder(class
   CDC *,class CRect,class CRect,class CMFCAutoHideButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawAutoHideButtonBorder
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,undefined4 param_11)

{
  ulong uVar1;
  code *pcVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  COLORREF CVar5;
  
  pAVar3 = GetGlobalData();
  if (8 < *(int *)(pAVar3 + 0x1ac)) {
    pAVar3 = GetGlobalData();
    iVar4 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar3);
    if (iVar4 == 0) {
      pAVar3 = GetGlobalData();
      uVar1 = *(ulong *)(pAVar3 + 0x58);
      CVar5 = GetTextColor(*(HDC *)(param_1 + 8));
      if (0 < param_7) {
        CDC::FillSolidRect(param_1,param_3,param_4,param_7 + param_3,param_6,uVar1);
      }
      if (0 < param_8) {
        CDC::FillSolidRect(param_1,param_3,param_4,param_5,param_8 + param_4,uVar1);
      }
      if (0 < param_9) {
        CDC::FillSolidRect(param_1,param_5 - param_9,param_4,param_5,param_6,uVar1);
      }
      if (0 < param_10) {
        CDC::FillSolidRect(param_1,param_3,param_6 - param_10,param_5,param_6,uVar1);
      }
      pcVar2 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(CVar5);
      (*pcVar2)();
      return;
    }
  }
  CMFCVisualManager::OnDrawAutoHideButtonBorder
            ((CMFCVisualManager *)this,param_1,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10,param_11);
  return;
}

