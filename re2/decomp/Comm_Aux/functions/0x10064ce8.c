// rea decompile_all
// name: CMFCPropertyPage::OnInitDialog
// address: 0x10064ce8
// body: available
// range: 0x10064ce8-0x10064dcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCPropertyPage::OnInitDialog(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPropertyPage::OnInitDialog(CMFCPropertyPage *this)

{
  int dy;
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  iVar1 = CDialog::OnInitDialog((CDialog *)this);
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPropertySheet_101b5eb8,(CObject *)pCVar3);
  uVar5 = extraout_EDX;
  if ((pCVar4 != (CObject *)0x0) && (dy = *(int *)(pCVar4 + 0x4dc0), dy != 0)) {
    pHVar2 = GetWindow(*(HWND *)(this + 0x20),5);
    pCVar3 = CWnd::FromHandle(pHVar2);
    uVar5 = extraout_EDX_00;
    while (pCVar3 != (CWnd *)0x0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_18);
      CWnd::ScreenToClient((CWnd *)this,&local_18);
      OffsetRect(&local_18,0,dy);
      CWnd::SetWindowPos(pCVar3,(CWnd *)0x0,local_18.left,local_18.top,-1,-1,0x15);
      pHVar2 = GetWindow(*(HWND *)(pCVar3 + 0x20),2);
      pCVar3 = CWnd::FromHandle(pHVar2);
      uVar5 = extraout_EDX_01;
    }
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar5,iVar1);
  return iVar1;
}

