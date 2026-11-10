// rea decompile_all
// name: CScrollView::GetTrueClientSize
// address: 0x10080362
// body: available
// range: 0x10080362-0x10080407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CScrollView::GetTrueClientSize(class CSize &,class CSize &)
   
   Library: Visual Studio 2015 Release */

int __thiscall CScrollView::GetTrueClientSize(CScrollView *this,CSize *param_1,CSize *param_2)

{
  ulong uVar1;
  int iVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  *(LONG *)param_1 = local_18.right;
  *(LONG *)(param_1 + 4) = local_18.bottom;
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  GetScrollBarSizes(this,param_2);
  if ((*(int *)param_2 != 0) && ((uVar1 & 0x200000) != 0)) {
    *(int *)param_1 = *(int *)param_1 + *(int *)param_2;
  }
  if ((*(int *)(param_2 + 4) != 0) && ((uVar1 & 0x100000) != 0)) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(param_2 + 4);
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

