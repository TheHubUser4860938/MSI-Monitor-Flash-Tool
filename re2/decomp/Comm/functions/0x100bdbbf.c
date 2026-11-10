// rea decompile_all
// name: CDockingPanesRow::RepositionPanes
// address: 0x100bdbbf
// body: available
// range: 0x100bdbbf-0x100be0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::RepositionPanes(class CRect &,unsigned
   int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingPanesRow::RepositionPanes
          (CDockingPanesRow *this,CRect *param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  CPane *pCVar2;
  byte bVar3;
  int iVar4;
  BOOL BVar5;
  int iVar6;
  CPane *pCVar7;
  long lVar8;
  CPane *pCVar9;
  undefined4 *puVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  undefined1 uVar14;
  void **ppvVar16;
  CPane *local_68;
  int *local_64;
  int *local_60;
  CPane *local_5c;
  void *local_58;
  int *local_54;
  CPane *local_50;
  undefined1 local_49;
  RECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  int *piVar15;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x30) == 0) goto LAB_100be0e2;
  pcVar1 = *(code **)(*(int *)this + 0x14);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) goto LAB_100be0e2;
  local_28.left = *(LONG *)param_1;
  local_28.top = *(LONG *)(param_1 + 4);
  local_28.right = *(LONG *)(param_1 + 8);
  local_28.bottom = *(LONG *)(param_1 + 0xc);
  CWnd::ClientToScreen(*(CWnd **)(this + 0x44),&local_28);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(this,(CRect *)&local_18);
  BVar5 = IsRectEmpty(&local_18);
  if (BVar5 != 0) goto LAB_100be0e2;
  if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
    piVar12 = (int *)(((local_28.bottom - local_18.bottom) - local_28.top) + local_18.top);
  }
  else {
    piVar12 = (int *)(((local_28.right - local_18.right) - local_28.left) + local_18.left);
  }
  local_58 = (void *)0x0;
  pcVar1 = *(code **)(*(int *)this + 0x60);
  local_60 = piVar12;
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (iVar4 != 0) {
    piVar12 = *(int **)(*(int *)(this + 0x28) + 8);
    pcVar1 = *(code **)(*piVar12 + 0x238);
    if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
      iVar4 = local_28.bottom - local_28.top;
      iVar6 = local_18.right - local_18.left;
    }
    else {
      iVar4 = local_18.bottom - local_18.top;
      iVar6 = local_28.right - local_28.left;
    }
    guard_check_icall(0,local_18.left,local_18.top,iVar6,iVar4,0x16,0);
    (*pcVar1)();
    RedrawWindow((HWND)piVar12[8],(RECT *)0x0,(HRGN)0x0,0x105);
    goto LAB_100be0e2;
  }
  pcVar1 = *(code **)(*(int *)this + 0x5c);
  guard_check_icall(1);
  pCVar7 = (CPane *)(*pcVar1)();
  local_50 = pCVar7;
  if ((int)pCVar7 < 0) {
    if (param_3 == 0) goto LAB_100bdd19;
    local_50 = *(CPane **)(this + 0x28);
    local_64 = piVar12;
    do {
      do {
        if (local_50 == (CPane *)0x0) goto LAB_100bdeeb;
        puVar10 = (undefined4 *)FUN_1002466e(&local_50);
        piVar15 = (int *)*puVar10;
        pcVar1 = *(code **)(*piVar15 + 0x17c);
        local_54 = piVar15;
        guard_check_icall();
        iVar4 = (*pcVar1)();
        piVar13 = local_64;
      } while ((iVar4 == 0) && (piVar12 = local_60, *(int *)(this + 4) == 0));
      pcVar1 = *(code **)(*piVar15 + 0x2ac);
      guard_check_icall(local_64,&local_58);
      piVar12 = (int *)(*pcVar1)();
      local_54 = piVar12;
      if ((piVar12 != (int *)0x0) && (local_50 != (CPane *)0x0)) {
        local_68 = local_50;
        do {
          puVar10 = (undefined4 *)FUN_1002466e(&local_68);
          local_5c = (CPane *)*puVar10;
          pcVar1 = *(code **)(*(int *)local_5c + 0x17c);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          if ((iVar4 != 0) || (*(int *)(this + 4) != 0)) {
            MovePane(this,local_5c,(int)piVar12,true,&local_58);
          }
          piVar13 = local_64;
        } while (local_68 != (CPane *)0x0);
      }
      local_64 = (int *)((int)piVar13 - (int)local_54);
      piVar12 = local_60;
    } while (0 < (int)local_64);
  }
  else if ((param_3 == 0) && (lVar8 = _labs((long)piVar12), (int)pCVar7 < lVar8)) {
LAB_100bdd19:
    bVar3 = 1;
    if ((param_2 != 3) && (param_2 != 1)) {
      bVar3 = 0;
    }
    local_64 = (int *)CONCAT31(local_64._1_3_,bVar3);
    if (-1 < (int)pCVar7) {
      iVar6 = ((int)piVar12 >> 0x1f & 0xfffffffeU) + 1;
      iVar4 = GetOutOfBoundsOffset(this,(CPane *)0x0,(uint)bVar3);
      lVar8 = _labs(iVar4);
      FUN_100be4dd(0,((int)local_50 - lVar8) * iVar6,(uint)bVar3);
      lVar8 = _labs((long)local_60);
      local_60 = (int *)((lVar8 - (int)local_50) * iVar6);
    }
    local_5c = *(CPane **)(this + 0x2c);
    while (local_5c != (CPane *)0x0) {
      puVar10 = (undefined4 *)FUN_1002e90e(&local_5c);
      pCVar7 = (CPane *)*puVar10;
      pcVar1 = *(code **)(*(int *)pCVar7 + 0x17c);
      local_50 = pCVar7;
      guard_check_icall();
      iVar4 = (*pcVar1)();
      piVar12 = local_60;
      if ((iVar4 != 0) || (*(int *)(this + 4) != 0)) {
        pcVar1 = *(code **)(*(int *)pCVar7 + 0x2ac);
        guard_check_icall(local_60,&local_58);
        local_54 = (int *)(*pcVar1)();
        ppvVar16 = &local_58;
        piVar15 = local_64;
        lVar8 = _labs((long)local_54);
        uVar14 = SUB41(piVar15,0);
        lVar11 = _labs((long)piVar12);
        MovePane(this,local_50,lVar11 - lVar8,(bool)uVar14,ppvVar16);
        if (local_54 == piVar12) break;
        local_60 = (int *)((int)piVar12 - (int)local_54);
      }
    }
    goto LAB_100be0e2;
  }
LAB_100bdeeb:
  if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
    local_18.top = local_28.top;
    local_18.bottom = local_28.bottom;
  }
  else {
    local_18.left = local_28.left;
    local_18.right = local_28.right;
  }
  pCVar7 = FindFirstVisiblePane(this,1);
  AdjustPaneToRowArea(this,pCVar7,(CRect *)&local_18,&local_58);
  pCVar9 = FindFirstVisiblePane(this,0);
  if (pCVar7 != pCVar9) {
    AdjustPaneToRowArea(this,pCVar9,(CRect *)&local_18,&local_58);
  }
  if ((param_2 != 0xffffffff) && (param_3 != 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x5c);
    guard_check_icall(1);
    iVar4 = (*pcVar1)();
    if (0 < iVar4 + (int)piVar12) {
      local_38.left = 0;
      local_38.top = 0;
      local_38.right = 0;
      local_38.bottom = 0;
      local_48.left = 0;
      local_48.top = 0;
      local_48.right = 0;
      local_48.bottom = 0;
      local_54 = *(int **)(this + 0x28);
      while (local_54 != (int *)0x0) {
        puVar10 = (undefined4 *)FUN_1002466e(&local_54);
        pCVar7 = (CPane *)*puVar10;
        pcVar1 = *(code **)(*(int *)pCVar7 + 0x17c);
        local_5c = pCVar7;
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if ((iVar4 != 0) || (*(int *)(this + 4) != 0)) {
          ::GetWindowRect(*(HWND *)(pCVar7 + 0x20),&local_38);
          CPane::GetVirtualRect(pCVar7,(CRect *)&local_48);
          BVar5 = EqualRect(&local_38,&local_48);
          if (BVar5 == 0) {
            pCVar7 = (CPane *)(*(uint *)(this + 0x40) & 0xa000);
            if (((pCVar7 == (CPane *)0x0) || (local_38.left <= local_48.left)) &&
               ((pCVar7 != (CPane *)0x0 || (local_38.top <= local_48.top)))) {
              local_49 = 0;
            }
            else {
              local_49 = 1;
            }
            pCVar9 = (CPane *)0x0;
            if (pCVar7 == (CPane *)0x0) {
LAB_100be072:
              if ((param_2 == 3) || (param_2 == 6)) {
                lVar8 = _labs(local_48.top - local_38.top);
                lVar11 = _labs(param_4);
                if (lVar11 < lVar8) goto LAB_100be05c;
                lVar8 = local_48.top - local_38.top;
LAB_100be09c:
                pCVar7 = (CPane *)_labs(lVar8);
                pCVar9 = pCVar7;
              }
            }
            else if ((param_2 == 1) || (param_2 == 2)) {
              lVar8 = _labs(local_48.left - local_38.left);
              lVar11 = _labs(param_4);
              if (lVar8 <= lVar11) {
                lVar8 = local_48.left - local_38.left;
                goto LAB_100be09c;
              }
LAB_100be05c:
              pCVar7 = (CPane *)_labs(param_4);
              pCVar9 = pCVar7;
            }
            else if (pCVar7 == (CPane *)0x0) goto LAB_100be072;
            pCVar2 = local_5c;
            local_50 = (CPane *)(CONCAT31((int3)((uint)pCVar7 >> 8),local_49) ^ 1);
            local_68 = pCVar9;
            iVar4 = IsEnoughSpaceToMove(this,local_5c,SUB41(local_50,0),(int *)&local_68);
            if (iVar4 != 0) {
              MovePane(this,pCVar2,(int)pCVar9,SUB41(local_50,0),&local_58);
            }
          }
        }
      }
    }
  }
LAB_100be0e2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

