// rea decompile_all
// name: CreateNewToolBar
// address: 0x49252c
// body: available
// range: 0x49252c-0x4926ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x492544 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: class CMFCToolBar const * __thiscall CFrameImpl::CreateNewToolBar(char const *)
    protected: class CMFCToolBar const * __thiscall CFrameImpl::CreateNewToolBar(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void CreateNewToolBar(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  CObject *pCVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  undefined4 uVar7;
  CObject *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x492538;
  if (param_1 != 0) {
    uVar2 = CFrameImpl::GetFreeCtrlBarID
                      (*(uint *)(in_ECX + 4),*(uint *)(in_ECX + 8),(CObList *)(in_ECX + 0x54));
    if (uVar2 == 0) {
      uVar3 = FUN_004295fe();
      FUN_0040eb30(uVar3);
      local_8 = 0;
      FUN_00452eeb(&local_28,0x3f73,(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) + 1);
      AfxMessageBox((wchar_t *)local_28,0x40,0);
      FUN_0040efa0();
    }
    else {
      pCVar4 = (CObject *)FUN_00439696();
      uVar7 = 0x50402808;
      uVar3 = *(undefined4 *)(in_ECX + 0xb0);
      pcVar1 = *(code **)(*(int *)pCVar4 + 800);
      local_28 = pCVar4;
      guard_check_icall(uVar3,0x50402808,uVar2);
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) {
        pcVar1 = *(code **)(*(int *)pCVar4 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
      else {
        FUN_004349b3(param_1);
        iVar5 = *(int *)pCVar4;
        pcVar1 = *(code **)(iVar5 + 0x1c0);
        guard_check_icall(uVar3,uVar7,uVar2);
        uVar2 = (*pcVar1)();
        pcVar1 = *(code **)(iVar5 + 0x1e4);
        guard_check_icall(uVar2 | 0x34);
        pCVar4 = local_28;
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x1ec);
        guard_check_icall(0xf000);
        (*pcVar1)();
        local_24.left = 0;
        local_24.top = 0;
        local_24.right = 0;
        local_24.bottom = 0;
        GetWindowRect(*(HWND *)(pCVar4 + 0x20),&local_24);
        iVar5 = GetSystemMetrics(0x10);
        iVar6 = GetSystemMetrics(0x11);
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x1fc);
        guard_check_icall(iVar5 / 2,iVar6 / 2,(local_24.right - local_24.left) + iVar5 / 2,
                          (local_24.bottom - local_24.top) + iVar6 / 2,0,1);
        pCVar4 = local_28;
        (*pcVar1)();
        *(int *)(pCVar4 + 0x13c) = 0x7fff;
        pcVar1 = *(code **)(**(int **)(in_ECX + 0xb0) + 0x178);
        guard_check_icall(1);
        (*pcVar1)();
        CObList::AddTail((CObList *)(in_ECX + 0x54),local_28);
      }
    }
    FUN_0055bae6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

