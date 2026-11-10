// rea decompile_all
// name: FUN_10004200
// address: 0x10004200
// body: available
// range: 0x10004200-0x100045d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10004200(CDialog *param_1)

{
  CWnd *pCVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  WPARAM WVar6;
  undefined4 uVar7;
  int iVar8;
  
  CDialog::OnInitDialog(param_1);
  FUN_10003470();
  if (DAT_100655dc == 1) {
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,3000);
    pcVar2 = SendMessageW_exref;
    SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,1,0);
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbb9);
    SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,0,0);
    iVar8 = 0;
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbb);
    CWnd::EnableWindow(pCVar1,iVar8);
    iVar8 = 0;
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbc);
    CWnd::EnableWindow(pCVar1,iVar8);
    iVar8 = 0;
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbd);
    CWnd::EnableWindow(pCVar1,iVar8);
    if (DAT_100655e0 == 1) {
      pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbb);
      SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,1,0);
      pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbc);
      WVar6 = 0;
    }
    else {
      if (DAT_100655e0 != 2) {
        pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbb);
        SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,0,0);
        pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbc);
        SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,0,0);
        pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbd);
        uVar5 = *(undefined4 *)(pCVar1 + 0x20);
        uVar7 = 1;
        goto LAB_100044a5;
      }
      pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbb);
      SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,0,0);
      pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbc);
      WVar6 = 1;
    }
    SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,WVar6,0);
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbd);
    uVar5 = *(undefined4 *)(pCVar1 + 0x20);
    uVar7 = 0;
    goto LAB_100044a5;
  }
  pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,3000);
  pcVar2 = SendMessageW_exref;
  SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,0,0);
  pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbb9);
  SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,1,0);
  iVar8 = 1;
  pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbb);
  CWnd::EnableWindow(pCVar1,iVar8);
  iVar8 = 1;
  pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbc);
  CWnd::EnableWindow(pCVar1,iVar8);
  iVar8 = 1;
  pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbd);
  CWnd::EnableWindow(pCVar1,iVar8);
  if (DAT_100655e0 == 1) {
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbb);
    SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,1,0);
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbc);
    WVar6 = 0;
LAB_10004415:
    SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,WVar6,0);
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbd);
    uVar7 = 0;
  }
  else {
    if (DAT_100655e0 == 2) {
      pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbb);
      SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,0,0);
      pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbc);
      WVar6 = 1;
      goto LAB_10004415;
    }
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbb);
    SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,0,0);
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbc);
    SendMessageW(*(HWND *)(pCVar1 + 0x20),0xf1,0,0);
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbbd);
    uVar7 = 1;
  }
  uVar5 = *(undefined4 *)(pCVar1 + 0x20);
LAB_100044a5:
  (*pcVar2)(uVar5,0xf1,uVar7,0);
  bVar3 = DAT_100655e8 != 1;
  if (bVar3) {
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbc2);
    (*pcVar2)(*(undefined4 *)(pCVar1 + 0x20),0xf1,0,0);
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbc3);
    (*pcVar2)(*(undefined4 *)(pCVar1 + 0x20),0xf1,1,0);
    iVar8 = 1;
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbc5);
    CWnd::EnableWindow(pCVar1,iVar8);
  }
  else {
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbc2);
    (*pcVar2)(*(undefined4 *)(pCVar1 + 0x20),0xf1,1,0);
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbc3);
    (*pcVar2)(*(undefined4 *)(pCVar1 + 0x20),0xf1,0,0);
    iVar8 = 0;
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbc5);
    CWnd::EnableWindow(pCVar1,iVar8);
  }
  uVar4 = (uint)bVar3;
  pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbc6);
  CWnd::EnableWindow(pCVar1,uVar4);
  if (DAT_100655e4 == 1) {
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbc5);
    (*pcVar2)(*(undefined4 *)(pCVar1 + 0x20),0xf1,1,0);
    pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbc6);
    (*pcVar2)(*(undefined4 *)(pCVar1 + 0x20),0xf1,0,0);
    return 1;
  }
  pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbc5);
  (*pcVar2)(*(undefined4 *)(pCVar1 + 0x20),0xf1,0,0);
  pCVar1 = CWnd::GetDlgItem((CWnd *)param_1,0xbc6);
  (*pcVar2)(*(undefined4 *)(pCVar1 + 0x20),0xf1,1,0);
  return 1;
}

