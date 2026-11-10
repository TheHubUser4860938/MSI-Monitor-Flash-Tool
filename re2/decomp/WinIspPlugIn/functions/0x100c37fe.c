// rea decompile_all
// name: FUN_100c37fe
// address: 0x100c37fe
// body: available
// range: 0x100c37fe-0x100c3a7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c37fe(CDC *param_1,CSize *param_2,int param_3,int param_4)

{
  CWnd *pCVar1;
  int iVar2;
  ulong uVar3;
  AFX_GLOBAL_DATA *pAVar4;
  CMFCToolBarButton *in_ECX;
  int iVar5;
  undefined4 local_4c [6];
  int local_34;
  int local_2c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(int *)(in_ECX + 0x7c) = param_4;
  if (*(int *)(in_ECX + 0x50) == 0) {
    if (((DAT_1023d7fc != 0) && (pCVar1 = *(CWnd **)(in_ECX + 0xb0), pCVar1 != (CWnd *)0x0)) &&
       (*(int *)(pCVar1 + 0x20) != 0)) {
      uVar3 = CWnd::GetExStyle(pCVar1);
      if ((uVar3 & 0x10000000) != 0) {
        CWnd::ShowWindow(*(CWnd **)(in_ECX + 0xb0),0);
      }
    }
    pCVar1 = *(CWnd **)(in_ECX + 0xb4);
    if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
      uVar3 = CWnd::GetExStyle(pCVar1);
      if ((uVar3 & 0x10000000) != 0) {
        CWnd::ShowWindow(*(CWnd **)(in_ECX + 0xb4),0);
      }
    }
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    if (((DAT_1023d7fc != 0) && (pCVar1 = *(CWnd **)(in_ECX + 0xb4), pCVar1 != (CWnd *)0x0)) &&
       (*(int *)(pCVar1 + 0x20) != 0)) {
      uVar3 = CWnd::GetExStyle(pCVar1);
      if ((uVar3 & 0x10000000) != 0) {
        CWnd::ShowWindow(*(CWnd **)(in_ECX + 0xb4),0);
      }
    }
    if (param_4 == 0) {
      pCVar1 = *(CWnd **)(in_ECX + 0xb4);
      if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
        uVar3 = CWnd::GetExStyle(pCVar1);
        if ((uVar3 & 0x10000000) != 0) {
          CWnd::ShowWindow(*(CWnd **)(in_ECX + 0xb4),0);
        }
      }
      pCVar1 = *(CWnd **)(in_ECX + 0xb0);
      if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
        uVar3 = CWnd::GetExStyle(pCVar1);
        if ((uVar3 & 0x10000000) != 0) {
          CWnd::ShowWindow(*(CWnd **)(in_ECX + 0xb0),0);
        }
      }
      CMFCToolBarButton::OnCalculateSize(in_ECX,param_1,param_2,param_3);
    }
    else {
      if ((((DAT_1023d7fc == 0) && (pCVar1 = *(CWnd **)(in_ECX + 0xb4), pCVar1 != (CWnd *)0x0)) &&
          (*(int *)(pCVar1 + 0x20) != 0)) && (*(int *)(in_ECX + 0x40) == 0)) {
        CWnd::ShowWindow(pCVar1,4);
      }
      if ((*(int *)(in_ECX + 0x18) != 0) && (*(int *)(*(int *)(in_ECX + 0x2c) + -0xc) != 0)) {
        local_18.right = *(LONG *)(in_ECX + 0x70);
        local_18.left = 0;
        iVar5 = *(int *)param_2;
        local_18.top = 0;
        local_18.bottom = *(int *)(param_3 + 4);
        guard_check_icall(*(int *)(in_ECX + 0x2c),*(undefined4 *)(*(int *)(in_ECX + 0x2c) + -0xc),
                          &local_18,0x411);
        (**(code **)(iVar5 + 0x68))();
        *(LONG *)(in_ECX + 100) = local_18.right - local_18.left;
        *(LONG *)(in_ECX + 0x68) = local_18.bottom - local_18.top;
      }
      iVar5 = *(int *)(param_3 + 4);
      if ((*(int *)(in_ECX + 0xb4) != 0) && (*(int *)(*(int *)(in_ECX + 0xb4) + 0x20) != 0)) {
        pAVar4 = GetGlobalData();
        if (*(int *)(pAVar4 + 0x17c) == 0) {
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(*(int *)(in_ECX + 0xb4) + 0x20),&local_18);
          iVar5 = local_18.bottom - local_18.top;
        }
        else {
          _memset(local_4c,0,0x34);
          local_4c[0] = 0x34;
          FUN_100c3115(local_4c);
          iVar5 = local_2c - local_34;
        }
      }
      if (((*(int *)(in_ECX + 0x40) == 0) && (*(int *)(in_ECX + 0xb0) != 0)) &&
         (*(int *)(*(int *)(in_ECX + 0xb0) + 0x20) != 0)) {
        uVar3 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 0xb4));
        if ((uVar3 & 0x10000000) == 0) {
          CWnd::ShowWindow(*(CWnd **)(in_ECX + 0xb0),4);
        }
      }
      iVar2 = *(int *)(in_ECX + 0x68);
      *(undefined4 *)param_1 = *(undefined4 *)(in_ECX + 0x70);
      *(int *)(param_1 + 4) = iVar2 + iVar5;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

