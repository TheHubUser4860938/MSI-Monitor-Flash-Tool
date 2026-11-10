// rea decompile_all
// name: CPaneFrameWnd::SizeToContent
// address: 0x100b506a
// body: available
// range: 0x100b506a-0x100b5128 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::SizeToContent(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::SizeToContent(CPaneFrameWnd *this)

{
  code *pcVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,(CObject *)pCVar2);
  if (pCVar3 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x260);
    guard_check_icall(&local_30,0,1);
    (*pcVar1)();
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_28);
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,
                       ((local_18.right - local_28.right) - local_18.left) + local_28.left +
                       local_30,((local_28.top - local_28.bottom) - local_18.top) + local_18.bottom
                                + local_2c,0x16);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

