// rea decompile_all
// name: CMFCShellTreeCtrl::GetRootItems
// address: 0x1007969b
// body: available
// range: 0x1007969b-0x100797e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100796b2 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCShellTreeCtrl::GetRootItems(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCShellTreeCtrl::GetRootItems(CMFCShellTreeCtrl *this)

{
  code *pcVar1;
  HWND hWnd;
  _func_12949 *p_Var2;
  HRESULT HVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  LRESULT lParam;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [15];
  undefined4 local_44 [4];
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  IShellFolder *local_1c;
  LPITEMIDLIST local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  local_8 = 0x100796a7;
  if (DAT_10246948 != 0) {
    HVar3 = SHGetSpecialFolderLocation((HWND)0x0,0,&local_18);
    if ((HVar3 < 0) || (HVar3 = SHGetDesktopFolder(&local_1c), HVar3 < 0)) {
      return 0;
    }
    local_44[0] = 0x67;
    puVar4 = GlobalAlloc(0x40,0xc);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[2] = local_18;
      uVar5 = FUN_100ad4f5(local_18);
      *puVar4 = 0;
      puVar4[1] = uVar5;
      pcVar1 = *(code **)(*(int *)this + 0x164);
      local_20 = puVar4;
      guard_check_icall(local_14,puVar4);
      (*pcVar1)();
      local_8 = 0;
      local_34 = FUN_100473c0(*(undefined4 *)(local_14[0] + -0xc));
      pcVar1 = *(code **)(*(int *)this + 0x168);
      guard_check_icall(puVar4,0);
      local_2c = (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x168);
      guard_check_icall(puVar4,1);
      local_28 = (*pcVar1)();
      local_24 = 1;
      hWnd = *(HWND *)(this + 0x20);
      puVar4 = local_44;
      puVar7 = local_80;
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      local_84 = 0xffff0002;
      local_88 = 0xffff0000;
      lParam = SendMessageW(hWnd,0x1132,0,(LPARAM)&local_88);
      SendMessageW(*(HWND *)(this + 0x20),0x1102,2,lParam);
      p_Var2 = local_1c->lpVtbl->Release;
      guard_check_icall();
      (*p_Var2)(local_1c);
      FUN_100476d0();
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

