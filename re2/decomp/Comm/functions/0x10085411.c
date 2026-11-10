// rea decompile_all
// name: FUN_10085411
// address: 0x10085411
// body: available
// range: 0x10085411-0x1008552d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10085529 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10085411(int param_1,CWnd *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  CFrameWnd *pCVar4;
  CFrameWnd *pCVar5;
  LRESULT LVar6;
  int iVar7;
  CWnd *in_ECX;
  int *piVar8;
  
  FUN_1001d029();
  if ((param_1 == 0) && (((byte)in_ECX[0xfc] & 1) == 0)) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x18c);
    guard_check_icall(2);
    (*pcVar1)();
  }
  uVar3 = CWnd::GetExStyle(in_ECX);
  pCVar4 = (CFrameWnd *)in_ECX;
  if ((uVar3 & 0x40000000) == 0) {
    pCVar4 = CWnd::GetTopLevelFrame(in_ECX);
  }
  if (pCVar4 != (CFrameWnd *)0x0) {
    if (param_1 != 0) {
      param_2 = in_ECX;
    }
    if ((param_2 == (CWnd *)0x0) ||
       ((pCVar4 != (CFrameWnd *)param_2 &&
        ((pCVar5 = CWnd::GetTopLevelFrame(param_2), pCVar4 != pCVar5 ||
         (LVar6 = SendMessageW(*(HWND *)(param_2 + 0x20),0x36d,0x40,0), LVar6 == 0)))))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    *(uint *)(pCVar4 + 0x60) = *(uint *)(pCVar4 + 0x60) & 0xffffffdf;
    if (bVar2) {
      *(uint *)(pCVar4 + 0x60) = *(uint *)(pCVar4 + 0x60) | 0x20;
    }
    FUN_1008534f(!bVar2 * '\x04' + '\x04');
    piVar8 = *(int **)(in_ECX + 0xdc);
    if (piVar8 == (int *)0x0) {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x170);
      guard_check_icall();
      iVar7 = (*pcVar1)();
      piVar8 = *(int **)(iVar7 + 0xdc);
      if (piVar8 == (int *)0x0) {
        return;
      }
    }
    if ((param_1 != 0) && (param_3 == 0)) {
      pcVar1 = *(code **)(*piVar8 + 400);
      guard_check_icall(1,piVar8,piVar8);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*piVar8 + 0x194);
    guard_check_icall(param_1);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

