// rea decompile_all
// name: CMFCPropertyGridCtrl::EnsureVisible
// address: 0x10048853
// body: available
// range: 0x10048853-0x1004897d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCPropertyGridCtrl::EnsureVisible(class CMFCPropertyGridProperty
   *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPropertyGridCtrl::EnsureVisible
          (CMFCPropertyGridCtrl *this,CMFCPropertyGridProperty *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CMFCPropertyGridProperty *this_00;
  code *pcVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x354) != 0) {
    if (param_2 != 0) {
      for (this_00 = *(CMFCPropertyGridProperty **)(param_1 + 200);
          this_00 != (CMFCPropertyGridProperty *)0x0;
          this_00 = *(CMFCPropertyGridProperty **)(this_00 + 200)) {
        CMFCPropertyGridProperty::Expand(this_00,1);
      }
    }
    iVar1 = *(int *)(param_1 + 0x34);
    iVar2 = *(int *)(param_1 + 0x3c);
    if ((iVar1 < *(int *)(this + 0x32c) + -1) || (*(int *)(this + 0x334) < iVar2)) {
      local_18.left = ((LPRECT)(param_1 + 0x40))->left;
      local_18.top = *(LONG *)(param_1 + 0x44);
      local_18.right = *(LONG *)(param_1 + 0x48);
      local_18.bottom = *(LONG *)(param_1 + 0x4c);
      SetRectEmpty((LPRECT)(param_1 + 0x40));
      RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x105);
      if ((iVar1 < *(int *)(this + 0x32c) + -1) && (*(int *)(this + 0x32c) + -1 <= iVar2)) {
        uVar6 = 0;
        uVar5 = 0;
      }
      else if ((*(int *)(this + 0x334) < iVar2) && (iVar1 <= *(int *)(this + 0x334))) {
        uVar6 = 0;
        uVar5 = 1;
      }
      else {
        uVar6 = iVar1 / *(int *)(this + 0x354) - *(int *)(this + 0x35c);
        uVar5 = 4;
      }
      OnVScroll(this,uVar5,uVar6,(CScrollBar *)0x0);
      BVar4 = IsRectEmpty(&local_18);
      if (BVar4 == 0) {
        pcVar3 = *(code **)(*(int *)param_1 + 0x78);
        guard_check_icall();
        (*pcVar3)();
        RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(param_1 + 0x40),(HRGN)0x0,0x105);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

