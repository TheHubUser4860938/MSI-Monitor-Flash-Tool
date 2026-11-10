// rea decompile_all
// name: CMFCTasksPane::OnUpdateClose
// address: 0x1014f43e
// body: available
// range: 0x1014f43e-0x1014f48e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::OnUpdateClose(class CCmdUI *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::OnUpdateClose(CMFCTasksPane *this,CCmdUI *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  undefined4 uVar5;
  
  pCVar3 = CWnd::FromHandle(*(HWND__ **)(this + 0x5c));
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTasksPane_10201db4,(CObject *)pCVar3);
  if (pCVar4 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x1c8);
    puVar2 = *(undefined4 **)param_1;
    guard_check_icall();
    uVar5 = (*pcVar1)();
    guard_check_icall(uVar5);
    (*(code *)*puVar2)();
  }
  return;
}

