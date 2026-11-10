// rea decompile_all
// name: CWnd::FilterToolTipMessage
// address: 0x100aeeb3
// body: available
// range: 0x100aeeb3-0x100af327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CWnd::FilterToolTipMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWnd::FilterToolTipMessage(CWnd *this,tagMSG *param_1)

{
  uint uVar1;
  code *pcVar2;
  SHORT SVar3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CWnd *pCVar7;
  CWnd *pCVar8;
  void *_Dst;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  tagPOINT local_94;
  tagPOINT local_8c;
  AFX_MODULE_THREAD_STATE *local_84;
  CWnd *local_80;
  CWnd *local_7c;
  tagMSG *local_78;
  uint local_74 [8];
  int local_54;
  void *local_50;
  uint local_44 [15];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x84;
  local_8 = 0x100aeec2;
  iVar10 = 1;
  local_78 = param_1;
  uVar1 = param_1->message;
  local_7c = this;
  if (((((uVar1 != 0x200) && (uVar1 != 0xa0)) && (uVar1 != 0x202)) &&
      ((uVar1 != 0x205 && (uVar1 != 0x208)))) ||
     ((SVar3 = GetKeyState(1), SVar3 < 0 ||
      ((SVar3 = GetKeyState(2), SVar3 < 0 || (SVar3 = GetKeyState(4), SVar3 < 0)))))) {
    if ((*(uint *)(this + 0x60) & 0x401) != 0) {
      pHVar5 = local_78->hwnd;
      while (pCVar6 = FromHandle(pHVar5), pCVar6 != (CWnd *)0x0) {
        if (pCVar6 == this) goto LAB_100af290;
        if ((*(uint *)(pCVar6 + 0x60) & 0x401) != 0) break;
        pHVar5 = GetParent(*(HWND *)(pCVar6 + 0x20));
      }
      if (pCVar6 == this) {
LAB_100af290:
        if (((uVar1 < 0x100) || (0x109 < uVar1)) && (3 < uVar1 - 0x104)) {
          iVar10 = 0;
        }
        if (((*(uint *)(this + 0x60) & 0x400) == 0) &&
           (((((iVar10 != 0 || (uVar1 == 0x201)) ||
              ((uVar1 == 0x203 || ((uVar1 == 0x204 || (uVar1 == 0x206)))))) || (uVar1 == 0x207)) ||
            (((((uVar1 == 0x209 || (uVar1 == 0xa1)) || (uVar1 == 0xa3)) ||
              ((uVar1 == 0xa4 || (uVar1 == 0xa6)))) || ((uVar1 == 0xa7 || (uVar1 == 0xa9)))))))) {
          CancelToolTips(iVar10);
        }
      }
    }
    goto LAB_100af320;
  }
  pAVar4 = AfxGetModuleThreadState();
  pHVar5 = local_78->hwnd;
  local_84 = pAVar4;
  while ((pCVar6 = FromHandle(pHVar5), pCVar6 != (CWnd *)0x0 &&
         ((*(uint *)(pCVar6 + 0x60) & 0x401) == 0))) {
    pHVar5 = GetParent(*(HWND *)(pCVar6 + 0x20));
  }
  if (pCVar6 != this) {
    if (pCVar6 == (CWnd *)0x0) {
      *(undefined4 *)(pAVar4 + 0x40) = 0;
      *(undefined4 *)(pAVar4 + 0x44) = 0xffffffff;
    }
    goto LAB_100af320;
  }
  pCVar6 = *(CWnd **)(pAVar4 + 0x3c);
  pCVar7 = GetParentOwner(local_7c);
  local_80 = pCVar7;
  if (pCVar6 == (CWnd *)0x0) {
LAB_100aefc4:
    local_8c.y = FUN_10047eb4(0xa0);
    local_8 = 0;
    if ((CToolTipCtrl *)local_8c.y == (CToolTipCtrl *)0x0) {
      pCVar6 = (CWnd *)0x0;
    }
    else {
      pCVar6 = (CWnd *)CToolTipCtrl::CToolTipCtrl((CToolTipCtrl *)local_8c.y);
    }
    local_8 = 0xffffffff;
    pcVar2 = *(code **)(*(int *)pCVar6 + 0x164);
    guard_check_icall(pCVar7,1);
    iVar10 = (*pcVar2)();
    if (iVar10 == 0) {
      pcVar2 = *(code **)(*(int *)pCVar6 + 4);
      guard_check_icall(1);
      (*pcVar2)();
      goto LAB_100af320;
    }
    SendMessageW(*(HWND *)(pCVar6 + 0x20),0x401,0,0);
    *(CWnd **)(pAVar4 + 0x3c) = pCVar6;
  }
  else {
    pCVar8 = GetOwner(pCVar6);
    if (pCVar8 != pCVar7) {
      pcVar2 = *(code **)(*(int *)pCVar6 + 0x60);
      guard_check_icall();
      (*pcVar2)();
      pcVar2 = *(code **)(*(int *)pCVar6 + 4);
      guard_check_icall(1);
      (*pcVar2)();
      *(undefined4 *)(pAVar4 + 0x3c) = 0;
      pCVar6 = (CWnd *)0x0;
      pCVar7 = local_80;
    }
    if (pCVar6 == (CWnd *)0x0) goto LAB_100aefc4;
  }
  _memset(local_44,0,0x30);
  pCVar7 = local_7c;
  local_94.x = (local_78->pt).x;
  local_94.y = (local_78->pt).y;
  ::ScreenToClient(*(HWND *)(local_7c + 0x20),&local_94);
  _memset(local_74,0,0x30);
  local_74[0] = 0x2c;
  pcVar2 = *(code **)(*(int *)pCVar7 + 0x74);
  guard_check_icall(local_94.x,local_94.y,local_74);
  pCVar7 = (CWnd *)(*pcVar2)();
  local_8c.y = -(uint)(pCVar7 != (CWnd *)0xffffffff) & (uint)local_7c;
  local_80 = pCVar7;
  if ((*(CWnd **)(pAVar4 + 0x44) == pCVar7) &&
     (*(CToolTipCtrl **)(pAVar4 + 0x40) == (CToolTipCtrl *)local_8c.y)) {
    if ((*(uint *)(local_7c + 0x60) & 0x400) == 0) {
      if (pCVar7 != (CWnd *)0xffffffff) {
        _AfxRelayToolTipMessage((CToolTipCtrl *)pCVar6,local_78);
      }
    }
    else {
      GetCursorPos(&local_8c);
      SendMessageW(*(HWND *)(pCVar6 + 0x20),0x412,0,
                   CONCAT22((undefined2)local_8c.y,(undefined2)local_8c.x));
    }
  }
  else {
    if (pCVar7 == (CWnd *)0xffffffff) {
      SendMessageW(*(HWND *)(pCVar6 + 0x20),0x401,0,0);
    }
    else {
      puVar9 = local_74;
      puVar11 = local_44;
      for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      local_44[1] = local_74[1] & 0x3fffffff;
      if ((*(uint *)(local_7c + 0x60) & 0x400) != 0) {
        local_44[1] = local_44[1] | 0x20;
      }
      SendMessageW(*(HWND *)(pCVar6 + 0x20),0x432,0,(LPARAM)local_44);
      if (((local_74[1] & 0x40000000) != 0) ||
         (iVar10 = FUN_100516e5(), pCVar7 = local_80, pAVar4 = local_84, iVar10 != 0)) {
        SendMessageW(*(HWND *)(pCVar6 + 0x20),0x401,1,0);
        if ((*(uint *)(local_7c + 0x60) & 0x400) != 0) {
          SendMessageW(*(HWND *)(pCVar6 + 0x20),0x411,1,(LPARAM)local_44);
        }
        ::SetWindowPos(*(HWND *)(pCVar6 + 0x20),(HWND)0x0,0,0,0,0,0x213);
        pCVar7 = local_80;
        pAVar4 = local_84;
      }
    }
    _AfxRelayToolTipMessage((CToolTipCtrl *)pCVar6,local_78);
    puVar9 = *(uint **)(pAVar4 + 0x48);
    if ((puVar9 != (uint *)0x0) && (0x2b < *puVar9)) {
      SendMessageW(*(HWND *)(pCVar6 + 0x20),0x433,0,(LPARAM)puVar9);
    }
    *(LONG *)(pAVar4 + 0x40) = local_8c.y;
    *(CWnd **)(pAVar4 + 0x44) = pCVar7;
    if (*(int *)(pAVar4 + 0x48) == 0) {
      _Dst = (void *)FUN_10047eb4(0x30);
      *(void **)(pAVar4 + 0x48) = _Dst;
      _memset(_Dst,0,0x30);
    }
    puVar9 = local_74;
    puVar11 = *(uint **)(pAVar4 + 0x48);
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  if ((local_50 != (void *)0xffffffff) && (local_54 == 0)) {
    FID_conflict__free(local_50);
  }
LAB_100af320:
  FUN_1017f5f4();
  return;
}

