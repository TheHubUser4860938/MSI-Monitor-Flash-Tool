// rea decompile_all
// name: CMFCRibbonPanel::MakeGalleryItemVisible
// address: 0x476296
// body: available
// range: 0x476296-0x476370 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCRibbonPanel::MakeGalleryItemVisible(class CMFCRibbonBaseElement *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanel::MakeGalleryItemVisible(CMFCRibbonPanel *this,CMFCRibbonBaseElement *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_0043970d(&PTR_s_CMFCRibbonGalleryIcon_005c9d90);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x78);
    iVar1 = *(int *)(param_1 + 0x80);
    GetGalleryRect(this);
    if (iVar3 < local_18.top) {
      iVar3 = local_18.top - iVar3;
    }
    else {
      if (iVar1 <= local_18.bottom) goto LAB_0047635f;
      iVar3 = local_18.bottom - iVar1;
    }
    if (iVar3 != 0) {
      ScrollPalette(this,iVar3,1);
      pcVar2 = *(code **)(*(int *)this + 0xa4);
      guard_check_icall();
      iVar3 = (*pcVar2)();
      if (iVar3 != 0) {
        pcVar2 = *(code **)(*(int *)this + 0xa4);
        guard_check_icall();
        iVar3 = (*pcVar2)();
        RedrawWindow(*(HWND *)(iVar3 + 0x20),&local_18,(HRGN)0x0,0x105);
      }
      iVar3 = *(int *)(this + 0x104);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
        SetScrollPos(*(HWND *)(iVar3 + 0x20),2,*(int *)(this + 0xb8),1);
      }
    }
  }
LAB_0047635f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

