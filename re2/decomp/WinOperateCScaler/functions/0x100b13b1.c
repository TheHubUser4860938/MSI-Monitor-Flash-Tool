// rea decompile_all
// name: CPaneFrameWnd::OnCapture
// address: 0x100b13b1
// body: available
// range: 0x100b13b1-0x100b144f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CPaneFrameWnd::OnCapture(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnCapture(CPaneFrameWnd *this,int param_1)

{
  code *pcVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  BOOL BVar4;
  
  pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,(CObject *)pCVar2);
  if (pCVar3 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x30c);
    guard_check_icall(param_1);
    (*pcVar1)();
  }
  BVar4 = IsWindow(*(HWND *)(this + 0xcc));
  if ((BVar4 != 0) && (param_1 == 0)) {
    DestroyWindow(*(HWND *)(this + 0xcc));
    *(undefined4 *)(this + 0xcc) = 0;
  }
  if ((pCVar3 != (CObject *)0x0) && (param_1 == 0)) {
    if (*(HWND *)(pCVar3 + 0x184) != *(HWND *)(this + 0x20)) {
      BVar4 = IsWindow(*(HWND *)(pCVar3 + 0x184));
      if (BVar4 != 0) {
        DestroyWindow(*(HWND *)(pCVar3 + 0x184));
      }
    }
    *(undefined4 *)(pCVar3 + 0x184) = 0;
  }
  return;
}

