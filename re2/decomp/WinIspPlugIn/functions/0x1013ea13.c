// rea decompile_all
// name: CMFCColorDialog::PreTranslateMessage
// address: 0x1013ea13
// body: available
// range: 0x1013ea13-0x1013eb0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCColorDialog::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCColorDialog::PreTranslateMessage(CMFCColorDialog *this,tagMSG *param_1)

{
  WPARAM WVar1;
  ushort uVar2;
  BOOL BVar3;
  undefined4 uVar4;
  HGLOBAL hMem;
  LPWSTR lpString1;
  int iVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1013ea1f;
  if (param_1->message == 0x100) {
    WVar1 = param_1->wParam;
    uVar2 = GetAsyncKeyState(0x11);
    if (((uVar2 & 0x8000) != 0) && ((WVar1 == 0x43 || (WVar1 == 0x2d)))) {
      BVar3 = OpenClipboard(*(HWND *)(this + 0x20));
      if (BVar3 != 0) {
        EmptyClipboard();
        uVar4 = FUN_10049868();
        FUN_100476a0(uVar4);
        local_8 = 0;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_00,(wchar_t *)local_14,L"RGB(%d, %d, %d)",(uint)(byte)this[0xe4],
                   (uint)(byte)this[0xe5],(uint)(byte)this[0xe6]);
        hMem = GlobalAlloc(0x2000,*(int *)(local_14[0] + -6) * 2 + 2);
        lpString1 = GlobalLock(hMem);
        lstrcpyW(lpString1,local_14[0]);
        GlobalUnlock(hMem);
        SetClipboardData(0xd,hMem);
        CloseClipboard();
        local_8 = 0xffffffff;
        FUN_100476d0();
      }
    }
  }
  iVar5 = CDialogEx::PreTranslateMessage((CDialogEx *)this,param_1);
  return iVar5;
}

