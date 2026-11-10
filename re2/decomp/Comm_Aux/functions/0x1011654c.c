// rea decompile_all
// name: CFrameImpl::GetCaptionRect
// address: 0x1011654c
// body: available
// range: 0x1011654c-0x10116671 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CRect __thiscall CFrameImpl::GetCaptionRect(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameImpl::GetCaptionRect(CFrameImpl *this)

{
  BOOL BVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int *in_stack_00000004;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  CGlobalUtils::GetSystemBorders((CGlobalUtils *)&PTR_vftable_10205db4,(CWnd *)&local_20);
  BVar1 = IsIconic(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
  if (BVar1 == 0) {
    uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
    if ((uVar2 & 0x1000000) == 0) goto LAB_101165a8;
  }
  local_20 = 0;
  local_1c = 0;
LAB_101165a8:
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(*(int *)(this + 0xb0) + 0x20),&local_18);
  CWnd::ScreenToClient(*(CWnd **)(this + 0xb0),&local_18);
  iVar4 = local_1c;
  BVar1 = IsIconic(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
  if (BVar1 == 0) {
    iVar3 = GetSystemMetrics(4);
    iVar4 = iVar4 + iVar3;
  }
  OffsetRect(&local_18,local_20,iVar4);
  iVar4 = GetSystemMetrics(4);
  *in_stack_00000004 = local_18.left + local_20;
  in_stack_00000004[1] = local_18.top + local_1c;
  in_stack_00000004[2] = local_18.right - local_20;
  in_stack_00000004[3] = local_18.top + iVar4 + local_1c;
  BVar1 = IsIconic(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
  if (BVar1 != 0) {
    iVar4 = GetSystemMetrics(0x21);
    in_stack_00000004[1] = in_stack_00000004[1] + iVar4;
    iVar4 = GetSystemMetrics(0x20);
    in_stack_00000004[2] = in_stack_00000004[2] - iVar4;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

