// rea decompile_all
// name: CFrameImpl::OnLoadFrame
// address: 0x4934c2
// body: available
// range: 0x4934c2-0x493564 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::OnLoadFrame(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameImpl::OnLoadFrame(CFrameImpl *this)

{
  code *pcVar1;
  int *piVar2;
  AFX_MODULE_STATE *pAVar3;
  CObject *pCVar4;
  ulong uVar5;
  AFX_GLOBAL_DATA *pAVar6;
  
  pAVar3 = AfxGetModuleState();
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_005c63e8,*(CObject **)(pAVar3 + 4));
  if (pCVar4 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x110);
    guard_check_icall(0,this);
    (*pcVar1)();
  }
  if ((*(int *)(this + 0x100) == 0) || (*(int *)(*(int *)(this + 0x100) + 0x20) == 0)) {
    piVar2 = *(int **)(this + 0xfc);
    if ((piVar2 != (int *)0x0) && (piVar2[8] != 0)) {
      pcVar1 = *(code **)(*piVar2 + 0x210);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  else {
    CWnd::SetWindowPos(*(CWnd **)(this + 0xb0),(CWnd *)0x0,-1,-1,-1,-1,0x37);
  }
  uVar5 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
  pAVar6 = GetGlobalData();
  *(ulong *)(pAVar6 + 0x198) = uVar5 & 0x400000;
  return;
}

