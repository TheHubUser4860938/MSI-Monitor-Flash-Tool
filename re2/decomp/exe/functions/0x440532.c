// rea decompile_all
// name: FUN_00440532
// address: 0x440532
// body: available
// range: 0x440532-0x44058d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44058c to 0x44059f FUN_0044059f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_00440532(int param_1)

{
  CWnd *pCVar1;
  code *pcVar2;
  int iVar3;
  AFX_MODULE_STATE *pAVar4;
  uint uVar5;
  undefined4 uVar6;
  HWND pHVar7;
  CWnd *in_ECX;
  
  pCVar1 = in_ECX + 0x70;
  if (*(int *)pCVar1 == 0) {
    pcVar2 = *(code **)(*(int *)in_ECX + 0x154);
    guard_check_icall(pCVar1);
    iVar3 = (*pcVar2)();
    if ((iVar3 != 0) && (*(int *)pCVar1 == 0)) {
      pAVar4 = AfxGetModuleState();
      pcVar2 = *(code **)(**(int **)(pAVar4 + 0x3c) + 8);
      guard_check_icall();
      iVar3 = (*pcVar2)();
      *(int *)(in_ECX + 0x70) = iVar3;
      uVar5 = FUN_0044059f();
      return uVar5;
    }
    if (param_1 == 0) {
      iVar3 = **(int **)(in_ECX + 0x70);
      pcVar2 = *(code **)(*(int *)in_ECX + 0x160);
      guard_check_icall();
      uVar6 = (*pcVar2)();
      guard_check_icall(uVar6);
      (**(code **)(iVar3 + 0xa0))();
    }
  }
  pCVar1 = in_ECX + 0x70;
  if (*(int *)pCVar1 != 0) {
    while ((*(uint *)(in_ECX + 0x60) & 0x100) == 0) {
      *(uint *)(in_ECX + 0x60) = *(uint *)(in_ECX + 0x60) | 0x100;
      pHVar7 = GetParent(*(HWND *)(in_ECX + 0x20));
      in_ECX = CWnd::FromHandle(pHVar7);
      pHVar7 = (HWND)0x0;
      if (in_ECX != (CWnd *)0x0) {
        pHVar7 = *(HWND *)(in_ECX + 0x20);
      }
      uVar5 = GetWindowLongW(pHVar7,-0x10);
      if (((uVar5 & 0x40000000) == 0) || (in_ECX == (CWnd *)0x0)) break;
    }
  }
  return (uint)(*(int *)pCVar1 != 0);
}

