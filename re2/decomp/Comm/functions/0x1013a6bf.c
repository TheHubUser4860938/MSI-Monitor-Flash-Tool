// rea decompile_all
// name: FUN_1013a6bf
// address: 0x1013a6bf
// body: available
// range: 0x1013a6bf-0x1013a802 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013a7fe to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1013a6bf(void)

{
  bool bVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  wchar_t *pwVar5;
  int in_ECX;
  int iVar6;
  int local_8;
  
  if (in_ECX != -0x1c4) {
    FUN_10003400();
    iVar6 = 0;
    CWnd::ShowWindow((CWnd *)(in_ECX + 0xc0),0);
    CWnd::EnableWindow((CWnd *)(in_ECX + 0x4d8),0);
    if (*(int *)(in_ECX + 0x1c0) != 0) {
      if (*(int *)(in_ECX + 0x564) == 0) goto LAB_1013a7fe;
      bVar1 = false;
      local_8 = 0;
      do {
        if (*(int *)(in_ECX + 0x56c) <= local_8) break;
        if ((*(short *)(in_ECX + 0x1c6) == *(short *)(iVar6 + 2 + *(int *)(in_ECX + 0x564))) &&
           (((*(byte *)(iVar6 + *(int *)(in_ECX + 0x564)) ^ *(byte *)(in_ECX + 0x1c4)) & 0x1d) == 0)
           ) {
          pHVar2 = GetParent(*(HWND *)(in_ECX + 0x20));
          pCVar3 = CWnd::FromHandle(pHVar2);
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_10198b98,
                                      (CObject *)pCVar3);
          if (pCVar4 == (CObject *)0x0) goto LAB_1013a7fe;
          pwVar5 = (wchar_t *)FUN_100eb715(*(undefined2 *)(iVar6 + 4 + *(int *)(in_ECX + 0x564)));
          if (pwVar5 == (wchar_t *)0x0) {
            pwVar5 = L"????";
          }
          FUN_10003780(pwVar5);
          bVar1 = true;
        }
        iVar6 = iVar6 + 6;
        local_8 = local_8 + 1;
      } while (!bVar1);
      if (!bVar1) {
        iVar6 = FUN_10012ca3(0x3e89);
        if ((iVar6 == 0) || (iVar6 = FUN_100032f0(iVar6,0x3e89), iVar6 == 0)) goto LAB_1013a7fe;
        CWnd::EnableWindow((CWnd *)(in_ECX + 0x4d8),1);
      }
      CWnd::ShowWindow((CWnd *)(in_ECX + 0xc0),5);
    }
    FUN_1002044a(0);
    return;
  }
LAB_1013a7fe:
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

