// rea decompile_all
// name: CMDIChildWndEx::OnSetPreviewMode
// address: 0x100b694e
// body: available
// range: 0x100b694e-0x100b69ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMDIChildWndEx::OnSetPreviewMode(int,struct CPrintPreviewState
   *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIChildWndEx::OnSetPreviewMode(CMDIChildWndEx *this,int param_1,CPrintPreviewState *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  
  pCVar3 = AfxGetMainWnd();
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,(CObject *)pCVar3);
  if (pCVar4 != (CObject *)0x0) {
    *(uint *)(pCVar4 + 0x15c) = -(uint)(param_1 != 0) & (uint)this;
  }
  CDockingManager::SetPrintPreviewMode((CDockingManager *)(this + 0x254),param_1,param_2);
  uVar1 = *(undefined4 *)(param_2 + 8);
  FUN_10086d29(param_1,param_2);
  *(undefined4 *)(param_2 + 8) = uVar1;
  pcVar2 = *(code **)(*(int *)this + 0x1cc);
  guard_check_icall(0);
  (*pcVar2)();
  pcVar2 = *(code **)(*(int *)this + 0x178);
  guard_check_icall(1);
  (*pcVar2)();
  return;
}

