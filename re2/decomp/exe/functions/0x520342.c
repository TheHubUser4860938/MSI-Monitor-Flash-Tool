// rea decompile_all
// name: CMFCRibbonColorButton::OnShowPopupMenu
// address: 0x520342
// body: available
// range: 0x520342-0x520560 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonColorButton::OnShowPopupMenu(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonColorButton::OnShowPopupMenu(CMFCRibbonColorButton *this)

{
  code *pcVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  *(undefined4 *)(this + 0x37c) = 0xffffffff;
  CMFCRibbonBaseElement::OnShowPopupMenu((CMFCRibbonBaseElement *)this);
  iVar6 = 0;
  if (0 < *(int *)(this + 0x1b8)) {
    do {
      puVar2 = (undefined4 *)FUN_004ab4cd(iVar6);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonColorMenuButton_005ce914,
                                  (CObject *)*puVar2);
      if (pCVar3 == (CObject *)0x0) {
        iVar6 = iVar6 + 1;
      }
      else {
        pcVar1 = *(code **)(*(int *)pCVar3 + 4);
        guard_check_icall(1);
        (*pcVar1)();
        FUN_004878c0(iVar6,1);
      }
    } while (iVar6 < *(int *)(this + 0x1b8));
  }
  if (*(int *)(this + 0x3d0) == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x280);
    guard_check_icall();
    (*pcVar1)();
    AddGroup(&PTR_005e8934,*(undefined4 *)(this + 0x38c));
  }
  iVar6 = *(int *)(this + 0x3a0);
  if (0 < iVar6) {
    AddGroup(*(undefined4 *)(this + 1000),iVar6);
  }
  if (*(int *)(this + 0x3cc) != 0) {
    iVar4 = FUN_00416408(0x1cc);
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)CMFCRibbonColorMenuButton(2,this,*(undefined4 *)(this + 0x3e0),0);
    }
    *(int **)(this + 0x3ec) = piVar5;
    pcVar1 = *(code **)(*piVar5 + 200);
    guard_check_icall(*(undefined4 *)(this + 0x3e4));
    (*pcVar1)();
    CMFCRibbonGallery::AddSubItem
              ((CMFCRibbonGallery *)this,*(CMFCRibbonBaseElement **)(this + 0x3ec),0,0);
  }
  if (*(int *)(this + 0x3c0) != 0) {
    iVar4 = FUN_00416408(0x1cc);
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)CMFCRibbonColorMenuButton
                                (1,this,*(undefined4 *)(this + 0x3d8),*(int *)(this + 0x378) == -1);
    }
    *(int **)(this + 0x3f0) = piVar5;
    pcVar1 = *(code **)(*piVar5 + 200);
    guard_check_icall(*(undefined4 *)(this + 0x3dc));
    (*pcVar1)();
    CMFCRibbonGallery::AddSubItem
              ((CMFCRibbonGallery *)this,*(CMFCRibbonBaseElement **)(this + 0x3f0),0,
               *(int *)(this + 0x3c4));
  }
  if ((*(int *)(this + 0x3d0) == 0) || (*(int *)(this + 0x3b4) < 1)) {
    iVar4 = *(int *)(this + 0x3f8);
  }
  else {
    iVar4 = *(int *)(this + 0x3f8) + -3;
  }
  *(int *)(this + 600) = iVar4;
  *(undefined4 *)(this + 0x254) = *(undefined4 *)(this + 0x3f4);
  CMFCRibbonGallery::OnShowPopupMenu((CMFCRibbonGallery *)this);
  if (0 < iVar6) {
    FUN_0051566b(*(int *)(this + 0x1e0) + -1,1);
    FUN_004878c0(*(int *)(this + 500) + -1,1);
    *(int *)(this + 0x34c) = *(int *)(this + 0x34c) - iVar6;
  }
  return;
}

