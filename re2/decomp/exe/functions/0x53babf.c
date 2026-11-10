// rea decompile_all
// name: CMFCPropertyGridCtrl::TrackDescr
// address: 0x53babf
// body: available
// range: 0x53babf-0x53bb94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::TrackDescr(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPropertyGridCtrl::TrackDescr(CMFCPropertyGridCtrl *this,int param_1)

{
  RECT *lprc;
  BOOL BVar1;
  int iVar2;
  CClientDC local_30 [4];
  HDC local_2c;
  CMFCPropertyGridCtrl *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_1c = this;
  CClientDC::CClientDC(local_30,(CWnd *)this);
  lprc = (RECT *)(this + 0x378);
  BVar1 = IsRectEmpty(lprc);
  if (BVar1 == 0) {
    InvertRect(local_2c,lprc);
  }
  if (param_1 == -0x80000000) {
    SetRectEmpty(lprc);
  }
  else {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    iVar2 = local_18.top + *(int *)(this + 0x350) + *(int *)(this + 0x354);
    if (param_1 <= iVar2) {
      param_1 = iVar2;
    }
    iVar2 = local_18.bottom - *(int *)(this + 0x354);
    if (iVar2 <= param_1) {
      param_1 = iVar2;
    }
    lprc->left = local_18.left;
    *(LONG *)(this + 0x37c) = local_18.top;
    *(LONG *)(this + 0x380) = local_18.right;
    *(LONG *)(this + 900) = local_18.bottom;
    *(int *)(local_1c + 0x37c) = param_1 + -1;
    *(int *)(local_1c + 900) = param_1 + 1;
    InvertRect(local_2c,(RECT *)(local_1c + 0x378));
  }
  CClientDC::~CClientDC(local_30);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

