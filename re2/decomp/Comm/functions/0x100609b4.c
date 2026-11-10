// rea decompile_all
// name: FUN_100609b4
// address: 0x100609b4
// body: available
// range: 0x100609b4-0x10060b08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10060b04 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100609b4(void)

{
  uint uVar1;
  code *pcVar2;
  HWND pHVar3;
  int iVar4;
  CWnd *pCVar5;
  int *piVar6;
  CPane *in_ECX;
  int local_8;
  
  CPane::OnCancelMode(in_ECX);
  if (*(int *)(in_ECX + 0xba4) != 0) {
    *(undefined4 *)(in_ECX + 0xd0c) = 0;
    *(undefined4 *)(in_ECX + 0xba4) = 0;
    SetRectEmpty((LPRECT)(in_ECX + 0xcdc));
    ReleaseCapture();
    if (*(int *)(in_ECX + 0xd04) != 0) {
      pHVar3 = SetCapture(*(HWND *)(*(int *)(in_ECX + 0xd04) + 0x20));
      CWnd::FromHandle(pHVar3);
      *(undefined4 *)(in_ECX + 0xd04) = 0;
    }
  }
  iVar4 = *(int *)(in_ECX + 0xbec);
  if (iVar4 < 0) {
    if (*(int *)(in_ECX + 0xbf0) < 0) goto LAB_10060aab;
    if (-1 < iVar4) goto LAB_10060a24;
  }
  else {
LAB_10060a24:
    iVar4 = FUN_1005f070(iVar4);
    if (iVar4 != 0) {
      uVar1 = *(uint *)(iVar4 + 0x24);
      pHVar3 = GetCapture();
      pCVar5 = CWnd::FromHandle(pHVar3);
      if (pCVar5 == (CWnd *)in_ECX) {
        ReleaseCapture();
        if (*(int *)(in_ECX + 0xd04) != 0) {
          pHVar3 = SetCapture(*(HWND *)(*(int *)(in_ECX + 0xd04) + 0x20));
          CWnd::FromHandle(pHVar3);
          *(undefined4 *)(in_ECX + 0xd04) = 0;
        }
      }
      pcVar2 = *(code **)(*(int *)in_ECX + 0x374);
      guard_check_icall(*(undefined4 *)(in_ECX + 0xbec),uVar1 & 0xfffdffff);
      (*pcVar2)();
    }
  }
  *(undefined4 *)(in_ECX + 0xbec) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xbf0) = 0xffffffff;
  pcVar2 = *(code **)(*(int *)in_ECX + 0x3b0);
  guard_check_icall(0xffffffff);
  (*pcVar2)();
LAB_10060aab:
  local_8 = *(int *)(in_ECX + 0xc40);
  while( true ) {
    if (local_8 == 0) {
      RedrawWindow(*(HWND *)(in_ECX + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
      return;
    }
    piVar6 = (int *)FUN_1002466e(&local_8);
    if ((int *)*piVar6 == (int *)0x0) break;
    pcVar2 = *(code **)(*(int *)*piVar6 + 0x58);
    guard_check_icall();
    (*pcVar2)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

