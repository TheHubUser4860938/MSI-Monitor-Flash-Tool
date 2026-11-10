// rea decompile_all
// name: OnCreate
// address: 0x556331
// body: available
// range: 0x556331-0x556439 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCColorPopupMenu::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCColorPopupMenu::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

undefined4 OnCreate(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *this;
  uint uVar4;
  CFrameWnd *pCVar5;
  CMFCPopupMenu *in_ECX;
  undefined4 uVar6;
  
  uVar6 = 0;
  if (((DAT_00614ed8 == 0) || (*(int *)(in_ECX + 0x1fe0) != 0)) &&
     (iVar2 = FUN_004d5eda(param_1), iVar2 != -1)) {
    CMFCPopupMenu::GetAnimationType(0);
    pcVar1 = *(code **)(*(int *)(in_ECX + 0x1178) + 0x450);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
      this = CWnd::FromHandle(pHVar3);
      if (this != (CWnd *)0x0) {
        uVar6 = *(undefined4 *)(this + 0x20);
      }
      *(undefined4 *)(in_ECX + 0x11d4) = uVar6;
      iVar2 = *(int *)(in_ECX + 0x1178);
      pcVar1 = *(code **)(iVar2 + 0x1c0);
      guard_check_icall();
      uVar4 = (*pcVar1)();
      pcVar1 = *(code **)(iVar2 + 0x1e4);
      guard_check_icall(uVar4 | 0x10);
      (*pcVar1)();
      pCVar5 = DAT_0061620c;
      if (DAT_0061620c == (CFrameWnd *)0x0) {
        pCVar5 = CWnd::GetTopLevelFrame(this);
      }
      CMFCPopupMenu::ActivatePopupMenu(pCVar5,in_ECX);
      pcVar1 = *(code **)(*(int *)in_ECX + 0x178);
      guard_check_icall(1);
      (*pcVar1)();
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

