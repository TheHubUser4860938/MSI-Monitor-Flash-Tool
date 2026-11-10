// rea decompile_all
// name: FUN_1002cc69
// address: 0x1002cc69
// body: available
// range: 0x1002cc69-0x1002cda9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002cda5 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1002cc69(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  _AFX_THREAD_STATE *p_Var2;
  int iVar3;
  int iVar4;
  HGLOBAL hMem;
  undefined4 *puVar5;
  BOOL BVar6;
  int *in_ECX;
  
  if ((~((uint)in_ECX[0x21] >> 0xe) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  p_Var2 = AfxGetThreadState();
  if (param_2 == -1) {
    *(undefined4 *)(p_Var2 + 0x1c) = 0x90c020c4;
    if ((in_ECX[0x21] & 0x1000020U) == 0) {
      *(undefined4 *)(p_Var2 + 0x1c) = 0x90c820c4;
    }
  }
  else {
    *(int *)(p_Var2 + 0x1c) = param_2;
  }
  *(undefined4 *)(p_Var2 + 0x20) = param_3;
  AfxEndDeferRegisterClass(0x10);
  AfxEndDeferRegisterClass(0xfc000);
  FUN_1001bde4();
  pcVar1 = *(code **)(*in_ECX + 0x170);
  guard_check_icall();
  (*pcVar1)();
  in_ECX[0x21] = in_ECX[0x21] | 0x500;
  in_ECX[0x35] = 1;
  in_ECX[0x29] = (int)AfxPropSheetCallback;
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  in_ECX[0x22] = iVar3;
  FUN_1001bd03(in_ECX);
  iVar3 = _IsolationAwarePropertySheetW_4(in_ECX + 0x20);
  if (iVar3 != -1) {
    iVar4 = FUN_1001c053();
    if (iVar4 == 0) {
      pcVar1 = *(code **)(*in_ECX + 0x120);
      guard_check_icall();
      (*pcVar1)();
    }
    hMem = GlobalAlloc(0x40,4);
    puVar5 = GlobalLock(hMem);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 1;
      GlobalUnlock(hMem);
      BVar6 = SetPropW((HWND)in_ECX[8],(LPCWSTR)PTR_u_AfxClosePending_101d34ac,hMem);
      if (BVar6 != 0) {
        return iVar3 != 0;
      }
      GlobalFree(hMem);
    }
    pcVar1 = *(code **)(*in_ECX + 0x60);
    guard_check_icall();
    (*pcVar1)();
  }
  return false;
}

