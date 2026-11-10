// rea decompile_all
// name: FUN_100c29de
// address: 0x100c29de
// body: available
// range: 0x100c29de-0x100c2b89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c2b85 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


WPARAM FUN_100c29de(int param_1,CMFCPropertyGridProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  __POSITION *p_Var4;
  WPARAM WVar5;
  int *in_ECX;
  UINT Msg;
  CMFCPropertyGridProperty *pCVar6;
  WPARAM local_8;
  
  if (param_1 == 0) {
LAB_100c2b85:
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  if ((*(int *)(in_ECX[0x2e] + -0xc) == 0) && (FUN_10047140(param_1), in_ECX[0x2c] != 0)) {
    FUN_1005979b(in_ECX[0x2e]);
  }
  bVar2 = false;
  iVar3 = FUN_100c30bf(param_1);
  local_8 = 0;
  if (iVar3 < 0) {
    local_8 = 0;
    WVar5 = 0;
    if (0 < in_ECX[0x32]) {
      do {
        p_Var4 = CObList::FindIndex((CObList *)(in_ECX + 0x2f),local_8);
        if (p_Var4 == (__POSITION *)0x0) goto LAB_100c2b85;
        pcVar1 = *(code **)(*in_ECX + 0xe8);
        guard_check_icall(param_1,*(undefined4 *)(p_Var4 + 8));
        iVar3 = (*pcVar1)();
        if (iVar3 < 0) {
          InsertBefore(p_Var4,param_1);
          pCVar6 = param_2;
          p_Var4 = CObList::FindIndex((CObList *)(in_ECX + 0x36),local_8);
          CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*>::InsertBefore
                    ((CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*> *)(in_ECX + 0x36),
                     p_Var4,pCVar6);
          bVar2 = true;
          goto LAB_100c2a9c;
        }
        local_8 = local_8 + 1;
        WVar5 = local_8;
      } while ((int)local_8 < in_ECX[0x32]);
    }
    local_8 = WVar5;
    AddTail(param_1);
    CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(in_ECX + 0x36),(HWND__ *)param_2);
  }
LAB_100c2a9c:
  iVar3 = in_ECX[0x2d];
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
    WVar5 = SendMessageW(*(HWND *)(iVar3 + 0x20),0x158,0xffffffff,param_1);
    if (WVar5 == 0xffffffff) {
      if (bVar2) {
        Msg = 0x14a;
        WVar5 = local_8;
      }
      else {
        Msg = 0x143;
        WVar5 = 0;
      }
      WVar5 = SendMessageW(*(HWND *)(in_ECX[0x2d] + 0x20),Msg,WVar5,param_1);
    }
    SendMessageW(*(HWND *)(in_ECX[0x2d] + 0x20),0x14e,WVar5,0);
    SendMessageW(*(HWND *)(in_ECX[0x2d] + 0x20),0x151,WVar5,(LPARAM)param_2);
    CComboBox::SetEditSel((CComboBox *)in_ECX[0x2d],-1,0);
  }
  if (!bVar2) {
    local_8 = in_ECX[0x32] - 1;
  }
  return local_8;
}

