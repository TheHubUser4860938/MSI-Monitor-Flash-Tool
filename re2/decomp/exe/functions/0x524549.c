// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawPopupWindowCaption
// address: 0x524549
// body: available
// range: 0x524549-0x524654 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerOffice2003::OnDrawPopupWindowCaption(class CDC *,class CRect,class
   CMFCDesktopAlertWnd *)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2003::OnDrawPopupWindowCaption
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  CDrawingManager local_1c [8];
  CMFCVisualManagerOffice2003 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x524555;
  local_14 = this;
  pAVar1 = GetGlobalData();
  if (8 < *(int *)(pAVar1 + 0x1ac)) {
    pAVar1 = GetGlobalData();
    iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar1);
    if (iVar2 == 0) {
      CDrawingManager::CDrawingManager(local_1c,param_1);
      local_8 = 0;
      CDrawingManager::FillGradient
                (local_1c,param_3,param_4,param_5,param_6,*(undefined4 *)(this + 0x1b0),
                 *(undefined4 *)(this + 0x1ac),1,0,0);
      if (*(int *)(param_7 + 0xa0) != 0) {
        iVar2 = *(int *)this;
        iVar5 = (param_3 + param_5) / 2;
        iVar3 = (param_4 + param_6) / 2;
        guard_check_icall(param_1,iVar5 + -0x14,iVar3 + -4,iVar5 + 0x14,iVar3 + 2,0,0);
        (**(code **)(iVar2 + 0x44))();
      }
      pAVar1 = GetGlobalData();
      uVar4 = *(ulong *)(pAVar1 + 0x5c);
      FUN_00461ef9();
      return uVar4;
    }
  }
  uVar4 = CMFCVisualManagerOfficeXP::OnDrawPopupWindowCaption
                    ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6,
                     param_7);
  return uVar4;
}

