// rea decompile_all
// name: CCheckListBox::DrawItem
// address: 0x10146303
// body: available
// range: 0x10146303-0x101464ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10146355 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CCheckListBox::DrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CCheckListBox::DrawItem(CCheckListBox *this,tagDRAWITEMSTRUCT *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  CDC *pCVar6;
  LRESULT LVar7;
  int iVar8;
  DWORD DVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_18;
  CDC *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1014630f;
  uVar4 = CWnd::GetExStyle((CWnd *)this);
  if ((((byte)uVar4 & 0x50) == 0x50) && (*(int *)(this + 0x80) == 0)) {
    uVar5 = CalcMinimumItemHeight(this);
    SendMessageW(*(HWND *)(this + 0x20),0x1a0,0,uVar5 & 0xffff);
  }
  pCVar6 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  local_14 = pCVar6;
  if (pCVar6 != (CDC *)0x0) {
    if ((-1 < *(int *)(param_1 + 8)) && (((byte)param_1[0xc] & 3) != 0)) {
      LVar7 = SendMessageW(*(HWND *)(this + 0x20),0x1a1,*(WPARAM *)(param_1 + 8),0);
      iVar8 = CWnd::IsWindowEnabled((CWnd *)this);
      if ((iVar8 == 0) || (iVar8 = IsEnabled(this,*(int *)(param_1 + 8)), iVar8 == 0)) {
        bVar3 = true;
        DVar9 = 0x808080;
      }
      else {
        bVar3 = false;
        DVar9 = GetSysColor(8);
      }
      pcVar1 = *(code **)(*(int *)pCVar6 + 0x30);
      guard_check_icall(DVar9);
      uVar10 = (*pcVar1)();
      DVar9 = GetSysColor(5);
      pcVar1 = *(code **)(*(int *)local_14 + 0x2c);
      guard_check_icall(DVar9);
      uVar11 = (*pcVar1)();
      if ((!bVar3) && (((byte)param_1[0x10] & 1) != 0)) {
        iVar8 = *(int *)local_14;
        DVar9 = GetSysColor(0xe);
        guard_check_icall(DVar9);
        (**(code **)(iVar8 + 0x30))();
        iVar8 = *(int *)local_14;
        DVar9 = GetSysColor(0xd);
        guard_check_icall(DVar9);
        (**(code **)(iVar8 + 0x2c))();
      }
      if (*(int *)(this + 0x80) == 0) {
        CalcMinimumItemHeight(this);
      }
      uVar12 = FUN_1001e20a();
      FUN_1001d224(uVar12);
      local_8 = 0;
      GetText(*(undefined4 *)(param_1 + 8),&local_18);
      pCVar6 = local_14;
      iVar8 = (LVar7 - *(int *)(this + 0x80)) / 2;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      iVar2 = *(int *)local_14;
      guard_check_icall(*(undefined4 *)(param_1 + 0x1c),*(int *)(param_1 + 0x20) + iVar8,2,
                        param_1 + 0x1c,local_18,*(undefined4 *)(local_18 + -0xc),0);
      (**(code **)(iVar2 + 0x60))();
      pcVar1 = *(code **)(*(int *)pCVar6 + 0x30);
      guard_check_icall(uVar10);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)pCVar6 + 0x2c);
      guard_check_icall(uVar11);
      (*pcVar1)();
      ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
    }
    if (((byte)param_1[0xc] & 4) != 0) {
      DrawFocusRect(*(HDC *)(pCVar6 + 4),(RECT *)(param_1 + 0x1c));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

