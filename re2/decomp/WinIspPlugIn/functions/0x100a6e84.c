// rea decompile_all
// name: CMFCTabCtrl::AdjustWndScroll
// address: 0x100a6e84
// body: available
// range: 0x100a6e84-0x100a6f8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTabCtrl::AdjustWndScroll(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTabCtrl::AdjustWndScroll(CMFCTabCtrl *this)

{
  code *pcVar1;
  int iVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x260) == 0) goto LAB_100a6f7f;
  local_18.left = *(LONG *)(this + 0x2dc);
  local_18.top = *(LONG *)(this + 0x2e0);
  local_18.right = *(LONG *)(this + 0x2e4);
  local_18.bottom = *(LONG *)(this + 0x2e8);
  pcVar1 = *(code **)(*(int *)this + 0x1a4);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (((*(int *)(this + 300) == 0) || (1 < iVar2)) &&
     ((*(int *)(this + 0x284) == 0 || (iVar2 != 0)))) {
    iVar2 = GetSystemMetrics(0x15);
    if (*(int *)(this + 0x2b4) < iVar2 * 2) {
      SetRectEmpty(&local_18);
      goto LAB_100a6f4a;
    }
    local_18.right = *(LONG *)(this + 0x2a0);
    local_18.top = local_18.top + 1;
    local_18.bottom = local_18.bottom + -2;
    local_18.left = local_18.right - *(int *)(this + 0x2b4);
    *(LONG *)(this + 700) = local_18.left;
    *(LONG *)(this + 0x2c0) = local_18.top;
    *(LONG *)(this + 0x2c4) = local_18.right;
    *(LONG *)(this + 0x2c8) = local_18.bottom;
    *(int *)(this + 0x2c0) = *(int *)(this + 0x2c0) + 1;
    *(LONG *)(this + 0x2c4) = local_18.left;
    *(LONG *)(this + 700) = local_18.left + -5;
    *(LONG *)(this + 0x2e4) = local_18.left + -5;
  }
  else {
    local_18.bottom = local_18.bottom + -2;
LAB_100a6f4a:
    SetRectEmpty((LPRECT)(this + 700));
  }
  CWnd::SetWindowPos((CWnd *)(this + 0x330),(CWnd *)0x0,local_18.left,local_18.top,
                     local_18.right - local_18.left,local_18.bottom - local_18.top,0x114);
LAB_100a6f7f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

