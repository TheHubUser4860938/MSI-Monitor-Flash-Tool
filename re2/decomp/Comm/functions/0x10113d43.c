// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawShowAllMenuItems
// address: 0x10113d43
// body: available
// range: 0x10113d43-0x10113e1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawShowAllMenuItems(class CDC
   *,class CRect,enum CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawShowAllMenuItems
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6,undefined4 param_7)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  int local_20;
  int local_1c;
  CDC *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x10113d4f;
  local_18 = param_1;
  pAVar1 = GetGlobalData();
  if (8 < *(int *)(pAVar1 + 0x1ac)) {
    pAVar1 = GetGlobalData();
    iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar1);
    if (iVar2 == 0) {
      param_6 = (param_4 + param_6) / 2;
      param_4 = param_6 + -7;
      param_5 = (param_5 + param_3) / 2;
      param_3 = param_5 + -7;
      param_5 = param_5 + 9;
      param_6 = param_6 + 9;
      local_20 = param_5;
      local_1c = param_6;
      CDrawingManager::CDrawingManager((CDrawingManager *)&local_20,local_18);
      local_8 = 0;
      FUN_1007a5c8(param_3,param_4,param_5,param_6,*(undefined4 *)(this + 0x164),
                   *(undefined4 *)(this + 0xc0),0xffffffff,0x2d,8,0xffffffff);
      local_8 = 0xffffffff;
      FUN_10079775();
    }
  }
  CMFCVisualManager::OnDrawShowAllMenuItems
            ((CMFCVisualManager *)this,local_18,param_3,param_4,param_5,param_6,param_7);
  FUN_101490fe();
  return;
}

