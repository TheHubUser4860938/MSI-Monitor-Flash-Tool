// rea decompile_all
// name: CMFCRibbonBar::ProcessKey
// address: 0x5048b3
// body: available
// range: 0x5048b3-0x504a54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x504a21 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCRibbonBar::ProcessKey(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonBar::ProcessKey(CMFCRibbonBar *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  HWND pHVar4;
  int *piVar5;
  int iVar6;
  HWND pHVar7;
  BOOL BVar8;
  int iVar9;
  CMFCDisableMenuAnimation local_24 [4];
  undefined4 local_20;
  HWND local_1c;
  int *local_18;
  ushort *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x5048bf;
  pcVar1 = *(code **)(*(int *)this + 0x360);
  guard_check_icall(&param_1);
  (*pcVar1)();
  iVar9 = 0;
  if (0 < *(int *)(this + 0x7e8)) {
    do {
      piVar5 = (int *)FUN_004ab4cd(iVar9);
      iVar2 = *piVar5;
      local_18 = *(int **)(iVar2 + 0x80);
      if (*(int *)(iVar2 + 0x94) == 0) {
        iVar6 = local_18[0x19];
      }
      else {
        iVar6 = local_18[0x1a];
      }
      FUN_00415a10(iVar6);
      local_8 = 0;
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeUpper
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
      iVar6 = *(int *)(local_14[0] + -6);
      if (iVar6 != 0) {
        if (*(int *)(this + 0x2d8) == 0) {
          if (iVar6 < 0) {
LAB_00504a1c:
                    /* WARNING: Subroutine does not return */
            FUN_0040ed80(0x80070057);
          }
          if ((uint)*local_14[0] == param_1) {
            if (iVar6 < 2) {
LAB_00504976:
              local_8 = 0xffffffff;
              uVar3 = *(undefined4 *)(iVar2 + 0x94);
              FUN_0040efa0();
              pHVar4 = *(HWND *)(this + 0x20);
              pHVar7 = GetFocus();
              if (pHVar7 != pHVar4) {
                CWnd::SetFocus((CWnd *)this);
              }
              CMFCDisableMenuAnimation::CMFCDisableMenuAnimation(local_24);
              local_1c = *(HWND *)(this + 0x20);
              local_8 = 1;
              pcVar1 = *(code **)(*local_18 + 0x1dc);
              guard_check_icall(uVar3);
              iVar9 = (*pcVar1)();
              if ((iVar9 != 0) && (BVar8 = IsWindow(local_1c), BVar8 != 0)) {
                DeactivateKeyboardFocus(this,1);
              }
              DAT_00616b28 = local_20;
              return 1;
            }
            if (-1 < iVar6) {
              *(uint *)(this + 0x2d8) = (uint)*local_14[0];
              FUN_0050547e(0);
              FUN_0040efa0();
              return 1;
            }
            goto LAB_00504a1c;
          }
        }
        else if (1 < iVar6) {
          if (iVar6 < 0) goto LAB_00504a1c;
          if ((uint)*local_14[0] == *(uint *)(this + 0x2d8)) {
            if (iVar6 < 1) goto LAB_00504a1c;
            if ((uint)local_14[0][1] == param_1) goto LAB_00504976;
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_0040efa0();
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(this + 0x7e8));
  }
  return 0;
}

