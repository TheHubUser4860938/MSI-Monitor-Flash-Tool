// rea decompile_all
// name: FUN_10038530
// address: 0x10038530
// body: available
// range: 0x10038530-0x100389ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10038530(void)

{
  int *piVar1;
  uint uVar2;
  CWnd *pCVar3;
  int iVar4;
  CDialog *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  code *pcVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0998;
  local_10 = ExceptionList;
  uVar2 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  CDialog::OnInitDialog(in_ECX);
  FUN_100352e0(&DAT_101e24d0);
  local_8 = 0;
  FUN_1003b7e0(uVar2);
  bVar7 = DAT_1021ae18 != 1;
  if (bVar7) {
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,3000);
    pcVar5 = SendMessageW_exref;
    SendMessageW(*(HWND *)(pCVar3 + 0x20),0xf1,0,0);
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbb9);
    SendMessageW(*(HWND *)(pCVar3 + 0x20),0xf1,1,0);
    iVar9 = 1;
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbb);
    CWnd::EnableWindow(pCVar3,iVar9);
    iVar9 = 1;
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbc);
    CWnd::EnableWindow(pCVar3,iVar9);
  }
  else {
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,3000);
    pcVar5 = SendMessageW_exref;
    SendMessageW(*(HWND *)(pCVar3 + 0x20),0xf1,1,0);
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbb9);
    SendMessageW(*(HWND *)(pCVar3 + 0x20),0xf1,0,0);
    iVar9 = 0;
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbb);
    CWnd::EnableWindow(pCVar3,iVar9);
    iVar9 = 0;
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbc);
    CWnd::EnableWindow(pCVar3,iVar9);
  }
  uVar2 = (uint)bVar7;
  pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbd);
  CWnd::EnableWindow(pCVar3,uVar2);
  if (DAT_1021ae1c == 1) {
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbb);
    (*pcVar5)(*(undefined4 *)(pCVar3 + 0x20),0xf1,1,0);
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbc);
    uVar8 = 0;
  }
  else {
    if (DAT_1021ae1c != 2) {
      pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbb);
      (*pcVar5)(*(undefined4 *)(pCVar3 + 0x20),0xf1,0,0);
      pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbc);
      (*pcVar5)(*(undefined4 *)(pCVar3 + 0x20),0xf1,0,0);
      pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbd);
      uVar8 = 1;
      goto LAB_10038720;
    }
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbb);
    (*pcVar5)(*(undefined4 *)(pCVar3 + 0x20),0xf1,0,0);
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbc);
    uVar8 = 1;
  }
  (*pcVar5)(*(undefined4 *)(pCVar3 + 0x20),0xf1,uVar8,0);
  pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbbd);
  uVar8 = 0;
LAB_10038720:
  (*pcVar5)(*(undefined4 *)(pCVar3 + 0x20),0xf1,uVar8,0);
  bVar7 = DAT_1021ae20 == 0;
  if (bVar7) {
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbc1);
    (*pcVar5)(*(undefined4 *)(pCVar3 + 0x20),0xf1,0,0);
  }
  else {
    pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbc1);
    (*pcVar5)(*(undefined4 *)(pCVar3 + 0x20),0xf1,1,0);
  }
  uVar2 = (uint)!bVar7;
  pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbc2);
  CWnd::EnableWindow(pCVar3,uVar2);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this,(wchar_t *)&local_14,&DAT_101e3bc8,DAT_1021ae24);
  FUN_10055f62(0xbc2,local_14);
  *(undefined4 *)(in_ECX + 0xa8) = DAT_1021ae28;
  *(undefined4 *)(in_ECX + 0x230) = DAT_1021ae38;
  *(undefined4 *)(in_ECX + 0x234) = DAT_1021ae3c;
  (*pcVar5)(*(undefined4 *)(in_ECX + 0xd0),0x14e,DAT_1021ae2c,0);
  (*pcVar5)(*(undefined4 *)(in_ECX + 0x150),0x14e,DAT_1021ae30,0);
  in_ECX[0x238] = DAT_1021ae40;
  *(undefined4 *)(in_ECX + 0x23c) = DAT_1021ae44;
  *(undefined4 *)(in_ECX + 0x248) = DAT_1021ae54;
  *(undefined4 *)(in_ECX + 0x24c) = DAT_1021ae60;
  *(undefined4 *)(in_ECX + 0x250) = DAT_1021ae64;
  (*pcVar5)(*(undefined4 *)(in_ECX + 0x278),0x14e,DAT_1021ae68 + -1,0);
  *(undefined4 *)(in_ECX + 0x2d8) = DAT_1021ae70;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_00,(wchar_t *)(in_ECX + 0x2dc),&DAT_101e3d90,DAT_1021ae8c);
  iVar9 = *(int *)(in_ECX + 0x2e0);
  pCVar6 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(iVar9 + -0x10);
  this_01 = DAT_1021ae88;
  if (DAT_1021ae88 + -0x10 != pCVar6) {
    if ((*(int *)(iVar9 + -4) < 0) || (*(int *)(DAT_1021ae88 + -0x10) != *(int *)pCVar6)) {
      FUN_100351f0(DAT_1021ae88,*(undefined4 *)(DAT_1021ae88 + -0xc));
      this_01 = extraout_ECX_00;
    }
    else {
      iVar4 = FUN_100349e0(DAT_1021ae88 + -0x10);
      piVar1 = (int *)(iVar9 + -4);
      LOCK();
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      this_01 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(iVar9 + -1);
      if ((int)this_01 < 1) {
        (**(code **)(**(int **)pCVar6 + 4))(pCVar6);
        this_01 = extraout_ECX;
      }
      *(int *)(in_ECX + 0x2e0) = iVar4 + 0x10;
    }
  }
  *(undefined4 *)(in_ECX + 0x2e4) = DAT_1021ae6c;
  *(undefined4 *)(in_ECX + 0x2e8) = DAT_1021ae74;
  *(undefined4 *)(in_ECX + 0x2ec) = DAT_1021ae78;
  *(undefined4 *)(in_ECX + 0x2f0) = DAT_1021ae7c;
  *(undefined4 *)(in_ECX + 0x2f4) = DAT_1021ae58;
  *(undefined4 *)(in_ECX + 0x240) = DAT_1021ae48;
  *(undefined4 *)(in_ECX + 0x2f8) = DAT_1021ae4c;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_01,(wchar_t *)(in_ECX + 0x244),&DAT_101e3d90,(uint)DAT_1021ae50);
  *(undefined4 *)(in_ECX + 0x300) = DAT_1021ae84;
  *(undefined4 *)(in_ECX + 0x304) = DAT_1021ae90;
  iVar9 = *(int *)(in_ECX + 0x234);
  pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbd8);
  CWnd::EnableWindow(pCVar3,iVar9);
  *(undefined4 *)(in_ECX + 0x2fc) = DAT_1021ae80;
  FUN_10053dc1(0);
  uVar8 = DAT_1021ae5c;
  pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,0xbc0);
  (*pcVar5)(*(undefined4 *)(pCVar3 + 0x20),0xf1,uVar8,0);
  local_8 = 0xffffffff;
  LOCK();
  piVar1 = (int *)(local_14 + -4);
  iVar9 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar9 == 1 || iVar9 + -1 < 0) {
    (**(code **)(**(int **)(local_14 + -0x10) + 4))((undefined4 *)(local_14 + -0x10));
  }
  ExceptionList = local_10;
  return 1;
}

