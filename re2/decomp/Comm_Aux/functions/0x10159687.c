// rea decompile_all
// name: CPaneContainer::DeletePane
// address: 0x10159687
// body: available
// range: 0x10159687-0x10159908 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::DeletePane(class CDockablePane *,enum
   CPaneContainer::BC_FIND_CRITERIA)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPaneContainer::DeletePane(CPaneContainer *this,CDockablePane *param_1,BC_FIND_CRITERIA param_2)

{
  CPaneContainer *pCVar1;
  int iVar2;
  CWnd *this_00;
  int iVar3;
  CPaneContainer *pCVar4;
  code *pcVar5;
  int *piVar6;
  tagRECT *ptVar7;
  undefined1 local_3c [4];
  CPaneContainer *local_38;
  int *local_34;
  HDWP local_30;
  CPaneContainer *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  pcVar5 = *(code **)(*(int *)this + 0xc);
  local_18.right = 0;
  local_18.bottom = 0;
  local_2c = this;
  guard_check_icall(&local_18,0);
  (*pcVar5)();
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_28);
  if (*(int *)(this + 0xc) != 0) {
    IsPaneDividerHorz(this);
  }
  local_30 = BeginDeferWindowPos(10);
  if (param_2 == 0) {
    if (param_1 != *(CDockablePane **)(this + 4)) goto LAB_101598d7;
    local_34 = *(int **)(this + 8);
    *(undefined4 *)(this + 4) = 0;
    if (local_34 == (int *)0x0) {
      pCVar4 = *(CPaneContainer **)(this + 0x14);
LAB_10159799:
      if (pCVar4 != (CPaneContainer *)0x0) {
        iVar2 = IsEmpty(pCVar4);
        if (iVar2 == 0) {
          ptVar7 = &local_18;
          pcVar5 = *(code **)(**(int **)(this + 0x1c) + 0x74);
          guard_check_icall();
          this_00 = (CWnd *)(*pcVar5)();
          CWnd::ScreenToClient(this_00,ptVar7);
          iVar2 = *(int *)this;
          guard_check_icall(local_18.left,local_18.top,local_18.right,local_18.bottom,&local_30,0);
          (**(code **)(iVar2 + 0x48))();
          this = local_2c;
          goto LAB_101598d7;
        }
      }
      pCVar4 = *(CPaneContainer **)(this + 0x18);
      if (pCVar4 != (CPaneContainer *)0x0) {
        do {
          iVar2 = IsEmpty(pCVar4);
          if (iVar2 == 0) break;
          pCVar4 = *(CPaneContainer **)(pCVar4 + 0x18);
        } while (pCVar4 != (CPaneContainer *)0x0);
        local_38 = pCVar4;
        if (pCVar4 != (CPaneContainer *)0x0) {
          local_2c = *(CPaneContainer **)(pCVar4 + 0xc);
          if (local_2c != (CPaneContainer *)0x0) {
            pcVar5 = *(code **)(*(int *)local_2c + 0x164);
            guard_check_icall();
            iVar2 = (*pcVar5)();
            pCVar1 = local_2c;
            if (iVar2 == 0) {
              iVar2 = local_28.right - local_28.left;
            }
            else {
              iVar2 = local_28.bottom - local_28.top;
            }
            local_34 = (int *)(*(int *)(local_2c + 0x118) + iVar2 * 2 + 2);
            iVar2 = FID_conflict_IsLeftPartEmpty(0);
            if (iVar2 == 0) {
              iVar2 = FID_conflict_IsLeftPartEmpty(0);
              if (iVar2 == 0) goto LAB_101598d7;
              iVar2 = *(int *)pCVar4;
              pcVar5 = *(code **)(*(int *)pCVar1 + 0x164);
              guard_check_icall(1,1,&local_30);
              iVar3 = (*pcVar5)();
              piVar6 = local_34;
            }
            else {
              iVar2 = *(int *)pCVar4;
              pcVar5 = *(code **)(*(int *)pCVar1 + 0x164);
              guard_check_icall(0,1,&local_30);
              iVar3 = (*pcVar5)();
              piVar6 = (int *)-(int)local_34;
            }
            guard_check_icall(piVar6,iVar3 == 0);
            (**(code **)(iVar2 + 0x34))();
          }
        }
      }
      goto LAB_101598d7;
    }
    pcVar5 = *(code **)(*local_34 + 0x2a8);
    guard_check_icall(local_3c,local_18.left,local_18.top,local_18.right,local_18.bottom,0,&local_30
                     );
  }
  else {
    if ((param_2 != 1) || (param_1 != *(CDockablePane **)(this + 8))) goto LAB_101598d7;
    local_34 = *(int **)(this + 4);
    *(undefined4 *)(this + 8) = 0;
    if (local_34 == (int *)0x0) {
      pCVar4 = *(CPaneContainer **)(this + 0x10);
      goto LAB_10159799;
    }
    pcVar5 = *(code **)(*local_34 + 0x2a8);
    guard_check_icall(local_3c,local_18.left,local_18.top,local_18.right,local_18.bottom,0,&local_30
                     );
  }
  (*pcVar5)();
LAB_101598d7:
  EndDeferWindowPos(local_30);
  if (*(int *)(this + 0xc) == 0) {
    *(int *)(this + 8) = 0;
    *(int *)(this + 4) = 0;
    *(int *)(this + 0x14) = 0;
    *(int *)(this + 0x10) = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

