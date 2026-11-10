// rea decompile_all
// name: CPaneFrameWnd::OnCloseMiniFrame
// address: 0x100dd5f5
// body: available
// range: 0x100dd5f5-0x100dd699 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CPaneFrameWnd::OnCloseMiniFrame(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPaneFrameWnd::OnCloseMiniFrame(CPaneFrameWnd *this)

{
  CObject *pCVar1;
  CObject *pCVar2;
  int iVar3;
  code *pcVar4;
  
  pCVar1 = DAT_102471dc;
  if ((DAT_102471dc == (CObject *)0x0) &&
     (pCVar1 = (CObject *)CWnd::GetTopLevelFrame((CWnd *)this), pCVar1 == (CObject *)0x0)) {
    return 1;
  }
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101e9630,pCVar1);
  if (pCVar2 == (CObject *)0x0) {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_101e90a0,pCVar1);
    if (pCVar2 == (CObject *)0x0) {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_101e9c40,pCVar1);
      if ((pCVar2 == (CObject *)0x0) &&
         (pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101e9ff8,pCVar1),
         pCVar2 == (CObject *)0x0)) {
        return 1;
      }
      pcVar4 = *(code **)(*(int *)pCVar2 + 0x20c);
    }
    else {
      pcVar4 = *(code **)(*(int *)pCVar2 + 500);
    }
  }
  else {
    pcVar4 = *(code **)(*(int *)pCVar2 + 0x214);
  }
  guard_check_icall(this);
  iVar3 = (*pcVar4)();
  return iVar3;
}

