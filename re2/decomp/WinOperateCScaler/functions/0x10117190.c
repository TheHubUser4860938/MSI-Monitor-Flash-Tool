// rea decompile_all
// name: CMDIChildWnd::PreTranslateMessage
// address: 0x10117190
// body: available
// range: 0x10117190-0x1011720c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMDIChildWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIChildWnd::PreTranslateMessage(CMDIChildWnd *this,tagMSG *param_1)

{
  code *pcVar1;
  int iVar2;
  HACCEL hAccTable;
  CMDIFrameWnd *pCVar3;
  
  if ((param_1->message == 0x201) || (param_1->message == 0xa1)) {
    AfxCancelModes(param_1->hwnd);
  }
  iVar2 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (iVar2 == 0) {
    if ((0xff < param_1->message) && (param_1->message < 0x10a)) {
      pcVar1 = *(code **)(*(int *)this + 0x1ac);
      guard_check_icall();
      hAccTable = (HACCEL)(*pcVar1)();
      if (hAccTable != (HACCEL)0x0) {
        pCVar3 = GetMDIFrame(this);
        iVar2 = TranslateAcceleratorW(*(HWND *)(pCVar3 + 0x20),hAccTable,param_1);
        if (iVar2 != 0) goto LAB_101171bf;
      }
    }
    iVar2 = 0;
  }
  else {
LAB_101171bf:
    iVar2 = 1;
  }
  return iVar2;
}

