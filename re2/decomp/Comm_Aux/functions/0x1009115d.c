// rea decompile_all
// name: CMFCVisualManager::SetDefaultManager
// address: 0x1009115d
// body: available
// range: 0x1009115d-0x100911df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __stdcall CMFCVisualManager::SetDefaultManager(struct CRuntimeClass *)
   
   Library: Visual Studio 2015 Release */

void CMFCVisualManager::SetDefaultManager(CRuntimeClass *param_1)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *this;
  
  if ((param_1 != (CRuntimeClass *)0x0) &&
     (iVar2 = FUN_1004e561(&PTR_s_CMFCVisualManager_101bb150), iVar2 == 0)) {
    return;
  }
  DAT_1020e4a4 = param_1;
  if (DAT_1020e4a8 != (int *)0x0) {
    pcVar1 = *(code **)(*DAT_1020e4a8 + 4);
    guard_check_icall(1);
    (*pcVar1)();
    DAT_1020e4a8 = (int *)0x0;
  }
  this = GetGlobalData();
  AFX_GLOBAL_DATA::UpdateSysColors(this);
  CDockingManager::SetDockingMode(2,0);
  CTabbedPane::ResetTabs();
  AdjustFrames();
  FUN_1008971e();
  FUN_10090f61();
  if (DAT_1020f8dc != (CTooltipManager *)0x0) {
    CTooltipManager::UpdateTooltips(DAT_1020f8dc);
  }
  return;
}

