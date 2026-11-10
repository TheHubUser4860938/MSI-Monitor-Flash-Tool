// rea decompile_all
// name: CMFCRibbonGalleryIcon::OnClick
// address: 0x506e5f
// body: available
// range: 0x506e5f-0x506f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonGalleryIcon::OnClick(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonGalleryIcon::OnClick(CMFCRibbonGalleryIcon *this,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  CMFCRibbonGalleryIcon *pCVar3;
  int *local_8;
  
  pcVar1 = *(code **)(**(int **)(this + 0x1c4) + 0x284);
  guard_check_icall(this,&param_2);
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    pCVar3 = *(CMFCRibbonGalleryIcon **)(this + 0x8c);
    if (*(CMFCRibbonGalleryIcon **)(this + 0x8c) == (CMFCRibbonGalleryIcon *)0x0) {
      pCVar3 = this;
    }
    pcVar1 = *(code **)(**(int **)(this + 0x1c4) + 0x288);
    guard_check_icall(pCVar3);
    (*pcVar1)();
    if (-1 < *(int *)(this + 0x1c8)) {
      local_8 = *(int **)(this + 0x94);
      if (local_8 == (int *)0x0) {
        local_8 = *(int **)(*(CMFCRibbonBaseElement **)(this + 0x1c4) + 0x94);
        if (local_8 == (int *)0x0) {
          CMFCRibbonBaseElement::NotifyCommand(*(CMFCRibbonBaseElement **)(this + 0x1c4),0);
          return;
        }
      }
      if (*(int *)(*(CMFCRibbonGallery **)(this + 0x1c4) + 0x32c) != 0) {
        CMFCRibbonGallery::SetNotifyParentID(*(CMFCRibbonGallery **)(this + 0x1c4),1);
      }
      *(undefined4 *)(*(int *)(this + 0x1c4) + 0xcc) = 0;
      pcVar1 = *(code **)(**(int **)(this + 0x1c4) + 0x224);
      guard_check_icall(0);
      (*pcVar1)();
      pcVar1 = *(code **)(*local_8 + 0x450);
      guard_check_icall(*(undefined4 *)(this + 0x1c4),param_2,param_3);
      (*pcVar1)();
    }
  }
  return;
}

