// rea decompile_all
// name: CFrameWndEx::OnSetPreviewMode
// address: 0x496037
// body: available
// range: 0x496037-0x4960e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWndEx::OnSetPreviewMode(int,struct CPrintPreviewState *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CFrameWndEx::OnSetPreviewMode(CFrameWndEx *this,int param_1,CPrintPreviewState *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  CObject *pCVar3;
  
  pCVar3 = DAT_0061620c;
  if (DAT_0061620c == (CObject *)0x0) {
    pCVar3 = (CObject *)CWnd::GetTopLevelFrame((CWnd *)this);
  }
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_005ba788,pCVar3);
  if (pCVar3 != (CObject *)0x0) {
    *(uint *)(pCVar3 + 0x428) = -(uint)(param_1 != 0) & (uint)this;
  }
  CDockingManager::SetPrintPreviewMode((CDockingManager *)(this + 0x238),param_1,param_2);
  uVar1 = *(undefined4 *)(param_2 + 8);
  FUN_004d6bc5(param_1,param_2);
  *(undefined4 *)(param_2 + 8) = uVar1;
  pcVar2 = *(code **)(*(int *)this + 0x1c0);
  guard_check_icall(0);
  (*pcVar2)();
  pcVar2 = *(code **)(*(int *)this + 0x178);
  guard_check_icall(1);
  (*pcVar2)();
  if ((*(int *)(this + 0x230) != 0) && (*(int *)(*(int *)(this + 0x230) + 0x328) != 0)) {
    PostMessageW(*(HWND *)(this + 0x20),DAT_006165b4,param_1,0);
  }
  return;
}

