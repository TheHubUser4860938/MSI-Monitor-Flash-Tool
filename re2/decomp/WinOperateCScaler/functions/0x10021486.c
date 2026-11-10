// rea decompile_all
// name: FUN_10021486
// address: 0x10021486
// body: available
// range: 0x10021486-0x100215c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100215bd to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10021486(int param_1,tagMSG *param_2)

{
  code *pcVar1;
  CWnd *pCVar2;
  CFrameWnd *this;
  int iVar3;
  CNoTrackObject *pCVar4;
  int *in_ECX;
  undefined4 *puVar5;
  undefined4 local_24 [7];
  int *local_8;
  
  if (param_2 == (tagMSG *)0x0) {
    return 0;
  }
  local_8 = in_ECX;
  if (param_1 != 0) {
    if (param_1 != 2) {
      return 0;
    }
    pCVar2 = CWnd::FromHandle(param_2->hwnd);
    if (((((pCVar2 != (CWnd *)0x0) &&
          (this = CWnd::GetTopLevelFrame(pCVar2), this != (CFrameWnd *)0x0)) &&
         (iVar3 = CFrameWnd::IsTracking(this), iVar3 != 0)) &&
        ((*(int *)(this + 0x94) != 0 && (pCVar2 = AfxGetMainWnd(), in_ECX[8] != 0)))) &&
       ((iVar3 = IsEnterKey(param_2), iVar3 != 0 || (param_2->message == 0x202)))) {
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x111,0xe146,0);
      return 1;
    }
  }
  AfxGetMainWnd();
  if (((param_1 == 0) && (in_ECX[9] != 0)) &&
     ((0xff < param_2->message && (param_2->message < 0x10a)))) {
    pCVar4 = CThreadLocalObject::GetData
                       ((CThreadLocalObject *)&DAT_1020761c,
                        (_func_CNoTrackObject_ptr *)&LAB_1001d071);
    if (pCVar4 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    if (*(int *)(pCVar4 + 0x140) == 0) {
      *(undefined4 *)(pCVar4 + 0x140) = 1;
      puVar5 = local_24;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = param_2->hwnd;
        param_2 = (tagMSG *)&param_2->message;
        puVar5 = puVar5 + 1;
      }
      iVar3 = CWnd::IsWindowEnabled((CWnd *)local_8[9]);
      if (iVar3 != 0) {
        pcVar1 = *(code **)(*local_8 + 0x58);
        guard_check_icall(local_24);
        iVar3 = (*pcVar1)();
        if (iVar3 != 0) {
          *(undefined4 *)(pCVar4 + 0x140) = 0;
          return 1;
        }
      }
      *(undefined4 *)(pCVar4 + 0x140) = 0;
    }
  }
  return 0;
}

