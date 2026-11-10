// rea decompile_all
// name: CMFCToolBar::LoadBitmapEx
// address: 0x1006b096
// body: available
// range: 0x1006b096-0x1006b2f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::LoadBitmapEx(class CMFCToolBarInfo &,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::LoadBitmapEx(CMFCToolBar *this,CMFCToolBarInfo *param_1,int param_2)

{
  int iVar1;
  CMFCToolBar *this_00;
  uint uVar2;
  
  *(int *)(this + 0xb78) = param_2;
  if (param_2 == 0) {
    iVar1 = CMFCToolBarImages::Load
                      ((CMFCToolBarImages *)&DAT_10209de8,*(uint *)(param_1 + 4),(HINSTANCE__ *)0x0,
                       1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = CMFCToolBarImages::GetResourceOffset
                      ((CMFCToolBarImages *)&DAT_10209de8,*(uint *)(param_1 + 4));
    *(int *)(this + 0xc04) = iVar1;
    if (*(int *)param_1 == 0) {
      if (DAT_10209cd8 != 0) {
        CMFCToolBarImages::CopyTo
                  ((CMFCToolBarImages *)&DAT_10209de8,(CMFCToolBarImages *)&DAT_10209f00);
        CMFCToolBarImages::GrayImages((CMFCToolBarImages *)&DAT_10209f00,DAT_10209cdc);
      }
    }
    else {
      iVar1 = CMFCToolBarImages::Load
                        ((CMFCToolBarImages *)&DAT_10209f00,*(uint *)param_1,(HINSTANCE__ *)0x0,1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((*(int *)(param_1 + 0x18) != 0) &&
       (iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)&DAT_1020a018,*(uint *)(param_1 + 0x18),
                           (HINSTANCE__ *)0x0,1), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 8) != 0) &&
       (iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)&DAT_1020a130,*(uint *)(param_1 + 8),
                           (HINSTANCE__ *)0x0,1), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x1c) != 0) &&
       (iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)&DAT_1020a248,*(uint *)(param_1 + 0x1c),
                           (HINSTANCE__ *)0x0,1), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)&DAT_1020a360,*(uint *)(param_1 + 0x10),
                           (HINSTANCE__ *)0x0,1), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0xc) != 0) &&
       (iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)&DAT_1020a478,*(uint *)(param_1 + 0xc),
                           (HINSTANCE__ *)0x0,1), iVar1 == 0)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      return 1;
    }
    uVar2 = *(uint *)(param_1 + 0x14);
    this_00 = (CMFCToolBar *)&DAT_1020a590;
  }
  else {
    iVar1 = CMFCToolBarImages::Load
                      ((CMFCToolBarImages *)(this + 0x2b8),*(uint *)(param_1 + 4),(HINSTANCE__ *)0x0
                       ,1);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)param_1 == 0) {
      if (DAT_10209cd8 != 0) {
        CMFCToolBarImages::CopyTo
                  ((CMFCToolBarImages *)(this + 0x2b8),(CMFCToolBarImages *)(this + 0x3d0));
        CMFCToolBarImages::GrayImages((CMFCToolBarImages *)(this + 0x3d0),DAT_10209cdc);
      }
    }
    else {
      iVar1 = CMFCToolBarImages::Load
                        ((CMFCToolBarImages *)(this + 0x3d0),*(uint *)param_1,(HINSTANCE__ *)0x0,1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((*(int *)(param_1 + 8) != 0) &&
       (iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)(this + 0x4e8),*(uint *)(param_1 + 8),
                           (HINSTANCE__ *)0x0,1), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)(this + 0x600),*(uint *)(param_1 + 0x10),
                           (HINSTANCE__ *)0x0,1), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0xc) != 0) &&
       (iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)(this + 0x718),*(uint *)(param_1 + 0xc),
                           (HINSTANCE__ *)0x0,1), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x14) != 0) &&
       (iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)(this + 0x830),*(uint *)(param_1 + 0x14),
                           (HINSTANCE__ *)0x0,1), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x18) != 0) &&
       (iVar1 = CMFCToolBarImages::Load
                          ((CMFCToolBarImages *)(this + 0x948),*(uint *)(param_1 + 0x18),
                           (HINSTANCE__ *)0x0,1), iVar1 == 0)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      return 1;
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    this_00 = this + 0x948;
  }
  iVar1 = CMFCToolBarImages::Load((CMFCToolBarImages *)this_00,uVar2,(HINSTANCE__ *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

