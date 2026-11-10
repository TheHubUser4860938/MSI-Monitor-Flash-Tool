// rea decompile_all
// name: OnCreate
// address: 0x4aecba
// body: available
// range: 0x4aecba-0x4aeded inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCRibbonPanelMenuBar::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCRibbonPanelMenuBar::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

void OnCreate(undefined4 param_1)

{
  CWnd *pCVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  CWnd *in_ECX;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar3 = OnCreate(param_1);
  if (iVar3 != -1) {
    if ((*(int *)(in_ECX + 0xde8) == 0) || (*(int *)(in_ECX + 0xde0) != 0)) {
      pCVar1 = in_ECX + 0xd08;
      CTooltipManager::CreateToolTip((CToolTipCtrl **)pCVar1,in_ECX,0x200);
      if ((*(CToolTipCtrl **)pCVar1 != (CToolTipCtrl *)0x0) &&
         (*(int *)(*(CToolTipCtrl **)pCVar1 + 0x20) != 0)) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetClientRect(*(HWND *)(in_ECX + 0x20),&local_18);
        SendMessageW(*(HWND *)(*(CToolTipCtrl **)pCVar1 + 0x20),0x418,0,0x280);
        uVar4 = CWnd::GetDlgCtrlID(in_ECX);
        CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,in_ECX,(wchar_t *)0xffffffff,&local_18,uVar4)
        ;
      }
    }
    if ((*(int *)(in_ECX + 0xea4) != 0) && (*(int *)(*(int *)(in_ECX + 0xea4) + 0x110) != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      pcVar2 = *(code **)(*(int *)(in_ECX + 0xe20) + 0x164);
      guard_check_icall(0x50000001,&local_18);
      (*pcVar2)();
      *(CWnd **)(*(int *)(in_ECX + 0xea4) + 0x104) = in_ECX + 0xe20;
    }
    if ((*(int *)(in_ECX + 0xea0) != 0) && (-1 < *(int *)(*(int *)(in_ECX + 0xea0) + 0x2d4))) {
      *(undefined4 *)(in_ECX + 0xdf0) = 1;
      *(undefined4 *)(in_ECX + 0xdec) = 1;
    }
    GetCursorPos((LPPOINT)(in_ECX + 0xe18));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

