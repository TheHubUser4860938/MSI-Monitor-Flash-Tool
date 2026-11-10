// rea decompile_all
// name: FUN_1012af4c
// address: 0x1012af4c
// body: available
// range: 0x1012af4c-0x1012b101 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012b0fd to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1012af4c(LONG param_1,LONG param_2)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  BOOL BVar2;
  CWnd *pCVar3;
  CDockingManager *pCVar4;
  undefined4 *puVar5;
  CWnd *in_ECX;
  int iVar6;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  iVar6 = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(in_ECX + 0x20),&local_18);
  pt_02.y = param_2;
  pt_02.x = param_1;
  BVar2 = PtInRect(&local_18,pt_02);
  if (BVar2 != 0) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x19c);
    guard_check_icall();
    pCVar3 = (CWnd *)(*pcVar1)();
    pCVar4 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10205db4,pCVar3);
    if (pCVar4 == (CDockingManager *)0x0) {
      if (DAT_10205db8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
    }
    else if ((*(int *)(pCVar4 + 8) == 0) && (0 < *(int *)(in_ECX + 0x33c))) {
      do {
        puVar5 = (undefined4 *)FUN_10151a1d(iVar6);
        pcVar1 = *(code **)(*(int *)*puVar5 + 0xc);
        guard_check_icall(&local_28);
        (*pcVar1)();
        OffsetRect(&local_28,local_18.left,local_18.top);
        pt.y = param_2;
        pt.x = param_1;
        BVar2 = PtInRect(&local_28,pt);
        if (BVar2 != 0) {
          FUN_1014d4d1();
          goto LAB_1012b0eb;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(in_ECX + 0x33c));
    }
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    GetClientRect(*(HWND *)(in_ECX + 0x20),&local_38);
    CWnd::ClientToScreen(in_ECX,&local_38);
    pt_00.y = param_2;
    pt_00.x = param_1;
    BVar2 = PtInRect(&local_38,pt_00);
    if (BVar2 == 0) {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x168);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 != 0) {
        local_28.left = 0;
        local_28.top = 0;
        local_28.right = 0;
        pcVar1 = *(code **)(*(int *)in_ECX + 0x1a4);
        local_28.bottom = 0;
        guard_check_icall();
        iVar6 = (*pcVar1)();
        SetRect(&local_28,local_18.left,local_18.top + 1,local_18.right,iVar6 + 1 + local_18.top);
        pt_01.y = param_2;
        pt_01.x = param_1;
        PtInRect(&local_28,pt_01);
      }
    }
  }
LAB_1012b0eb:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

