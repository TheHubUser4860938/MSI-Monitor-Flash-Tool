// rea decompile_all
// name: CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd
// address: 0x100cae0a
// body: available
// range: 0x100cae0a-0x100caeb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd(class CWnd *)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd(CGlobalUtils *this,CWnd *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  uint uVar4;
  
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_102018e4,(CObject *)param_1);
  if (pCVar2 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x1a8);
    guard_check_icall();
    param_1 = (CWnd *)(*pcVar1)();
  }
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,(CObject *)param_1);
  uVar4 = 0;
  if (pCVar2 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x16c);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x228);
      guard_check_icall(0);
      iVar3 = (*pcVar1)();
      if ((iVar3 != 0) && (iVar3 = FUN_100250d6(&PTR_s_CMultiPaneFrameWnd_10201958), iVar3 != 0)) {
        return 1;
      }
    }
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x1c0);
    guard_check_icall();
    uVar4 = (*pcVar1)();
    uVar4 = uVar4 >> 6 & 1;
  }
  return uVar4;
}

