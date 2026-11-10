// rea decompile_all
// name: OnCreate
// address: 0x100b7dc6
// body: available
// range: 0x100b7dc6-0x100b7f5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCPopupMenu::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCPopupMenu::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

int OnCreate(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  CMFCPopupMenu *pCVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  CMFCShadowWnd *this;
  CMFCPopupMenu *in_ECX;
  
  iVar2 = FUN_100bd49c(param_1);
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    CMFCPopupMenu::GetAnimationType(0);
    pcVar1 = *(code **)(*(int *)in_ECX + 0x1c8);
    guard_check_icall();
    piVar3 = (int *)(*pcVar1)();
    piVar3[0x35c] = *(int *)(in_ECX + 0xf3c);
    if ((*(int *)(in_ECX + 0x158) != 0) && (*(int *)(*(int *)(in_ECX + 0x158) + 0xb0) != 0)) {
      piVar3[0x35e] = 1;
      piVar3[0x350] = 1;
      piVar3[0x35f] = *(int *)(*(int *)(in_ECX + 0x158) + 0xc0);
    }
    pcVar1 = *(code **)(*piVar3 + 800);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    iVar2 = 0;
    if (iVar4 != 0) {
      pCVar5 = CMFCPopupMenu::GetParentPopupMenu(in_ECX);
      if (pCVar5 != (CMFCPopupMenu *)0x0) {
        *(undefined4 *)(in_ECX + 0xf54) = *(undefined4 *)(pCVar5 + 0xf54);
      }
      piVar3[0x356] = *(int *)(in_ECX + 0xf54);
      piVar3[0x357] = DAT_102470a0;
      pHVar6 = GetParent(*(HWND *)(in_ECX + 0x20));
      pCVar7 = CWnd::FromHandle(pHVar6);
      if (pCVar7 == (CWnd *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(pCVar7 + 0x20);
      }
      piVar3[0x17] = iVar2;
      if ((0 < *(int *)(in_ECX + 0x105c)) && (*(int *)(in_ECX + 0x116c) != 0)) {
        this = (CMFCShadowWnd *)FUN_100491ae(0x2b8);
        if (this == (CMFCShadowWnd *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)CMFCShadowWnd::CMFCShadowWnd(this,in_ECX,*(int *)(in_ECX + 0x105c));
        }
        *(undefined4 *)(in_ECX + 0x105c) = 0;
        *(int **)(in_ECX + 0x1070) = piVar3;
        pcVar1 = *(code **)(*piVar3 + 0x1c8);
        guard_check_icall();
        (*pcVar1)();
      }
      pcVar1 = *(code **)(*(int *)in_ECX + 500);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      iVar2 = (iVar2 != 0) - 1;
    }
  }
  return iVar2;
}

