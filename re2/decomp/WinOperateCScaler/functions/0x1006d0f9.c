// rea decompile_all
// name: CMFCToolBar::OnHelpHitTest
// address: 0x1006d0f9
// body: available
// range: 0x1006d0f9-0x1006d1c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMFCToolBar::OnHelpHitTest(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CMFCToolBar::OnHelpHitTest(CMFCToolBar *this,uint param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  long lVar4;
  
  FUN_1006bee9();
  pcVar1 = *(code **)(*(int *)this + 0x390);
  guard_check_icall((int)(short)param_2,(int)(short)((uint)param_2 >> 0x10));
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    MessageBeep(0xffffffff);
  }
  else {
    pCVar3 = (CObject *)FUN_1006a5a5(iVar2);
    if (pCVar3 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 100);
      guard_check_icall(this);
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        lVar4 = CBasePane::OnHelpHitTest((CBasePane *)this,param_1,param_2);
        if (*(int *)(pCVar3 + 0x20) - 0xf000U < 0x1f0) {
          lVar4 = (*(int *)(pCVar3 + 0x20) - 0xf000U >> 4) + 0x1ef00;
        }
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButtonsButton_101c4d68,
                                    pCVar3);
        if (pCVar3 != (CObject *)0x0) {
          lVar4 = (*(int *)(pCVar3 + 0x70) - 0xf000U >> 4) + 0x1ef00;
        }
        if (lVar4 < 1) {
          return lVar4;
        }
        FUN_10070eb8(0);
        return lVar4;
      }
    }
  }
  return -1;
}

