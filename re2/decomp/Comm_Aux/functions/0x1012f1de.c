// rea decompile_all
// name: FUN_1012f1de
// address: 0x1012f1de
// body: available
// range: 0x1012f1de-0x1012f2cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012f2cb to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_1012f1de(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  CObject *pCVar4;
  HWND pHVar5;
  CWnd *in_ECX;
  UINT uCmd;
  CObList local_2c [4];
  undefined4 *local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1012f1ea;
  if (param_1 == (int *)0x0) {
    CObList::CObList(local_2c,10);
    local_8 = 0;
    uCmd = 5;
    while( true ) {
      pHVar5 = GetWindow(*(HWND *)(in_ECX + 0x20),uCmd);
      in_ECX = CWnd::FromHandle(pHVar5);
      if (in_ECX == (CWnd *)0x0) break;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101c65bc,(CObject *)in_ECX)
      ;
      if (pCVar4 != (CObject *)0x0) {
        CObList::AddTail(local_2c,pCVar4);
      }
      uCmd = 2;
    }
    while (local_28 != (undefined4 *)0x0) {
      if (local_28 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
      puVar2 = (undefined4 *)*local_28;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101c65bc,
                                  (CObject *)local_28[2]);
      SendMessageW(*(HWND *)(pCVar4 + 0x20),0x10,0,0);
      local_28 = puVar2;
    }
    CObList::~CObList(local_2c);
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x1ac);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      pcVar1 = *(code **)(*param_1 + 0x1b0);
      guard_check_icall(iVar3);
      pCVar4 = (CObject *)(*pcVar1)();
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101c65bc,pCVar4);
      if (pCVar4 != (CObject *)0x0) {
        SendMessageW(*(HWND *)(pCVar4 + 0x20),0x10,0,0);
      }
    }
  }
  return;
}

