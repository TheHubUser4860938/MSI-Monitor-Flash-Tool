// rea decompile_all
// name: CWnd::GetNextDlgTabItem
// address: 0x434179
// body: available
// range: 0x434179-0x4342d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct COleControlSiteOrWnd * __thiscall CWnd::GetNextDlgTabItem(struct
   COleControlSiteOrWnd *,int)const 
   
   Library: Visual Studio 2015 Release */

COleControlSiteOrWnd * __thiscall
CWnd::GetNextDlgTabItem(CWnd *this,COleControlSiteOrWnd *param_1,int param_2)

{
  COleControlSiteOrWnd *pCVar1;
  COleControlSiteOrWnd *pCVar2;
  HWND pHVar3;
  CWnd *this_00;
  int *piVar4;
  HWND pHVar5;
  undefined4 *puVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  UINT uCmd;
  code *local_c;
  int local_8;
  
  if (*(int *)(this + 0x70) == 0) {
    pCVar2 = (COleControlSiteOrWnd *)0x0;
  }
  else {
    if ((*(uint *)(this + 0x60) & 0x800) == 0) {
      uCmd = 5;
      pHVar3 = *(HWND *)(this + 0x20);
      while( true ) {
        pHVar3 = GetWindow(pHVar3,uCmd);
        this_00 = FromHandle(pHVar3);
        if (this_00 == (CWnd *)0x0) break;
        uVar7 = GetExStyle(this_00);
        if ((((uVar7 & 0x10000) != 0) && (uVar7 = GetExStyle(this_00), (uVar7 & 0x10000000) != 0))
           && (uVar7 = GetExStyle(this_00), (uVar7 & 0x8000000) == 0)) {
          return (COleControlSiteOrWnd *)0x0;
        }
        uCmd = 2;
        pHVar3 = *(HWND *)(this_00 + 0x20);
      }
    }
    if (param_2 == 0) {
      local_c = FUN_0041824c;
      pcVar8 = FUN_004c8eda;
    }
    else {
      local_c = FUN_004342fb;
      pcVar8 = FUN_0049198f;
    }
    guard_check_icall();
    local_8 = (*pcVar8)();
joined_r0x0043421a:
    do {
      if (local_8 == 0) goto LAB_00434275;
      guard_check_icall(&local_8);
      piVar4 = (int *)(*local_c)();
      pCVar1 = (COleControlSiteOrWnd *)*piVar4;
      if (param_1 == (COleControlSiteOrWnd *)0x0) {
        pCVar2 = pCVar1;
        if (*(int *)(pCVar1 + 4) != 0) {
          pCVar2 = (COleControlSiteOrWnd *)(*(int *)(pCVar1 + 4) + 0x24);
        }
        pHVar3 = *(HWND *)pCVar2;
        if ((pHVar3 != (HWND)0x0) && (pHVar5 = GetFocus(), pHVar3 == pHVar5)) break;
        if (*(int *)(pCVar1 + 4) == 0) goto joined_r0x0043421a;
        bVar9 = *(int *)(pCVar1 + 4) == *(int *)(*(int *)(this + 0x70) + 0x70);
      }
      else {
        bVar9 = param_1 == pCVar1;
      }
    } while (!bVar9);
    if (pCVar1 == (COleControlSiteOrWnd *)0x0) {
LAB_00434275:
      pCVar2 = (COleControlSiteOrWnd *)0x0;
    }
    else {
      do {
        if (local_8 == 0) {
          guard_check_icall();
          local_8 = (*pcVar8)();
        }
        guard_check_icall(&local_8);
        puVar6 = (undefined4 *)(*local_c)();
        pCVar2 = (COleControlSiteOrWnd *)*puVar6;
        uVar7 = COleControlSiteOrWnd::GetStyle(pCVar2);
      } while ((pCVar2 != pCVar1) && ((uVar7 & 0x18010000) != 0x10010000));
    }
  }
  return pCVar2;
}

