// rea decompile_all
// name: FUN_101289d0
// address: 0x101289d0
// body: available
// range: 0x101289d0-0x10128aa1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10128a9d to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101289d0(CArchive *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  CObject *pCVar4;
  CWnd *pCVar5;
  CMFCToolBarButton *in_ECX;
  int local_8;
  
  CMFCToolBarButton::Serialize(in_ECX,param_1);
  uVar3 = 0;
  local_8 = 0;
  if (((byte)param_1[0x18] & 1) == 0) {
    if (*(int *)(in_ECX + 0x70) != 0) {
      uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x70) + 0xd18);
    }
    FUN_10051228(uVar3);
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (in_ECX + 0x74));
    FUN_10051228(*(undefined4 *)(in_ECX + 0x80));
  }
  else {
    *(undefined4 *)(in_ECX + 0x70) = 0;
    FUN_10051107(&local_8);
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (in_ECX + 0x74));
    FUN_10051107(in_ECX + 0x80);
    puVar2 = DAT_10245d0c;
    do {
      if (puVar2 == (undefined4 *)0x0) goto LAB_10128a57;
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownToolBar_1023db30,
                                  (CObject *)*puVar1);
    } while (((pCVar4 == (CObject *)0x0) ||
             (pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar4 + 0x20)), pCVar5 == (CWnd *)0x0
             )) || (*(int *)(pCVar4 + 0xd18) != local_8));
    *(CObject **)(in_ECX + 0x70) = pCVar4;
LAB_10128a57:
    CMFCDropDownToolbarButton::SetDefaultCommand
              ((CMFCDropDownToolbarButton *)in_ECX,*(uint *)(in_ECX + 0x20));
  }
  return;
}

