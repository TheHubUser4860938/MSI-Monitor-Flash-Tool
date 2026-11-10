// rea decompile_all
// name: CMFCToolBarButtonsListButton::OnVScroll
// address: 0x1016ba1b
// body: available
// range: 0x1016ba1b-0x1016bb54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonsListButton::OnVScroll(unsigned int,unsigned
   int,class CScrollBar *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarButtonsListButton::OnVScroll
          (CMFCToolBarButtonsListButton *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(this + 300);
  if (param_1 == 0) {
    iVar3 = -5 - *(int *)(this + 0xa4);
LAB_1016bac5:
    iVar1 = iVar1 + iVar3;
LAB_1016bac7:
    iVar3 = iVar1;
    if (iVar1 < 1) goto LAB_1016bacd;
  }
  else {
    if (param_1 == 1) {
      iVar1 = iVar1 + 5 + *(int *)(this + 0xa4);
      goto LAB_1016bac7;
    }
    if (param_1 == 2) {
      iVar1 = iVar1 - (*(int *)(this + 0xa4) + 5) * *(int *)(this + 0x134);
      goto LAB_1016bac7;
    }
    if (param_1 == 3) {
      iVar3 = (*(int *)(this + 0xa4) + 5) * *(int *)(this + 0x134);
      goto LAB_1016bac5;
    }
    if (param_1 == 4) {
      uVar2 = *(int *)(this + 0xa4) + 5;
      iVar1 = (((int)uVar2 / 2 + param_2) / uVar2) * uVar2;
      goto LAB_1016bac7;
    }
    if (param_1 != 6) {
      if (param_1 != 7) goto LAB_1016bb43;
      iVar1 = *(int *)(this + 0x130);
      goto LAB_1016bac7;
    }
    iVar3 = 0;
LAB_1016bacd:
    iVar1 = 0;
  }
  iVar4 = *(int *)(this + 0x130);
  if ((iVar1 <= iVar4) && (iVar4 = iVar3, iVar3 < 1)) {
    iVar4 = 0;
  }
  if (iVar4 != *(int *)(this + 300)) {
    *(int *)(this + 300) = iVar4;
    CWnd::SetScrollPos((CWnd *)this,1,iVar4,1);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    iVar1 = GetSystemMetrics(2);
    local_18.right = local_18.right + (-2 - iVar1);
    InflateRect(&local_18,-1,-1);
    InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
  }
LAB_1016bb43:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

