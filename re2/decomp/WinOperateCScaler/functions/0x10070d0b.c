// rea decompile_all
// name: FUN_10070d0b
// address: 0x10070d0b
// body: available
// range: 0x10070d0b-0x10070eb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070eb2 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10070d0b(int param_1)

{
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  CWnd *pCVar7;
  ulong uVar8;
  CObject *pCVar9;
  CWnd *pCVar10;
  int *piVar11;
  int *piVar12;
  
  if (DAT_10209cf0 == param_1) {
    uVar6 = 0;
  }
  else {
LAB_10070d26:
    do {
      iVar4 = DAT_10209d5c;
      bVar3 = false;
      piVar11 = DAT_10209d54;
      iVar5 = param_1;
      piVar12 = DAT_10209d54;
      if (DAT_10209d54 == (int *)0x0) break;
      do {
        if (bVar3) goto LAB_10070d26;
        if (piVar11 == (int *)0x0) goto LAB_10070eb2;
        piVar12 = (int *)piVar11[2];
        piVar11 = (int *)*piVar11;
        if (piVar12 == (int *)0x0) goto LAB_10070eb2;
        pCVar7 = CWnd::FromHandlePermanent((HWND__ *)piVar12[8]);
        if (pCVar7 != (CWnd *)0x0) {
          pcVar1 = *(code **)(*piVar12 + 0x404);
          guard_check_icall(param_1);
          (*pcVar1)();
          if (DAT_10209d5c != iVar4) {
            bVar3 = true;
          }
        }
      } while (piVar11 != (int *)0x0);
      iVar5 = param_1;
      piVar11 = DAT_10209d54;
      piVar12 = DAT_10209d54;
    } while (bVar3);
joined_r0x10070da8:
    DAT_10209cf0 = iVar5;
    DAT_10209d54 = piVar12;
    if (piVar11 != (int *)0x0) {
      if (piVar11 == (int *)0x0) goto LAB_10070eb2;
      piVar2 = (int *)piVar11[2];
      piVar11 = (int *)*piVar11;
      if (piVar2 == (int *)0x0) goto LAB_10070eb2;
      pCVar7 = CWnd::FromHandlePermanent((HWND__ *)piVar2[8]);
      iVar5 = DAT_10209cf0;
      piVar12 = DAT_10209d54;
      if ((pCVar7 != (CWnd *)0x0) && (piVar2[0x2de] == 0)) {
        pcVar1 = *(code **)(*piVar2 + 0x20c);
        guard_check_icall();
        (*pcVar1)();
        iVar5 = DAT_10209cf0;
        piVar12 = DAT_10209d54;
      }
      goto joined_r0x10070da8;
    }
    bVar3 = false;
    while (piVar12 != (int *)0x0) {
      if (piVar12 == (int *)0x0) {
LAB_10070eb2:
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      pCVar7 = (CWnd *)piVar12[2];
      piVar12 = (int *)*piVar12;
      if (pCVar7 == (CWnd *)0x0) goto LAB_10070eb2;
      uVar8 = CWnd::GetExStyle(pCVar7);
      if ((uVar8 & 0x10000000) != 0) {
        pcVar1 = *(code **)(*(int *)pCVar7 + 0x19c);
        guard_check_icall();
        pCVar9 = (CObject *)(*pcVar1)();
        pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_101b71f8,pCVar9);
        if ((pCVar9 != (CObject *)0x0) && (!bVar3)) {
          pcVar1 = *(code **)(*(int *)pCVar9 + 0x178);
          guard_check_icall(1);
          (*pcVar1)();
          bVar3 = true;
        }
        pCVar10 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar7 + 0x20));
        if (pCVar10 != (CWnd *)0x0) {
          RedrawWindow(*(HWND *)(pCVar7 + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
        }
      }
    }
    DAT_10209cd4 = DAT_10209cd4 & -(uint)(param_1 != 0);
    uVar6 = 1;
  }
  return uVar6;
}

