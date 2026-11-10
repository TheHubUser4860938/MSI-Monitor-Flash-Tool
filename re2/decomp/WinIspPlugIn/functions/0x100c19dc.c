// rea decompile_all
// name: CMFCColorBar::PreTranslateMessage
// address: 0x100c19dc
// body: available
// range: 0x100c19dc-0x100c1ab1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCColorBar::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCColorBar::PreTranslateMessage(CMFCColorBar *this,tagMSG *param_1)

{
  UINT UVar1;
  POINT pt;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if ((((*(int *)(this + 0xe5c) == 0) && (*(int *)(this + 0xe60) == 0)) &&
      (*(int *)(this + 0xe64) == 0)) || (*(int *)(this + 0xd6c) != 0)) {
LAB_100c1a97:
    CMFCToolBar::PreTranslateMessage((CMFCToolBar *)this,param_1);
  }
  else {
    UVar1 = param_1->message;
    if (UVar1 != 0x7b) {
      if (UVar1 == 0x100) {
        iVar2 = param_1->wParam - 0x1b;
      }
      else {
        if (UVar1 == 0x104) goto LAB_100c1a70;
        if (((UVar1 != 0x201) && (UVar1 != 0x204)) && (UVar1 != 0x207)) goto LAB_100c1a97;
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetClientRect(*(HWND *)(this + 0x20),&local_18);
        pt.y = (int)*(short *)((int)&param_1->lParam + 2);
        pt.x = (int)(short)param_1->lParam;
        iVar2 = PtInRect(&local_18,pt);
      }
      if (iVar2 != 0) goto LAB_100c1a97;
    }
LAB_100c1a70:
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    SendMessageW(*(HWND *)(pCVar4 + 0x20),0x10,0,0);
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

