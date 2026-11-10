// rea decompile_all
// name: CMFCVisualManager::OnDrawTasksGroupIcon
// address: 0x10065bd5
// body: available
// range: 0x10065bd5-0x10065c7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTasksGroupIcon(class CDC *,class
   CMFCTasksPaneTaskGroup *,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawTasksGroupIcon
          (CMFCVisualManager *this,CDC *param_1,CMFCTasksPaneTaskGroup *param_2,int param_3,
          int param_4,int param_5,int param_6)

{
  int iVar1;
  HDC hdc;
  int iVar2;
  int iVar3;
  
  if (*(HICON *)(param_2 + 0x5c) != (HICON)0x0) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 4) + 8) + 0x3c0);
    if (iVar2 == -1) {
      iVar2 = *(int *)(this + 0x94);
    }
    iVar3 = param_3 / 2;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    iVar1 = *(int *)(param_2 + 0x40) - *(int *)(param_2 + 0x58);
    iVar2 = (iVar1 - (*(int *)(param_2 + 0x38) + iVar2)) / 2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (param_1 == (CDC *)0x0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(param_1 + 4);
    }
    DrawIconEx(hdc,*(int *)(param_2 + 0x34) + iVar3,iVar1 - iVar2,*(HICON *)(param_2 + 0x5c),
               *(int *)(param_2 + 0x54),*(int *)(param_2 + 0x58),0,(HBRUSH)0x0,3);
  }
  return;
}

