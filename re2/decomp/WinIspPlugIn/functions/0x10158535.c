// rea decompile_all
// name: CMFCCaptionMenuButton::ShowMenu
// address: 0x10158535
// body: available
// range: 0x10158535-0x1015865e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCCaptionMenuButton::ShowMenu(struct HMENU__ *,class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCCaptionMenuButton::ShowMenu(CMFCCaptionMenuButton *this,HMENU__ *param_1,CWnd *param_2)

{
  int y;
  code *pcVar1;
  int iVar2;
  int x;
  RECT *pRVar3;
  BOOL BVar4;
  int local_30;
  int local_2c;
  undefined1 local_28 [16];
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(param_2 + 0x20),&local_18);
  CMFCCaptionButton::GetSize();
  x = *(int *)(this + 0x24) + local_18.left + local_30;
  y = local_2c + *(int *)(this + 0x28) + local_18.top;
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined4 *)(this + 4) = 1;
  pcVar1 = *(code **)(*(int *)this + 0xc);
  guard_check_icall(local_28);
  pRVar3 = (RECT *)(*pcVar1)();
  InvalidateRect(*(HWND *)(param_2 + 0x20),pRVar3,1);
  SendMessageW(*(HWND *)(param_2 + 0x20),0x85,0,0);
  if ((*(int *)(this + 0x34) == 0) && (DAT_10247224 != (int *)0x0)) {
    iVar2 = *DAT_10247224;
    guard_check_icall(param_1,x,y,param_2,1);
    BVar4 = (**(code **)(iVar2 + 0x14))();
  }
  else {
    BVar4 = TrackPopupMenu(param_1,0x180,x,y,0,*(HWND *)(param_2 + 0x20),(RECT *)0x0);
  }
  *(BOOL *)(this + 0x30) = BVar4;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 4) = 0;
  pcVar1 = *(code **)(*(int *)this + 0xc);
  guard_check_icall(local_28);
  pRVar3 = (RECT *)(*pcVar1)();
  InvalidateRect(*(HWND *)(param_2 + 0x20),pRVar3,1);
  SendMessageW(*(HWND *)(param_2 + 0x20),0x85,0,0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

