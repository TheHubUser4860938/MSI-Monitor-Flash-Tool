// rea decompile_all
// name: CPaneFrameWnd::AddRemovePaneFromGlobalList
// address: 0x100dab4a
// body: available
// range: 0x100dab4a-0x100dac27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __stdcall CPaneFrameWnd::AddRemovePaneFromGlobalList(class CBasePane *,int)
   
   Library: Visual Studio 2015 Release */

int CPaneFrameWnd::AddRemovePaneFromGlobalList(CBasePane *param_1,int param_2)

{
  code *pcVar1;
  CWnd *pCVar2;
  undefined4 *puVar3;
  int iVar4;
  CObject *pCVar5;
  CWnd *pCVar6;
  undefined4 uVar7;
  int iVar8;
  
  pCVar2 = (CWnd *)CWnd::GetDlgCtrlID((CWnd *)param_1);
  if (pCVar2 == (CWnd *)0xffffffff) {
    iVar4 = FUN_1004e58b(&PTR_s_CBaseTabbedPane_101c7908);
    if (iVar4 == 0) {
      return 0;
    }
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101c7908,(CObject *)param_1)
    ;
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x3a4);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    iVar8 = 0;
    if (0 < iVar4) {
      do {
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x3cc);
        guard_check_icall(iVar8,1);
        pCVar2 = (CWnd *)(*pcVar1)();
        pCVar6 = (CWnd *)CWnd::GetDlgCtrlID(pCVar2);
        if (pCVar6 != (CWnd *)0xffffffff) {
          if (param_2 == 0) {
            CMap<CWnd*,CWnd*,CImageList*,CImageList*>::RemoveKey
                      ((CMap<CWnd*,CWnd*,CImageList*,CImageList*> *)&PTR_vftable_10205d14,pCVar6);
          }
          else {
            uVar7 = 0;
            if (pCVar2 != (CWnd *)0x0) {
              uVar7 = *(undefined4 *)(pCVar2 + 0x20);
            }
            puVar3 = (undefined4 *)FUN_100c5589(pCVar6);
            *puVar3 = uVar7;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar4);
    }
  }
  else if (param_2 == 0) {
    CMap<CWnd*,CWnd*,CImageList*,CImageList*>::RemoveKey
              ((CMap<CWnd*,CWnd*,CImageList*,CImageList*> *)&PTR_vftable_10205d14,pCVar2);
  }
  else {
    uVar7 = 0;
    if (param_1 != (CBasePane *)0x0) {
      uVar7 = *(undefined4 *)(param_1 + 0x20);
    }
    puVar3 = (undefined4 *)FUN_100c5589(pCVar2);
    *puVar3 = uVar7;
  }
  return 1;
}

