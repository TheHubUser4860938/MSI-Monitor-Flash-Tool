// rea decompile_all
// name: CMFCRibbonButton::SetParentCategory
// address: 0x100cf44a
// body: available
// range: 0x100cf44a-0x100cf4dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonButton::SetParentCategory(class CMFCRibbonCategory *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonButton::SetParentCategory(CMFCRibbonButton *this,CMFCRibbonCategory *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  CMFCRibbonBaseElement::SetParentCategory((CMFCRibbonBaseElement *)this,param_1);
  iVar4 = 0;
  if (0 < *(int *)(this + 0x1b8)) {
    do {
      piVar2 = (int *)FUN_100d7168(iVar4);
      piVar2 = (int *)*piVar2;
      pcVar1 = *(code **)(*piVar2 + 0x164);
      guard_check_icall(*(undefined4 *)(this + 0x88));
      (*pcVar1)();
      if (DAT_101dcc64 == 0) {
        pcVar1 = *(code **)(*piVar2 + 0x104);
        guard_check_icall();
        iVar3 = (*pcVar1)();
        if (iVar3 != 0) goto LAB_100cf4bb;
        iVar3 = 1;
      }
      else {
LAB_100cf4bb:
        iVar3 = 0;
      }
      iVar4 = iVar4 + 1;
      piVar2[0x3b] = iVar3;
    } while (iVar4 < *(int *)(this + 0x1b8));
  }
  return;
}

