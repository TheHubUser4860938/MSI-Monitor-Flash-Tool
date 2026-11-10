// rea decompile_all
// name: CMFCTasksPane::OnSetCursor
// address: 0x1017ac1c
// body: available
// range: 0x1017ac1c-0x1017acbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCTasksPane::OnSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCTasksPane::OnSetCursor(CMFCTasksPane *this,CWnd *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *this_00;
  HICON__ *hCursor;
  tagPOINT local_c;
  
  local_c.x = 0;
  local_c.y = 0;
  GetCursorPos(&local_c);
  ScreenToClient(*(HWND *)(this + 0x20),&local_c);
  iVar2 = FUN_1017cb03(local_c.x,local_c.y);
  if (((*(int *)(this + 0x460) == 0) || (*(int *)(*(int *)(this + 0x460) + 0x38) == 0)) &&
     ((iVar2 == 0 || (*(int *)(iVar2 + 0x38) == 0)))) {
    if (*(int *)(this + 0x368) == 0) {
LAB_1017acae:
      iVar2 = FUN_100540e0();
      return iVar2;
    }
    if (*(int *)(this + 0x540) == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x3e4);
      guard_check_icall(local_c.x,local_c.y);
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) goto LAB_1017acae;
    }
  }
  this_00 = GetGlobalData();
  hCursor = AFX_GLOBAL_DATA::GetHandCursor(this_00);
  SetCursor(hCursor);
  return 1;
}

