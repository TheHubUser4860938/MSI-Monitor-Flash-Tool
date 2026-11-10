// rea decompile_all
// name: CControlBar::OnWindowPosChanging
// address: 0x101691fd
// body: available
// range: 0x101691fd-0x1016932b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CControlBar::OnWindowPosChanging(struct tagWINDOWPOS *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CControlBar::OnWindowPosChanging(CControlBar *this,tagWINDOWPOS *param_1)

{
  int xRight;
  int yBottom;
  int xRight_00;
  int yBottom_00;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  DefWindowProcW(*(HWND *)(this + 0x20),0x46,0,(LPARAM)param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    xRight_00 = local_18.right - local_18.left;
    xRight = *(int *)(param_1 + 0x10);
    yBottom_00 = local_18.bottom - local_18.top;
    yBottom = *(int *)(param_1 + 0x14);
    if ((xRight != xRight_00) && ((*(uint *)(this + 0xb0) & 0x400) != 0)) {
      SetRect(&local_18,xRight - DAT_1020db30,0,xRight,yBottom);
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
      SetRect(&local_18,xRight_00 - DAT_1020db30,0,xRight_00,yBottom);
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
    }
    if ((yBottom != yBottom_00) && ((*(uint *)(this + 0xb0) & 0x800) != 0)) {
      SetRect(&local_18,0,yBottom - DAT_1020db34,xRight,yBottom);
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
      SetRect(&local_18,0,yBottom_00 - DAT_1020db34,xRight,yBottom_00);
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

