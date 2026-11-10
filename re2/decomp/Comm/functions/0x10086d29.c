// rea decompile_all
// name: FUN_10086d29
// address: 0x10086d29
// body: available
// range: 0x10086d29-0x1008700d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10087009 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10086d29(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  HWND pHVar6;
  HMENU pHVar7;
  CFrameWnd *in_ECX;
  HWND local_14;
  uint local_10;
  uint local_c;
  int *local_8;
  
  if (param_2 != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x170);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      if ((param_1 != 0) && (local_14 = *(HWND *)(iVar2 + 0xac), local_14 != (HWND)0x0)) {
        pcVar1 = *(code **)(local_14->unused + 0x5c);
        guard_check_icall(0);
        (*pcVar1)();
      }
      local_14 = *(HWND *)(in_ECX + 0xb4);
      local_c = 0;
      while( true ) {
        if (local_14 == (HWND)0x0) {
          param_2[2] = local_c;
          if (param_1 == 0) {
            *(undefined4 *)(in_ECX + 0xe0) = 0;
            local_14 = GetDlgItem(*(HWND *)(in_ECX + 0x20),0xea21);
            if (local_14 != (HWND)0x0) {
              pHVar6 = GetDlgItem(*(HWND *)(in_ECX + 0x20),0xe900);
              if (pHVar6 != (HWND)0x0) {
                SetWindowLongW(pHVar6,-0xc,0xea21);
              }
              SetWindowLongW(local_14,-0xc,0xe900);
            }
            if (param_2[1] != 0) {
              InvalidateRect(*(HWND *)(in_ECX + 0x20),(RECT *)0x0,1);
              if (*(int *)(in_ECX + 0x100) == 1) {
                SetMenu(*(HWND *)(in_ECX + 0x20),(HMENU)param_2[1]);
              }
              else if (*(int *)(in_ECX + 0x100) == 2) {
                *(int *)(in_ECX + 0x104) = param_2[1];
              }
            }
            if (*(int **)(iVar2 + 0xac) != (int *)0x0) {
              pcVar1 = *(code **)(**(int **)(iVar2 + 0xac) + 0x5c);
              guard_check_icall(1);
              (*pcVar1)();
            }
            pcVar1 = *(code **)(*(int *)in_ECX + 0x178);
            guard_check_icall(1);
            (*pcVar1)();
            pHVar6 = local_14;
            if (*param_2 != 0xe900) {
              pHVar6 = GetDlgItem(*(HWND *)(in_ECX + 0x20),*param_2);
            }
            ShowWindow(pHVar6,5);
            *(int *)(in_ECX + 0x8c) = param_2[5];
            CFrameWnd::ShowOwnedWindows(in_ECX,1);
          }
          else {
            *(int *)(in_ECX + 0xe0) = param_2[4];
            CFrameWnd::ShowOwnedWindows(in_ECX,0);
            pHVar6 = GetDlgItem(*(HWND *)(in_ECX + 0x20),*param_2);
            ShowWindow(pHVar6,0);
            if (*(int *)(in_ECX + 0x100) == 1) {
              pHVar7 = GetMenu(*(HWND *)(in_ECX + 0x20));
            }
            else {
              pHVar7 = *(HMENU *)(in_ECX + 0x104);
            }
            param_2[1] = (int)pHVar7;
            if (pHVar7 != (HMENU)0x0) {
              InvalidateRect(*(HWND *)(in_ECX + 0x20),(RECT *)0x0,1);
              pcVar1 = *(code **)(*(int *)in_ECX + 0x70);
              guard_check_icall(0);
              (*pcVar1)();
              *(uint *)(in_ECX + 0x118) = *(uint *)(in_ECX + 0x118) & 0xfffffffe;
            }
            param_2[5] = *(int *)(in_ECX + 0x8c);
            *(undefined4 *)(in_ECX + 0x8c) = 0;
            LoadAccelTable(0x7915);
            if (*param_2 != 0xe900) {
              pHVar6 = GetDlgItem(*(HWND *)(in_ECX + 0x20),0xe900);
            }
            if (pHVar6 != (HWND)0x0) {
              SetWindowLongW(pHVar6,-0xc,0xea21);
            }
          }
          return;
        }
        piVar3 = (int *)FUN_1002466e(&local_14);
        piVar3 = (int *)*piVar3;
        local_8 = piVar3;
        if (piVar3 == (int *)0x0) break;
        iVar4 = GetDlgCtrlID((HWND)piVar3[8]);
        if (iVar4 - 0xe800U < 0x20) {
          local_10 = 1 << ((byte)iVar4 & 0x1f);
          pcVar1 = *(code **)(*piVar3 + 400);
          guard_check_icall();
          iVar5 = (*pcVar1)();
          if (iVar5 != 0) {
            local_c = local_c | local_10;
          }
          pcVar1 = *(code **)(*local_8 + 0x198);
          guard_check_icall();
          iVar5 = (*pcVar1)();
          if ((iVar5 == 0) || (iVar4 != 0xe81f)) {
            FUN_10087972(local_8,param_2[2] & local_10,1);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

