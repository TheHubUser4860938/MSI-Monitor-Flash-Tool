// rea decompile_all
// name: CMFCRibbonPanel::GetPaltteMinSize
// address: 0x10107feb
// body: available
// range: 0x10107feb-0x1010824f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10108050 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: class CSize __thiscall CMFCRibbonPanel::GetPaltteMinSize(void)const 
   
   Library: Visual Studio 2015 Release */

int * __thiscall CMFCRibbonPanel::GetPaltteMinSize(CMFCRibbonPanel *this)

{
  code *pcVar1;
  CMFCRibbonBar *this_00;
  CFont *pCVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  CMFCVisualManager *pCVar7;
  int iVar8;
  int *in_stack_00000004;
  CClientDC local_60 [20];
  undefined1 local_4c [8];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  CPen *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x10107ff7;
  if (*(int *)(this + 0x110) == 0) {
    *in_stack_00000004 = -1;
    in_stack_00000004[1] = -1;
  }
  else {
    local_2c = FUN_10051e53(&PTR_s_CMFCRibbonUndoButton_101fac78);
    this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar(*(CMFCRibbonBaseElement **)(this + 0x110))
    ;
    CClientDC::CClientDC(local_60,(CWnd *)this_00);
    local_8 = 0;
    pCVar2 = CWnd::GetFont((CWnd *)this_00);
    local_30 = CDC::SelectObject((CDC *)local_60,(CPen *)pCVar2);
    if (local_30 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    local_38 = GetSystemMetrics(2);
    pcVar1 = *(code **)(**(int **)(this + 0x110) + 0x28c);
    guard_check_icall(&local_44);
    piVar3 = (int *)(*pcVar1)();
    local_34 = *piVar3;
    pcVar1 = *(code **)(**(int **)(this + 0x110) + 0x28c);
    guard_check_icall(&local_44);
    iVar4 = (*pcVar1)();
    local_1c = 0;
    local_3c = *(int *)(iVar4 + 4);
    local_20 = 0;
    local_18 = 0;
    local_24 = 0;
    local_28 = 0;
    if (0 < *(int *)(this + 0x4e4)) {
      do {
        iVar4 = local_18;
        puVar5 = (undefined4 *)FUN_100efaed(local_28);
        local_14 = (int *)*puVar5;
        pcVar1 = *(code **)(*local_14 + 0x110);
        guard_check_icall(0);
        (*pcVar1)();
        pcVar1 = *(code **)(*local_14 + 0x180);
        guard_check_icall(local_60);
        (*pcVar1)();
        pcVar1 = *(code **)(*local_14 + 0xf4);
        guard_check_icall(&local_44,local_60);
        (*pcVar1)();
        iVar6 = FUN_10051e53(&PTR_s_CMFCRibbonGalleryIcon_101f6198);
        if (iVar6 == 0) {
          iVar6 = FUN_10051e53(&PTR_s_CMFCRibbonLabel_101fa9c8);
          if (iVar6 == 0) {
            if (local_2c == 0) {
              pCVar7 = CMFCVisualManager::GetInstance();
              pcVar1 = *(code **)(*(int *)pCVar7 + 0x2dc);
              guard_check_icall();
              iVar4 = (*pcVar1)();
              piVar3 = (int *)FUN_10096799(local_4c);
              local_44 = local_44 + *piVar3 + iVar4 * 2 + 0xc;
              iVar4 = local_18;
            }
            if (iVar4 <= local_44) {
              local_18 = local_44;
            }
            local_24 = local_24 + local_40;
          }
          else {
            if (local_1c <= local_44) {
              local_1c = local_44;
            }
            pcVar1 = *(code **)(**(int **)(this + 0x110) + 0x2a0);
            guard_check_icall();
            iVar4 = (*pcVar1)();
            if (local_20 <= iVar4 + local_40) {
              pcVar1 = *(code **)(**(int **)(this + 0x110) + 0x2a0);
              guard_check_icall();
              local_20 = (*pcVar1)();
              local_20 = local_20 + local_40;
            }
          }
        }
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)(this + 0x4e4));
    }
    iVar6 = local_18;
    iVar4 = local_1c;
    CDC::SelectObject((CDC *)local_60,local_30);
    iVar8 = local_34;
    if (local_34 <= iVar4) {
      iVar8 = iVar4;
    }
    iVar4 = iVar8 + local_38;
    if (iVar8 + local_38 <= iVar6) {
      iVar4 = iVar6;
    }
    in_stack_00000004[1] = local_24 + local_20 + local_3c;
    *in_stack_00000004 = iVar4;
    CClientDC::~CClientDC(local_60);
  }
  return in_stack_00000004;
}

