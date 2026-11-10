// rea decompile_all
// name: OnToolHitTest
// address: 0x4e7cec
// body: available
// range: 0x4e7cec-0x4e7d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCToolBarButton::OnToolHitTest(class CWnd const *,struct
   tagTOOLINFOA *)
    public: virtual int __thiscall CMFCToolBarButton::OnToolHitTest(class CWnd const *,struct
   tagTOOLINFOW *)
   
   Library: Visual Studio 2015 Release */

void OnToolHitTest(CWnd *param_1)

{
  CObject *pCVar1;
  CObject *pCVar2;
  code *pcVar3;
  
  if (param_1 == (CWnd *)0x0) {
    pCVar1 = (CObject *)AfxGetMainWnd();
  }
  else {
    pCVar1 = DAT_0061620c;
    if (DAT_0061620c == (CObject *)0x0) {
      pCVar1 = (CObject *)CWnd::GetTopLevelFrame(param_1);
    }
  }
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,pCVar1);
  if (pCVar2 == (CObject *)0x0) {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_005ba788,pCVar1);
    if (pCVar2 == (CObject *)0x0) {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_005c15c4,(CObject *)0x0);
      if (pCVar2 != (CObject *)0x0) {
        pcVar3 = *(code **)(*(int *)pCVar2 + 0x1fc);
        goto LAB_004e7d2e;
      }
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_005ba788,pCVar1);
      if (pCVar2 == (CObject *)0x0) {
        return;
      }
    }
    pcVar3 = *(code **)(*(int *)pCVar2 + 0x1e0);
  }
  else {
    pcVar3 = *(code **)(*(int *)pCVar2 + 500);
  }
LAB_004e7d2e:
  guard_check_icall();
  (*pcVar3)();
  return;
}

