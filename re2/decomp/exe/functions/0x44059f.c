// rea decompile_all
// name: FUN_0044059f
// address: 0x44059f
// body: available
// range: 0x44059f-0x440629 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool FUN_0044059f(void)

{
  CWnd *pCVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  HWND pHVar5;
  uint uVar6;
  CWnd *unaff_EBX;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iVar2 = **(int **)(unaff_EBX + 0x70);
    pcVar3 = *(code **)(*(int *)unaff_EBX + 0x160);
    guard_check_icall();
    uVar4 = (*pcVar3)();
    guard_check_icall(uVar4);
    (**(code **)(iVar2 + 0xa0))();
  }
  pCVar1 = unaff_EBX + 0x70;
  if (*(int *)pCVar1 != 0) {
    while ((*(uint *)(unaff_EBX + 0x60) & 0x100) == 0) {
      *(uint *)(unaff_EBX + 0x60) = *(uint *)(unaff_EBX + 0x60) | 0x100;
      pHVar5 = GetParent(*(HWND *)(unaff_EBX + 0x20));
      unaff_EBX = CWnd::FromHandle(pHVar5);
      pHVar5 = (HWND)0x0;
      if (unaff_EBX != (CWnd *)0x0) {
        pHVar5 = *(HWND *)(unaff_EBX + 0x20);
      }
      uVar6 = GetWindowLongW(pHVar5,-0x10);
      if (((uVar6 & 0x40000000) == 0) || (unaff_EBX == (CWnd *)0x0)) break;
    }
  }
  return *(int *)pCVar1 != 0;
}

