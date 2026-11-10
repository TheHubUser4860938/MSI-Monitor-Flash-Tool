// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonCaptionButton
// address: 0x4b76a1
// body: available
// range: 0x4b76a1-0x4b779e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonCaptionButton(class CDC
   *,class CMFCRibbonCaptionButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonCaptionButton
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CMFCRibbonCaptionButton *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  CMFCVisualManagerOffice2007 *local_c;
  int local_8;
  
  local_c = this;
  iVar3 = CanDrawImage(this);
  if (iVar3 == 0) {
    CMFCVisualManager::OnDrawRibbonCaptionButton((CMFCVisualManager *)this,param_1,param_2);
    return;
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xd4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_004b7702;
    }
  }
  iVar3 = 1;
LAB_004b7702:
  local_8 = 0;
  pcVar1 = *(code **)(*(int *)param_2 + 0xd8);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  iVar2 = iVar3;
  if ((iVar4 == 0) && (iVar2 = local_8, iVar3 != 0)) {
    local_8 = 2;
    iVar2 = local_8;
  }
  local_8 = iVar2;
  if (((*(int *)(param_2 + 0x1c4) == 0) && (iVar3 = *(int *)(param_2 + 0x84), iVar3 != 0)) &&
     (*(int *)(iVar3 + 0x20) != 0)) {
    pHVar5 = GetParent(*(HWND *)(iVar3 + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    iVar3 = IsWindowActive(local_c,pCVar6);
  }
  else {
    iVar3 = 1;
  }
  local_1c = *(undefined4 *)(param_2 + 0x74);
  uStack_18 = *(undefined4 *)(param_2 + 0x78);
  uStack_14 = *(undefined4 *)(param_2 + 0x7c);
  uStack_10 = *(undefined4 *)(param_2 + 0x80);
  FUN_004b3a97(param_1,&local_1c,*(undefined4 *)(param_2 + 0xa4),local_8,0,iVar3,
               *(int *)(param_2 + 0x1c4) != 0);
  return;
}

