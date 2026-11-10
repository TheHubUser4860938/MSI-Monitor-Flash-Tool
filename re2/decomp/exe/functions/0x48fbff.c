// rea decompile_all
// name: OnCreate
// address: 0x48fbff
// body: available
// range: 0x48fbff-0x48fcc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCCaptionBar::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCCaptionBar::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

void OnCreate(void)

{
  CWnd *pCVar1;
  CToolTipCtrl *pCVar2;
  int iVar3;
  CWnd *in_ECX;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_0042ec70();
  if (iVar3 != -1) {
    pCVar1 = in_ECX + 0x2c8;
    CTooltipManager::CreateToolTip((CToolTipCtrl **)pCVar1,in_ECX,0x400);
    pCVar2 = *(CToolTipCtrl **)pCVar1;
    if ((pCVar2 != (CToolTipCtrl *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x418,0,0x280);
      CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,in_ECX,(wchar_t *)0xffffffff,&local_18,1);
      CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,in_ECX,(wchar_t *)0xffffffff,&local_18,2);
      CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,in_ECX,(wchar_t *)0xffffffff,&local_18,3);
      CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,in_ECX,(wchar_t *)0xffffffff,&local_18,4);
    }
    FUN_004349b3(L"Caption Bar");
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

