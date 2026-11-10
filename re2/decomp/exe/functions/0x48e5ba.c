// rea decompile_all
// name: FUN_0048e5ba
// address: 0x48e5ba
// body: available
// range: 0x48e5ba-0x48e679 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048e5ba(CWnd *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  CMFCToolBarButton *in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  CMFCToolBarButton::OnChangeParentWnd(in_ECX,param_1);
  if (param_1 == (CWnd *)0x0) {
    return;
  }
  iVar2 = FUN_0043970d(&PTR_s_CMFCMenuBar_0060c730);
  uVar4 = 0;
  uVar5 = 1;
  if (iVar2 == 0) {
    if ((*(int *)(in_ECX + 0x20) == 0) || (uVar3 = 0, *(int *)(in_ECX + 0x7c) != 0)) {
      uVar3 = uVar5;
    }
  }
  else {
    if (((*(int *)(in_ECX + 0x20) == 0) || (*(int *)(in_ECX + 0x7c) == 0)) &&
       (*(int *)(param_1 + 0xd78) == 0)) {
      uVar5 = 0;
    }
    *(undefined4 *)(in_ECX + 8) = 1;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    uVar3 = uVar5;
  }
  *(undefined4 *)(in_ECX + 0x90) = uVar3;
  iVar2 = FUN_0043970d(&PTR_s_CMFCPopupMenuBar_0060c6b4);
  if (iVar2 == 0) {
    *(undefined4 *)(in_ECX + 0x94) = 0;
    return;
  }
  *(undefined4 *)(in_ECX + 0x94) = 1;
  *(undefined4 *)(in_ECX + 8) = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if ((*(int *)(in_ECX + 0x20) != 0) && (*(int *)(in_ECX + 0x7c) == 0)) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0xf0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) goto LAB_0048e665;
  }
  uVar4 = 1;
LAB_0048e665:
  *(undefined4 *)(in_ECX + 0x90) = uVar4;
  return;
}

