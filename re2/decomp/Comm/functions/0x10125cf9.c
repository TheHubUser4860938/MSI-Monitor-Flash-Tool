// rea decompile_all
// name: CPaneContainer::StretchPaneContainer
// address: 0x10125cf9
// body: available
// range: 0x10125cf9-0x10125ff9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainer::StretchPaneContainer(int,int,int,int,void * &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneContainer::StretchPaneContainer
          (CPaneContainer *this,int param_1,int param_2,int param_3,int param_4,void **param_5)

{
  int iVar1;
  code *pcVar2;
  CWnd *pCVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  HWND pHVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  tagRECT *ptVar15;
  undefined1 local_24 [4];
  long local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_1c = param_3;
  pCVar3 = AfxGetMainWnd();
  uVar4 = CWnd::GetExStyle(pCVar3);
  if (((uVar4 & 0x400000) != 0) && (param_2 != 0)) {
    param_1 = -param_1;
  }
  iVar10 = (param_1 >> 0x1f & 0xfffffffeU) + 1;
  iVar11 = 0;
  iVar14 = param_1;
  if (param_2 != 0) {
    iVar11 = param_1;
    iVar14 = 0;
  }
  iVar1 = *(int *)this;
  if (param_2 == 0) {
    guard_check_icall(local_24,iVar11,iVar14,local_1c);
    iVar11 = (**(code **)(iVar1 + 0x44))();
    local_20 = *(long *)(iVar11 + 4);
  }
  else {
    guard_check_icall(&local_18.right,iVar11,iVar14,local_1c);
    plVar5 = (long *)(**(code **)(iVar1 + 0x44))();
    local_20 = *plVar5;
  }
  lVar6 = _labs(local_20);
  lVar7 = _labs(param_1);
  lVar8 = local_20;
  if (lVar7 < lVar6) {
    lVar8 = param_1;
  }
  local_20 = _labs(lVar8);
  local_20 = local_20 * iVar10;
  lVar8 = _labs(local_20);
  if (lVar8 != 0) {
    if (*(int **)(this + 0xc) != (int *)0x0) {
      pcVar2 = *(code **)(**(int **)(this + 0xc) + 0x164);
      guard_check_icall();
      iVar11 = (*pcVar2)();
      if ((iVar11 == 0) || (param_2 == 0)) {
        pcVar2 = *(code **)(**(int **)(this + 0xc) + 0x164);
        guard_check_icall();
        iVar11 = (*pcVar2)();
        if ((iVar11 != 0) || (param_2 != 0)) {
          pcVar2 = *(code **)(*(int *)this + 0x40);
          guard_check_icall(param_1,*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x10),local_1c)
          ;
          lVar8 = (*pcVar2)();
          pcVar2 = *(code **)(*(int *)this + 0x40);
          guard_check_icall(param_1,*(undefined4 *)(this + 8),*(undefined4 *)(this + 0x14),local_1c)
          ;
          lVar6 = (*pcVar2)();
          lVar6 = _labs(lVar6);
          lVar7 = _labs(lVar8);
          iVar11 = local_20;
          if (lVar7 == lVar6) {
            lVar8 = _labs(lVar8);
            iVar11 = (lVar8 / 2 + 1) * iVar10;
          }
          local_18.right = 0;
          local_18.bottom = 0;
          if (param_2 != 0) {
            local_18.right = iVar11;
            iVar11 = local_18.bottom;
          }
          local_18.bottom = iVar11;
          if (param_4 != 0) {
            pcVar2 = *(code **)(**(int **)(this + 0xc) + 0x26c);
            guard_check_icall(&local_18.right,1);
            (*pcVar2)();
          }
          iVar11 = *(int *)this;
          if (local_1c == 0) {
            iVar14 = 0;
            uVar13 = *(undefined4 *)(this + 0x10);
            uVar12 = *(undefined4 *)(this + 4);
          }
          else {
            uVar13 = *(undefined4 *)(this + 0x14);
            uVar12 = *(undefined4 *)(this + 8);
            iVar14 = local_1c;
          }
          guard_check_icall(local_20,uVar12,uVar13,param_2,iVar14,param_5);
          (**(code **)(iVar11 + 0x3c))();
          goto LAB_10125fe7;
        }
      }
    }
    lVar8 = local_20;
    iVar11 = *(int *)this;
    guard_check_icall(local_20,*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x10),param_2,
                      local_1c,param_5);
    (**(code **)(iVar11 + 0x3c))();
    iVar11 = *(int *)this;
    guard_check_icall(lVar8,*(undefined4 *)(this + 8),*(undefined4 *)(this + 0x14),param_2,local_1c,
                      param_5);
    (**(code **)(iVar11 + 0x3c))();
    if ((param_4 != 0) && (*(int *)(this + 0xc) != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      ::GetWindowRect(*(HWND *)(*(int *)(this + 0xc) + 0x20),&local_18);
      pcVar2 = *(code **)(**(int **)(this + 0xc) + 0x164);
      guard_check_icall();
      iVar11 = (*pcVar2)();
      if (iVar11 == 0) {
        if (local_1c == 0) {
          local_18.top = local_18.top + local_20;
        }
        else {
          local_18.bottom = local_18.bottom + local_20;
        }
      }
      else if (local_1c == 0) {
        local_18.left = local_18.left + local_20;
      }
      else {
        local_18.right = local_18.right + local_20;
      }
      uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0xc));
      if ((uVar4 & 0x10000000) != 0) {
        ptVar15 = &local_18;
        pHVar9 = GetParent(*(HWND *)(*(int *)(this + 0xc) + 0x20));
        pCVar3 = CWnd::FromHandle(pHVar9);
        CWnd::ScreenToClient(pCVar3,ptVar15);
        pcVar2 = *(code **)(**(int **)(this + 0xc) + 0x234);
        guard_check_icall(&local_18,0,*param_5);
        (*pcVar2)();
      }
    }
  }
LAB_10125fe7:
  iVar11 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar11;
}

