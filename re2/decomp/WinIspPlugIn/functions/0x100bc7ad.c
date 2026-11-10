// rea decompile_all
// name: FUN_100bc7ad
// address: 0x100bc7ad
// body: available
// range: 0x100bc7ad-0x100bc86d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bc869 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bc7ad(uint param_1)

{
  ulong uVar1;
  CFrameWnd *this;
  int iVar2;
  HWND hWnd;
  CWnd *in_ECX;
  UINT uCmd;
  
  uVar1 = CWnd::GetExStyle(in_ECX);
  this = (CFrameWnd *)in_ECX;
  if ((uVar1 & 0x40000000) == 0) {
    this = CWnd::GetTopLevelFrame(in_ECX);
  }
  if (this == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  if ((param_1 & 0xc) != 0) {
    iVar2 = CWnd::IsWindowEnabled((CWnd *)this);
    if ((((~(param_1 >> 3) & 1) == 0) || (iVar2 == 0)) || (this == (CFrameWnd *)in_ECX)) {
      SendMessageW(*(HWND *)(this + 0x20),0x86,0,0);
    }
    else {
      *(uint *)(in_ECX + 0x60) = *(uint *)(in_ECX + 0x60) | 0x200;
      SendMessageW(*(HWND *)(this + 0x20),0x86,1,0);
      *(uint *)(in_ECX + 0x60) = *(uint *)(in_ECX + 0x60) & 0xfffffdff;
    }
  }
  uCmd = 5;
  hWnd = GetDesktopWindow();
  while (hWnd = GetWindow(hWnd,uCmd), hWnd != (HWND)0x0) {
    iVar2 = AfxIsDescendant(*(HWND__ **)(this + 0x20),hWnd);
    if (iVar2 != 0) {
      SendMessageW(hWnd,0x36d,param_1,0);
    }
    uCmd = 2;
  }
  return;
}

