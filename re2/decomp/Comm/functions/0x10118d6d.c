// rea decompile_all
// name: CMFCRibbonGallery::OnSetFocus
// address: 0x10118d6d
// body: available
// range: 0x10118d6d-0x10118dd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonGallery::OnSetFocus(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonGallery::OnSetFocus(CMFCRibbonGallery *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  CObject *pCVar4;
  
  iVar1 = *(int *)(this + 0x1cc);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return;
    }
    puVar3 = (undefined4 *)FUN_100d7168(iVar1);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_1019f0a8,
                                (CObject *)*puVar3);
  } while ((pCVar4 == (CObject *)0x0) || (*(int *)(pCVar4 + 0x1c8) != -3));
  *(int *)(pCVar4 + 0xcc) = param_1;
  pcVar2 = *(code **)(*(int *)pCVar4 + 0x1b8);
  guard_check_icall();
  (*pcVar2)();
  return;
}

