// rea decompile_all
// name: FUN_10171dcd
// address: 0x10171dcd
// body: available
// range: 0x10171dcd-0x10171f12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10171f0e to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10171dcd(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  CDC *pCVar3;
  DWORD DVar4;
  CNoTrackObject *pCVar5;
  long lVar6;
  CWnd *in_ECX;
  int iVar7;
  tagDRAWITEMSTRUCT *ptVar8;
  ulong local_48;
  undefined4 local_44;
  LRESULT local_40;
  int local_3c;
  tagDRAWITEMSTRUCT local_38 [8];
  WPARAM local_30;
  int local_2c;
  byte local_28;
  HDC__ *local_20;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ptVar8 = local_38;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)ptVar8 = *param_1;
    param_1 = param_1 + 1;
    ptVar8 = ptVar8 + 4;
  }
  if (((int)local_30 < 0) || (local_2c == 0)) goto LAB_10171ef0;
  local_40 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x1a1,local_30,0);
  pCVar3 = CDC::FromHandle(local_20);
  DVar4 = GetSysColor(5);
  iVar7 = CWnd::IsWindowEnabled(in_ECX);
  if (iVar7 == 0) {
LAB_10171e48:
    bVar2 = true;
  }
  else {
    iVar7 = CCheckListBox::IsEnabled((CCheckListBox *)in_ECX,local_30);
    if (iVar7 == 0) goto LAB_10171e48;
    bVar2 = false;
  }
  if (((local_28 & 1) != 0) && (!bVar2)) {
    DVar4 = GetSysColor(0xd);
  }
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x2c);
  guard_check_icall(DVar4);
  local_44 = (*pcVar1)();
  local_3c = CCheckListBox::GetCheck((CCheckListBox *)in_ECX,local_30);
  pCVar5 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_102110b0,(_func_CNoTrackObject_ptr *)&LAB_10171182
                     );
  if (pCVar5 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  pCVar5 = pCVar5 + 0x10;
  if (*(ulong *)pCVar5 == 0) {
    lVar6 = GetCommCtrlVersion((ulong *)pCVar5,&local_48);
    if (lVar6 < 0) {
      *(ulong *)pCVar5 = 5;
    }
  }
  iVar7 = local_3c;
  if (*(uint *)pCVar5 < 6) {
LAB_10171ecd:
    CCheckListBox::PreDrawItemNonThemed((CCheckListBox *)in_ECX,pCVar3,local_38,iVar7,local_40);
  }
  else {
    bVar2 = CCheckListBox::PreDrawItemThemed
                      ((CCheckListBox *)in_ECX,pCVar3,local_38,local_3c,local_40);
    if (!bVar2) goto LAB_10171ecd;
  }
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x2c);
  guard_check_icall(local_44);
  (*pcVar1)();
LAB_10171ef0:
  CCheckListBox::PreDrawItemHelper((CCheckListBox *)in_ECX,local_38);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

