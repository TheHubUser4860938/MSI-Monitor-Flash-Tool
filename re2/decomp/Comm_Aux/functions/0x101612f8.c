// rea decompile_all
// name: CPreviewViewEx::SetToolbarSize
// address: 0x101612f8
// body: available
// range: 0x101612f8-0x10161436 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewViewEx::SetToolbarSize(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewViewEx::SetToolbarSize(CPreviewViewEx *this)

{
  CPreviewViewEx *pCVar1;
  code *pcVar2;
  tagSIZE tVar3;
  CFrameWnd *this_00;
  int iVar4;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pCVar1 = this + 0x168;
  if ((pCVar1 != (CPreviewViewEx *)0x0) && (*(int *)(this + 0x188) != 0)) {
    pcVar2 = *(code **)(*(int *)pCVar1 + 0x260);
    guard_check_icall(&local_30,1,1);
    (*pcVar2)();
    this_00 = AFXGetParentFrame((CWnd *)this);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetClientRect(*(HWND *)(this_00 + 0x20),&local_28);
    local_30 = local_28.right - local_28.left;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x188),&local_18);
    CWnd::ScreenToClient((CWnd *)this_00,&local_18);
    CWnd::SetWindowPos(*(CWnd **)(this + 0xdc),(CWnd *)0x0,local_18.left,local_18.top,local_30,
                       local_2c,0x54);
    pcVar2 = *(code **)(*(int *)pCVar1 + 0x238);
    guard_check_icall(0,0,0,local_30,local_2c,0x54,0);
    (*pcVar2)();
    *(int *)(*(int *)(this + 0xdc) + 0xcc) = local_2c;
    tVar3.cy = local_2c;
    tVar3.cx = local_30;
    iVar4 = CSize::operator==((CSize *)(this + 0xec8),tVar3);
    if (iVar4 == 0) {
      *(int *)(this + 0xec8) = local_30;
      *(int *)(this + 0xecc) = local_2c;
      pcVar2 = *(code **)(*(int *)this_00 + 0x178);
      guard_check_icall(1);
      (*pcVar2)();
      UpdateWindow(*(HWND *)(this_00 + 0x20));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

