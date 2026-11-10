// rea decompile_all
// name: FUN_10039e07
// address: 0x10039e07
// body: available
// range: 0x10039e07-0x10039f51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039f50 to 0x10039f77 FUN_10039f77 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_10039e07(CDialog *param_1)

{
  bool bVar1;
  AFX_MODULE_STATE *pAVar2;
  HRSRC hResInfo;
  HWND__ *hWnd;
  HWND pHVar3;
  BOOL BVar4;
  CWnd *pCVar5;
  int iVar6;
  undefined3 extraout_var;
  ulong uVar7;
  undefined4 uVar8;
  HINSTANCE hModule;
  ulong uVar9;
  LPCDLGTEMPLATEW local_20;
  HGLOBAL local_1c;
  
  local_20 = *(LPCDLGTEMPLATEW *)(param_1 + 0x60);
  local_1c = *(HGLOBAL *)(param_1 + 0x5c);
  pAVar2 = AfxGetModuleState();
  hModule = *(HINSTANCE *)(pAVar2 + 0xc);
  if (*(int *)(param_1 + 0x58) != 0) {
    pAVar2 = AfxGetModuleState();
    hModule = *(HINSTANCE *)(pAVar2 + 0xc);
    hResInfo = FindResourceW(hModule,*(LPCWSTR *)(param_1 + 0x58),(LPCWSTR)0x5);
    local_1c = LoadResource(hModule,hResInfo);
  }
  if (local_1c != (HGLOBAL)0x0) {
    local_20 = LockResource(local_1c);
  }
  if (local_20 == (LPCDLGTEMPLATEW)0x0) {
    return 0xffffffff;
  }
  hWnd = CDialog::PreModal(param_1);
  AfxUnhookWindowCreate();
  if (hWnd != (HWND__ *)0x0) {
    pHVar3 = GetDesktopWindow();
    if (hWnd != pHVar3) {
      BVar4 = IsWindowEnabled(hWnd);
      if (BVar4 != 0) {
        EnableWindow(hWnd,0);
        pCVar5 = AfxGetMainWnd();
        if (pCVar5 != (CWnd *)0x0) {
          iVar6 = (**(code **)(*(int *)pCVar5 + 0x128))();
          if (iVar6 != 0) {
            iVar6 = CWnd::IsWindowEnabled(pCVar5);
            if (iVar6 != 0) {
              CWnd::EnableWindow(pCVar5,0);
            }
          }
        }
      }
    }
  }
  AfxHookWindowCreate((CWnd *)param_1);
  pCVar5 = CWnd::FromHandle(hWnd);
  bVar1 = FUN_10039c4c(param_1,local_20,(int)pCVar5,hModule);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (((byte)param_1[0x3c] & 0x10) != 0) {
      uVar9 = 4;
      uVar7 = CWnd::GetExStyle((CWnd *)param_1);
      if ((uVar7 & 0x100) != 0) {
        uVar9 = 5;
      }
      CWnd::RunModalLoop((CWnd *)param_1,uVar9);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,0,0,0,0,0x97);
    }
  }
  uVar8 = FUN_10039f77();
  return uVar8;
}

