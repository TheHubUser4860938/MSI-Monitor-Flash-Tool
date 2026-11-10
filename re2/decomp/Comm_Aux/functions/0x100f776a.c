// rea decompile_all
// name: CMultiPaneFrameWnd::OnPaneRecalcLayout
// address: 0x100f776a
// body: available
// range: 0x100f776a-0x100f7881 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMultiPaneFrameWnd::OnPaneRecalcLayout(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMultiPaneFrameWnd::OnPaneRecalcLayout(CMultiPaneFrameWnd *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  HDWP local_3c;
  tagRECT local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  local_3c = BeginDeferWindowPos(0x14);
  iVar2 = *(int *)(this + 400);
  guard_check_icall(local_18.left,local_18.top,local_18.right,local_18.bottom,&local_3c);
  (**(code **)(iVar2 + 0x38))();
  EndDeferWindowPos(local_3c);
  if (DAT_1020e3c0 != 0) {
    local_28 = 0;
    pcVar1 = *(code **)(*(int *)(this + 400) + 0x2c);
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    guard_check_icall(&local_28);
    (*pcVar1)();
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_38);
    iVar2 = ((local_1c - local_24) - local_18.bottom) + local_18.top;
    iVar3 = ((local_20 - local_18.right) - local_28) + local_18.left;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if ((iVar3 != 0) || (iVar2 != 0)) {
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,-1,-1,(local_38.right - local_38.left) + iVar3,
                         (local_38.bottom - local_38.top) + iVar2,0x16);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

