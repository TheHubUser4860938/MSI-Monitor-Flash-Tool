// rea decompile_all
// name: CFrameWnd::DestroyDockBars
// address: 0x100bc16d
// body: available
// range: 0x100bc16d-0x100bc29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bc23a to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CFrameWnd::DestroyDockBars(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWnd::DestroyDockBars(CFrameWnd *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  CFrameWnd *pCVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  CList<HWND__*,HWND__*> *this_00;
  code *pcVar7;
  undefined4 *puVar8;
  undefined **local_4c;
  undefined4 *local_48;
  undefined **local_30;
  undefined4 *local_2c;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x100bc179;
  CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>((CList<HWND__*,HWND__*> *)&local_4c,10);
  local_8 = 0;
  CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>((CList<HWND__*,HWND__*> *)&local_30,10);
  local_14[0] = *(int *)(this + 0xb4);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar8 = local_48;
  while (local_14[0] != 0) {
    local_48 = puVar8;
    piVar2 = (int *)FUN_100c321b(local_14);
    piVar2 = (int *)*piVar2;
    pcVar7 = *(code **)(*piVar2 + 0x198);
    guard_check_icall();
    iVar3 = (*pcVar7)();
    this_00 = (CList<HWND__*,HWND__*> *)&local_4c;
    if (iVar3 == 0) {
      this_00 = (CList<HWND__*,HWND__*> *)&local_30;
    }
    CList<HWND__*,HWND__*>::AddTail(this_00,(HWND__ *)piVar2[8]);
    puVar8 = local_48;
  }
  do {
    do {
      if (puVar8 == (undefined4 *)0x0) {
        while (local_2c != (undefined4 *)0x0) {
          puVar8 = (undefined4 *)*local_2c;
          pCVar5 = CWnd::FromHandlePermanent((HWND__ *)local_2c[2]);
          pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CControlBar_101e363c,(CObject *)pCVar5
                                     );
          local_2c = puVar8;
          if (pCVar6 != (CObject *)0x0) {
            pcVar7 = *(code **)(*(int *)pCVar6 + 0x60);
            guard_check_icall();
            (*pcVar7)();
          }
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        local_30 = CList<HWND__*,HWND__*>::vftable;
        CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_30);
        local_8 = 3;
        local_4c = CList<HWND__*,HWND__*>::vftable;
        CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_4c);
        return;
      }
      puVar1 = puVar8 + 2;
      puVar8 = (undefined4 *)*puVar8;
      pCVar5 = CWnd::FromHandlePermanent((HWND__ *)*puVar1);
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockBar_101f3be0,(CObject *)pCVar5);
    } while (pCVar6 == (CObject *)0x0);
    if (*(int *)(pCVar6 + 200) == 0) {
      pcVar7 = *(code **)(*(int *)pCVar6 + 0x60);
    }
    else {
      pCVar4 = CWnd::GetParentFrame((CWnd *)pCVar6);
      if (pCVar4 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      pcVar7 = *(code **)(*(int *)pCVar4 + 0x60);
    }
    guard_check_icall();
    (*pcVar7)();
  } while( true );
}

