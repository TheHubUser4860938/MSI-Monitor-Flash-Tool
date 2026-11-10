// rea decompile_all
// name: CView::OnEndPrintPreview
// address: 0x517db8
// body: available
// range: 0x517db8-0x517ea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CView::OnEndPrintPreview(class CDC *,struct CPrintInfo
   *,struct tagPOINT,class CPreviewView *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CView::OnEndPrintPreview
          (CView *this,CDC *param_1,CPrintInfo *param_2,tagPOINT param_3,CPreviewView *param_4)

{
  code *pcVar1;
  CFrameWnd *this_00;
  CObject *pCVar2;
  CFrameWnd *pCVar3;
  
  if (*(int **)(param_4 + 0xbc) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_4 + 0xbc) + 0x1ac);
    guard_check_icall(param_1,param_2);
    (*pcVar1)();
  }
  this_00 = CWnd::GetParentFrame((CWnd *)this);
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_005c363c,(CObject *)this_00);
  if (pCVar2 == (CObject *)0x0) {
    this_00 = (CFrameWnd *)AfxGetMainWnd();
  }
  pcVar1 = *(code **)(*(int *)this_00 + 0x194);
  guard_check_icall(0,*(undefined4 *)(param_4 + 0xd8));
  (*pcVar1)();
  CFrameWnd::SetActiveView(this_00,*(CView **)(*(int *)(param_4 + 0xd8) + 0xc),1);
  pCVar3 = CWnd::GetParentFrame((CWnd *)this);
  if (this_00 != pCVar3) {
    pcVar1 = *(code **)(*(int *)this + 400);
    guard_check_icall(1,this,this);
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)param_4 + 0x60);
  guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this_00 + 0x178);
  guard_check_icall(1);
  (*pcVar1)();
  SendMessageW(*(HWND *)(this_00 + 0x20),0x362,0xe001,0);
  UpdateWindow(*(HWND *)(this_00 + 0x20));
  return;
}

