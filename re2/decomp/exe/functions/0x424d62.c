// rea decompile_all
// name: FUN_00424d62
// address: 0x424d62
// body: available
// range: 0x424d62-0x424eb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424eb7 to 0x424edb FUN_00424edb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00424d62(void)

{
  code *pcVar1;
  HINSTANCE__ *pHVar2;
  AFX_MODULE_STATE *pAVar3;
  HRSRC hResInfo;
  HGLOBAL hResData;
  DLGTEMPLATE *pDVar4;
  HWND__ *hWnd;
  HWND pHVar5;
  BOOL BVar6;
  CWnd *pCVar7;
  int iVar8;
  undefined4 uVar9;
  CDialog *in_ECX;
  HINSTANCE__ *local_28;
  
  pDVar4 = *(DLGTEMPLATE **)(in_ECX + 0x8c);
  hResData = *(HGLOBAL *)(in_ECX + 0x88);
  pAVar3 = AfxGetModuleState();
  local_28 = *(HINSTANCE__ **)(pAVar3 + 0xc);
  if (*(int *)(in_ECX + 0x84) != 0) {
    pAVar3 = AfxGetModuleState();
    local_28 = *(HINSTANCE__ **)(pAVar3 + 0xc);
    hResInfo = FindResourceW(local_28,*(LPCWSTR *)(in_ECX + 0x84),(LPCWSTR)&DAT_00000005);
    hResData = LoadResource(local_28,hResInfo);
  }
  if (hResData != (HGLOBAL)0x0) {
    pDVar4 = LockResource(hResData);
  }
  if (pDVar4 != (DLGTEMPLATE *)0x0) {
    hWnd = CDialog::PreModal(in_ECX);
    FUN_0042dc8d();
    if (((hWnd != (HWND__ *)0x0) && (pHVar5 = GetDesktopWindow(), hWnd != pHVar5)) &&
       (BVar6 = IsWindowEnabled(hWnd), BVar6 != 0)) {
      EnableWindow(hWnd,0);
      pCVar7 = AfxGetMainWnd();
      if (pCVar7 != (CWnd *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar7 + 0x150);
        guard_check_icall();
        iVar8 = (*pcVar1)();
        if ((iVar8 != 0) && (iVar8 = CWnd::IsWindowEnabled(pCVar7), iVar8 != 0)) {
          CWnd::EnableWindow(pCVar7,0);
        }
      }
    }
    FUN_0042d91f(in_ECX);
    pCVar7 = CWnd::FromHandle(hWnd);
    iVar8 = CWnd::CreateRunDlgIndirect((CWnd *)in_ECX,pDVar4,pCVar7,local_28);
    if ((iVar8 == 0) && (*(int *)(in_ECX + 0x9c) == 0)) {
      pAVar3 = AfxGetModuleState();
      pHVar2 = *(HINSTANCE__ **)(pAVar3 + 8);
      pCVar7 = CWnd::FromHandle(hWnd);
      CWnd::CreateRunDlgIndirect((CWnd *)in_ECX,pDVar4,pCVar7,pHVar2);
    }
    *(undefined4 *)(in_ECX + 0x9c) = 0;
    uVar9 = FUN_00424edb();
    return uVar9;
  }
  return 0xffffffff;
}

