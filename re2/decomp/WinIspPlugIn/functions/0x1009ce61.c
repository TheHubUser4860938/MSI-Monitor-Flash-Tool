// rea decompile_all
// name: FUN_1009ce61
// address: 0x1009ce61
// body: available
// range: 0x1009ce61-0x1009d125 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009d121 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1009ce61(int param_1)

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
  
  DAT_10245cb0 = param_1;
  iVar7 = DAT_1023d5e4;
  iVar4 = DAT_1023d5d8;
  iVar5 = DAT_1023d5dc;
  iVar6 = DAT_1023d5e0;
  puVar2 = DAT_10245d0c;
  if (param_1 != 0) {
    DAT_1023d5f8 = FUN_101804f0((double)DAT_1023d5d8);
    DAT_1023d5fc = FUN_101804f0((double)DAT_1023d5dc);
    DAT_1023d600 = FUN_101804f0((double)DAT_1023d5e0);
    iVar7 = FUN_101804f0((double)DAT_1023d5e4);
    iVar4 = DAT_1023d5f8;
    iVar5 = DAT_1023d5fc;
    iVar6 = DAT_1023d600;
    puVar2 = DAT_10245d0c;
  }
joined_r0x1009cf20:
  do {
    DAT_1023d600 = iVar6;
    DAT_1023d5fc = iVar5;
    DAT_1023d5f8 = iVar4;
    DAT_1023d604 = iVar7;
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if (puVar2 == (undefined4 *)0x0) {
LAB_1009d121:
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    piVar1 = (int *)puVar2[2];
    puVar2 = (undefined4 *)*puVar2;
    if (piVar1 == (int *)0x0) goto LAB_1009d121;
    pCVar8 = CWnd::FromHandlePermanent((HWND__ *)piVar1[8]);
    iVar7 = DAT_1023d604;
    iVar4 = DAT_1023d5f8;
    iVar5 = DAT_1023d5fc;
    iVar6 = DAT_1023d600;
  } while (pCVar8 == (CWnd *)0x0);
  if (piVar1[0x2de] != 0) {
    if (DAT_10245cb0 == 0) {
      iVar7 = CSize::operator!=((CSize *)(piVar1 + 0x308),*(tagSIZE *)(piVar1 + 0x304));
      if ((iVar7 == 0) &&
         (iVar9 = CSize::operator!=((CSize *)(piVar1 + 0x30a),*(tagSIZE *)(piVar1 + 0x306)),
         iVar7 = DAT_1023d604, iVar4 = DAT_1023d5f8, iVar5 = DAT_1023d5fc, iVar6 = DAT_1023d600,
         iVar9 == 0)) goto joined_r0x1009cf20;
      piVar1[0x308] = piVar1[0x304];
      piVar1[0x309] = piVar1[0x305];
      piVar1[0x30a] = piVar1[0x306];
      iVar7 = piVar1[0x307];
    }
    else {
      iVar9 = FUN_101804f0();
      if ((((piVar1[0x308] == iVar9) && (iVar7 = FUN_101804f0(), piVar1[0x309] == iVar7)) &&
          (iVar7 = FUN_101804f0(), piVar1[0x30a] == iVar7)) &&
         (iVar10 = FUN_101804f0(), iVar7 = DAT_1023d604, iVar4 = DAT_1023d5f8, iVar5 = DAT_1023d5fc,
         iVar6 = DAT_1023d600, piVar1[0x30b] == iVar10)) goto joined_r0x1009cf20;
      piVar1[0x308] = iVar9;
      iVar7 = FUN_101804f0();
      piVar1[0x309] = iVar7;
      iVar7 = FUN_101804f0();
      piVar1[0x30a] = iVar7;
      iVar7 = FUN_101804f0();
    }
    piVar1[0x30b] = iVar7;
  }
  pcVar3 = *(code **)(*piVar1 + 0x20c);
  guard_check_icall();
  (*pcVar3)();
  iVar7 = DAT_1023d604;
  iVar4 = DAT_1023d5f8;
  iVar5 = DAT_1023d5fc;
  iVar6 = DAT_1023d600;
  if (piVar1[0x2de] != 0) {
    pHVar11 = GetParent((HWND)piVar1[8]);
    pCVar8 = CWnd::FromHandle(pHVar11);
    pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101de5b4,(CObject *)pCVar8);
    iVar7 = DAT_1023d604;
    iVar4 = DAT_1023d5f8;
    iVar5 = DAT_1023d5fc;
    iVar6 = DAT_1023d600;
    if (pCVar12 != (CObject *)0x0) {
      pcVar3 = *(code **)(*(int *)pCVar12 + 0x20c);
      guard_check_icall();
      (*pcVar3)();
      iVar7 = DAT_1023d604;
      iVar4 = DAT_1023d5f8;
      iVar5 = DAT_1023d5fc;
      iVar6 = DAT_1023d600;
    }
  }
  goto joined_r0x1009cf20;
}

