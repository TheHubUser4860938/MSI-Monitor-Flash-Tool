// rea decompile_all
// name: OnDrawRibbonGalleryButton
// address: 0x100cf3dc
// body: available
// range: 0x100cf3dc-0x100cf4e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonGalleryButton(class CDC
   *,class CMFCRibbonGalleryIcon *)
    public: virtual void __thiscall CMFCVisualManagerWindows7::OnDrawRibbonGalleryButton(class CDC
   *,class CMFCRibbonGalleryIcon *)
   
   Library: Visual Studio 2015 Release */

void OnDrawRibbonGalleryButton(CDC *param_1,CMFCRibbonGalleryIcon *param_2)

{
  code *pcVar1;
  int iVar2;
  CMFCVisualManagerOffice2007 *in_ECX;
  uint uVar3;
  uint uVar4;
  
  iVar2 = CMFCVisualManagerOffice2007::CanDrawImage(in_ECX);
  if (iVar2 == 0) {
    CMFCVisualManager::OnDrawRibbonGalleryButton((CMFCVisualManager *)in_ECX,param_1,param_2);
    return;
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0xdc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  uVar3 = 2;
  if (iVar2 != 0) {
    uVar4 = 3;
    goto LAB_100cf482;
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0xd8);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
  if (iVar2 == 0) {
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0xd4);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) goto LAB_100cf480;
    }
    uVar4 = 1;
  }
  else {
    guard_check_icall();
    iVar2 = (*pcVar1)();
    uVar4 = uVar3;
    if (iVar2 != 0) goto LAB_100cf482;
LAB_100cf480:
    uVar4 = 0;
  }
LAB_100cf482:
  iVar2 = CMFCRibbonGalleryIcon::IsLast(param_2);
  if (iVar2 == 0) {
    iVar2 = CMFCRibbonGalleryIcon::IsFirst(param_2);
    uVar3 = ~-(uint)(iVar2 != 0) & 1;
  }
  iVar2 = *(int *)(in_ECX + uVar3 * 0x178 + 0x7498);
  guard_check_icall(param_1,*(undefined4 *)(param_2 + 0x74),*(undefined4 *)(param_2 + 0x78),
                    *(undefined4 *)(param_2 + 0x7c),*(undefined4 *)(param_2 + 0x80),uVar4,0xff);
  (**(code **)(iVar2 + 0x10))();
  return;
}

