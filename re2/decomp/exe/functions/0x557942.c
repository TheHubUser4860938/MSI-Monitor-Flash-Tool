// rea decompile_all
// name: FUN_00557942
// address: 0x557942
// body: available
// range: 0x557942-0x557a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x557a83 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00557942(undefined4 *param_1)

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
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ptVar8 = local_38;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)ptVar8 = *param_1;
    param_1 = param_1 + 1;
    ptVar8 = ptVar8 + 4;
  }
  if (((int)local_30 < 0) || (local_2c == 0)) goto LAB_00557a65;
  local_40 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x1a1,local_30,0);
  pCVar3 = CDC::FromHandle(local_20);
  DVar4 = GetSysColor(5);
  iVar7 = CWnd::IsWindowEnabled(in_ECX);
  if (iVar7 == 0) {
LAB_005579bd:
    bVar2 = true;
  }
  else {
    iVar7 = CCheckListBox::IsEnabled((CCheckListBox *)in_ECX,local_30);
    if (iVar7 == 0) goto LAB_005579bd;
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
                     ((CProcessLocalObject *)&DAT_0061821c,(_func_CNoTrackObject_ptr *)&LAB_00556cf7
                     );
  if (pCVar5 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
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
LAB_00557a42:
    CCheckListBox::PreDrawItemNonThemed((CCheckListBox *)in_ECX,pCVar3,local_38,iVar7,local_40);
  }
  else {
    bVar2 = CCheckListBox::PreDrawItemThemed
                      ((CCheckListBox *)in_ECX,pCVar3,local_38,local_3c,local_40);
    if (!bVar2) goto LAB_00557a42;
  }
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x2c);
  guard_check_icall(local_44);
  (*pcVar1)();
LAB_00557a65:
  CCheckListBox::PreDrawItemHelper((CCheckListBox *)in_ECX,local_38);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

