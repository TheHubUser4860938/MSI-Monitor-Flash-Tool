// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::SetFrameCustMode
// address: 0x10121fa1
// body: available
// range: 0x10121fa1-0x101221da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsCustomizeDialog::SetFrameCustMode(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsCustomizeDialog::SetFrameCustMode(CMFCToolBarsCustomizeDialog *this,int param_1)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  HWND pHVar3;
  CWnd *this_00;
  CObject *pCVar4;
  CObject *pCVar5;
  int iVar6;
  UINT uCmd;
  int local_18;
  CWaitCursor local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10121fad;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  local_8 = 0;
  uCmd = 5;
  pHVar3 = *(HWND *)(*(int *)(this + 0x154) + 0x20);
  while( true ) {
    pHVar3 = GetWindow(pHVar3,uCmd);
    this_00 = CWnd::FromHandle(pHVar3);
    if (this_00 == (CWnd *)0x0) break;
    pcVar1 = (code *)**(undefined4 **)this_00;
    guard_check_icall();
    iVar6 = (*pcVar1)();
    if ((iVar6 == 0) ||
       ((((iVar6 = FUN_1004e561(&PTR_s_CDockBar_101cfc68), iVar6 == 0 &&
          (iVar6 = FUN_1004e561(&PTR_s_CDockSite_101c864c), iVar6 == 0)) &&
         (iVar6 = FUN_1004e561(&PTR_s_CMFCOutlookBar_10205ad8), iVar6 == 0)) &&
        ((iVar6 = FUN_1004e561(&PTR_s_CMFCReBar_101c8a14), iVar6 == 0 &&
         (iVar6 = FUN_1004e561(&PTR_s_CMFCToolBar_10205ab0), iVar6 == 0)))))) {
      CWnd::EnableWindow(this_00,(uint)(param_1 == 0));
    }
    uCmd = 2;
    pHVar3 = *(HWND *)(this_00 + 0x20);
  }
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101c56b8,
                              *(CObject **)(this + 0x154));
  if (pCVar4 == (CObject *)0x0) {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_101c5128,
                                *(CObject **)(this + 0x154));
    if (pCVar4 == (CObject *)0x0) {
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_101c5cc8,
                                  *(CObject **)(this + 0x154));
      if (pCVar4 == (CObject *)0x0) {
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101c6080,
                                    *(CObject **)(this + 0x154));
        if (pCVar4 == (CObject *)0x0) goto LAB_10122147;
        pCVar4 = pCVar4 + 0x2a8;
      }
      else {
        pCVar4 = pCVar4 + 0x2ac;
      }
    }
    else {
      pCVar4 = pCVar4 + 0x238;
    }
  }
  else {
    pCVar4 = pCVar4 + 0x160;
  }
  if (pCVar4 != (CObject *)0x0) {
    local_18 = *(int *)(pCVar4 + 0xcc);
    while (local_18 != 0) {
      pCVar4 = (CObject *)FUN_10094d55(&local_18);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_10205d4c,pCVar4);
      if (pCVar4 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x1a8);
        guard_check_icall();
        pCVar5 = (CObject *)(*pcVar1)();
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseToolBar_101bb650,pCVar5);
        if (pCVar5 == (CObject *)0x0) {
          CWnd::EnableWindow((CWnd *)pCVar4,(uint)(param_1 == 0));
        }
      }
    }
  }
LAB_10122147:
  LockWindowUpdate(*(HWND *)(*(int *)(this + 0x154) + 0x20));
  FUN_1009b08c(param_1);
  SendMessageW(*(HWND *)(*(int *)(this + 0x154) + 0x20),DAT_1020e538,param_1,0);
  LockWindowUpdate((HWND)0x0);
  if (param_1 == 0) {
    pcVar1 = *(code **)(**(int **)(this + 0x154) + 0x170);
    guard_check_icall();
    iVar6 = (*pcVar1)();
    if (iVar6 != 0) {
      pcVar1 = *(code **)(**(int **)(this + 0x154) + 0x170);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      PostMessageW(*(HWND *)(iVar6 + 0x20),7,0,0);
    }
  }
  CWaitCursor::~CWaitCursor(local_11);
  return;
}

