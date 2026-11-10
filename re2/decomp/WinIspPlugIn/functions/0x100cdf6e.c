// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonButtonBorder
// address: 0x100cdf6e
// body: available
// range: 0x100cdf6e-0x100ce0b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonButtonBorder(class CDC
   *,class CMFCRibbonButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonButtonBorder
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  code *pcVar1;
  CMFCVisualManagerOffice2007 *pCVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 uStack_30;
  CDC *local_2c;
  CMFCVisualManagerOffice2007 *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x100cdf7a;
  local_2c = param_1;
  local_28 = this;
  iVar3 = CanDrawImage(this);
  if (iVar3 == 0) {
    CMFCVisualManagerOfficeXP::OnDrawRibbonButtonBorder
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_2);
  }
  iVar3 = FUN_10051e53(&PTR_s_CMFCRibbonEdit_101eee58);
  pCVar2 = local_28;
  if (iVar3 == 0) goto LAB_100ce0aa;
  local_24.left = *(LONG *)(param_2 + 0x74);
  local_24.top = *(LONG *)(param_2 + 0x78);
  local_24.right = *(LONG *)(param_2 + 0x7c);
  local_24.bottom = *(LONG *)(param_2 + 0x80);
  local_28 = *(CMFCVisualManagerOffice2007 **)(local_28 + 0x90b8);
  pcVar1 = *(code **)(*(int *)param_2 + 0xdc);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        pcVar1 = *(code **)(*(int *)param_2 + 0xd4);
        guard_check_icall();
        iVar3 = (*pcVar1)();
        if (iVar3 == 0) goto LAB_100ce055;
      }
    }
    pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      local_28 = *(CMFCVisualManagerOffice2007 **)(pCVar2 + 0x90c0);
    }
    else {
      local_28 = *(CMFCVisualManagerOffice2007 **)(pCVar2 + 0x90c4);
    }
  }
  else {
    local_28 = *(CMFCVisualManagerOffice2007 **)(pCVar2 + 0x90bc);
  }
LAB_100ce055:
  local_24.left = *(LONG *)(param_2 + 0x134);
  local_34 = *(undefined4 *)(param_2 + 0x13c);
  uStack_30 = *(undefined4 *)(param_2 + 0x140);
  if (DAT_10245bb4 == 0) {
    CDC::Draw3dRect(local_2c,&local_24,(ulong)local_28,(ulong)local_28);
  }
  else {
    CDrawingManager::CDrawingManager((CDrawingManager *)&local_34,local_2c);
    local_8 = 0;
    CDrawingManager::DrawRect
              ((CDrawingManager *)&local_34,(CRect *)&local_24,0xffffffff,(ulong)local_28);
    FUN_100b0b83();
  }
LAB_100ce0aa:
  FUN_1018015d();
  return;
}

