// rea decompile_all
// name: FUN_004acf40
// address: 0x4acf40
// body: available
// range: 0x4acf40-0x4ad0e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004acf40(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  BOOL BVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  if ((in_ECX[0x392] != param_1) && (in_ECX[0x392] = param_1, in_ECX[8] != 0)) {
    if ((in_ECX[0x393] == -1) || (param_1 != -1)) {
      uVar5 = 1;
      local_10 = 1;
    }
    else {
      local_10 = 0;
      uVar5 = 0;
    }
    local_14 = in_ECX[0x310];
    in_ECX[0x2fc] = -1;
    uVar6 = 0;
    local_c = 0;
    local_8 = 0;
    while (local_14 != 0) {
      puVar2 = (undefined4 *)FUN_004ead48(&local_14);
      if ((((((byte)((CObject *)*puVar2)[0x24] & 1) == 0) &&
           (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarColorButton_0060c7d4,
                                        (CObject *)*puVar2), uVar6 = local_8,
           pCVar3 != (CObject *)0x0)) && (*(int *)(pCVar3 + 0x7c) == 0)) &&
         (*(int *)(pCVar3 + 0x80) == 0)) {
        if (*(int *)(pCVar3 + 0x74) != 0) {
          *(undefined4 *)(pCVar3 + 0x74) = 0;
          InvalidateRect((HWND)in_ECX[8],(RECT *)(pCVar3 + 0x54),1);
        }
        if ((*(int *)(pCVar3 + 0x78) == 0) || (param_1 != -1)) {
          if (*(int *)(pCVar3 + 0x70) == param_1) {
            *(undefined4 *)(pCVar3 + 0x74) = 1;
            in_ECX[0x2fc] = local_c;
            InvalidateRect((HWND)in_ECX[8],(RECT *)(pCVar3 + 0x54),1);
            local_10 = 0;
          }
        }
        else {
          *(undefined4 *)(pCVar3 + 0x74) = 1;
          in_ECX[0x2fc] = local_c;
          InvalidateRect((HWND)in_ECX[8],(RECT *)(pCVar3 + 0x54),1);
        }
        uVar6 = local_8;
        if (*(int *)(pCVar3 + 0x88) != 0) {
          *(int *)(pCVar3 + 0x70) = in_ECX[0x392];
          *(undefined4 *)(pCVar3 + 0x74) = 1;
          InvalidateRect((HWND)in_ECX[8],(RECT *)(pCVar3 + 0x54),1);
          BVar4 = IsRectEmpty((RECT *)(pCVar3 + 0x54));
          local_8 = (uint)(BVar4 == 0);
          uVar6 = local_8;
        }
      }
      local_c = local_c + 1;
      uVar5 = local_10;
    }
    if (uVar6 != uVar5) {
      pcVar1 = *(code **)(*in_ECX + 0x3e4);
      guard_check_icall();
      (*pcVar1)();
      InvalidateRect((HWND)in_ECX[8],(RECT *)0x0,1);
    }
    UpdateWindow((HWND)in_ECX[8]);
  }
  return;
}

