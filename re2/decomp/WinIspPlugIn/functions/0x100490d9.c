// rea decompile_all
// name: _InternalDllMain@12
// address: 0x100490d9
// body: available
// range: 0x100490d9-0x100491a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _InternalDllMain@12
   
   Library: Visual Studio 2015 Release */

undefined4 _InternalDllMain_12(HINSTANCE__ *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  AFX_MODULE_STATE *pAVar4;
  undefined4 uVar5;
  
  if (param_2 == 1) {
    uVar5 = 0;
    iVar3 = AfxWinInit(param_1,0,&PTR_1020e6b0,0);
    if (iVar3 == 0) {
      AfxWinTerm();
    }
    else {
      pAVar4 = AfxGetModuleState();
      piVar1 = *(int **)(pAVar4 + 4);
      if (piVar1 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar1 + 0x50);
        guard_check_icall();
        iVar3 = (*pcVar2)();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piVar1 + 0x68);
          guard_check_icall();
          (*pcVar2)();
          AfxWinTerm();
          return 0;
        }
      }
      AfxInitLocalData(param_1);
      uVar5 = 1;
    }
  }
  else {
    if (param_2 == 0) {
      pAVar4 = AfxGetModuleState();
      if (*(int **)(pAVar4 + 4) != (int *)0x0) {
        pcVar2 = *(code **)(**(int **)(pAVar4 + 4) + 0x68);
        guard_check_icall();
        (*pcVar2)();
      }
      FUN_10050a07();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermLocalData(param_1,1);
    }
    else if (param_2 == 3) {
      FUN_10050a07();
      AfxUnlockTempMaps(-1);
      FUN_1004e299(param_1);
    }
    uVar5 = 1;
  }
  return uVar5;
}

