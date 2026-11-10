// rea decompile_all
// name: FUN_0040fbb0
// address: 0x40fbb0
// body: available
// range: 0x40fbb0-0x40ff50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ff4c to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040fbb0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  CWnd *pCVar4;
  BOOL BVar5;
  HANDLE hObject;
  CWnd *in_ECX;
  int iVar6;
  DWORD local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar6 = 0;
  pCVar4 = CWnd::GetDlgItem(in_ECX,0x3ee);
  CWnd::EnableWindow(pCVar4,iVar6);
  iVar6 = *(int *)(in_ECX + 0x15c);
  piVar3 = *(int **)(iVar6 + -0x10);
  if (*(int *)(iVar6 + -0xc) != 0) {
    piVar1 = (int *)(iVar6 + -4);
    if (*(int *)(iVar6 + -4) < 0) {
      if (*(int *)(iVar6 + -8) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0040ed80();
      }
      *(undefined4 *)(iVar6 + -0xc) = 0;
      **(undefined2 **)(in_ECX + 0x15c) = 0;
    }
    else {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1 || iVar2 + -1 < 0) {
        (**(code **)(**(int **)(iVar6 + -0x10) + 4))();
      }
      iVar6 = (**(code **)(*piVar3 + 0xc))();
      *(int *)(in_ECX + 0x15c) = iVar6 + 0x10;
    }
  }
  FUN_00415e30();
  SendMessageW(*(HWND *)(in_ECX + 0xf8),0x402,0,0);
  CWnd::EnableWindow(in_ECX + 0x1a8,0);
  iVar6 = 0;
  pCVar4 = CWnd::GetDlgItem(in_ECX,0x3ea);
  CWnd::EnableWindow(pCVar4,iVar6);
  FUN_00432070();
  iVar6 = 0;
  pCVar4 = CWnd::GetDlgItem(in_ECX,0x3f1);
  CWnd::ShowWindow(pCVar4,iVar6);
  iVar6 = 0;
  pCVar4 = CWnd::GetDlgItem(in_ECX,0x3f2);
  CWnd::ShowWindow(pCVar4,iVar6);
  iVar6 = 0;
  pCVar4 = CWnd::GetDlgItem(in_ECX,0x3ed);
  CWnd::ShowWindow(pCVar4,iVar6);
  CWnd::ShowWindow(in_ECX + 0xd8,0);
  if (*(int *)(in_ECX + 0x1a0) == 0) {
    FUN_00415e30(L"Unzip ini file fail, please reopen tool and try again!");
    CWnd::EnableWindow(in_ECX + 0x1a8,1);
    FUN_00432070();
    iVar6 = 5;
    pCVar4 = CWnd::GetDlgItem(in_ECX,0x3f2);
    CWnd::ShowWindow(pCVar4,iVar6);
    iVar6 = 1;
    pCVar4 = CWnd::GetDlgItem(in_ECX,0x3ee);
    CWnd::EnableWindow(pCVar4,iVar6);
    iVar6 = 1;
    pCVar4 = CWnd::GetDlgItem(in_ECX,0x3ea);
    CWnd::EnableWindow(pCVar4,iVar6);
    MessageBoxExW((HWND)0x0,L"Unzip ini file fail, please reopen tool and try again!",
                  L"MSI Firmware Update Utility",0x2030,0x409);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_00415c00(in_ECX + 0x164);
  FUN_00413c10(in_ECX + 0x178);
  DAT_0060d9b0 = *(undefined4 *)(in_ECX + 0x194);
  *(undefined4 *)(in_ECX + 0x1a4) = DAT_0060d9b0;
  BVar5 = PathFileExistsW(*(LPCWSTR *)(in_ECX + 0x174));
  if (BVar5 == 0) {
    FUN_00415e30(L"Please Select Fw File Before ISP!");
    CWnd::EnableWindow(in_ECX + 0x1a8,1);
    FUN_00432070();
    iVar6 = 5;
    pCVar4 = CWnd::GetDlgItem(in_ECX,0x3f2);
    CWnd::ShowWindow(pCVar4,iVar6);
    iVar6 = 1;
    pCVar4 = CWnd::GetDlgItem(in_ECX,0x3ee);
    CWnd::EnableWindow(pCVar4,iVar6);
    iVar6 = 1;
    pCVar4 = CWnd::GetDlgItem(in_ECX,0x3ea);
    CWnd::EnableWindow(pCVar4,iVar6);
    MessageBoxExW((HWND)0x0,L"Please Select Fw File Before ISP!",L"MSI Firmware Update Utility",
                  0x2030,0x409);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar6 = 5;
  pCVar4 = CWnd::GetDlgItem(in_ECX,0x3ed);
  CWnd::ShowWindow(pCVar4,iVar6);
  CWnd::ShowWindow(in_ECX + 0xd8,5);
  SendMessageW(*(HWND *)(in_ECX + 0xf8),0x401,0,0x640000);
  DAT_006194e0 = 0;
  _DAT_006194dc = 0;
  if (*(int *)(in_ECX + 400) != 0) {
    FUN_00415c00(in_ECX + 0x174);
    iVar6 = FUN_004133b0();
    if (iVar6 == 0) {
      FUN_00415b10();
      DAT_006194d8 = 0x46;
      PostMessageW(*(HWND *)(in_ECX + 0x20),0x591,0,0x46);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  _DAT_006194dc = 2;
  PostMessageW(*(HWND *)(in_ECX + 0x20),0x590,0,2);
  local_c = 0;
  hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00410050,in_ECX,0,&local_c);
  CloseHandle(hObject);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

