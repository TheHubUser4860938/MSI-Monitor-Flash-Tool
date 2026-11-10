// rea decompile_all
// name: CMFCRibbonPanel::GetLastTabStop
// address: 0x100d0de4
// body: available
// range: 0x100d0de4-0x100d0eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CMFCRibbonBaseElement * __thiscall CMFCRibbonPanel::GetLastTabStop(void)const 
   
   Library: Visual Studio 2015 Release */

CMFCRibbonBaseElement * __thiscall CMFCRibbonPanel::GetLastTabStop(CMFCRibbonPanel *this)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  CMFCRibbonBaseElement *pCVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*(int *)(this + 0x110) == 0) {
LAB_100d0eaa:
    iVar7 = *(int *)(this + 0x4e4);
    do {
      iVar7 = iVar7 + -1;
      if (iVar7 < 0) {
        return (CMFCRibbonBaseElement *)0x0;
      }
      puVar6 = (undefined4 *)FUN_100d7168(iVar7);
      pcVar1 = *(code **)(*(int *)*puVar6 + 0x20c);
      guard_check_icall();
      pCVar5 = (CMFCRibbonBaseElement *)(*pcVar1)();
    } while (pCVar5 == (CMFCRibbonBaseElement *)0x0);
  }
  else {
    iVar7 = *(int *)(this + 0x4e4);
    do {
      do {
        iVar7 = iVar7 + -1;
        if (iVar7 < 0) {
          iVar7 = *(int *)(this + 0x4e4);
          while (iVar7 = iVar7 + -1, -1 < iVar7) {
            puVar6 = (undefined4 *)FUN_100d7168(iVar7);
            piVar2 = (int *)*puVar6;
            iVar3 = FUN_10019d4f(&PTR_s_CMFCRibbonGalleryIcon_1019f0a8);
            if (iVar3 != 0) {
              pcVar1 = *(code **)(*piVar2 + 0x208);
              guard_check_icall();
              pCVar5 = (CMFCRibbonBaseElement *)(*pcVar1)();
              if (pCVar5 != (CMFCRibbonBaseElement *)0x0) {
                return pCVar5;
              }
            }
          }
          goto LAB_100d0eaa;
        }
        piVar2 = (int *)FUN_100d7168(iVar7);
        piVar2 = (int *)*piVar2;
        iVar3 = FUN_10019d4f(&PTR_s_CMFCRibbonLabel_101a38d8);
        iVar4 = FUN_10019d4f(&PTR_s_CMFCRibbonGalleryIcon_1019f0a8);
      } while (((iVar4 != 0) || (iVar3 != 0)) || (piVar2[0x3e] != 0));
      pcVar1 = *(code **)(*piVar2 + 0x208);
      guard_check_icall();
      pCVar5 = (CMFCRibbonBaseElement *)(*pcVar1)();
    } while (pCVar5 == (CMFCRibbonBaseElement *)0x0);
  }
  return pCVar5;
}

