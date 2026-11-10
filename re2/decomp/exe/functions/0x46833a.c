// rea decompile_all
// name: CDockingManager::CalcPaneOffset
// address: 0x46833a
// body: available
// range: 0x46833a-0x46856f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockingManager::CalcPaneOffset(class CAutoHideDockSite *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::CalcPaneOffset(CDockingManager *this,CAutoHideDockSite *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  CObject *pCVar5;
  BOOL BVar6;
  uint uVar7;
  LONG LVar8;
  LONG LVar9;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)param_1 + 0x194);
  guard_check_icall();
  uVar2 = (*pcVar1)();
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  local_2c = *(int *)(this + 0x24);
joined_r0x0046838b:
  do {
    if (local_2c == 0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    puVar3 = (undefined4 *)FUN_004ead48(&local_2c);
    pCVar5 = (CObject *)*puVar3;
    iVar4 = FUN_0043970d(&PTR_s_CAutoHideDockSite_005c83f8);
  } while ((iVar4 == 0) ||
          (pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CAutoHideDockSite_005c83f8,pCVar5),
          pCVar5 == (CObject *)param_1));
  pcVar1 = *(code **)(*(int *)pCVar5 + 0x164);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (iVar4 != 0) goto code_r0x004683e6;
  goto LAB_00468401;
code_r0x004683e6:
  pcVar1 = *(code **)(*(int *)param_1 + 0x164);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) {
LAB_00468401:
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x164);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x164);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) goto joined_r0x0046838b;
    }
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar5 + 0x20),&local_28);
    BVar6 = IsRectEmpty(&local_28);
    if (BVar6 == 0) {
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x194);
      guard_check_icall();
      uVar7 = (*pcVar1)();
      if (((uVar2 & 0x1000) != 0) && ((uVar7 & 0x2000) != 0)) {
        if (local_18.top == local_28.bottom) {
          *(LONG *)(pCVar5 + 0x150) = local_18.right - local_18.left;
        }
        if (local_18.right == local_28.left) {
          *(LONG *)(param_1 + 0x150) = local_28.bottom - local_28.top;
        }
        goto joined_r0x0046838b;
      }
      if (((uVar2 & 0x2000) == 0) || ((uVar7 & 0x4000) == 0)) {
        if (((uVar2 & 0x4000) == 0) || ((uVar7 & 0x8000) == 0)) {
          if (((uVar2 & 0x1000) == 0) || ((uVar7 & 0x8000) == 0)) goto joined_r0x0046838b;
          if (local_18.bottom == local_28.top) {
            *(LONG *)(pCVar5 + 0x150) = local_18.right - local_18.left;
          }
          LVar8 = local_28.bottom;
          LVar9 = local_28.top;
          if (local_18.right != local_28.left) goto joined_r0x0046838b;
        }
        else {
          if (local_18.bottom == local_28.top) {
            *(LONG *)(pCVar5 + 0x154) = local_18.right - local_18.left;
          }
          LVar8 = local_18.right;
          LVar9 = local_18.left;
          if (local_18.left != local_28.right) goto joined_r0x0046838b;
        }
      }
      else {
        if (local_18.right == local_28.left) {
          *(LONG *)(pCVar5 + 0x150) = local_18.bottom - local_18.top;
        }
        LVar8 = local_28.right;
        LVar9 = local_28.left;
        if (local_18.bottom != local_28.top) goto joined_r0x0046838b;
      }
      *(LONG *)(param_1 + 0x154) = LVar8 - LVar9;
    }
  }
  goto joined_r0x0046838b;
}

