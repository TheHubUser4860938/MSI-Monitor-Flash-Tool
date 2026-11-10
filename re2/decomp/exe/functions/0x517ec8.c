// rea decompile_all
// name: CView::OnMouseActivate
// address: 0x517ec8
// body: available
// range: 0x517ec8-0x517f44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CView::OnMouseActivate(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CView::OnMouseActivate(CView *this,CWnd *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  CFrameWnd *this_00;
  CView *pCVar3;
  HWND hWnd;
  BOOL BVar4;
  
  iVar2 = FUN_0042ec70();
  if (((iVar2 != 3) && (iVar2 != 4)) &&
     (this_00 = CWnd::GetParentFrame((CWnd *)this), this_00 != (CFrameWnd *)0x0)) {
    pCVar3 = (CView *)FUN_004d4de7();
    hWnd = GetFocus();
    if (((pCVar3 == this) && (*(HWND *)(this + 0x20) != hWnd)) &&
       (BVar4 = IsChild(*(HWND *)(this + 0x20),hWnd), BVar4 == 0)) {
      pcVar1 = *(code **)(*(int *)this + 400);
      guard_check_icall(1,this,this);
      (*pcVar1)();
    }
    else {
      CFrameWnd::SetActiveView(this_00,this,1);
    }
  }
  return iVar2;
}

