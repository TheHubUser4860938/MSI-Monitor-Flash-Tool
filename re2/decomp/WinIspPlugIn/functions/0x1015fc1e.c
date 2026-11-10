// rea decompile_all
// name: CPaneContainerManager::GetMinMaxOffset
// address: 0x1015fc1e
// body: available
// range: 0x1015fc1e-0x1015fec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainerManager::GetMinMaxOffset(class CPaneDivider *,int
   &,int &,int &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPaneContainerManager::GetMinMaxOffset
          (CPaneContainerManager *this,CPaneDivider *param_1,int *param_2,int *param_3,int *param_4)

{
  CPaneDivider *pCVar1;
  CWnd *pCVar2;
  CDockingManager *pCVar3;
  uint uVar4;
  int iVar5;
  LONG LVar6;
  code *pcVar7;
  tagRECT *ptVar8;
  int local_54;
  int local_50;
  CPaneDivider *local_4c;
  int local_48;
  CPaneContainerManager *local_44;
  int *local_40;
  int *local_3c;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = -1;
  local_3c = param_2;
  local_40 = param_3;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_44 = this;
  ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  if (*(int *)(param_1 + 300) == 0) {
    local_3c = (int *)FUN_1015a6b9(param_1,2);
    if (local_3c == (int *)0x0) goto LAB_1015feb1;
    pcVar7 = *(code **)(*local_3c + 0xc);
    guard_check_icall(&local_28,0);
    (*pcVar7)();
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
    local_44 = (CPaneContainerManager *)0x0;
    pcVar7 = *(code **)(*local_3c + 0x14);
    guard_check_icall(&local_54);
    (*pcVar7)();
    pcVar7 = *(code **)(*local_3c + 0x18);
    guard_check_icall(&local_48);
    (*pcVar7)();
    pcVar7 = *(code **)(*(int *)local_4c + 0x164);
    guard_check_icall();
    iVar5 = (*pcVar7)();
    if (iVar5 == 0) {
      *param_2 = (local_54 - local_18.left) + local_28.left;
      iVar5 = (local_28.right - local_48) - local_18.right;
    }
    else {
      *param_2 = local_28.top + 1 + (local_50 - local_18.top);
      iVar5 = (local_28.bottom - (int)local_44) - local_18.bottom;
    }
    *param_3 = iVar5 + -1;
    pcVar7 = *(code **)(*local_3c + 0x1c);
    guard_check_icall();
  }
  else {
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    pcVar7 = *(code **)(*(int *)param_1 + 0x19c);
    guard_check_icall();
    pCVar2 = (CWnd *)(*pcVar7)();
    pCVar3 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_1023d944,pCVar2);
    pcVar7 = *(code **)(**(int **)(local_44 + 0x3c) + 0xc);
    guard_check_icall(&local_28,0);
    (*pcVar7)();
    local_54 = 0;
    local_50 = 0;
    pcVar7 = *(code **)(**(int **)(local_44 + 0x3c) + 0x10);
    guard_check_icall(&local_54);
    (*pcVar7)();
    InflateRect(&local_28,-local_54,-local_50);
    pCVar1 = local_4c;
    local_38.left = *(LONG *)(pCVar3 + 0xf8);
    ptVar8 = &local_38;
    local_38.top = *(LONG *)(pCVar3 + 0xfc);
    local_38.right = *(LONG *)(pCVar3 + 0x100);
    local_38.bottom = *(LONG *)(pCVar3 + 0x104);
    pcVar7 = *(code **)(*(int *)local_4c + 0x19c);
    guard_check_icall();
    pCVar2 = (CWnd *)(*pcVar7)();
    CWnd::ClientToScreen(pCVar2,ptVar8);
    InflateRect(&local_38,-DAT_1023dcec,-DAT_1023dcec);
    pcVar7 = *(code **)(*(int *)pCVar1 + 0x194);
    guard_check_icall();
    uVar4 = (*pcVar7)();
    if ((uVar4 & 0x1000) == 0) {
      if ((uVar4 & 0x2000) != 0) {
        *local_3c = (local_28.top - local_18.top) + 1;
        LVar6 = local_38.bottom;
LAB_1015fdbe:
        iVar5 = LVar6 - local_18.bottom;
        goto LAB_1015fdc1;
      }
      if ((uVar4 & 0x4000) != 0) {
        *local_3c = (local_38.left - local_18.left) + 1;
        LVar6 = local_28.right;
        goto LAB_1015fd73;
      }
      if ((uVar4 & 0x8000) != 0) {
        *local_3c = (local_38.top - local_18.top) + 1;
        LVar6 = local_28.bottom;
        goto LAB_1015fdbe;
      }
    }
    else {
      *local_3c = (local_28.left - local_18.left) + 1;
      LVar6 = local_38.right;
LAB_1015fd73:
      iVar5 = LVar6 - local_18.right;
LAB_1015fdc1:
      *local_40 = iVar5 + -1;
    }
    pcVar7 = *(code **)(**(int **)(local_44 + 0x3c) + 0x1c);
    guard_check_icall();
  }
  iVar5 = (*pcVar7)();
  *param_4 = iVar5;
LAB_1015feb1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

