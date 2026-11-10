// rea decompile_all
// name: CMFCTabCtrl::EnsureVisible
// address: 0x100a56c3
// body: available
// range: 0x100a56c3-0x100a58d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCTabCtrl::EnsureVisible(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCTabCtrl::EnsureVisible(CMFCTabCtrl *this,int param_1)

{
  code *pcVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if ((((-1 < param_1) && (param_1 < *(int *)(this + 0xbc))) && (*(int *)(this + 0x264) != 0)) &&
     (*(int *)(this + 0x2e4) != *(int *)(this + 0x2dc) &&
      -1 < *(int *)(this + 0x2e4) - *(int *)(this + 0x2dc))) {
    piVar2 = (int *)FUN_10151a1d(param_1);
    iVar4 = *piVar2;
    local_18.left = *(int *)(iVar4 + 0x10);
    local_18.top = *(LONG *)(iVar4 + 0x14);
    local_18.right = *(int *)(iVar4 + 0x18);
    local_18.bottom = *(LONG *)(iVar4 + 0x1c);
    if (*(int *)(this + 0x290) == 0) {
      if (((*(int *)(this + 0x254) == 0) && (*(int *)(this + 600) == 0)) &&
         (*(int *)(this + 0x25c) == 0)) {
        iVar4 = *(int *)(this + 0x2dc);
        if (local_18.left < iVar4) {
          *(int *)(this + 0x2a4) = *(int *)(this + 0x2a4) + (local_18.left - iVar4);
        }
        else {
          iVar5 = *(int *)(this + 0x2e4);
          if ((local_18.right <= iVar5) || (iVar5 - iVar4 < local_18.right - local_18.left))
          goto LAB_100a58c6;
          *(int *)(this + 0x2a4) = *(int *)(this + 0x2a4) + (local_18.right - iVar5);
        }
      }
      else {
        if ((*(int *)(this + 0x2dc) <= local_18.left) && (local_18.right <= *(int *)(this + 0x2e4)))
        goto LAB_100a58c6;
        iVar4 = ((*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) - DAT_10205ad0) + -1;
        local_1c = 0;
        if (-1 < param_1) {
          iVar5 = 0;
          do {
            piVar2 = (int *)FUN_10151a1d(iVar5);
            local_1c = local_1c + ((*(int *)(*piVar2 + 0x18) - *(int *)(*piVar2 + 0x10)) - iVar4);
            iVar5 = iVar5 + 1;
          } while (iVar5 <= param_1);
        }
        *(undefined4 *)(this + 0x2a4) = 0;
        *(undefined4 *)(this + 0x2b0) = 0;
        if (0 < param_1) {
          do {
            if (local_1c <= *(int *)(this + 0x2e4) - *(int *)(this + 0x2dc)) break;
            piVar2 = (int *)FUN_10151a1d(*(undefined4 *)(this + 0x2b0));
            iVar5 = (*(int *)(*piVar2 + 0x18) - *(int *)(*piVar2 + 0x10)) - iVar4;
            *(int *)(this + 0x2a4) = *(int *)(this + 0x2a4) + iVar5;
            local_1c = local_1c - iVar5;
            *(int *)(this + 0x2b0) = *(int *)(this + 0x2b0) + 1;
          } while (*(int *)(this + 0x2b0) < param_1);
        }
      }
      pcVar1 = *(code **)(*(int *)this + 0x2dc);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x2e0);
      guard_check_icall();
      (*pcVar1)();
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    }
    else if ((*(int *)(this + 0x2e4) < *(int *)(iVar4 + 0x24) + local_18.left) ||
            (BVar3 = IsRectEmpty(&local_18), BVar3 != 0)) {
      CMFCBaseTabCtrl::MoveTab((CMFCBaseTabCtrl *)this,param_1,0);
    }
  }
LAB_100a58c6:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

