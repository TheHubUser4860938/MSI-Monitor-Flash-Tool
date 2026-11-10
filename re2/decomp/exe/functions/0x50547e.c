// rea decompile_all
// name: FUN_0050547e
// address: 0x50547e
// body: available
// range: 0x50547e-0x505580 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x50557c to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0050547e(int param_1)

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
  local_8 = 0x50548a;
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x7e8)) {
    do {
      puVar1 = (undefined4 *)FUN_004ab4cd(iVar4);
      this = (CMFCRibbonKeyTip *)*puVar1;
      if (*(int *)(in_ECX + 0x2d8) == 0) {
LAB_00505509:
        CMFCRibbonKeyTip::Show(this,param_1);
      }
      else {
        if (*(int *)(this + 0x94) == 0) {
          uVar2 = *(undefined4 *)(*(int *)(this + 0x80) + 100);
        }
        else {
          uVar2 = *(undefined4 *)(*(int *)(this + 0x80) + 0x68);
        }
        FUN_00415a10(uVar2);
        local_8 = 0;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeUpper
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
        if (1 < *(int *)(local_14[0] + -6)) {
          if (*(int *)(local_14[0] + -6) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0040ed80(0x80070057);
          }
          if ((uint)*local_14[0] == *(uint *)(in_ECX + 0x2d8)) {
            local_8 = 0xffffffff;
            FUN_0040efa0();
            goto LAB_00505509;
          }
        }
        CMFCRibbonKeyTip::Hide(this);
        local_8 = 0xffffffff;
        FUN_0040efa0();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x7e8));
  }
  iVar4 = *(int *)(in_ECX + 0x840);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
    BVar3 = IsWindowVisible(*(HWND *)(iVar4 + 0x20));
    if (BVar3 != 0) {
      CWnd::SetWindowPos(*(CWnd **)(in_ECX + 0x840),(CWnd *)&DAT_00614b70,-1,-1,-1,-1,0x13);
    }
  }
  return;
}

