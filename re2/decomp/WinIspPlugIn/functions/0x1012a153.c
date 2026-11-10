// rea decompile_all
// name: CDockablePane::CalcCorrectOffset
// address: 0x1012a153
// body: available
// range: 0x1012a153-0x1012a261 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CPoint __thiscall CDockablePane::CalcCorrectOffset(class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockablePane::CalcCorrectOffset
          (CDockablePane *this,int *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7)

{
  code *pcVar1;
  int iVar2;
  CWnd *this_00;
  tagRECT *ptVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  pcVar1 = *(code **)(**(int **)(this + 0x330) + 0x1a0);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  GetWindowRect(*(HWND *)(iVar2 + 0x20),&local_18);
  ptVar3 = &local_18;
  pcVar1 = *(code **)(*(int *)this + 0x19c);
  guard_check_icall();
  this_00 = (CWnd *)(*pcVar1)();
  CWnd::ScreenToClient(this_00,ptVar3);
  pcVar1 = *(code **)(*(int *)this + 0x194);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0x1000) {
    if (param_7 == 0) {
LAB_1012a20b:
      if (param_3 <= local_18.right) goto LAB_1012a248;
      param_3 = local_18.right - param_3;
    }
    else {
LAB_1012a21d:
      if (local_18.left <= param_5) goto LAB_1012a248;
      param_3 = local_18.left - param_5;
    }
    *param_2 = param_3;
  }
  else {
    if (iVar2 == 0x2000) {
      if (local_18.bottom < param_4) {
        *param_2 = 0;
        param_6 = local_18.bottom - param_4;
LAB_1012a23b:
        param_2[1] = param_6;
        goto LAB_1012a252;
      }
    }
    else {
      if (iVar2 == 0x4000) {
        if (param_7 != 0) goto LAB_1012a20b;
        goto LAB_1012a21d;
      }
      if ((iVar2 == 0x8000) && (param_6 < local_18.top)) {
        *param_2 = 0;
        param_6 = local_18.top - param_6;
        goto LAB_1012a23b;
      }
    }
LAB_1012a248:
    *param_2 = 0;
  }
  param_2[1] = 0;
LAB_1012a252:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

