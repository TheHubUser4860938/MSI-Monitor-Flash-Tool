// rea decompile_all
// name: CMFCToolBar::OnDragOver
// address: 0x1006cbe6
// body: available
// range: 0x1006cbe6-0x1006cd91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall CMFCToolBar::OnDragOver(class COleDataObject
   *,unsigned long,class CPoint)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCToolBar::OnDragOver
          (CMFCToolBar *this,undefined4 param_1,uint param_2,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  BOOL BVar5;
  int iVar6;
  ulong uVar7;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (((*(int *)(this + 0xb78) == 0) && (*(int *)(this + 3000) == 0)) &&
     (piVar2 = (int *)FUN_100f224c(param_1), piVar2 != (int *)0x0)) {
    pcVar1 = *(code **)(*piVar2 + 0x10);
    guard_check_icall(this);
    iVar3 = (*pcVar1)();
    pcVar1 = *(code **)(*piVar2 + 4);
    guard_check_icall(1);
    (*pcVar1)();
    if (iVar3 != 0) {
      *(uint *)(this + 0xba0) = param_2 & 8;
      if (*(int *)(this + 0xd0c) == 0) {
        iVar3 = *(int *)(this + 0xbf4);
        *(undefined4 *)(this + 0xbf4) = 0xffffffff;
        if (iVar3 != -1) {
          InvalidateButton(this,iVar3);
          UpdateWindow(*(HWND *)(this + 0x20));
        }
      }
      local_18.left = *(LONG *)(this + 0xccc);
      local_18.top = *(LONG *)(this + 0xcd0);
      local_18.right = *(LONG *)(this + 0xcd4);
      local_18.bottom = *(LONG *)(this + 0xcd8);
      pcVar1 = *(code **)(*(int *)this + 0x3e0);
      guard_check_icall(param_4,param_5,this + 0xccc);
      uVar4 = (*pcVar1)();
      BVar5 = EqualRect(&local_18,(RECT *)(this + 0xccc));
      if (BVar5 == 0) {
        *(undefined4 *)(this + 0xc00) = uVar4;
        InflateRect(&local_18,2,2);
        InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
        local_18.left = ((RECT *)(this + 0xccc))->left;
        local_18.top = *(LONG *)(this + 0xcd0);
        local_18.right = *(LONG *)(this + 0xcd4);
        local_18.bottom = *(LONG *)(this + 0xcd8);
        InflateRect(&local_18,2,2);
        InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0xccc),1);
        UpdateWindow(*(HWND *)(this + 0x20));
      }
      iVar3 = *(int *)(this + 0xbf0);
      pcVar1 = *(code **)(*(int *)this + 0x390);
      guard_check_icall(param_4,param_5);
      iVar6 = (*pcVar1)();
      *(int *)(this + 0xbf0) = iVar6;
      if (iVar3 != iVar6) {
        pcVar1 = *(code **)(*(int *)this + 0x3b0);
        guard_check_icall(iVar6);
        (*pcVar1)();
      }
    }
  }
  uVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar7;
}

