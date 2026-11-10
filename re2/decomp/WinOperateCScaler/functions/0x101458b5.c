// rea decompile_all
// name: FUN_101458b5
// address: 0x101458b5
// body: available
// range: 0x101458b5-0x10145a0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10145a01 to 0x1014575c CMFCToolBarsKeyboardPropertyPage::OnSelchangeCommandsList (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10145a06 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101458b5(void)

{
  WPARAM wParam;
  LRESULT LVar1;
  AFX_MODULE_STATE *pAVar2;
  HICON wParam_00;
  CObject *pCVar3;
  uint uVar4;
  LPACCEL lpAccelDst;
  CMFCToolBarsKeyboardPropertyPage *in_ECX;
  
  *(undefined4 *)(in_ECX + 0x560) = 0;
  *(undefined4 *)(in_ECX + 0x574) = 0;
  if (*(void **)(in_ECX + 0x564) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x564));
    *(undefined4 *)(in_ECX + 0x564) = 0;
  }
  wParam = SendMessageW(*(HWND *)(in_ECX + 0x1f8),0x147,0,0);
  if (wParam == 0xffffffff) {
    SendMessageW(*(HWND *)(in_ECX + 0x278),0x170,0,0);
    return;
  }
  LVar1 = SendMessageW(*(HWND *)(in_ECX + 0x1f8),0x150,wParam,0);
  if (LVar1 == 0) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_101b71f8,
                                *(CObject **)(in_ECX + 0x57c));
    if (pCVar3 != (CObject *)0x0) {
      wParam_00 = (HICON)GetClassLongW(*(HWND *)(pCVar3 + 0x20),-0xe);
      *(undefined4 *)(in_ECX + 0x560) = *(undefined4 *)(pCVar3 + 0x8c);
      goto LAB_10145982;
    }
  }
  else {
    uVar4 = *(uint *)(LVar1 + 0x54);
    AfxGetModuleState();
    pAVar2 = AfxGetModuleState();
    wParam_00 = LoadIconW(*(HINSTANCE *)(pAVar2 + 0xc),(LPCWSTR)(uVar4 & 0xffff));
    *(undefined4 *)(in_ECX + 0x560) = *(undefined4 *)(LVar1 + 0x8c);
LAB_10145982:
    if (wParam_00 != (HICON)0x0) goto LAB_10145995;
  }
  wParam_00 = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
LAB_10145995:
  SendMessageW(*(HWND *)(in_ECX + 0x278),0x170,(WPARAM)wParam_00,0);
  if (*(HACCEL *)(in_ECX + 0x560) != (HACCEL)0x0) {
    uVar4 = CopyAcceleratorTableW(*(HACCEL *)(in_ECX + 0x560),(LPACCEL)0x0,0);
    *(uint *)(in_ECX + 0x56c) = uVar4;
    lpAccelDst = (LPACCEL)FUN_1001cfdc(-(uint)((int)((ulonglong)uVar4 * 6 >> 0x20) != 0) |
                                       (uint)((ulonglong)uVar4 * 6));
    *(LPACCEL *)(in_ECX + 0x564) = lpAccelDst;
    if (lpAccelDst != (LPACCEL)0x0) {
      CopyAcceleratorTableW(*(HACCEL *)(in_ECX + 0x560),lpAccelDst,*(int *)(in_ECX + 0x56c));
      *(LRESULT *)(in_ECX + 0x574) = LVar1;
      CMFCToolBarsKeyboardPropertyPage::OnSelchangeCommandsList(in_ECX);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

