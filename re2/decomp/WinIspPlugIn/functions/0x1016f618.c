// rea decompile_all
// name: CMFCToolBarsToolsPropertyPage::CreateNewTool
// address: 0x1016f618
// body: available
// range: 0x1016f618-0x1016f67d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: class CUserTool * __thiscall CMFCToolBarsToolsPropertyPage::CreateNewTool(void)
   
   Library: Visual Studio 2015 Release */

CUserTool * __thiscall
CMFCToolBarsToolsPropertyPage::CreateNewTool(CMFCToolBarsToolsPropertyPage *this)

{
  undefined4 uVar1;
  CUserTool *pCVar2;
  int iVar3;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1016f624;
  iVar3 = (*(int *)(DAT_10247680 + 0x28) - *(int *)(DAT_10247680 + 0x24)) + 1;
  if (*(int *)(DAT_10247680 + 0x10) == iVar3) {
    uVar1 = FUN_10049868();
    FUN_100476a0(uVar1);
    local_8 = 0;
    FUN_10096310(local_14,0x3e98,iVar3);
    AfxMessageBox(local_14[0],0,0);
    FUN_100476d0();
    pCVar2 = (CUserTool *)0x0;
  }
  else {
    pCVar2 = CUserToolsManager::CreateNewTool(DAT_10247680);
  }
  return pCVar2;
}

