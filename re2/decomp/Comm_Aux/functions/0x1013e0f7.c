// rea decompile_all
// name: CMFCRibbonColorButton::CopyFrom
// address: 0x1013e0f7
// body: available
// range: 0x1013e0f7-0x1013e2f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonColorButton::CopyFrom(class CMFCRibbonBaseElement
   const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonColorButton::CopyFrom(CMFCRibbonColorButton *this,CMFCRibbonBaseElement *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  CMFCRibbonGallery::CopyFrom((CMFCRibbonGallery *)this,param_1);
  iVar2 = FUN_1004e58b(&PTR_s_CMFCRibbonColorButton_101d0798);
  if (iVar2 != 0) {
    *(undefined4 *)(this + 0x378) = *(undefined4 *)(param_1 + 0x378);
    iVar2 = 0;
    *(undefined4 *)(this + 0x380) = *(undefined4 *)(param_1 + 0x380);
    FUN_1017250c(0,0xffffffff);
    FUN_1017250c(0,0xffffffff);
    FUN_1017250c(0,0xffffffff);
    if (0 < *(int *)(param_1 + 0x38c)) {
      iVar4 = 0;
      do {
        puVar3 = (undefined4 *)FUN_10151a1d(iVar4);
        FUN_10100265(*(undefined4 *)(this + 0x38c),*puVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x38c));
    }
    if (0 < *(int *)(param_1 + 0x3a0)) {
      iVar4 = 0;
      do {
        puVar3 = (undefined4 *)FUN_10151a1d(iVar4);
        FUN_10100265(*(undefined4 *)(this + 0x3a0),*puVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x3a0));
    }
    if (0 < *(int *)(param_1 + 0x3b4)) {
      do {
        puVar3 = (undefined4 *)FUN_10151a1d(iVar2);
        FUN_10100265(*(undefined4 *)(this + 0x3b4),*puVar3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x3b4));
    }
    *(undefined4 *)(this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
    *(undefined4 *)(this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
    *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
    *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
    FUN_10034940(param_1 + 0x3d8);
    FUN_10034940(param_1 + 0x3dc);
    FUN_10034940(param_1 + 0x3e0);
    FUN_10034940(param_1 + 0x3e4);
    FUN_10034940(param_1 + 1000);
    *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(this + 0x3f4) = *(undefined4 *)(param_1 + 0x3f4);
    *(undefined4 *)(this + 0x3f8) = *(undefined4 *)(param_1 + 0x3f8);
    *(undefined4 *)(this + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
    uVar1 = *(undefined4 *)(param_1 + 600);
    *(undefined4 *)(this + 0x254) = *(undefined4 *)(param_1 + 0x254);
    *(undefined4 *)(this + 600) = uVar1;
  }
  return;
}

