// rea decompile_all
// name: AFXGetParentFrame
// address: 0x1007d8ff
// body: available
// range: 0x1007d8ff-0x1007d96f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    class CFrameWnd * __cdecl AFXGetParentFrame(class CWnd const *)
   
   Library: Visual Studio 2015 Release */

CFrameWnd * __cdecl AFXGetParentFrame(CWnd *param_1)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  HWND pHVar4;
  
  if ((param_1 == (CWnd *)0x0) || (*(int *)(param_1 + 0x20) == 0)) {
LAB_1007d969:
    param_1 = (CWnd *)0x0;
  }
  else {
    do {
      iVar2 = FUN_10051e53(&PTR_s_CPaneFrameWnd_1023d8dc);
      if (iVar2 == 0) {
        pHVar4 = GetParent(*(HWND *)(param_1 + 0x20));
        param_1 = CWnd::FromHandle(pHVar4);
      }
      else {
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_1023d8dc,
                                    (CObject *)param_1);
        param_1 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar3 + 200));
      }
      if (param_1 == (CWnd *)0x0) goto LAB_1007d969;
      pcVar1 = *(code **)(*(int *)param_1 + 0x150);
      guard_check_icall();
      iVar2 = (*pcVar1)();
    } while (iVar2 == 0);
  }
  return (CFrameWnd *)param_1;
}

