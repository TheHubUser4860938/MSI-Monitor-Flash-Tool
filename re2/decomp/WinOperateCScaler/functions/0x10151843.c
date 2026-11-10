// rea decompile_all
// name: CPreviewView::OnActivateView
// address: 0x10151843
// body: available
// range: 0x10151843-0x101518b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CPreviewView::OnActivateView(int,class CView *,class CView *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPreviewView::OnActivateView(CPreviewView *this,int param_1,CView *param_2,CView *param_3)

{
  HWND pHVar1;
  CWnd *pCVar2;
  BOOL BVar3;
  
  if (param_1 != 0) {
    pHVar1 = GetFocus();
    pCVar2 = CWnd::FromHandle(pHVar1);
    if ((pCVar2 == (CWnd *)0x0) ||
       ((*(int *)(this + 0xdc) != 0 &&
        (BVar3 = IsWindow(*(HWND *)(*(int *)(this + 0xdc) + 0x20)), BVar3 != 0)))) {
      if (pCVar2 == (CWnd *)0x0) {
        pHVar1 = (HWND)0x0;
      }
      else {
        pHVar1 = *(HWND *)(pCVar2 + 0x20);
      }
      BVar3 = IsChild(*(HWND *)(*(int *)(this + 0xdc) + 0x20),pHVar1);
      if (BVar3 == 0) {
        pCVar2 = CWnd::GetDlgItem(*(CWnd **)(this + 0xdc),0xe304);
        CWnd::SetFocus(pCVar2);
      }
    }
  }
  return;
}

