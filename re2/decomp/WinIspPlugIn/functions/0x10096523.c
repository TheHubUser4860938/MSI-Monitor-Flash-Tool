// rea decompile_all
// name: CMFCToolBar::GetDroppedDownMenu
// address: 0x10096523
// body: available
// range: 0x10096523-0x100965ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCToolBarMenuButton * __thiscall CMFCToolBar::GetDroppedDownMenu(int *)const 
   
   Library: Visual Studio 2015 Release */

CMFCToolBarMenuButton * __thiscall CMFCToolBar::GetDroppedDownMenu(CMFCToolBar *this,int *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar4 = 0;
  if (*(int *)(this + 0xc48) != 0) {
    local_8 = *(int *)(this + 0xc40);
    while (local_8 != 0) {
      pCVar2 = (CObject *)FUN_10096856(&local_8);
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_1023d9fc,pCVar2);
      if (pCVar2 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x70);
        guard_check_icall();
        iVar3 = (*pcVar1)();
        if (iVar3 != 0) {
          if (param_1 != (int *)0x0) {
            *param_1 = iVar4;
            return (CMFCToolBarMenuButton *)pCVar2;
          }
          return (CMFCToolBarMenuButton *)pCVar2;
        }
      }
      iVar4 = iVar4 + 1;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = -1;
    }
  }
  return (CMFCToolBarMenuButton *)0x0;
}

