// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnFillHighlightedArea
// address: 0x100d10f5
// body: available
// range: 0x100d10f5-0x100d1220 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnFillHighlightedArea(class CDC
   *,class CRect,class CBrush *,class CMFCToolBarButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnFillHighlightedArea
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,CMFCVisualManagerOffice2007 *param_7,
          CObject *param_8)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  int iVar4;
  CDrawingManager local_20 [8];
  undefined4 local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100d1101;
  iVar2 = CanDrawImage(this);
  if (iVar2 != 0) {
    iVar2 = -1;
    local_18 = 1;
    local_14 = -1;
    if (param_8 != (CObject *)0x0) {
      local_18 = *(undefined4 *)(param_8 + 0x4c);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_10205f1c,param_8);
      if (pCVar3 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)param_8 + 0x70);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if (iVar4 != 0) {
          local_14 = *(int *)(this + 0x198);
          iVar2 = *(int *)(this + 0x19c);
        }
      }
    }
    if (param_7 == this + 0x11c) {
      iVar2 = *(int *)(this + 0x194);
      iVar4 = *(int *)(this + 400);
    }
    else if (param_7 == this + 0x124) {
      iVar2 = *(int *)(this + 0x19c);
      iVar4 = *(int *)(this + 0x198);
    }
    else {
      iVar4 = local_14;
      if (param_7 == this + 300) {
        iVar2 = *(int *)(this + 0x1a4);
        iVar4 = *(int *)(this + 0x1a0);
      }
    }
    if ((iVar2 != -1) && (iVar4 != -1)) {
      CDrawingManager::CDrawingManager(local_20,param_1);
      local_8 = 0;
      CDrawingManager::FillGradient
                (local_20,param_3,param_4,param_5,param_6,iVar2,iVar4,local_18,0,0);
      FUN_100afd36();
      return;
    }
  }
  CMFCVisualManagerOffice2003::OnFillHighlightedArea
            ((CMFCVisualManagerOffice2003 *)this,param_1,param_3,param_4,param_5,param_6,param_7,
             param_8);
  return;
}

