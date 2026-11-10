// rea decompile_all
// name: CMFCRibbonGallery::SelectItem
// address: 0x507bb3
// body: available
// range: 0x507bb3-0x507c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCRibbonGallery::SelectItem(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonGallery::SelectItem(CMFCRibbonGallery *this,int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  CObject *pCVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  *(int *)(this + 0x344) = param_1;
  if (0 < *(int *)(this + 0x1cc)) {
    do {
      puVar3 = (undefined4 *)FUN_004ab4cd(iVar6);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_005c9d90,
                                  (CObject *)*puVar3);
      if (pCVar4 != (CObject *)0x0) {
        if (*(int *)(pCVar4 + 0xd8) != 0) {
          *(undefined4 *)(pCVar4 + 0xd8) = 0;
        }
        if (iVar5 == param_1) {
          *(undefined4 *)(pCVar4 + 0xd8) = 1;
        }
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(this + 0x1cc));
  }
  iVar5 = *(int *)(this + 0x32c);
  if (iVar5 == 0) {
    iVar5 = *(int *)(this + 0xa4);
  }
  uVar1 = *(undefined4 *)(this + 0x344);
  puVar3 = (undefined4 *)FUN_00489126(iVar5);
  *puVar3 = uVar1;
  pcVar2 = *(code **)(*(int *)this + 0x1b8);
  guard_check_icall();
  (*pcVar2)();
  return;
}

