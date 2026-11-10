// rea decompile_all
// name: CMDIChildWndEx::OnNcActivate
// address: 0x4c6c4e
// body: available
// range: 0x4c6c4e-0x4c6cf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMDIChildWndEx::OnNcActivate(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIChildWndEx::OnNcActivate(CMDIChildWndEx *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  AFX_MODULE_STATE *pAVar4;
  int *piVar5;
  
  iVar2 = CFrameImpl::OnNcActivate((CFrameImpl *)(this + 0x150),param_1);
  if (iVar2 != 0) {
    SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
  }
  iVar3 = FUN_005168f7(param_1);
  if (iVar2 != 0) {
    SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
  }
  pAVar4 = AfxGetModuleState();
  if (*(int **)(pAVar4 + 4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(pAVar4 + 4) + 0xfc);
    guard_check_icall();
    piVar5 = (int *)(*pcVar1)();
    if (piVar5 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar5 + 0x30);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        return iVar3;
      }
    }
    InvalidateIconicBitmaps(this);
  }
  return iVar3;
}

