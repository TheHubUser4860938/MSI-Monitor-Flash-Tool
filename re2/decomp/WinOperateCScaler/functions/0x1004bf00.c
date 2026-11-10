// rea decompile_all
// name: CMFCPropertyGridProperty::Reposition
// address: 0x1004bf00
// body: available
// range: 0x1004bf00-0x1004c10f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridProperty::Reposition(int &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPropertyGridProperty::Reposition(CMFCPropertyGridProperty *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  CWnd *pCVar7;
  undefined4 *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  BOOL BVar12;
  HWND hWnd;
  uint uVar13;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  uVar2 = *(undefined4 *)(this + 0x30);
  uVar3 = *(undefined4 *)(this + 0x34);
  uVar4 = *(undefined4 *)(this + 0x38);
  uVar5 = *(undefined4 *)(this + 0x3c);
  if ((*(int *)(this + 0x7c) == 0) ||
     ((iVar10 = IsParentExpanded(this), iVar10 == 0 &&
      (*(int *)(*(int *)(this + 0xc4) + 0x304) == 0)))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  iVar10 = *(int *)(this + 0xc4);
  if (((*(int *)(iVar10 + 0x304) != 0) && (*(int *)(this + 200) != 0)) &&
     (*(int *)(*(int *)(this + 200) + 0x6c) != 0)) {
    iVar11 = IsParentExpanded(this);
    bVar9 = (bool)(bVar9 & iVar11 != 0);
  }
  if (bVar9) {
    uVar6 = *(uint *)(iVar10 + 0x354);
    uVar13 = uVar6;
    if (*(int *)(iVar10 + 0x304) == 0) {
      iVar11 = GetHierarchyLevel(this);
      uVar13 = iVar11 * uVar6;
    }
    if (*(int *)(iVar10 + 0x304) != 0) {
      uVar13 = uVar13 & ~-(uint)(*(int *)(this + 0x6c) != 0);
    }
    local_18.left = *(int *)(iVar10 + 0x328) + uVar13;
    local_18.top = *param_1;
    local_18.right = *(LONG *)(iVar10 + 0x330);
    local_18.bottom = local_18.top + uVar6;
    *(LONG *)(this + 0x30) = local_18.left;
    *(LONG *)(this + 0x34) = local_18.top;
    *(LONG *)(this + 0x38) = local_18.right;
    *(LONG *)(this + 0x3c) = local_18.bottom;
    BVar12 = IsRectEmpty((RECT *)(this + 0x40));
    if (BVar12 == 0) {
      *(int *)(this + 0x44) = *(int *)(this + 0x34) + 1;
      *(undefined4 *)(this + 0x4c) = *(undefined4 *)(this + 0x3c);
    }
    *param_1 = *param_1 + *(int *)(*(int *)(this + 0xc4) + 0x354);
    iVar10 = *(int *)(this + 0xc4);
    local_18.left = *(LONG *)(this + 0x30);
    local_18.top = *(LONG *)(this + 0x34);
    local_18.bottom = *(LONG *)(this + 0x3c);
    local_18.right = *(int *)(iVar10 + 0x358) + *(int *)(iVar10 + 0x328);
    hWnd = (HWND)0x0;
    if (iVar10 != -0x80) {
      hWnd = *(HWND *)(iVar10 + 0xa0);
    }
    BVar12 = IsWindow(hWnd);
    if (BVar12 != 0) {
      pCVar7 = *(CWnd **)(this + 0xc4);
      CToolTipCtrl::AddTool
                ((CToolTipCtrl *)(pCVar7 + 0x80),pCVar7,(wchar_t *)0xffffffff,&local_18,
                 *(int *)(pCVar7 + 0x340) + 1);
      *(int *)(*(int *)(this + 0xc4) + 0x340) = *(int *)(*(int *)(this + 0xc4) + 0x340) + 1;
      if (*(int *)(this + 0x5c) == 0) {
        pCVar7 = *(CWnd **)(this + 0xc4);
        local_28.left = local_18.right + 1;
        local_28.top = *(LONG *)(this + 0x34);
        local_28.right = *(LONG *)(this + 0x38);
        local_28.bottom = *(LONG *)(this + 0x3c);
        CToolTipCtrl::AddTool
                  ((CToolTipCtrl *)(pCVar7 + 0x80),pCVar7,(wchar_t *)0xffffffff,&local_28,
                   *(int *)(pCVar7 + 0x340) + 1);
        *(int *)(*(int *)(this + 0xc4) + 0x340) = *(int *)(*(int *)(this + 0xc4) + 0x340) + 1;
      }
    }
  }
  else {
    SetRectEmpty((LPRECT)(this + 0x30));
    SetRectEmpty((LPRECT)(this + 0x40));
  }
  puVar8 = *(undefined4 **)(this + 0xd0);
  while (puVar8 != (undefined4 *)0x0) {
    puVar1 = puVar8 + 2;
    puVar8 = (undefined4 *)*puVar8;
    Reposition((CMFCPropertyGridProperty *)*puVar1,param_1);
  }
  iVar10 = *(int *)this;
  guard_check_icall(uVar2,uVar3,uVar4,uVar5);
  (**(code **)(iVar10 + 0x6c))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

