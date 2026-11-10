// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawPaneCaption
// address: 0x10112c37
// body: available
// range: 0x10112c37-0x10112ced inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManagerOffice2003::OnDrawPaneCaption(class
   CDC *,class CDockablePane *,int,class CRect,class CRect)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2003::OnDrawPaneCaption
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,undefined4 param_2,int param_3,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10112c43;
  pAVar1 = GetGlobalData();
  if (8 < *(int *)(pAVar1 + 0x1ac)) {
    pAVar1 = GetGlobalData();
    iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar1);
    if (iVar2 == 0) {
      CDrawingManager::CDrawingManager(local_18,param_1);
      local_8 = 0;
      if (param_3 == 0) {
        uVar5 = *(undefined4 *)(this + 0x168);
        uVar4 = *(undefined4 *)(this + 0x164);
      }
      else {
        uVar5 = *(undefined4 *)(this + 400);
        uVar4 = *(undefined4 *)(this + 0x194);
      }
      CDrawingManager::FillGradient(local_18,param_5,param_6,param_7,param_8,uVar4,uVar5,1,0,0);
      pAVar1 = GetGlobalData();
      uVar3 = *(ulong *)(pAVar1 + 0x68);
      FUN_10079775();
      return uVar3;
    }
  }
  uVar3 = CMFCVisualManagerOfficeXP::OnDrawPaneCaption
                    ((CMFCVisualManagerOfficeXP *)this,param_1,param_2,param_3,param_5,param_6,
                     param_7,param_8,param_9,param_10,param_11,param_12);
  return uVar3;
}

