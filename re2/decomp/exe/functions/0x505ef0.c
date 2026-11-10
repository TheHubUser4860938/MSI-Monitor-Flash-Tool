// rea decompile_all
// name: CMFCRibbonGallery::CopyFrom
// address: 0x505ef0
// body: available
// range: 0x505ef0-0x506097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonGallery::CopyFrom(class CMFCRibbonBaseElement const
   &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonGallery::CopyFrom(CMFCRibbonGallery *this,CMFCRibbonBaseElement *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  CMFCRibbonButton::CopyFrom((CMFCRibbonButton *)this,param_1);
  iVar1 = FUN_0043970d(&PTR_s_CMFCRibbonGallery_005c9ac8);
  if (iVar1 != 0) {
    RemoveAll(this);
    CMFCToolBarImages::CopyTo
              ((CMFCToolBarImages *)(param_1 + 0x200),(CMFCToolBarImages *)(this + 0x200));
    iVar1 = 0;
    *(undefined4 *)(this + 0x358) = *(undefined4 *)(param_1 + 0x358);
    *(undefined4 *)(this + 0x344) = *(undefined4 *)(param_1 + 0x344);
    *(undefined4 *)(this + 0x35c) = *(undefined4 *)(param_1 + 0x35c);
    *(undefined4 *)(this + 0x360) = *(undefined4 *)(param_1 + 0x360);
    *(undefined4 *)(this + 0x32c) = *(undefined4 *)(param_1 + 0x32c);
    *(undefined4 *)(this + 0x350) = *(undefined4 *)(param_1 + 0x350);
    *(undefined4 *)(this + 0x348) = *(undefined4 *)(param_1 + 0x348);
    *(undefined4 *)(this + 0x334) = *(undefined4 *)(param_1 + 0x334);
    *(undefined4 *)(this + 0x364) = *(undefined4 *)(param_1 + 0x364);
    *(undefined4 *)(this + 0x368) = *(undefined4 *)(param_1 + 0x368);
    *(undefined4 *)(this + 0x34c) = *(undefined4 *)(param_1 + 0x34c);
    *(undefined4 *)(this + 0x36c) = *(undefined4 *)(param_1 + 0x36c);
    FUN_005157d8(0,0xffffffff);
    FUN_00558084(0,0xffffffff);
    if (0 < *(int *)(param_1 + 0x1e0)) {
      iVar4 = 0;
      do {
        uVar2 = FUN_004ab4cd(iVar4);
        FUN_0051574f(*(undefined4 *)(this + 0x1e0),uVar2);
        puVar3 = (undefined4 *)FUN_004ab4cd(iVar4);
        FUN_00473afc(*(undefined4 *)(this + 500),*puVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x1e0));
    }
    FUN_005157d8(0,0xffffffff);
    if (0 < *(int *)(param_1 + 800)) {
      do {
        uVar2 = FUN_004ab4cd(iVar1);
        FUN_0051574f(*(undefined4 *)(this + 800),uVar2);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 800));
    }
    CreateIcons(this);
  }
  return;
}

