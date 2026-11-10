// rea decompile_all
// name: AFXGetParentFrame
// address: 0x425abe
// body: available
// range: 0x425abe-0x425b2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
LAB_00425b28:
    param_1 = (CWnd *)0x0;
  }
  else {
    do {
      iVar2 = FUN_0043970d(&PTR_s_CPaneFrameWnd_0060c5e0);
      if (iVar2 == 0) {
        pHVar4 = GetParent(*(HWND *)(param_1 + 0x20));
        param_1 = CWnd::FromHandle(pHVar4);
      }
      else {
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_0060c5e0,
                                    (CObject *)param_1);
        param_1 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar3 + 200));
      }
      if (param_1 == (CWnd *)0x0) goto LAB_00425b28;
      pcVar1 = *(code **)(*(int *)param_1 + 0x150);
      guard_check_icall();
      iVar2 = (*pcVar1)();
    } while (iVar2 == 0);
  }
  return (CFrameWnd *)param_1;
}

