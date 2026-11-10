// rea decompile_all
// name: _AFX_MOUSEANCHORWND::OnPaint
// address: 0x100ac51c
// body: available
// range: 0x100ac51c-0x100ac5a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall _AFX_MOUSEANCHORWND::OnPaint(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall _AFX_MOUSEANCHORWND::OnPaint(_AFX_MOUSEANCHORWND *this)

{
  CPaintDC local_6c [4];
  HDC local_68;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  CPaintDC::CPaintDC(local_6c,(CWnd *)this);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  local_18.left = local_18.left + 1;
  local_18.top = local_18.top + 1;
  local_18.right = local_18.right + -1;
  local_18.bottom = local_18.bottom + -1;
  Ellipse(local_68,local_18.left,local_18.top,local_18.right,local_18.bottom);
  DrawIcon(local_68,0,0,*(HICON *)(this + 0xa0));
  CPaintDC::~CPaintDC(local_6c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

