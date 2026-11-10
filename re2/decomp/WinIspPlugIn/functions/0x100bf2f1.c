// rea decompile_all
// name: CMiniFrameWnd::OnNcHitTest
// address: 0x100bf2f1
// body: available
// range: 0x100bf2f1-0x100bf41c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall CMiniFrameWnd::OnNcHitTest(class CPoint)
   
   Library: Visual Studio 2015 Release */

long __thiscall CMiniFrameWnd::OnNcHitTest(CMiniFrameWnd *this)

{
  SHORT SVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  iVar3 = GetSystemMetrics(0x21);
  iVar4 = GetSystemMetrics(0x20);
  iVar5 = FUN_100540e0();
  if ((uVar2 & 0x1000) != 0) {
    if (iVar5 == 3) {
      iVar5 = 2;
    }
    SVar1 = GetKeyState(2);
    if (SVar1 < 0) goto LAB_100bf3be;
  }
  if ((((9 < iVar5) && (iVar5 < 0x12)) || (iVar5 == 4)) && ((uVar2 & 0x800) == 0)) {
    InflateRect(&local_18,-iVar4,-iVar3);
  }
LAB_100bf3be:
  lVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar6;
}

