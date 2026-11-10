// rea decompile_all
// name: FUN_1009b35b
// address: 0x1009b35b
// body: available
// range: 0x1009b35b-0x1009b61f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009b61b to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1009b35b(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CWnd *pCVar8;
  int iVar9;
  int iVar10;
  HWND pHVar11;
  CObject *pCVar12;
  
  DAT_1020e508 = param_1;
  iVar7 = DAT_10205a54;
  iVar4 = DAT_10205a48;
  iVar5 = DAT_10205a4c;
  iVar6 = DAT_10205a50;
  puVar2 = DAT_1020e564;
  if (param_1 != 0) {
    DAT_10205a68 = FUN_1017f8a0((double)DAT_10205a48);
    DAT_10205a6c = FUN_1017f8a0((double)DAT_10205a4c);
    DAT_10205a70 = FUN_1017f8a0((double)DAT_10205a50);
    iVar7 = FUN_1017f8a0((double)DAT_10205a54);
    iVar4 = DAT_10205a68;
    iVar5 = DAT_10205a6c;
    iVar6 = DAT_10205a70;
    puVar2 = DAT_1020e564;
  }
joined_r0x1009b41a:
  do {
    DAT_10205a70 = iVar6;
    DAT_10205a6c = iVar5;
    DAT_10205a68 = iVar4;
    DAT_10205a74 = iVar7;
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if (puVar2 == (undefined4 *)0x0) {
LAB_1009b61b:
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    piVar1 = (int *)puVar2[2];
    puVar2 = (undefined4 *)*puVar2;
    if (piVar1 == (int *)0x0) goto LAB_1009b61b;
    pCVar8 = CWnd::FromHandlePermanent((HWND__ *)piVar1[8]);
    iVar7 = DAT_10205a74;
    iVar4 = DAT_10205a68;
    iVar5 = DAT_10205a6c;
    iVar6 = DAT_10205a70;
  } while (pCVar8 == (CWnd *)0x0);
  if (piVar1[0x2de] != 0) {
    if (DAT_1020e508 == 0) {
      iVar7 = CSize::operator!=((CSize *)(piVar1 + 0x308),*(tagSIZE *)(piVar1 + 0x304));
      if ((iVar7 == 0) &&
         (iVar9 = CSize::operator!=((CSize *)(piVar1 + 0x30a),*(tagSIZE *)(piVar1 + 0x306)),
         iVar7 = DAT_10205a74, iVar4 = DAT_10205a68, iVar5 = DAT_10205a6c, iVar6 = DAT_10205a70,
         iVar9 == 0)) goto joined_r0x1009b41a;
      piVar1[0x308] = piVar1[0x304];
      piVar1[0x309] = piVar1[0x305];
      piVar1[0x30a] = piVar1[0x306];
      iVar7 = piVar1[0x307];
    }
    else {
      iVar9 = FUN_1017f8a0();
      if ((((piVar1[0x308] == iVar9) && (iVar7 = FUN_1017f8a0(), piVar1[0x309] == iVar7)) &&
          (iVar7 = FUN_1017f8a0(), piVar1[0x30a] == iVar7)) &&
         (iVar10 = FUN_1017f8a0(), iVar7 = DAT_10205a74, iVar4 = DAT_10205a68, iVar5 = DAT_10205a6c,
         iVar6 = DAT_10205a70, piVar1[0x30b] == iVar10)) goto joined_r0x1009b41a;
      piVar1[0x308] = iVar9;
      iVar7 = FUN_1017f8a0();
      piVar1[0x309] = iVar7;
      iVar7 = FUN_1017f8a0();
      piVar1[0x30a] = iVar7;
      iVar7 = FUN_1017f8a0();
    }
    piVar1[0x30b] = iVar7;
  }
  pcVar3 = *(code **)(*piVar1 + 0x20c);
  guard_check_icall();
  (*pcVar3)();
  iVar7 = DAT_10205a74;
  iVar4 = DAT_10205a68;
  iVar5 = DAT_10205a6c;
  iVar6 = DAT_10205a70;
  if (piVar1[0x2de] != 0) {
    pHVar11 = GetParent((HWND)piVar1[8]);
    pCVar8 = CWnd::FromHandle(pHVar11);
    pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101ba5bc,(CObject *)pCVar8);
    iVar7 = DAT_10205a74;
    iVar4 = DAT_10205a68;
    iVar5 = DAT_10205a6c;
    iVar6 = DAT_10205a70;
    if (pCVar12 != (CObject *)0x0) {
      pcVar3 = *(code **)(*(int *)pCVar12 + 0x20c);
      guard_check_icall();
      (*pcVar3)();
      iVar7 = DAT_10205a74;
      iVar4 = DAT_10205a68;
      iVar5 = DAT_10205a6c;
      iVar6 = DAT_10205a70;
    }
  }
  goto joined_r0x1009b41a;
}

