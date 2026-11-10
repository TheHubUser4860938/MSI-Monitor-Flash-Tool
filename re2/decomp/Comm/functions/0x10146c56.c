// rea decompile_all
// name: CPreviewView::OnPreviewClose
// address: 0x10146c56
// body: available
// range: 0x10146c56-0x10146d6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewView::OnPreviewClose(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewView::OnPreviewClose(CPreviewView *this)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  CObject *pCVar3;
  CObject *pCVar4;
  
  pCVar2 = CWnd::GetParentFrame((CWnd *)this);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1018c350,(CObject *)pCVar2);
  if (pCVar3 == (CObject *)0x0) {
    pCVar2 = (CFrameWnd *)AfxGetMainWnd();
  }
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1018c350,(CObject *)pCVar2);
  if ((*(int *)(this + 0xdc) != 0) && (*(int *)(*(int *)(this + 0xdc) + 0x80) != 0)) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWnd_101a2454,pCVar3);
    if ((pCVar3 != (CObject *)0x0) && (*(CObject **)(this + 0x80) != (CObject *)0x0)) {
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleServerDoc_101a2c0c,
                                  *(CObject **)(this + 0x80));
      if (pCVar4 != (CObject *)0x0) {
        pcVar1 = *(code **)(**(int **)(this + 0xdc) + 0x60);
        guard_check_icall();
        (*pcVar1)();
        *(undefined4 *)(this + 0xdc) = 0;
        *(undefined4 *)(pCVar3 + 0x18c) = 0;
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x170);
        guard_check_icall(1);
        (*pcVar1)();
      }
    }
  }
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0xdc) + 0x60);
    guard_check_icall();
    (*pcVar1)();
  }
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(*(int *)(this + 0x164) + 0x14) = *(undefined4 *)(this + 0x144);
  pcVar1 = *(code **)(**(int **)(this + 0xb8) + 0x1b0);
  guard_check_icall(*(undefined4 *)(this + 0xc0),*(undefined4 *)(this + 0x164),0,0,this);
  (*pcVar1)();
  return;
}

