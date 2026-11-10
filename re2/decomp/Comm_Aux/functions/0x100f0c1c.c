// rea decompile_all
// name: CMFCPopupMenuBar::OnSendCommand
// address: 0x100f0c1c
// body: available
// range: 0x100f0c1c-0x100f0d5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCPopupMenuBar::OnSendCommand(class CMFCToolBarButton const
   *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPopupMenuBar::OnSendCommand(CMFCPopupMenuBar *this,CMFCToolBarButton *param_1)

{
  code *pcVar1;
  POINT pt;
  CObject *pCVar2;
  int iVar3;
  BOOL BVar4;
  tagPOINT local_10;
  CMFCPopupMenuBar *local_8;
  
  if (*(int *)(param_1 + 0x20) == -2) {
    return 1;
  }
  local_8 = this;
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeMenuButton_101cf868,
                              (CObject *)param_1);
  if (pCVar2 == (CObject *)0x0) {
    if ((*(uint *)(param_1 + 0x24) & 0x40000) != 0) {
      return 0;
    }
  }
  else if ((*(uint *)(param_1 + 0x24) & 0x40000) != 0) {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0xe8);
    guard_check_icall();
    (*pcVar1)();
    return 1;
  }
  if (*(int *)(param_1 + 0x20) == -1) {
    return 0;
  }
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10205e6c,
                              (CObject *)param_1);
  if (pCVar2 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0xf0);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      local_10.x = 0;
      local_10.y = 0;
      GetCursorPos(&local_10);
      ScreenToClient(*(HWND *)(local_8 + 0x20),&local_10);
      pt.y = local_10.y;
      pt.x = local_10.x;
      BVar4 = PtInRect((RECT *)(pCVar2 + 0xd8),pt);
      if (BVar4 != 0) {
        return 1;
      }
      if (*(int *)(pCVar2 + 0x8c) != 0) {
        PostMessageW(*(HWND *)(*(int *)(pCVar2 + 0x8c) + 0x20),0x10,0,0);
        return 0;
      }
    }
    if (*(int *)(pCVar2 + 0x8c) != 0) {
      return 0;
    }
    pcVar1 = *(code **)(*(int *)pCVar2 + 0xe8);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_1004e58b(&PTR_s_CMFCShowAllButton_101ca7c0);
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x20);
      guard_check_icall(local_8,0);
      (*pcVar1)();
      return 1;
    }
  }
  InvokeMenuCommand(local_8,*(uint *)(param_1 + 0x20),param_1);
  return 1;
}

