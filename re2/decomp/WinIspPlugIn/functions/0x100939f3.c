// rea decompile_all
// name: CMFCToolBar::AdjustLayout
// address: 0x100939f3
// body: available
// range: 0x100939f3-0x10093c00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBar::AdjustLayout(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::AdjustLayout(CMFCToolBar *this)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  int iVar7;
  undefined4 uVar8;
  uint wParam;
  int local_84;
  uint local_80;
  undefined4 local_7c;
  uint local_78;
  int local_5c;
  undefined4 local_58;
  uint local_54;
  int local_38;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if ((this != (CMFCToolBar *)0x0) && (*(int *)(this + 0x20) != 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x194);
    guard_check_icall();
    uVar2 = (*pcVar1)();
    local_80 = *(uint *)(this + 0xc40);
    while (local_80 != 0) {
      piVar3 = (int *)FUN_100c321b(&local_80);
      iVar7 = *piVar3;
      if (iVar7 == 0) break;
      if ((((*(byte *)(iVar7 + 0x24) & 1) == 0) && (*(int *)(this + 0xb88) != 0)) &&
         ((uVar2 & 0xa000) != 0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      *(undefined4 *)(iVar7 + 0x18) = uVar8;
    }
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCReBar_101ec98c,(CObject *)pCVar5);
    if (pCVar6 == (CObject *)0x0) {
      AdjustSize(this);
    }
    else {
      iVar7 = FUN_1000c9f0();
      local_80 = SendMessageW(*(HWND *)(iVar7 + 0x20),0x40c,0,0);
      local_7c = *(undefined4 *)(pCVar6 + 0x2c0);
      wParam = 0;
      local_78 = 0x230;
      uVar2 = 0x230;
      if (local_80 != 0) {
        do {
          SendMessageW(*(HWND *)(iVar7 + 0x20),0x41c,wParam,(LPARAM)&local_7c);
          uVar2 = local_78;
          if (local_5c == *(int *)(this + 0x20)) break;
          wParam = wParam + 1;
        } while (wParam < local_80);
      }
      local_78 = uVar2 ^ 0x10;
      if (wParam < local_80) {
        pcVar1 = *(code **)(*(int *)this + 0x41c);
        guard_check_icall();
        uVar8 = (*pcVar1)();
        *(undefined4 *)(this + 0xbe8) = uVar8;
        pcVar1 = *(code **)(*(int *)this + 0x2a4);
        guard_check_icall(&local_84,0);
        (*pcVar1)();
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        SetRectEmpty(&local_18);
        CPane::CalcInsideRect((CPane *)this,(CRect *)&local_18,1);
        local_80 = local_80 + (local_18.top - local_18.bottom);
        local_84 = local_84 + (local_18.left - local_18.right);
        if (local_84 < 1) {
          local_84 = 0;
        }
        if ((int)local_80 < 1) {
          local_80 = 0;
        }
        local_58 = DAT_1023d5d8;
        local_54 = local_80;
        local_38 = local_84;
        SendMessageW(*(HWND *)(iVar7 + 0x20),0x40b,wParam,(LPARAM)&local_7c);
      }
    }
    pcVar1 = *(code **)(*(int *)this + 0x3e4);
    guard_check_icall();
    (*pcVar1)();
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

