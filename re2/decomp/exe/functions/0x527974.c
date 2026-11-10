// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnFillOutlookPageButton
// address: 0x527974
// body: available
// range: 0x527974-0x527a4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnFillOutlookPageButton(class CDC
   *,class CRect const &,int,int,unsigned long &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnFillOutlookPageButton
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,CRect *param_2,int param_3,int param_4,
          ulong *param_5)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x527980;
  pAVar1 = GetGlobalData();
  if (8 < *(int *)(pAVar1 + 0x1ac)) {
    pAVar1 = GetGlobalData();
    iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar1);
    if (iVar2 == 0) {
      uVar4 = *(undefined4 *)(this + 0x15c);
      uVar3 = *(undefined4 *)(this + 0x160);
      if (param_4 == 0) {
        if (param_3 != 0) {
          uVar4 = *(undefined4 *)(this + 0x194);
          uVar3 = *(undefined4 *)(this + 400);
        }
      }
      else if (param_3 == 0) {
        uVar4 = *(undefined4 *)(this + 0x198);
        uVar3 = *(undefined4 *)(this + 0x19c);
      }
      else {
        uVar4 = *(undefined4 *)(this + 0x19c);
        uVar3 = *(undefined4 *)(this + 0x198);
      }
      CDrawingManager::CDrawingManager(local_18,param_1);
      local_8 = 0;
      CDrawingManager::FillGradient
                (local_18,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                 *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),uVar4,uVar3,1,0,0);
      pAVar1 = GetGlobalData();
      *param_5 = *(ulong *)(pAVar1 + 0x28);
      FUN_00461ef9();
      return;
    }
  }
  CMFCVisualManager::OnFillOutlookPageButton
            ((CMFCVisualManager *)this,param_1,param_2,param_3,param_4,param_5);
  return;
}

