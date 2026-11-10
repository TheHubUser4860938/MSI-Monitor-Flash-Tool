// rea decompile_all
// name: CPaneFrameWnd::OnPaneRecalcLayout
// address: 0x100a8227
// body: available
// range: 0x100a8227-0x100a8350 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::OnPaneRecalcLayout(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnPaneRecalcLayout(CPaneFrameWnd *this)

{
  code *pcVar1;
  CObject *pCVar2;
  CWnd *pCVar3;
  int local_28;
  int local_24;
  CObject *local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  pCVar3 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
  local_20 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101878f4,(CObject *)pCVar3);
  local_1c = 0;
  if (local_20 != (CObject *)0x0) {
    if (DAT_101dae50 != 0) {
      local_28 = 0;
      local_24 = 0;
      pcVar1 = *(code **)(*(int *)local_20 + 0x270);
      guard_check_icall(&local_28);
      (*pcVar1)();
      if (local_18.right - local_18.left < local_28) {
        local_18.right = local_18.left + local_28;
        local_1c = 1;
      }
      if (local_18.bottom - local_18.top < local_24) {
        local_18.bottom = local_18.top + local_24;
        local_1c = 1;
      }
    }
    pcVar1 = *(code **)(*(int *)local_20 + 0x238);
    guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                      local_18.bottom - local_18.top,0x34,0);
    pCVar2 = local_20;
    (*pcVar1)();
    RedrawWindow(*(HWND *)(pCVar2 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    if (local_1c != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x1b4);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

