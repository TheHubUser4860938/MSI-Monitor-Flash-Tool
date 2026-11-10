// rea decompile_all
// name: CBaseTabbedPane::GetPaneList
// address: 0x100ce900
// body: available
// range: 0x100ce900-0x100ce9aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CBaseTabbedPane::GetPaneList(class CObList &,struct
   CRuntimeClass *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CBaseTabbedPane::GetPaneList(CBaseTabbedPane *this,CObList *param_1,CRuntimeClass *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  CObject *pCVar4;
  CRuntimeClass *pCVar5;
  int local_8;
  
  pcVar1 = *(code **)(*(int *)this + 0x3a0);
  guard_check_icall();
  piVar2 = (int *)(*pcVar1)();
  local_8 = 0;
  pcVar1 = *(code **)(*piVar2 + 0x1ac);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (0 < iVar3) {
    do {
      pcVar1 = *(code **)(*piVar2 + 0x1b0);
      iVar3 = local_8;
      guard_check_icall(local_8);
      pCVar4 = (CObject *)(*pcVar1)();
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,pCVar4);
      if (pCVar4 != (CObject *)0x0) {
        if (param_2 != (CRuntimeClass *)0x0) {
          pcVar1 = (code *)**(undefined4 **)pCVar4;
          guard_check_icall(iVar3);
          pCVar5 = (CRuntimeClass *)(*pcVar1)();
          if (pCVar5 != param_2) goto LAB_100ce984;
        }
        CObList::AddTail(param_1,pCVar4);
      }
LAB_100ce984:
      local_8 = local_8 + 1;
      pcVar1 = *(code **)(*piVar2 + 0x1ac);
      guard_check_icall(iVar3);
      iVar3 = (*pcVar1)();
    } while (local_8 < iVar3);
  }
  return;
}

