// rea decompile_all
// name: CFrameWndEx::OnNcMouseMove
// address: 0x100e813d
// body: available
// range: 0x100e813d-0x100e81be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CFrameWndEx::OnNcMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CFrameWndEx::OnNcMouseMove(CFrameWndEx *this,int param_1,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  ulong uVar2;
  BOOL BVar3;
  CMFCVisualManager *pCVar4;
  int iVar5;
  
  CFrameImpl::OnNcMouseMove((CFrameImpl *)(this + 0x134),param_1,param_3,param_4);
  if (((param_1 == 2) && (uVar2 = CWnd::GetExStyle((CWnd *)this), (uVar2 & 0x1000000) != 0)) &&
     ((*(int *)(this + 0x230) == 0 ||
      ((BVar3 = IsWindowVisible(*(HWND *)(*(int *)(this + 0x230) + 0x20)), BVar3 == 0 ||
       (*(int *)(*(int *)(this + 0x230) + 0x328) == 0)))))) {
    pCVar4 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar4 + 500);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    if (iVar5 != 0) {
      return;
    }
  }
  FUN_100540e0();
  return;
}

