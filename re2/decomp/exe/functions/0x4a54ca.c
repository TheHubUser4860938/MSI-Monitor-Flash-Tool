// rea decompile_all
// name: CDockablePane::CheckAutoHideCondition
// address: 0x4a54ca
// body: available
// range: 0x4a54ca-0x4a5661 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CDockablePane::CheckAutoHideCondition(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDockablePane::CheckAutoHideCondition(CDockablePane *this)

{
  code *pcVar1;
  POINT Point;
  POINT pt;
  POINT pt_00;
  bool bVar2;
  int iVar3;
  BOOL BVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  tagPOINT local_40;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0x2dc) == 0) && (*(int *)(this + 800) == 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x1dc);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (((iVar3 != 0) && (DAT_00616b18 == 0)) &&
       (((iVar3 = *(int *)(this + 0x34c), iVar3 == 0 || (*(int *)(iVar3 + 0x20) == 0)) ||
        (BVar4 = IsWindowVisible(*(HWND *)(iVar3 + 0x20)), BVar4 == 0)))) {
      iVar3 = *(int *)(this + 0x32c);
      local_38.left = *(LONG *)(iVar3 + 0x18);
      local_38.top = *(LONG *)(iVar3 + 0x1c);
      local_38.right = *(LONG *)(iVar3 + 0x20);
      local_38.bottom = *(LONG *)(iVar3 + 0x24);
      CWnd::ClientToScreen(*(CWnd **)(this + 0x330),&local_38);
      local_40.x = 0;
      local_40.y = 0;
      GetCursorPos(&local_40);
      Point.y = local_40.y;
      Point.x = local_40.x;
      pHVar5 = WindowFromPoint(Point);
      pCVar6 = CWnd::FromHandle(pHVar5);
      bVar2 = false;
      while (pCVar6 != (CWnd *)0x0) {
        if (((pCVar6 == (CWnd *)this) || (*(int *)(pCVar6 + 0x20) == *(int *)(this + 0x350))) ||
           (iVar3 = FUN_0043970d(&PTR_s_CMFCPropertyGridToolTipCtrl_005cde04), iVar3 != 0)) {
          bVar2 = true;
          break;
        }
        pHVar5 = GetParent(*(HWND *)(pCVar6 + 0x20));
        pCVar6 = CWnd::FromHandle(pHVar5);
      }
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x350),&local_28);
      UnionRect(&local_18,&local_18,&local_28);
      pt.y = local_40.y;
      pt.x = local_40.x;
      BVar4 = PtInRect(&local_18,pt);
      if (((BVar4 == 0) && (!bVar2)) &&
         (pt_00.y = local_40.y, pt_00.x = local_40.x, BVar4 = PtInRect(&local_38,pt_00), BVar4 == 0)
         ) {
        pcVar1 = *(code **)(*(int *)this + 0x344);
        guard_check_icall(0,1);
        (*pcVar1)();
      }
    }
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

