// rea decompile_all
// name: CMFCRibbonGallery::CreateIcons
// address: 0x1014e8ea
// body: available
// range: 0x1014e8ea-0x1014eae6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonGallery::CreateIcons(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonGallery::CreateIcons(CMFCRibbonGallery *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  CMFCRibbonGalleryIcon *pCVar5;
  undefined4 uVar6;
  wchar_t local_20 [2];
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1014e8f6;
  uVar6 = 0;
  local_14 = 0;
  local_1c = 0;
  if (0 < *(int *)(this + 0x34c)) {
    do {
      iVar2 = local_1c;
      if (local_14 < *(int *)(this + 500)) {
        piVar1 = (int *)FUN_100efaed(local_14);
        if (iVar2 == *piVar1) {
          piVar1 = (int *)FUN_100efaed(local_14);
          iVar2 = FUN_10047580(*piVar1 + -0x10);
          local_18 = iVar2 + 0x10;
          local_14 = local_14 + 1;
          local_8 = 0;
          if (*(int *)(iVar2 + 4) != 0) {
            uVar3 = ATL::operator+(local_20,(CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                             *)&DAT_101ee5e0);
            local_8._0_1_ = 1;
            FUN_100475f0(uVar3);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_100476d0();
          }
          iVar2 = local_18;
          iVar4 = FUN_100491ae(0x1c4);
          local_8._0_1_ = 2;
          if (iVar4 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = CMFCRibbonLabel(iVar2,0);
          }
          *(int *)(iVar2 + 0xa0) = iVar2;
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_101010f9(*(undefined4 *)(this + 0x1cc),iVar2);
          local_8 = 0xffffffff;
          FUN_100476d0();
          iVar2 = local_1c;
        }
      }
      pCVar5 = (CMFCRibbonGalleryIcon *)FUN_100491ae(0x1dc);
      local_8 = 3;
      if (pCVar5 == (CMFCRibbonGalleryIcon *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar5,this,iVar2);
      }
      local_8 = 0xffffffff;
      if (iVar2 == *(int *)(this + 0x344)) {
        *(undefined4 *)(iVar4 + 0xd8) = 1;
      }
      FUN_101010f9(*(undefined4 *)(this + 0x1cc),iVar4);
      local_1c = iVar2 + 1;
    } while (local_1c < *(int *)(this + 0x34c));
  }
  pCVar5 = (CMFCRibbonGalleryIcon *)FUN_100491ae(0x1dc);
  local_8 = 4;
  if (pCVar5 == (CMFCRibbonGalleryIcon *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar5,this,-1);
  }
  local_8 = 0xffffffff;
  FUN_101010f9(*(undefined4 *)(this + 0x1cc),uVar3);
  pCVar5 = (CMFCRibbonGalleryIcon *)FUN_100491ae(0x1dc);
  local_8 = 5;
  if (pCVar5 == (CMFCRibbonGalleryIcon *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar5,this,-2);
  }
  local_8 = 0xffffffff;
  FUN_101010f9(*(undefined4 *)(this + 0x1cc),uVar3);
  pCVar5 = (CMFCRibbonGalleryIcon *)FUN_100491ae(0x1dc);
  local_8 = 6;
  if (pCVar5 != (CMFCRibbonGalleryIcon *)0x0) {
    uVar6 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar5,this,-3);
  }
  local_8 = 0xffffffff;
  FUN_101010f9(*(undefined4 *)(this + 0x1cc),uVar6);
  return;
}

