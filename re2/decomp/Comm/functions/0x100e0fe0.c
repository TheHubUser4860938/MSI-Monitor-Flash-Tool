// rea decompile_all
// name: FUN_100e0fe0
// address: 0x100e0fe0
// body: available
// range: 0x100e0fe0-0x100e1129 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e1125 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100e0fe0(undefined4 param_1)

{
  code *pcVar1;
  CWnd *this;
  undefined4 *puVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  CWnd *pCVar6;
  CFrameWnd *pCVar7;
  int in_ECX;
  
  if ((*(CWnd **)(in_ECX + 0xfc) != (CWnd *)0x0) &&
     (uVar4 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 0xfc)), (uVar4 & 0x10000000) != 0)) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0xfc) + 0x354);
    guard_check_icall(param_1);
    iVar5 = (*pcVar1)();
    if (iVar5 != 0) {
      return 1;
    }
  }
  bVar3 = false;
  puVar2 = DAT_101daff4;
  if ((*(int *)(in_ECX + 0xb4) == 0) || (*(int *)(*(int *)(in_ECX + 0xb4) + 0x130) == 0)) {
    if ((*(CWnd **)(in_ECX + 0xac) != (CWnd *)0x0) &&
       (uVar4 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 0xac)), puVar2 = DAT_101daff4,
       (uVar4 & 0x10000000) != 0)) {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0xac) + 0x394);
      guard_check_icall(param_1);
      iVar5 = (*pcVar1)();
      puVar2 = DAT_101daff4;
      if (iVar5 != 0) {
        return 1;
      }
    }
  }
  else {
    bVar3 = true;
  }
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    this = (CWnd *)puVar2[2];
    puVar2 = (undefined4 *)*puVar2;
    if (this == (CWnd *)0x0) break;
    if ((((!bVar3) || (iVar5 = FUN_10019d4f(&PTR_s_CMFCPrintPreviewToolBar_101a1d04), iVar5 != 0))
        && (pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0x20)), pCVar6 != (CWnd *)0x0))
       && (((this != *(CWnd **)(in_ECX + 0xac) &&
            (uVar4 = CWnd::GetExStyle(this), (uVar4 & 0x10000000) != 0)) &&
           (pCVar7 = CWnd::GetTopLevelFrame(this), pCVar7 == *(CFrameWnd **)(in_ECX + 0xb0))))) {
      pcVar1 = *(code **)(*(int *)this + 0x394);
      guard_check_icall(param_1);
      iVar5 = (*pcVar1)();
      if (iVar5 != 0) {
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

