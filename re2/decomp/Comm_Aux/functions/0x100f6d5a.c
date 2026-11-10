// rea decompile_all
// name: CMultiPaneFrameWnd::DockFrame
// address: 0x100f6d5a
// body: available
// range: 0x100f6d5a-0x100f6fd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMultiPaneFrameWnd::DockFrame(class CPaneFrameWnd *,enum
   AFX_DOCK_METHOD)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMultiPaneFrameWnd::DockFrame
          (CMultiPaneFrameWnd *this,CPaneFrameWnd *param_1,AFX_DOCK_METHOD param_2)

{
  code *pcVar1;
  HWND hWnd;
  CMultiPaneFrameWnd *pCVar2;
  CObject *pCVar3;
  CObject *pCVar4;
  int iVar5;
  BOOL BVar6;
  undefined1 local_4c [4];
  LONG local_48;
  LONG LStack_44;
  LONG LStack_40;
  tagPOINT local_3c;
  CMultiPaneFrameWnd *local_34;
  CObject *local_30;
  undefined4 local_2c;
  CObject *local_28;
  CObject *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x100f6d66;
  local_34 = this;
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10205dc0,(CObject *)param_1
                             );
  if (pCVar3 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x1ac);
    local_28 = pCVar3;
    guard_check_icall();
    pCVar4 = (CObject *)(*pcVar1)();
    local_24 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101ba5bc,pCVar4);
    if (local_24 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)local_24 + 0x198);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 != 0) {
        local_18 = 0x1000;
        local_14[0] = 0;
        local_1c = 0;
        local_20 = 0;
        local_3c.x = 0;
        local_3c.y = 0;
        GetCursorPos(&local_3c);
        if ((param_2 == 1) || (param_2 == 5)) {
          CGlobalUtils::CGlobalUtils((CGlobalUtils *)&local_48);
          local_8 = 0;
          iVar5 = FUN_100f6477(this + 400,local_3c.x,local_3c.y,local_14,&local_18,&local_1c,
                               &local_20);
          if (iVar5 == 0) {
            FUN_100f58c6();
            return 1;
          }
          local_8 = 0xffffffff;
          FUN_100f58c6();
        }
        if ((local_14[0] != 0) && (local_18 != 0)) {
          local_24 = pCVar3 + 400;
          pcVar1 = *(code **)(*(int *)local_24 + 0x78);
          guard_check_icall();
          pCVar3 = (CObject *)(*pcVar1)();
          if (((local_1c == 0) && (local_20 == 0)) || (local_14[0] == 0)) {
            pcVar1 = *(code **)(*(int *)(this + 400) + 0x10);
            guard_check_icall(local_14[0],local_18,local_24,1);
            iVar5 = (*pcVar1)();
          }
          else {
            local_30 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101c7908,pCVar3);
            if (local_30 != (CObject *)0x0) {
              local_2c = 0xffffffff;
              pcVar1 = *(code **)(*(int *)local_30 + 0x3d0);
              guard_check_icall(&local_2c);
              pCVar3 = (CObject *)(*pcVar1)();
            }
            pcVar1 = *(code **)(*(int *)(this + 400) + 0x18);
            guard_check_icall(local_14[0],local_24);
            iVar5 = (*pcVar1)();
          }
          if (iVar5 != 0) {
            hWnd = *(HWND *)(param_1 + 0x20);
            SendMessageW(*(HWND *)(local_28 + 0x20),DAT_1020fd08,0,0);
            BVar6 = IsWindow(hWnd);
            if (BVar6 != 0) {
              local_4c = *(undefined1 (*) [4])(local_28 + 0xd8);
              local_48 = *(LONG *)(local_28 + 0xdc);
              LStack_44 = *(LONG *)(local_28 + 0xe0);
              LStack_40 = *(LONG *)(local_28 + 0xe4);
              CWnd::MoveWindow((CWnd *)local_28,(tagRECT *)local_4c,1);
            }
            pCVar2 = local_34;
            pcVar1 = *(code **)(*(int *)local_34 + 0x1cc);
            guard_check_icall();
            (*pcVar1)();
            if ((param_2 == 1) && (pCVar3 != (CObject *)0x0)) {
              ScreenToClient(*(HWND *)(pCVar3 + 0x20),&local_3c);
              iVar5 = FUN_1004e58b(&PTR_s_CPane_101ba9ec);
              if (iVar5 == 0) {
                SendMessageW(*(HWND *)(pCVar3 + 0x20),0x201,0,
                             CONCAT22((undefined2)local_3c.y,(undefined2)local_3c.x));
              }
              else {
                pcVar1 = *(code **)(*(int *)pCVar3 + 0x314);
                guard_check_icall(1);
                (*pcVar1)();
              }
            }
            pcVar1 = *(code **)(*(int *)pCVar2 + 500);
            guard_check_icall();
            (*pcVar1)();
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

