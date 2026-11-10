// rea decompile_all
// name: CMFCPropertyGridCtrl::SetCurSel
// address: 0x10040cd8
// body: available
// range: 0x10040cd8-0x10040f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCPropertyGridCtrl::SetCurSel(class CMFCPropertyGridProperty *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPropertyGridCtrl::SetCurSel
          (CMFCPropertyGridCtrl *this,CMFCPropertyGridProperty *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  CMFCPropertyGridProperty *pCVar3;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  pCVar3 = *(CMFCPropertyGridProperty **)(this + 0x3d8);
  if (pCVar3 == param_1) goto LAB_10040f16;
  if ((pCVar3 != (CMFCPropertyGridProperty *)0x0) && (*(int *)(pCVar3 + 0x58) != 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x188);
    guard_check_icall(1);
    (*pcVar1)();
  }
  *(CMFCPropertyGridProperty **)(this + 0x3d8) = param_1;
  pcVar1 = *(code **)(*(int *)this + 0x17c);
  guard_check_icall(param_1,pCVar3);
  (*pcVar1)();
  if (pCVar3 != (CMFCPropertyGridProperty *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x74);
    guard_check_icall(param_1);
    (*pcVar1)();
    local_28.left = ((LPRECT)(pCVar3 + 0x40))->left;
    local_28.top = *(LONG *)(pCVar3 + 0x44);
    local_28.right = *(LONG *)(pCVar3 + 0x48);
    local_28.bottom = *(LONG *)(pCVar3 + 0x4c);
    SetRectEmpty((LPRECT)(pCVar3 + 0x40));
    if (param_2 != 0) {
      local_18.left = *(LONG *)(pCVar3 + 0x30);
      local_18.top = *(LONG *)(pCVar3 + 0x34);
      local_18.right = *(LONG *)(pCVar3 + 0x38);
      local_18.bottom = *(LONG *)(pCVar3 + 0x3c);
      if ((*(int *)(pCVar3 + 0x5c) == 0) ||
         ((*(int *)(this + 0x398) == 0 && (*(int *)(pCVar3 + 0x5c) == 0)))) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x9c);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 != 0) {
          local_18.right = *(int *)(this + 0x358) + local_18.left;
        }
      }
      if (local_18.right < local_28.right) {
        local_18.right = local_28.right;
      }
      InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
    }
  }
  if (param_1 == (CMFCPropertyGridProperty *)0x0) {
LAB_10040eae:
    if (param_2 != 0) {
      if (*(int *)(this + 0x2fc) != 0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetClientRect(*(HWND *)(this + 0x20),&local_18);
        local_28.top = *(LONG *)(this + 0x334);
        local_28.left = local_18.left;
        local_28.right = local_18.right;
        local_28.bottom = local_18.bottom;
        InflateRect(&local_28,-4,-4);
        InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
      }
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)param_1 + 0x70);
    guard_check_icall(pCVar3);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)param_1 + 0x94);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x78);
      guard_check_icall();
      (*pcVar1)();
    }
    if (param_2 != 0) {
      local_18.left = *(LONG *)(param_1 + 0x30);
      local_18.top = *(LONG *)(param_1 + 0x34);
      local_18.right = *(LONG *)(param_1 + 0x38);
      local_18.bottom = *(LONG *)(param_1 + 0x3c);
      if ((*(int *)(param_1 + 0x5c) == 0) ||
         ((*(int *)(this + 0x398) == 0 && (*(int *)(param_1 + 0x5c) == 0)))) {
        pcVar1 = *(code **)(*(int *)param_1 + 0x9c);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 != 0) {
          local_18.right = *(int *)(this + 0x358) + local_18.left;
        }
      }
      if (local_18.right < *(int *)(param_1 + 0x48)) {
        local_18.right = *(int *)(param_1 + 0x48);
      }
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(param_1 + 0x40),1);
      goto LAB_10040eae;
    }
  }
  pCVar3 = *(CMFCPropertyGridProperty **)(this + 0x3d8);
LAB_10040f16:
  pcVar1 = *(code **)(*(int *)this + 0x1b8);
  guard_check_icall(pCVar3);
  (*pcVar1)();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

