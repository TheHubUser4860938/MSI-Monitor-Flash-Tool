// rea decompile_all
// name: CreateNewWindow
// address: 0x100e83aa
// body: available
// range: 0x100e83aa-0x100e844a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual class CMDIChildWndEx * __thiscall CMDIFrameWndEx::CreateNewWindow(char const
   *,class CObject *)
    public: virtual class CMDIChildWndEx * __thiscall CMDIFrameWndEx::CreateNewWindow(wchar_t const
   *,class CObject *)
   
   Library: Visual Studio 2015 Release */

CObject * CreateNewWindow(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  CMDIChildWnd *pCVar3;
  CObject *pCVar4;
  AFX_MODULE_STATE *pAVar5;
  int *piVar6;
  CWnd *this;
  CFrameWnd *pCVar7;
  CMDIFrameWndEx *in_ECX;
  int local_8;
  
  iVar2 = CMDIFrameWndEx::AreMDITabs(in_ECX,(int *)0x0);
  if (iVar2 == 0) {
    pAVar5 = AfxGetModuleState();
    pcVar1 = *(code **)(**(int **)(pAVar5 + 4) + 0xa4);
    guard_check_icall(param_1);
    piVar6 = (int *)(*pcVar1)();
    if (piVar6 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar6 + 0x68);
      guard_check_icall(param_1);
      local_8 = (*pcVar1)();
      if (local_8 != 0) {
        pcVar1 = *(code **)(*piVar6 + 0x6c);
        guard_check_icall(&local_8);
        this = (CWnd *)(*pcVar1)();
        pCVar7 = CWnd::GetParentFrame(this);
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101c65bc,
                                    (CObject *)pCVar7);
        return pCVar4;
      }
    }
    pCVar4 = (CObject *)0x0;
  }
  else {
    CMDIFrameWndEx::OnWindowNew(in_ECX);
    pCVar3 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)in_ECX,(int *)0x0);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101c65bc,(CObject *)pCVar3);
  }
  return pCVar4;
}

