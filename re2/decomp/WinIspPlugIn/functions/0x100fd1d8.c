// rea decompile_all
// name: FUN_100fd1d8
// address: 0x100fd1d8
// body: available
// range: 0x100fd1d8-0x100fd5ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100fd5a8 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fd1d8(CObject *param_1,int param_2,RECT *param_3)

{
  code *pcVar1;
  int iVar2;
  __POSITION *p_Var3;
  BOOL BVar4;
  RECT *pRVar5;
  CDockSite *in_ECX;
  int iVar6;
  CDockingPanesRow *pCVar7;
  CDockSite *pCVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  CObject *pCStack_7c;
  int iStack_78;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  tagPOINT local_40;
  uint local_38;
  CObject *local_34;
  RECT *local_30;
  char local_2a;
  char local_29;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_34 = param_1;
  local_30 = param_3;
  local_40.y = (LONG)in_ECX;
  SetRectEmpty(&local_18);
  if (param_3 != (RECT *)0x0) {
    CopyRect(&local_28,param_3);
    local_18.left = local_28.left;
    local_18.top = local_28.top;
    local_18.right = local_28.right;
    local_18.bottom = local_28.bottom;
    in_ECX = (CDockSite *)local_40.y;
  }
  pcVar1 = *(code **)(*(int *)in_ECX + 0x164);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  local_38 = (uint)(iVar2 == 0);
  pcVar1 = *(code **)(*(int *)param_1 + 0x260);
  local_4c = local_38 ^ 1;
  guard_check_icall();
  (*pcVar1)();
  iStack_78 = 0x100fd27b;
  p_Var3 = CObList::Find((CObList *)(in_ECX + 0x110),param_1,(__POSITION *)0x0);
  if (p_Var3 != (__POSITION *)0x0) goto LAB_100fd595;
  pCVar7 = (CDockingPanesRow *)0x0;
  local_29 = '\0';
  local_2a = '\0';
  if (param_2 == 1) {
    local_40.x = 0;
    local_40.y = 0;
    GetCursorPos(&local_40);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    iStack_78 = 0x100fd2be;
    GetWindowRect(*(HWND *)(in_ECX + 0x20),&local_28);
    iStack_78 = local_40.x;
    pCStack_7c = (CObject *)0x100fd2cf;
    pCVar7 = CDockSite::RowFromPoint(in_ECX);
    local_29 = local_2a;
  }
  else {
    if (param_2 == 2) {
      iStack_78 = 0x100fd36e;
      p_Var3 = CObList::Find((CObList *)(in_ECX + 300),*(CObject **)(param_1 + 0x208),
                             (__POSITION *)0x0);
      if (p_Var3 == (__POSITION *)0x0) goto LAB_100fd2ec;
      pCVar7 = *(CDockingPanesRow **)(param_1 + 0x208);
    }
    else {
      if (param_2 != 4) goto LAB_100fd456;
LAB_100fd2ec:
      iVar2 = *(int *)(in_ECX + 0x138);
      pCVar8 = in_ECX;
      if (DAT_102474d0 == 0) {
        if (*(int *)(param_1 + 0x200) < iVar2) {
          if (param_2 != 2) goto LAB_100fd3e7;
          p_Var3 = CObList::FindIndex((CObList *)(in_ECX + 300),*(int *)(param_1 + 0x200));
          if (p_Var3 == (__POSITION *)0x0) goto LAB_100fd5a8;
          pCVar7 = *(CDockingPanesRow **)(p_Var3 + 8);
          local_29 = '\x01';
          goto LAB_100fd40a;
        }
        if (param_2 == 2) {
          BVar4 = IsRectEmpty((RECT *)(param_1 + 0x218));
          pCVar8 = (CDockSite *)local_40.y;
          if (BVar4 == 0) {
            pCStack_7c = (CObject *)((RECT *)(param_1 + 0x218))->left;
            iStack_78 = *(int *)(param_1 + 0x21c);
            pCVar7 = CDockSite::FindRowByRect((CDockSite *)local_40.y);
            param_1 = local_34;
            goto LAB_100fd40a;
          }
        }
        else {
LAB_100fd3e7:
          if ((param_2 == 4) && (local_30 != (RECT *)0x0)) {
            CopyRect((LPRECT)&pCStack_7c,local_30);
            pCVar7 = CDockSite::FindRowByRect(in_ECX);
            goto LAB_100fd40a;
          }
        }
      }
      else {
        if ((iVar2 + -1 < *(int *)(param_1 + 0x200)) &&
           (local_30 = (RECT *)0x0, iVar6 = *(int *)(param_1 + 0x200) - iVar2,
           iVar6 != -1 && -1 < iVar6 + 1)) {
          do {
            iVar6 = local_48;
            if (local_38 == 0) {
              iVar6 = local_44;
            }
            iStack_78 = 0x100fd32d;
            CDockSite::AddRow(in_ECX,(__POSITION *)0x0,iVar6);
            local_30 = (RECT *)((int)&local_30->left + 1);
          } while ((int)local_30 < (*(int *)(param_1 + 0x200) - iVar2) + 1);
        }
        p_Var3 = CObList::FindIndex((CObList *)(in_ECX + 300),*(int *)(param_1 + 0x200));
        if (p_Var3 == (__POSITION *)0x0) goto LAB_100fd5a8;
        pCVar7 = *(CDockingPanesRow **)(p_Var3 + 8);
LAB_100fd40a:
        in_ECX = pCVar8;
        if (pCVar7 != (CDockingPanesRow *)0x0) goto LAB_100fd42d;
      }
      iVar2 = local_48;
      if (local_38 == 0) {
        iVar2 = local_44;
      }
      iStack_78 = 0x100fd424;
      CDockSite::AddRow(in_ECX,(__POSITION *)0x0,iVar2);
      pCVar7 = *(CDockingPanesRow **)(*(int *)(in_ECX + 0x134) + 8);
    }
LAB_100fd42d:
    iStack_78 = 0x100fd43e;
    CopyRect(&local_28,(RECT *)(param_1 + 0x218));
    in_ECX = (CDockSite *)local_40.y;
    local_18.left = local_28.left;
    local_18.top = local_28.top;
    local_18.right = local_28.right;
    local_18.bottom = local_28.bottom;
    CWnd::ClientToScreen((CWnd *)local_40.y,&local_18);
  }
LAB_100fd456:
  local_30 = (RECT *)0x0;
  if (pCVar7 == (CDockingPanesRow *)0x0) {
LAB_100fd4e6:
    if (local_29 == '\0') {
      pRVar5 = (RECT *)0x0;
    }
    else {
      pRVar5 = *(RECT **)(in_ECX + 0x130);
    }
LAB_100fd4f6:
    iVar2 = local_48;
    if (local_38 == 0) {
      iVar2 = local_44;
    }
    iStack_78 = 0x100fd50b;
    pCVar7 = CDockSite::AddRow(in_ECX,(__POSITION *)pRVar5,iVar2);
  }
  else {
    pcVar1 = *(code **)(*(int *)pCVar7 + 0x60);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*(int *)local_34 + 0x280);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      pRVar5 = local_30;
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*(int *)pCVar7 + 0x40);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        pRVar5 = local_30;
        if (iVar2 == 0) goto LAB_100fd4a5;
      }
    }
    else {
LAB_100fd4a5:
      iStack_78 = 0x100fd4b3;
      pRVar5 = (RECT *)CObList::Find((CObList *)(in_ECX + 300),(CObject *)pCVar7,(__POSITION *)0x0);
      if (pRVar5 == (RECT *)0x0) {
LAB_100fd5a8:
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      pCVar7 = (CDockingPanesRow *)0x0;
    }
    if (pCVar7 == (CDockingPanesRow *)0x0) {
      if (pRVar5 == (RECT *)0x0) goto LAB_100fd4e6;
      local_30 = pRVar5;
      if (local_29 == '\0') {
        FUN_100c321b();
        pRVar5 = local_30;
      }
      goto LAB_100fd4f6;
    }
  }
  iVar2 = *(int *)pCVar7;
  iStack_78 = param_2;
  pCStack_7c = local_34;
  guard_check_icall();
  (**(code **)(iVar2 + 0x1c))();
  uVar10 = 0;
  piVar9 = &local_54;
  pcVar1 = *(code **)(*(int *)local_34 + 0x260);
  uVar11 = local_4c;
  guard_check_icall(piVar9,0,local_4c);
  (*pcVar1)();
  if ((local_54 != local_48) || (local_50 != local_44)) {
    if (local_38 == 0) {
      local_54 = local_50;
    }
    CDockSite::ResizeRow(in_ECX,pCVar7,local_54,1);
  }
  CObList::AddTail((CObList *)(in_ECX + 0x110),local_34);
  pcVar1 = *(code **)(*(int *)in_ECX + 0x2a8);
  guard_check_icall(piVar9,uVar10,uVar11);
  (*pcVar1)();
  CWnd::ShowWindow((CWnd *)in_ECX,5);
LAB_100fd595:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

