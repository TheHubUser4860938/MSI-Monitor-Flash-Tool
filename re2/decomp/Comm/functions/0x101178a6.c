// rea decompile_all
// name: CMFCRibbonGallery::CreateIcons
// address: 0x101178a6
// body: available
// range: 0x101178a6-0x10117aa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonGallery::CreateIcons(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonGallery::CreateIcons(CMFCRibbonGallery *this)

{
  wchar_t *pwVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  CMFCRibbonLabel *this_00;
  CMFCRibbonGalleryIcon *pCVar5;
  int iVar6;
  undefined4 uVar7;
  wchar_t local_20 [2];
  int local_1c;
  wchar_t *local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x101178b2;
  uVar7 = 0;
  local_14 = 0;
  local_1c = 0;
  if (0 < *(int *)(this + 0x34c)) {
    do {
      iVar3 = local_1c;
      if (local_14 < *(int *)(this + 500)) {
        piVar2 = (int *)FUN_100d7168(local_14);
        if (iVar3 == *piVar2) {
          piVar2 = (int *)FUN_100d7168(local_14);
          iVar3 = FUN_10003060(*piVar2 + -0x10);
          local_18 = (wchar_t *)(iVar3 + 0x10);
          local_14 = local_14 + 1;
          local_8 = 0;
          if (*(int *)(iVar3 + 4) != 0) {
            uVar4 = ATL::operator+(local_20,(CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                             *)&DAT_101974f0);
            local_8._0_1_ = 1;
            FUN_100030d0(uVar4);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_10003460();
          }
          pwVar1 = local_18;
          this_00 = (CMFCRibbonLabel *)FUN_10011f7d(0x1c4);
          local_8._0_1_ = 2;
          if (this_00 == (CMFCRibbonLabel *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = CMFCRibbonLabel::CMFCRibbonLabel(this_00,pwVar1,0);
          }
          *(int *)(iVar3 + 0xa0) = iVar3;
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_100c9f11(*(undefined4 *)(this + 0x1cc),iVar3);
          local_8 = 0xffffffff;
          FUN_10003460();
          iVar3 = local_1c;
        }
      }
      pCVar5 = (CMFCRibbonGalleryIcon *)FUN_10011f7d(0x1dc);
      local_8 = 3;
      if (pCVar5 == (CMFCRibbonGalleryIcon *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar5,this,iVar3);
      }
      local_8 = 0xffffffff;
      if (iVar3 == *(int *)(this + 0x344)) {
        *(undefined4 *)(iVar6 + 0xd8) = 1;
      }
      FUN_100c9f11(*(undefined4 *)(this + 0x1cc),iVar6);
      local_1c = iVar3 + 1;
    } while (local_1c < *(int *)(this + 0x34c));
  }
  pCVar5 = (CMFCRibbonGalleryIcon *)FUN_10011f7d(0x1dc);
  local_8 = 4;
  if (pCVar5 == (CMFCRibbonGalleryIcon *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar5,this,-1);
  }
  local_8 = 0xffffffff;
  FUN_100c9f11(*(undefined4 *)(this + 0x1cc),uVar4);
  pCVar5 = (CMFCRibbonGalleryIcon *)FUN_10011f7d(0x1dc);
  local_8 = 5;
  if (pCVar5 == (CMFCRibbonGalleryIcon *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar5,this,-2);
  }
  local_8 = 0xffffffff;
  FUN_100c9f11(*(undefined4 *)(this + 0x1cc),uVar4);
  pCVar5 = (CMFCRibbonGalleryIcon *)FUN_10011f7d(0x1dc);
  local_8 = 6;
  if (pCVar5 != (CMFCRibbonGalleryIcon *)0x0) {
    uVar7 = CMFCRibbonGalleryIcon::CMFCRibbonGalleryIcon(pCVar5,this,-3);
  }
  local_8 = 0xffffffff;
  FUN_100c9f11(*(undefined4 *)(this + 0x1cc),uVar7);
  return;
}

