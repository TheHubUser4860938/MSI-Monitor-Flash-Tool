// rea decompile_all
// name: CreateNewToolBar
// address: 0x100e001a
// body: available
// range: 0x100e001a-0x100e01dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e0032 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x100e0026;
  if (param_1 != 0) {
    uVar2 = CFrameImpl::GetFreeCtrlBarID
                      (*(uint *)(in_ECX + 4),*(uint *)(in_ECX + 8),(CObList *)(in_ECX + 0x54));
    if (uVar2 == 0) {
      uVar3 = FUN_10013071();
      FUN_10003190(uVar3);
      local_8 = 0;
      FUN_1005ef76(&local_28,0x3f73,(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) + 1);
      AfxMessageBox((wchar_t *)local_28,0x40,0);
      FUN_10003460();
    }
    else {
      pCVar4 = (CObject *)FUN_10019cd8();
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
        FUN_100226bf(param_1);
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
    FUN_101490fe();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

