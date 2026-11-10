// rea decompile_all
// name: FUN_100d3b9d
// address: 0x100d3b9d
// body: available
// range: 0x100d3b9d-0x100d3d0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d3d07 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

WPARAM FUN_100d3b9d(int param_1)

{
  uint uVar1;
  code *pcVar2;
  WPARAM WVar3;
  WPARAM WVar4;
  LRESULT LVar5;
  int *piVar6;
  int iVar7;
  int *in_ECX;
  WPARAM local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100d3ba9;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  uVar1 = in_ECX[0x29];
  if (((uVar1 == 0) || (uVar1 == 0xffffffff)) || ((0xe10f < uVar1 && (uVar1 < 0xe120)))) {
LAB_100d3be2:
    WVar4 = 0xffffffff;
  }
  else {
    WVar4 = 0;
    local_14[0] = 0;
    LVar5 = SendMessageW(*(HWND *)(param_1 + 0x20),0x18b,0,0);
    if (0 < LVar5) {
      do {
        piVar6 = (int *)SendMessageW(*(HWND *)(param_1 + 0x20),0x199,WVar4,0);
        if ((piVar6 != (int *)0x0) && (piVar6[0x29] == in_ECX[0x29])) {
          pcVar2 = *(code **)(*piVar6 + 0x138);
          guard_check_icall();
          iVar7 = (*pcVar2)();
          if ((iVar7 == 0) || (WVar4 = local_14[0], *(int *)(param_1 + 0x88) != 0))
          goto LAB_100d3be2;
        }
        WVar4 = WVar4 + 1;
        local_14[0] = WVar4;
        LVar5 = SendMessageW(*(HWND *)(param_1 + 0x20),0x18b,0,0);
      } while ((int)WVar4 < LVar5);
    }
    pcVar2 = *(code **)(*in_ECX + 0x1ac);
    guard_check_icall();
    (*pcVar2)();
    iVar7 = FUN_100187a0(in_ECX[0x1b] + -0x10);
    local_14[0] = iVar7 + 0x10;
    local_8 = 0;
    if (*(int *)(iVar7 + 4) == 0) {
      ATL::CSimpleStringT<wchar_t,0>::Append
                ((CSimpleStringT<wchar_t,0> *)local_14,(wchar_t *)in_ECX[0x18]);
    }
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,L"&&",
               L"\x01\x01");
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,L'&');
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
               L"\x01\x01",L"&");
    WVar3 = local_14[0];
    WVar4 = SendMessageW(*(HWND *)(param_1 + 0x20),0x180,0,local_14[0]);
    SendMessageW(*(HWND *)(param_1 + 0x20),0x19a,WVar4,(LPARAM)in_ECX);
    ATL::CStringData::Release((CStringData *)(WVar3 + -0x10));
  }
  return WVar4;
}

