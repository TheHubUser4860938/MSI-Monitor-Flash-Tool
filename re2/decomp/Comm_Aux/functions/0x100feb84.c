// rea decompile_all
// name: FUN_100feb84
// address: 0x100feb84
// body: available
// range: 0x100feb84-0x100fecf2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100fecee to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

WPARAM FUN_100feb84(int param_1)

{
  uint uVar1;
  code *pcVar2;
  WPARAM WVar3;
  LRESULT LVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  WPARAM local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100feb90;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  uVar1 = in_ECX[0x29];
  if (((uVar1 == 0) || (uVar1 == 0xffffffff)) || ((0xe10f < uVar1 && (uVar1 < 0xe120)))) {
LAB_100febc9:
    WVar3 = 0xffffffff;
  }
  else {
    WVar3 = 0;
    local_14[0] = 0;
    LVar4 = SendMessageW(*(HWND *)(param_1 + 0x20),0x18b,0,0);
    if (0 < LVar4) {
      do {
        piVar5 = (int *)SendMessageW(*(HWND *)(param_1 + 0x20),0x199,WVar3,0);
        if ((piVar5 != (int *)0x0) && (piVar5[0x29] == in_ECX[0x29])) {
          pcVar2 = *(code **)(*piVar5 + 0x138);
          guard_check_icall();
          iVar6 = (*pcVar2)();
          if ((iVar6 == 0) || (WVar3 = local_14[0], *(int *)(param_1 + 0x88) != 0))
          goto LAB_100febc9;
        }
        WVar3 = WVar3 + 1;
        local_14[0] = WVar3;
        LVar4 = SendMessageW(*(HWND *)(param_1 + 0x20),0x18b,0,0);
      } while ((int)WVar3 < LVar4);
    }
    pcVar2 = *(code **)(*in_ECX + 0x1ac);
    guard_check_icall();
    (*pcVar2)();
    iVar6 = FUN_100349e0(in_ECX[0x1b] + -0x10);
    local_14[0] = iVar6 + 0x10;
    local_8 = 0;
    if (*(int *)(iVar6 + 4) == 0) {
      FUN_100352a0(in_ECX[0x18]);
    }
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,L"&&",
               L"\x01\x01");
    FUN_10037b90(0x26);
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
               L"\x01\x01",L"&");
    WVar3 = SendMessageW(*(HWND *)(param_1 + 0x20),0x180,0,local_14[0]);
    SendMessageW(*(HWND *)(param_1 + 0x20),0x19a,WVar3,(LPARAM)in_ECX);
    FUN_10034f00();
  }
  return WVar3;
}

