// rea decompile_all
// name: CMFCEditBrowseCtrl::PreTranslateMessage
// address: 0x10043f57
// body: available
// range: 0x10043f57-0x10043fa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCEditBrowseCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCEditBrowseCtrl::PreTranslateMessage(CMFCEditBrowseCtrl *this,tagMSG *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (((param_1->message == 0x104) && (*(int *)(this + 0xc0) != 0)) &&
     ((param_1->wParam == 0x28 || (param_1->wParam == 0x27)))) {
    pcVar1 = *(code **)(*(int *)this + 0x164);
    guard_check_icall();
    (*pcVar1)();
    iVar2 = 1;
  }
  else {
    iVar2 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  }
  return iVar2;
}

