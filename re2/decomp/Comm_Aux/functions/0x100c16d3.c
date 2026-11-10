// rea decompile_all
// name: CreateTearOffBar
// address: 0x100c16d3
// body: available
// range: 0x100c16d3-0x100c17d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c16e7 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual class CPane * __thiscall CMFCColorPopupMenu::CreateTearOffBar(class CFrameWnd
   *,unsigned int,char const *)
    public: virtual class CPane * __thiscall CMFCColorPopupMenu::CreateTearOffBar(class CFrameWnd
   *,unsigned int,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

int * CreateTearOffBar(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  CObject *pCVar2;
  CMFCColorBar *this;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((param_3 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorMenuButton_1020608c,
                              *(CObject **)(in_ECX + 0x158));
  if (pCVar2 != (CObject *)0x0) {
    this = (CMFCColorBar *)FUN_10047eb4(0xe68);
    if (this == (CMFCColorBar *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)CMFCColorBar::CMFCColorBar
                                (this,(CMFCColorBar *)(in_ECX + 0x1178),*(uint *)(pCVar2 + 0x20));
    }
    uVar10 = 0;
    uVar9 = 0;
    pcVar1 = *(code **)(*piVar3 + 0x450);
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0x50402808;
    guard_check_icall(param_1,0x50402808,param_2,0,0,0,0);
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      FUN_10056072(param_3);
      iVar4 = *piVar3;
      pcVar1 = *(code **)(iVar4 + 0x1c0);
      guard_check_icall(param_1,uVar6,param_2,uVar7,uVar8,uVar9,uVar10);
      uVar5 = (*pcVar1)();
      pcVar1 = *(code **)(iVar4 + 0x1e4);
      guard_check_icall(uVar5 | 0x30);
      (*pcVar1)();
      pcVar1 = *(code **)(*piVar3 + 0x1ec);
      guard_check_icall(0xf000);
      (*pcVar1)();
      return piVar3;
    }
    pcVar1 = *(code **)(*piVar3 + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  return (int *)0x0;
}

