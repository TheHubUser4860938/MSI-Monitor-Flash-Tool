// rea decompile_all
// name: CMDIFrameWnd::PreTranslateMessage
// address: 0x1014214a
// body: available
// range: 0x1014214a-0x10142234 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMDIFrameWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIFrameWnd::PreTranslateMessage(CMDIFrameWnd *this,tagMSG *param_1)

{
  code *pcVar1;
  int iVar2;
  CMDIChildWnd *pCVar3;
  BOOL BVar4;
  
  if ((param_1->message == 0x201) || (param_1->message == 0xa1)) {
    AfxCancelModes(param_1->hwnd);
  }
  iVar2 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (iVar2 != 0) {
    return 1;
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0xac) + 0x54);
    guard_check_icall(param_1);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      return 1;
    }
  }
  pCVar3 = MDIGetActive(this,(int *)0x0);
  if (pCVar3 != (CMDIChildWnd *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x10c);
    guard_check_icall(param_1);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      return 1;
    }
  }
  if (((0xff < param_1->message) && (param_1->message < 0x10a)) &&
     (((*(HACCEL *)(this + 0x8c) != (HACCEL)0x0 &&
       (iVar2 = TranslateAcceleratorW(*(HWND *)(this + 0x20),*(HACCEL *)(this + 0x8c),param_1),
       iVar2 != 0)) ||
      ((iVar2 = FUN_100bb521(), iVar2 == 0 &&
       (((param_1->message == 0x100 || (param_1->message == 0x104)) &&
        (BVar4 = TranslateMDISysAccel(*(HWND *)(this + 0x120),param_1), BVar4 != 0)))))))) {
    return 1;
  }
  return 0;
}

