// rea decompile_all
// name: CMFCPropertyGridCtrl::OnLButtonDblClk
// address: 0x1003f051
// body: available
// range: 0x1003f051-0x1003f21b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::OnLButtonDblClk(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPropertyGridCtrl::OnLButtonDblClk
          (CMFCPropertyGridCtrl *this,undefined4 param_1,int param_3,int param_4)

{
  code *pcVar1;
  CMFCPropertyGridProperty *this_00;
  POINT pt;
  long lVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 local_48;
  int local_44;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  FUN_1001d029();
  if (param_4 <= *(int *)(this + 0x334)) {
    lVar2 = _labs((param_3 - *(int *)(this + 0x328)) - *(int *)(this + 0x358));
    if (lVar2 < 3) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_18);
      local_48 = 1;
      local_44 = (local_18.right - local_18.left) / 2;
      *(int *)(this + 0x358) = local_44;
      local_44 = local_44 + 2;
      pcVar1 = *(code **)(*(int *)this + 0x164);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      SendMessageW(*(HWND *)(iVar3 + 0x20),0x120c,0,(LPARAM)&local_48);
      local_44 = (local_18.right - local_18.left) + 10;
      pcVar1 = *(code **)(*(int *)this + 0x164);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      SendMessageW(*(HWND *)(iVar3 + 0x20),0x120c,1,(LPARAM)&local_48);
      goto LAB_1003f209;
    }
  }
  this_00 = *(CMFCPropertyGridProperty **)(this + 0x3d8);
  if (this_00 != (CMFCPropertyGridProperty *)0x0) {
    if ((*(int *)(this_00 + 0x5c) == 0) ||
       ((*(int *)(this_00 + 0x6c) != 0 &&
        (*(int *)(this + 0x358) + *(int *)(this + 0x328) <= param_3)))) {
      if (*(int *)(this_00 + 100) != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x180);
        guard_check_icall(this_00,0);
        iVar3 = (*pcVar1)();
        if ((iVar3 != 0) && (*(int *)(*(int *)(this + 0x3d8) + 0xb8) != 0)) {
          SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x3d8) + 0xb8) + 0x20),0x201,0,0);
          SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x3d8) + 0xb8) + 0x20),0x202,0,0);
        }
        iVar3 = *(int *)(this + 0x3d8);
        local_18.left = *(int *)(iVar3 + 0x30);
        local_18.top = *(LONG *)(iVar3 + 0x34);
        local_18.right = *(int *)(iVar3 + 0x38);
        local_18.bottom = *(LONG *)(iVar3 + 0x3c);
        pt.y = param_4;
        pt.x = param_3;
        BVar4 = PtInRect(&local_18,pt);
        if (BVar4 != 0) {
          pcVar1 = *(code **)(**(int **)(this + 0x3d8) + 0x44);
          guard_check_icall(param_3,param_4);
          (*pcVar1)();
        }
      }
    }
    else {
      CMFCPropertyGridProperty::Expand(this_00,(uint)(*(int *)(this_00 + 0x60) == 0));
    }
  }
LAB_1003f209:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

