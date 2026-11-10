// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonDefaultPaneButtonContext
// address: 0x10062a96
// body: available
// range: 0x10062a96-0x10062b3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonDefaultPaneButtonContext(class
   CDC *,class CMFCRibbonButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonDefaultPaneButtonContext
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined1 local_c [8];
  
  if (*(int *)(param_2 + 0xc4) == 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x74);
    iVar2 = *(int *)(param_2 + 0x78);
    uVar3 = *(undefined4 *)(param_2 + 0x7c);
    pcVar4 = *(code **)(*(int *)param_2 + 0x114);
    guard_check_icall(local_c,1);
    iVar5 = (*pcVar4)();
    pcVar4 = *(code **)(*(int *)param_2 + 0x120);
    guard_check_icall(param_1,1,uVar1,iVar2 + 10,uVar3,*(int *)(iVar5 + 4) + iVar2 + 10);
    (*pcVar4)();
    FUN_100d6da1(local_c,param_1,0);
  }
  else {
    pcVar4 = *(code **)(*(int *)param_2 + 0x120);
    guard_check_icall(param_1,1,*(undefined4 *)(param_2 + 0x74),*(undefined4 *)(param_2 + 0x78),
                      *(undefined4 *)(param_2 + 0x7c),*(undefined4 *)(param_2 + 0x80));
    (*pcVar4)();
  }
  return;
}

