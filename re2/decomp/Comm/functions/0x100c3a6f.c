// rea decompile_all
// name: CBaseTabbedPane::SaveSiblingBarIDs
// address: 0x100c3a6f
// body: available
// range: 0x100c3a6f-0x100c3b0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CBaseTabbedPane::SaveSiblingBarIDs(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CBaseTabbedPane::SaveSiblingBarIDs(CBaseTabbedPane *this,CArchive *param_1)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  int iVar4;
  int local_8;
  
  if (((~*(uint *)(param_1 + 0x18) & 1) != 0) && (*(int **)(this + 0x370) != (int *)0x0)) {
    pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1ac);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (0 < iVar2) {
      FUN_1001b086(iVar2);
      local_8 = 0;
      if (0 < iVar2) {
        do {
          pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1b0);
          guard_check_icall(local_8);
          pCVar3 = (CObject *)(*pcVar1)();
          pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101874c4,pCVar3);
          iVar4 = CWnd::GetDlgCtrlID((CWnd *)pCVar3);
          FUN_1001b086(iVar4);
          local_8 = local_8 + 1;
        } while (local_8 < iVar2);
      }
    }
  }
  return;
}

