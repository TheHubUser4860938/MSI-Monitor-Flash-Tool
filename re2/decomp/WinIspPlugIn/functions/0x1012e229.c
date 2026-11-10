// rea decompile_all
// name: CDockablePane::ReplacePane
// address: 0x1012e229
// body: available
// range: 0x1012e229-0x1012e2bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDockablePane::ReplacePane(class CDockablePane *,enum
   AFX_DOCK_METHOD,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockablePane::ReplacePane
          (CDockablePane *this,CDockablePane *param_1,AFX_DOCK_METHOD param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  CPaneDivider *pCVar4;
  
  pcVar1 = *(code **)(*(int *)this + 0x228);
  guard_check_icall(0);
  piVar2 = (int *)(*pcVar1)();
  if (piVar2 == (int *)0x0) {
    if ((*(int *)(this + 0x350) != 0) &&
       (pCVar4 = GetDefaultPaneDivider(this), pCVar4 != (CPaneDivider *)0x0)) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x27c);
      guard_check_icall(this,param_1);
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        if (param_3 == 0) {
          param_1 = (CDockablePane *)0x0;
        }
        CBasePane::RemovePaneFromDockManager
                  ((CBasePane *)this,(CBasePane *)this,0,0,0,(CBasePane *)param_1);
        goto LAB_1012e263;
      }
    }
    iVar3 = 0;
  }
  else {
    pcVar1 = *(code **)(*piVar2 + 0x180);
    guard_check_icall(this,param_1);
    (*pcVar1)();
LAB_1012e263:
    iVar3 = 1;
  }
  return iVar3;
}

