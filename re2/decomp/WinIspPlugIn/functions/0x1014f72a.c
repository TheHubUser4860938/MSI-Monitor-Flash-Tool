// rea decompile_all
// name: CMFCRibbonGallery::OnClickPaletteIcon
// address: 0x1014f72a
// body: available
// range: 0x1014f72a-0x1014f885 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonGallery::OnClickPaletteIcon(class
   CMFCRibbonGalleryIcon *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonGallery::OnClickPaletteIcon(CMFCRibbonGallery *this,CMFCRibbonGalleryIcon *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  CObject *pCVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  iVar8 = *(int *)(param_1 + 0x1c8);
  if (iVar8 != -3) {
    if (iVar8 == -2) {
      iVar8 = *(int *)(this + 0x340);
      if (*(int *)(this + 0x33c) + 1 <= *(int *)(this + 0x340)) {
        iVar8 = *(int *)(this + 0x33c) + 1;
      }
    }
    else {
      if (iVar8 != -1) {
        local_8 = 0;
        iVar8 = 0;
        if (0 < *(int *)(this + 0x1cc)) {
          do {
            puVar3 = (undefined4 *)FUN_100efaed(iVar8);
            pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_101f6198,
                                        (CObject *)*puVar3);
            if (pCVar4 != (CObject *)0x0) {
              if (*(int *)(pCVar4 + 0xd8) != 0) {
                *(undefined4 *)(pCVar4 + 0xd8) = 0;
              }
              if (pCVar4 == (CObject *)param_1) {
                *(int *)(this + 0x344) = local_8;
                *(undefined4 *)(param_1 + 0xd8) = 1;
                BVar5 = IsRectEmpty((RECT *)(param_1 + 0x74));
                if ((BVar5 != 0) && (0 < *(int *)(this + 0x330))) {
                  iVar6 = local_8 / *(int *)(this + 0x330);
                  *(int *)(this + 0x33c) = iVar6;
                  iVar7 = *(int *)(this + 0x340);
                  if (iVar6 <= *(int *)(this + 0x340)) {
                    iVar7 = iVar6;
                  }
                  *(int *)(this + 0x33c) = iVar7;
                  RebuildIconLocations(this);
                }
              }
              local_8 = local_8 + 1;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(this + 0x1cc));
        }
        pcVar1 = *(code **)(*(int *)this + 0x1b8);
        guard_check_icall();
        (*pcVar1)();
        iVar8 = *(int *)(this + 0x32c);
        if (iVar8 == 0) {
          iVar8 = *(int *)(this + 0xa4);
        }
        uVar2 = *(undefined4 *)(param_1 + 0x1c8);
        puVar3 = (undefined4 *)FUN_1009f091(iVar8);
        *puVar3 = uVar2;
        return;
      }
      iVar8 = *(int *)(this + 0x33c) + -1;
      if (*(int *)(this + 0x33c) + -1 < 0) {
        iVar8 = 0;
      }
    }
    *(int *)(this + 0x33c) = iVar8;
    RebuildIconLocations(this);
    pcVar1 = *(code **)(*(int *)this + 0x1b8);
    guard_check_icall();
    (*pcVar1)();
  }
  return;
}

