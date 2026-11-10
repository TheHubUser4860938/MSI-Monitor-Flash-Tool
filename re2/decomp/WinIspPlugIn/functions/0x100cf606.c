// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonLaunchButton
// address: 0x100cf606
// body: available
// range: 0x100cf606-0x100cf77d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonLaunchButton(class CDC
   *,class CMFCRibbonLaunchButton *,class CMFCRibbonPanel *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonLaunchButton
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CMFCRibbonLaunchButton *param_2,
          CMFCRibbonPanel *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  iVar4 = CanDrawImage(this);
  if (iVar4 == 0) {
    CMFCVisualManager::OnDrawRibbonLaunchButton((CMFCVisualManager *)this,param_1,param_2,param_3);
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  local_18 = *(int *)(param_2 + 0x7c);
  local_14 = *(int *)(param_2 + 0x80);
  if (0x13 < *(int *)(this + 0xc000)) {
    local_18 = local_18 + -1;
    local_14 = local_14 + -1;
  }
  pcVar3 = *(code **)(*(int *)param_2 + 0xd0);
  guard_check_icall();
  iVar4 = (*pcVar3)();
  if (iVar4 == 0) {
    pcVar3 = *(code **)(*(int *)param_2 + 0xd4);
    guard_check_icall();
    iVar4 = (*pcVar3)();
    if (iVar4 != 0) goto LAB_100cf684;
    local_c = 0;
  }
  else {
LAB_100cf684:
    local_c = 1;
  }
  local_8 = 0;
  pcVar3 = *(code **)(*(int *)param_2 + 0xdc);
  if (*(int *)(this + 0x15e4) < 4) {
    guard_check_icall();
    iVar4 = (*pcVar3)();
    if (iVar4 != 0) goto LAB_100cf6f0;
  }
  else {
    guard_check_icall();
    iVar4 = (*pcVar3)();
    if (iVar4 != 0) {
      local_8 = 3;
      goto LAB_100cf6f0;
    }
  }
  pcVar3 = *(code **)(*(int *)param_2 + 0xd8);
  guard_check_icall();
  iVar4 = (*pcVar3)();
  if (iVar4 == 0) {
    if (local_c != 0) {
      local_8 = 1;
    }
  }
  else {
    local_8 = local_c * 2;
  }
LAB_100cf6f0:
  if (*(int *)(this + 0x6ae4) != 0) {
    iVar4 = *(int *)(this + 0x6a50);
    guard_check_icall(param_1,uVar1,uVar2,local_18,local_14,local_8,0xff);
    (**(code **)(iVar4 + 0x10))();
  }
  if (*(int *)(this + 0x166c) != 0) {
    CMFCToolBarImages::DrawEx
              ((CMFCToolBarImages *)(this + 0x15e0),param_1,uVar1,uVar2,local_18,local_14,local_8,1,
               1,0,0,0,0,0xff);
  }
  return;
}

