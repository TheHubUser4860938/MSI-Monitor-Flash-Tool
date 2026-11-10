// rea decompile_all
// name: FUN_00459b6e
// address: 0x459b6e
// body: available
// range: 0x459b6e-0x459e32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x459e2e to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00459b6e(int param_1)

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
  
  DAT_00614ee0 = param_1;
  iVar7 = DAT_0060c524;
  iVar4 = DAT_0060c518;
  iVar5 = DAT_0060c51c;
  iVar6 = DAT_0060c520;
  puVar2 = DAT_00614f3c;
  if (param_1 != 0) {
    DAT_0060c538 = FUN_0055bce0((double)DAT_0060c518);
    DAT_0060c53c = FUN_0055bce0((double)DAT_0060c51c);
    DAT_0060c540 = FUN_0055bce0((double)DAT_0060c520);
    iVar7 = FUN_0055bce0((double)DAT_0060c524);
    iVar4 = DAT_0060c538;
    iVar5 = DAT_0060c53c;
    iVar6 = DAT_0060c540;
    puVar2 = DAT_00614f3c;
  }
joined_r0x00459c2d:
  do {
    DAT_0060c540 = iVar6;
    DAT_0060c53c = iVar5;
    DAT_0060c538 = iVar4;
    DAT_0060c544 = iVar7;
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if (puVar2 == (undefined4 *)0x0) {
LAB_00459e2e:
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    piVar1 = (int *)puVar2[2];
    puVar2 = (undefined4 *)*puVar2;
    if (piVar1 == (int *)0x0) goto LAB_00459e2e;
    pCVar8 = CWnd::FromHandlePermanent((HWND__ *)piVar1[8]);
    iVar7 = DAT_0060c544;
    iVar4 = DAT_0060c538;
    iVar5 = DAT_0060c53c;
    iVar6 = DAT_0060c540;
  } while (pCVar8 == (CWnd *)0x0);
  if (piVar1[0x2de] != 0) {
    if (DAT_00614ee0 == 0) {
      iVar7 = CSize::operator!=((CSize *)(piVar1 + 0x308),*(tagSIZE *)(piVar1 + 0x304));
      if ((iVar7 == 0) &&
         (iVar9 = CSize::operator!=((CSize *)(piVar1 + 0x30a),*(tagSIZE *)(piVar1 + 0x306)),
         iVar7 = DAT_0060c544, iVar4 = DAT_0060c538, iVar5 = DAT_0060c53c, iVar6 = DAT_0060c540,
         iVar9 == 0)) goto joined_r0x00459c2d;
      piVar1[0x308] = piVar1[0x304];
      piVar1[0x309] = piVar1[0x305];
      piVar1[0x30a] = piVar1[0x306];
      iVar7 = piVar1[0x307];
    }
    else {
      iVar9 = FUN_0055bce0();
      if ((((piVar1[0x308] == iVar9) && (iVar7 = FUN_0055bce0(), piVar1[0x309] == iVar7)) &&
          (iVar7 = FUN_0055bce0(), piVar1[0x30a] == iVar7)) &&
         (iVar10 = FUN_0055bce0(), iVar7 = DAT_0060c544, iVar4 = DAT_0060c538, iVar5 = DAT_0060c53c,
         iVar6 = DAT_0060c540, piVar1[0x30b] == iVar10)) goto joined_r0x00459c2d;
      piVar1[0x308] = iVar9;
      iVar7 = FUN_0055bce0();
      piVar1[0x309] = iVar7;
      iVar7 = FUN_0055bce0();
      piVar1[0x30a] = iVar7;
      iVar7 = FUN_0055bce0();
    }
    piVar1[0x30b] = iVar7;
  }
  pcVar3 = *(code **)(*piVar1 + 0x20c);
  guard_check_icall();
  (*pcVar3)();
  iVar7 = DAT_0060c544;
  iVar4 = DAT_0060c538;
  iVar5 = DAT_0060c53c;
  iVar6 = DAT_0060c540;
  if (piVar1[0x2de] != 0) {
    pHVar11 = GetParent((HWND)piVar1[8]);
    pCVar8 = CWnd::FromHandle(pHVar11);
    pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,(CObject *)pCVar8);
    iVar7 = DAT_0060c544;
    iVar4 = DAT_0060c538;
    iVar5 = DAT_0060c53c;
    iVar6 = DAT_0060c540;
    if (pCVar12 != (CObject *)0x0) {
      pcVar3 = *(code **)(*(int *)pCVar12 + 0x20c);
      guard_check_icall();
      (*pcVar3)();
      iVar7 = DAT_0060c544;
      iVar4 = DAT_0060c538;
      iVar5 = DAT_0060c53c;
      iVar6 = DAT_0060c540;
    }
  }
  goto joined_r0x00459c2d;
}

