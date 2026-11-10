// rea decompile_all
// name: FUN_10153eec
// address: 0x10153eec
// body: available
// range: 0x10153eec-0x10153fee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10153fea to 0x10047680 FUN_10047680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10153eec(int param_1)

{
  CMFCRibbonKeyTip *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  BOOL BVar3;
  int in_ECX;
  int iVar4;
  ushort *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x10153ef8;
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x7e8)) {
    do {
      puVar1 = (undefined4 *)FUN_100efaed(iVar4);
      this = (CMFCRibbonKeyTip *)*puVar1;
      if (*(int *)(in_ECX + 0x2d8) == 0) {
LAB_10153f77:
        CMFCRibbonKeyTip::Show(this,param_1);
      }
      else {
        if (*(int *)(this + 0x94) == 0) {
          uVar2 = *(undefined4 *)(*(int *)(this + 0x80) + 100);
        }
        else {
          uVar2 = *(undefined4 *)(*(int *)(this + 0x80) + 0x68);
        }
        FUN_10047180(uVar2);
        local_8 = 0;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeUpper
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
        if (1 < *(int *)(local_14[0] + -6)) {
          if (*(int *)(local_14[0] + -6) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_10047680(0x80070057);
          }
          if ((uint)*local_14[0] == *(uint *)(in_ECX + 0x2d8)) {
            local_8 = 0xffffffff;
            FUN_100476d0();
            goto LAB_10153f77;
          }
        }
        CMFCRibbonKeyTip::Hide(this);
        local_8 = 0xffffffff;
        FUN_100476d0();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x7e8));
  }
  iVar4 = *(int *)(in_ECX + 0x840);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
    BVar3 = IsWindowVisible(*(HWND *)(iVar4 + 0x20));
    if (BVar3 != 0) {
      CWnd::SetWindowPos(*(CWnd **)(in_ECX + 0x840),(CWnd *)&DAT_10245140,-1,-1,-1,-1,0x13);
    }
  }
  return;
}

